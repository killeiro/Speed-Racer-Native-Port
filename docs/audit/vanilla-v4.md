# Vanilla v4 — execução VU nativa e matriz de pistas

> Relatório local histórico, publicado como documentação em 19/10/2026. Os commits e artefatos locais citados não são downloads nem código disponível neste repositório. [Estado atual](README.md).

Data: 17/10/2026. Entrega local Windows nativa, sem navegador ou execução pelo PCSX2. O gargalo principal da segunda pista foi reduzido, mas a meta de ritmo original em todas as pistas permanece aberta. Controles SDL e launcher GUI foram preservados. Não houve remoção de efeitos, mudança de física ou aceleração do relógio emulado.

## Resultado e cobertura

O jogo confirmou o código nativo **Access All Areas**: Options → Enter Code → Triangle, R2, Left, L2, Right, Circle, Cross. O menu do Royalton Rookies Cup identifica Onuris e depois Thunderhead. Thunderhead foi isolada em Single Race; não se simulou a progressão real do campeonato. Nenhum cheat de velocidade, boost ou câmera lenta foi usado.

Foram preparados e verificados visualmente 36 checkpoints: seis ambientes × três comprimentos × dois sentidos, **Class 1**. Cada medição final executou 600 VBlanks com aceleração e comandos de boost/curva/Car-Fu. As capturas são privadas. Isso testa janelas curtas após a largada, aproximadamente dez segundos de simulação, e **não** cada trecho da pista, corridas completas, classes 2–4, Mirror ou sessão de 30 minutos. O roteiro de entradas é fixo; a execução multithread não foi declarada determinística.

## Causa e correções

1. **Fronteira entre VU interpretada e compilada.** `vu_micro.cpp::run_entry` só aproveitava o programa nativo quando a combinação completa de bytes alcançáveis correspondia à entrada. O jogo troca wrappers e chama subrotinas comuns; um wrapper sem correspondência fazia essas subrotinas continuarem interpretadas. O perfil anterior atribuiu cerca de 77% das amostras da thread VU a `run_fast`/`lower`.
2. **Continuações nativas com pipeline compartilhada.** `vu_continuation.hpp`, `vurecomp.cpp` e `vu_micro.cpp` passam uma única `FlagPipe` durante toda a invocação. Handoffs ocorrem depois do delay slot de um branch tomado, sem branch/E pendente. CLIP, MAC/status, Q e o tempo de emissão atravessam as fronteiras; o trampoline evita crescimento recursivo da pilha. O cache continua validando bytes e geração de código. A consulta de Q considera a imagem atual do microcódigo, inclusive fora da subrotina compilada. Os testes também revelaram e corrigiram fallthrough ao cruzar o fim da memória de microcódigo.
3. **Compilação seletiva.** `scripts/compile_vu_continuations.py` instala 37 continuações derivadas das capturas privadas dos 36 percursos. Subrotinas BAL e entradas de retorno substituem milhares de combinações de dispatchers. Na geração, 2.319 combinações foram consideradas; 2.282 foram filtradas ou não geradas, o que não significa 2.282 instruções sem suporte. A tabela AOT anterior e seus três extras continuam disponíveis. Manifesto protege arquivos gerados editados ou alheios. Fontes gerados e capturas não são material para publicação.
4. **Hazards GS excessivamente amplos.** `gpu.cpp::region` incluía sempre o prefixo desde a origem do buffer, mesmo quando o retângulo usava páginas deslocadas. O intervalo agora começa na primeira página efetivamente coberta; swizzle, canais e wrap da VRAM são preservados. Isso evita dependências falsas, sem relaxar dependências reais. `draw` rejeita cobertura vazia antes de preparar atributos; o critério geométrico é o mesmo anterior.
5. **UNPACK mascarado com MASK=0.** Em Fuji, o histograma de comandos elegíveis mostrou 256.523 comandos com máscara zero, contra 1.882 com máscara 0x40. Todos os seletores zero significam dados de entrada. `vif.cpp::unpack` agora escolhe o caminho ordinário existente nesse caso, preservando CODE, formatos, extensão de sinal, ROW/ciclos e ordem de acessos.
6. **Replay de entrada confiável.** `scripted_input.hpp`, `system.cpp::apply_presses` e `window.cpp::poll_port` impedem que o polling físico sobrescreva o script. Pacote SIO2 único, gatilhos e stick direito permitem testar movimentação. Sem `--press`, o caminho normal dos controles permanece ativo.

