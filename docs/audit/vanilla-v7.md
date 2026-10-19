# Vanilla v7 — acessos aos registradores VU

Data: 19/10/2026. Base local v6, commit `58a30dc`. Esta é uma candidata experimental, com resultados de desempenho mistos. O Windows nativo, o launcher GUI, os controles e os efeitos da v6 foram preservados; a v6 permanece disponível como referência. O aceite de velocidade, fidelidade e estabilidade integral continua aberto.

## Investigação e alteração

O perfil v6 em Fuji atribuía 12,9% e 12,2% das amostras da thread VU aos kernels `3629DCD016897BE2` e `BDDB931EFD33B73E`, além de 14,1% a VIF. O código gerado recebia o arquivo de registradores, a memória local VU e a pipeline como referências/ponteiros genéricos. O compilador precisava considerar que leituras/escritas pela memória de bytes poderiam atingir os registradores.

A auditoria confirmou que o runtime passa `g_vu1`, `g_vu1_mem` e uma `FlagPipe` de invocação como objetos separados. Os helpers ativos de flags, Q, DIV, ITOP e XGKICK foram conferidos. Havia uma leitura indireta global de `TPC` na construção de `Unit`, apesar de o campo nunca ser utilizado. Esse campo e suas leituras foram removidos antes de acrescentar o contrato de acesso.

`vurecomp.cpp` qualifica apenas a referência `r` das continuações com `PS2_VU_REGS_RESTRICT`. O header documenta que os registradores devem ser acessados pelo argumento durante a chamada; helpers não podem usar aliases globais desse estado. A macro usa a extensão do compilador nos toolchains reconhecidos e fica vazia nos demais. A assinatura ABI permanece compatível. Programas legados, que podem reentrar no intérprete com a chamada ainda ativa, mantêm o contrato anterior.

O ponteiro da memória VU continua sem restrição: XGKICK também lê essa memória por um caminho global. O estado de pipeline também mantém a declaração anterior. As mesmas 37 continuações foram regeneradas; a comparação com as fontes privadas v6 confirmou corpos, identidades e tabela preservados, com diferença apenas no qualificador das três unidades de continuações. Não houve mudança de instruções guest, física, ciclos ou shaders.

O LLVM otimizado confirmou `noalias` no argumento de registradores. Contagens **estáticas de IR**, que não são contagens dinâmicas de acessos nem medidas de tempo: no kernel 3629, loads 837→560 e stores 1009→905; no BDDB, loads 133→102 e stores 181→162. Loops e branches impedem interpretar esses números como acessos economizados por vértice ou chamada.

Também foi testado qualificar a referência da pipeline. O par exploratório Fuji mediu 44,71→44,74 FPS, sem ganho útil demonstrado. Essa variante foi retirada. Os resultados finais abaixo usam apenas a qualificação dos registradores e o executável definitivo.

## Comparação controlada

Três pares alternados v6/v7 por cena, executando as versões consecutivamente na mesma cena, com os mesmos checkpoints e entradas. Nesta rodada final, ambas usam também o mesmo caminho absoluto e nome `SpeedRacer.exe` numa pasta temporária privada; o binário é copiado entre execuções, com SHA conferido antes e depois. Os originais são preservados. A rodada anterior agrupava quatro cenas por versão e mostrou variação ampla, inclusive resultados negativos em Grand Prix; uma amostra do host confirmou carga concorrente de outros processos. A proximidade temporal foi adotada antes desta nova rodada para reduzir esse fator de confusão. Os dados desse grupo e de uma rodada intermediária de pares consecutivos com caminhos distintos foram retidos no JSON. A rodada final controla também o caminho/nome, evitando mais uma diferença de identidade entre os processos. Isso não demonstra que existia configuração externa por aplicativo nem isola completamente a carga do host. Nenhum aplicativo alheio foi fechado nem se alterou afinidade, prioridade ou plano de energia. Essas medidas não isolam completamente o efeito da carga externa.

| Cena | Média v6 | Média v7 | Variação | p95 médio v6/v7 |
|---|---:|---:|---:|---:|
| Thunderhead-0 | 57.94 | 59.95 | +3.47% | 25.10/26.30 ms |
| Fuji-3 | 40.13 | 42.23 | +5.22% | 34.47/33.05 ms |
| Grand-Prix-0 | 54.32 | 52.88 | -2.65% | 29.63/31.50 ms |
| Skorost-1 | 43.26 | 43.27 | +0.01% | 36.46/35.66 ms |


Grand Prix teve média menor nesta rodada e um par com queda acentuada; não há benefício demonstrado nessa cena. Skorost ficou praticamente igual em média. O p95 médio também aumentou em Thunderhead e Grand Prix. Esses resultados impedem promover a mudança como melhoria geral de fluidez. A carga concorrente observada é um fator de confusão, não uma justificativa para descartar resultados adversos. É preciso resolver essa incerteza antes do aceite global.

As médias e os percentis dependem da cena. Outros aplicativos estavam ativos, com plano de energia Equilibrado; diferenças pequenas são sujeitas a ruído e não demonstram ganho universal. p95 médio é a média dos três percentis, não um percentil agregado. Não comparar diretamente matrizes feitas em rodadas distintas. Cada execução, hash e percentil está nas métricas.

## Matriz final — FPS emulado