## Comparações isoladas

Três pares alternados por hipótese, mesmo checkpoint, inputs e configuração. A comparação VU usa o **mesmo EXE final** com `PS2_VU_CONT_OFF=1` versus execução padrão; GS/VIF permanecem iguais. O caso Fuji compara o snapshot anterior à seleção MASK=0 com o EXE final. Não se deve somar os ganhos nem comparar estes replays com a antiga captura do carro próprio parado.

| Alteração | Cena | Média antes | Média depois | Ganho médio | p95 médio antes/depois |
|---|---|---:|---:|---:|---:|
| Continuações VU | Thunderhead CW curta | 28.55 | 56.14 | 96.6% | 72.04/25.56 ms |
| Seleção UNPACK MASK=0 | Fuji CCW curta | 36.19 | 38.86 | 7.4% | 37.12/33.86 ms |

No replay anterior de Thunderhead, antes de reposicionar os checkpoints, a compilação seletiva mediu 50,22 FPS e a correção de regiões GS 55,09 FPS. É uma observação de rodada única, sem isolamento estatístico, com trajetória diferente; não é o resultado da matriz abaixo. A rejeição antecipada de cobertura não recebeu atribuição quantitativa isolada.

Tentativas retiradas: compilar 1.096 continuações aumentou o custo de código; limitar a folhas perdeu chamadas internas; cache local de VI e cópia em bloco de V4_32 não sustentaram ganho. O histograma mostrou predomínio de NUM=2, em que a cópia em bloco perdeu desempenho. O probe SIMD de flags não justificou integração. A hipótese de TLS emulado foi descartada pela inspeção do binário. Nenhuma dessas tentativas compõe a entrega.

## Matriz final — FPS emulado

| Ambiente | CW curta | CW média | CW longa | CCW curta | CCW média | CCW longa |
|---|---:|---:|---:|---:|---:|---:|
| Thunderhead | 57.92 | 58.33 | 58.47 | 59.95 | 59.96 | 60.03 |
| Onuris | 60.02 | 60.06 | 60.02 | 60.33 | 59.41 | 60.22 |
| Fuji | 40.27 | 42.03 | 44.48 | 38.89 | 39.92 | 39.52 |
| Aurora | 59.97 | 60.02 | 60.02 | 59.81 | 59.96 | 58.93 |
| Grand-Prix | 53.11 | 54.32 | 55.67 | 53.79 | 54.87 | 56.40 |
| Skorost | 48.59 | 44.71 | 54.36 | 59.03 | 58.04 | 58.88 |