| Ambiente | CW curta | CW média | CW longa | CCW curta | CCW média | CCW longa |
|---|---:|---:|---:|---:|---:|---:|
| Thunderhead | 50.89 | 49.93 | 52.72 | 56.19 | 54.06 | 50.91 |
| Onuris | 52.55 | 49.92 | 47.03 | 50.32 | 54.12 | 51.60 |
| Fuji | 39.36 | 37.93 | 41.81 | 36.25 | 40.49 | 39.68 |
| Aurora | 56.70 | 55.96 | 59.05 | 50.06 | 49.53 | 54.53 |
| Grand-Prix | 49.15 | 49.73 | 54.35 | 46.96 | 47.56 | 48.19 |
| Skorost | 44.25 | 39.84 | 49.44 | 54.53 | 55.03 | 49.70 |


São 36 janelas Class 1 de 600 VBlanks, descartando 60 de aquecimento, com aceleração e comandos de boost/curva/Car-Fu. i5-12400, RTX3060, Vulkan/Mailbox, Windows GUI com threads, 1x, fonte 640×479, janela 960×720, WASAPI. Screenshot e profiling foram separados das rodadas de desempenho.

Essa cobertura representa aproximadamente dez segundos simulados por percurso; não equivale a voltas/corridas completas, todos os trechos, classes 2–4, Mirror ou 30 min. O roteiro é fixo, sem certificar determinismo multithread. A taxa nominal do runtime é 60 Hz; a velocidade EE usa ciclos/294.912.000 sobre tempo real. Extração independente do cronômetro da corrida ainda está pendente. Callback anterior ao present não mede scanout; fila de áudio vazia não mede underrun real. Médias próximas de 60 não certificam pacing.

## Validação e limites

- **21/21 CTest passaram**, incluindo 4.400 casos completos VU, 30.772 casos Q e 29.968 casos VIF da suíte anterior, além de GS/mips/feedback/CLIP/controle.
- **1,264,870 invocações VU reais** conferidas em registradores, memória e pacotes GIF nos seis ambientes; **416,563 análises Q** conferidas com o algoritmo anterior. Nenhuma divergência.
- **12 imagens idênticas byte a byte à v6**, nos mesmos frames e entradas. Isso mede regressão; não certifica precisão PS2/PCSX2.
- As verificações adicionais em **janela nativa com threads**, sem captura, passaram em Fuji e Grand Prix: 1,073,710 invocações VU e 290,787 análises Q. Os diagnósticos perturbam desempenho e não foram usados como benchmark.
- Os 36 replays finais terminaram com código 0 e 600 linhas; o SHA do EXE ficou constante durante a validação final.
- A prova de separação depende do contrato auditado dos chamadores/helpers, além dos testes. Futuras mudanças que acessem registradores globais enquanto uma continuação está ativa exigem revisar esse contrato.

O perfil pós-alteração foi coletado separadamente e preservado localmente. Sampling por suspensão perturba execução e não mede FPS. A montagem GS, VIF e kernels restantes continuam sujeitos a perfil; o comportamento de áudio, entrada física, encerramento, referência visual e PC limpo ainda precisa dos aceites previstos.

## Reprodução, entrega e próximos passos

EXE SHA-256: `542fb4fd5d084da76c6ef3aafe477b857343c95d4ce488381288e74be8c06d1a`; PE subsystem 2, GUI. Pacote local com quatro DLLs e notices, sem ISO/ELF, saves ou imagens. Os dados do jogo continuam necessários e o fallback de desenvolvimento ainda existe. A integração física dos controles não foi recertificada nesta rodada.

Build: `cmake --build build/windows-speedracer-clang --target vurecomp`, regenerar as mesmas continuações com `scripts/compile_vu_continuations.py` e compilar `SpeedRacer`. A geração privada foi validada pelo manifesto de arquivos. Testes: `ctest --test-dir build/windows-speedracer-clang --output-on-failure`, com as DLLs do toolchain no PATH. `scripts/audit/run_tracks.py` reproduz o protocolo local com cópias dos checkpoints/memory card; para os pares finais, copiar cada versão para o mesmo caminho temporário `SpeedRacer.exe` antes de lançá-la e verificar seu SHA, mantendo os originais; esses dados e fontes derivados não são publicados.

Próximos critérios P0: esclarecer o resultado adverso/inconclusivo de Grand Prix e o pacing de Thunderhead; analisar os pontos quentes restantes de preparação GS/VIF e kernels com cenas abaixo da meta; extrair o cronômetro independente e ampliar trajetórias para voltas/corridas e classes; produzir os cinco pares visuais sincronizados em 1x. Dithering16/CRTC/fog, latência física, underruns, 30 min, PATH1/encerramento e PC limpo seguem no [roadmap](next-10-tasks.md). Remaster, novos menus e multiplayer permanecem após Vanilla.

A atualização do GitHub é documental, em PR separado do PR22 já integrado: relatórios, métricas e roadmap. Código-fonte, executável, gerados, capturas e dados comerciais ficam locais. IDs de commits privados identificam o checkout de trabalho e não correspondem a código disponível no repositório público.

Referências primárias: [GCC, referências restritas](https://gcc.gnu.org/onlinedocs/gcc/Restricted-Pointers.html) e [LLVM, semântica de noalias](https://llvm.org/docs/LangRef.html#parameter-attributes). O uso foi baseado no contrato deste runtime e validado no Clang23.1.3; não exige um novo conjunto de instruções da CPU.