| Percurso | FPS emulado | Velocidade EE | p95 ms | p99 ms |
|---|---:|---:|---:|---:|
| Thunderhead-0 | 57.92 | 96.54% | 24.47 | 30.19 |
| Thunderhead-1 | 58.33 | 97.22% | 23.09 | 29.42 |
| Thunderhead-2 | 58.47 | 97.46% | 23.17 | 30.56 |
| Thunderhead-3 | 59.95 | 99.92% | 29.31 | 31.04 |
| Thunderhead-4 | 59.96 | 99.95% | 28.59 | 30.47 |
| Thunderhead-5 | 60.03 | 100.05% | 28.58 | 31.03 |
| Onuris-0 | 60.02 | 100.04% | 29.26 | 30.55 |
| Onuris-1 | 60.06 | 100.11% | 28.52 | 29.81 |
| Onuris-2 | 60.02 | 100.04% | 29.53 | 30.56 |
| Onuris-3 | 60.33 | 100.55% | 29.05 | 30.56 |
| Onuris-4 | 59.41 | 99.02% | 22.33 | 30.07 |
| Onuris-5 | 60.22 | 100.37% | 23.44 | 30.28 |
| Fuji-0 | 40.27 | 67.12% | 31.74 | 35.31 |
| Fuji-1 | 42.03 | 70.06% | 30.57 | 32.13 |
| Fuji-2 | 44.48 | 74.13% | 29.61 | 30.80 |
| Fuji-3 | 38.89 | 64.82% | 33.95 | 36.98 |
| Fuji-4 | 39.92 | 66.53% | 33.15 | 37.34 |
| Fuji-5 | 39.52 | 65.87% | 34.41 | 39.47 |
| Aurora-0 | 59.97 | 99.95% | 29.11 | 30.52 |
| Aurora-1 | 60.02 | 100.04% | 29.52 | 30.55 |
| Aurora-2 | 60.02 | 100.04% | 29.80 | 30.91 |
| Aurora-3 | 59.81 | 99.69% | 25.22 | 30.74 |
| Aurora-4 | 59.96 | 99.93% | 29.00 | 30.40 |
| Aurora-5 | 58.93 | 98.22% | 23.60 | 29.95 |
| Grand-Prix-0 | 53.11 | 88.53% | 30.54 | 33.59 |
| Grand-Prix-1 | 54.32 | 90.54% | 29.25 | 31.08 |
| Grand-Prix-2 | 55.67 | 92.79% | 30.27 | 33.15 |
| Grand-Prix-3 | 53.79 | 89.66% | 26.46 | 29.83 |
| Grand-Prix-4 | 54.87 | 91.45% | 28.35 | 30.22 |
| Grand-Prix-5 | 56.40 | 94.00% | 26.97 | 30.52 |
| Skorost-0 | 48.59 | 80.98% | 28.60 | 30.94 |
| Skorost-1 | 44.71 | 74.52% | 33.59 | 38.20 |
| Skorost-2 | 54.36 | 90.60% | 27.90 | 30.08 |
| Skorost-3 | 59.03 | 98.39% | 23.51 | 30.52 |
| Skorost-4 | 58.04 | 96.73% | 25.17 | 29.82 |
| Skorost-5 | 58.88 | 98.14% | 23.67 | 29.65 |


Máquina: i5-12400, RTX3060, driver617.14, Vulkan/Mailbox, escala interna1x, fonte640×479, janela960×720, WASAPI. Execução nativa com threads; sem `--frames-dir`, sem captura ou profiler simultâneo. Os primeiros 60 frames foram descartados. Métrica EE: ciclos/294.912.000 comparados ao relógio real; o runtime usa 60Hz para esta versão. O cronômetro interno da corrida não foi extraído independentemente. Médias próximas de60 não certificam pacing estável. Percentis da tabela são intervalos entre VBlanks no host; os de apresentação nos dados são callbacks anteriores ao present, **não scanout**. Fila de áudio vazia é uma amostra, não contador de underruns reais.

Fuji, Grand Prix e alguns percursos de Skorost continuam abaixo da meta. O perfil de Fuji, após a correção VU e antes de MASK=0, concentrou custo na execução VIF e nos kernels nativos de geometria, com espera da thread principal pela VU; `run_fast_continuation` caiu para cerca de2,6% das amostras da thread VU. Os percentuais de sampling são diagnóstico perturbativo, não medidas de FPS. Esse perfil sustenta trabalhar no throughput VIF/kernels e análises de Q/registradores, em vez de reduzir qualidade visual.

## Validação da entrega

- **20/20 CTest passaram**, incluindo os testes anteriores de controle, CLIP, Q, cache VU, mipmapping CPU/GPU, MTBA e feedback.
- VIF: **29.968 comparações diferenciais**, com formatos/signedness, NUM1–256, normal/skip/fill, WL0, modos ROW, aliasing, estado serializado e efeitos DMA/GIF/IRQ/fila.
- VU: **4.400 comparações completas de registradores e memória**, cobrindo CLIP/MAC/status/Q pendentes, saltos/delay slots, código alterado, wrap e travessias compilado→interpretado→compilado. O teste exige que o código nativo realmente execute.
- GS: **1.300 retângulos e 133.749 bytes escritos pelo swizzle real**, em13 formatos, com bases desalinhadas e wrap. O caso de dependência falsa falhava antes da correção.
- Diagnóstico real: **1,264,870 invocações** em seis ambientes comparadas com o interpretador, verificando todos os registradores, memória VU e bytes dos pacotes GIF. O diagnóstico envia os pacotes à GS apenas uma vez após comparar duas execuções sem envio. Esses testes usam execução síncrona e não contam como benchmark.
- Três imagens críticas em Thunderhead são **idênticas byte a byte** ao baseline com mipmapping e correção de entrada, nos frames10440/10560/10680. Isso verifica regressão das otimizações nessas cenas; não comprova paridade integral com PCSX2 ou hardware.
- Os 36 replays finais terminaram com exit0, cada um com600 linhas de simulação. Controle físico não foi recertificado nesta rodada; a confirmação do usuário e os testes virtuais anteriores permanecem como evidência.

## Reproduzir e localizar

Build Release Clang23.1.3, CMake/Ninja, C++20, configuração existente em `build/windows-speedracer-clang`. Build: `cmake --build build/windows-speedracer-clang --target SpeedRacer`; testes: `ctest --test-dir build/windows-speedracer-clang --output-on-failure`. A geração privada das continuações antecede o build; use `scripts/compile_vu_continuations.py --help`, com as capturas legitimamente disponíveis e diretório scratch novo. O bootstrap de testes gera somente microprogramas sintéticos próprios.

`scripts/audit/run_tracks.py --exe <EXE> --states <CHECKPOINTS> --memcard <COPIA> --out <SAIDA> --frames 600 --maneuvers` reproduz a matriz; nomes de estados seguem Ambiente-0..5, frame10600. As entradas completas, SHA dos estados, CSVs, logs, capturas e perfis ficam no workspace privado `work/tracks-v4`. `vanilla-v4-metrics.json` contém métricas sem caminhos pessoais ou dados comerciais. Checkpoints de versão anterior exigem conferência antes de reutilizar; não são um formato de intercâmbio com PCSX2.

EXE SHA-256: `37bff9d2205fd1fabea42201517cc8b04435e6d0739177455773bbf58e91b132`. PE subsystem2 (Windows GUI), quatro DLLs preservadas. A distribuição local não inclui ISO, ELF, saves ou capturas. O layout portátil e os controles estão em LEIA-ME.md. O fallback de desenvolvimento ainda existe; máquina limpa, outra GPU e build sem fallback permanecem pendentes. O fechamento original foi local; em 19/10/2026 o PR22 foi atualizado apenas com documentação e métricas. Código e executável permanecem privados.

## Próximos critérios de aceite

1. **P0 — Fuji/Grand Prix/Skorost:** reduzir custo VIF/kernels nativos e cache das análises de Q com invalidação correta; aceitar apenas ganho repetido nos mesmos36 replays, testes diferenciais e regressão visual. Não assumir que compilar mais código melhora cache de instruções.
2. **P0 — Cobertura real da corrida:** trajetórias representativas, voltas/corridas completas, classes2–4, Mirror, largada e efeitos; extrair cronômetro da corrida para confirmar a taxa original além do relógio EE. Os 36 checkpoints são infraestrutura, não aceite final.
3. **P0 — Paridade1x:** cinco pares sincronizados PCSX2/nativo; mipmapping implementado, validação visual da cenaV04 ainda pendente. Priorizar dithering16, CRTC/fog pelo uso real; não aumentar resolução para ocultar diferenças.
4. **P1 — Regularidade e resposta:** sessão contínua de30min, underruns reais de áudio, p95/p99 e latência física de entrada até imagem. Depois tratar pacing e filas conforme a evidência.
5. **P1 — Encerramento/portabilidade/proveniência:** PATH1/saída/save, PC limpo/Unicode/pasta sem escrita/outraGPU e receita reproduzível; distribuição pública só no escopo autorizado. Remaster, novos menus, mods e multiplayer seguem fora da faseVanilla.

## Referências primárias

O [microVU do PCSX2](https://github.com/PCSX2/pcsx2/blob/master/pcsx2/x86/microVU.cpp) verifica imagens de microprogramas e estados de blocos; [microVU_Branch](https://github.com/PCSX2/pcsx2/blob/master/pcsx2/x86/microVU_Branch.inl) serve como referência de fronteiras de branch/pipeline. Foram referências conceituais, sem copiar implementação GPL. O upstream [ps2-web-recomp](https://github.com/snuri00/ps2-web-recomp) e [PS2Recomp](https://github.com/ran-j/PS2Recomp) contextualizam recompilação e runtimes PS2, não comprovam paridade deste port. A sequência do cheat foi consultada em [PSXDataCenter](https://psxdatacenter.com/psx2/games2/SLUS-21812.html) e confirmada pelo próprio jogo; os metadados regionais inconsistentes dessa página não foram usados para definir a frequência.
