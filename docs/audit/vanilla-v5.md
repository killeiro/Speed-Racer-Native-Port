# Vanilla v5 — análise Q reutilizável

> Relatório local histórico, publicado como documentação em 19/10/2026. Os commits e artefatos locais citados não são downloads nem código disponível neste repositório. [Estado atual](README.md).

Data de consolidação: 19/10/2026. Base local: v4/commit 5caa328. A etapa P0 reduz trabalho repetido da VU e mantém a execução Windows nativa, controles, launcher GUI e os efeitos anteriores. A meta de velocidade original em todas as pistas ainda não foi concluída.

## Alterações e evidência

O perfil de Fuji da v4 atribuía aproximadamente 6% das amostras da thread VU a `q_read_kind`, além de custo de alocações em runtime C. `vu_ops.hpp::q_read_kind` reconstruía a lista de branches sobre toda a memória de microcódigo a cada consulta sem cache e criava vetores de predecessores, caminhos e ordem de execução. A invalidação por geração de microcódigo é necessária; repetir a construção para cada PC na mesma geração era trabalho evitável.

`runtime/include/ps2/vu_q_analysis.hpp::QReadIndex` constrói um índice de predecessores uma vez por geração, sob demanda. Caminhos têm até 16 PCs e usam um buffer reutilizável. Ordem dos predecessores, travessia, limite de profundidade e orçamento 4.096 preservam o algoritmo anterior. `vu_micro.cpp::read_q` mantém o cache por PC/geração e reinicia o índice quando o microcódigo muda. VU0 e VU1 têm índices separados. Não se reutiliza grafo de código antigo.

`recomp/vurecomp.cpp` gera a chamada ao helper apenas se `fl.q_pending` estiver ativo. É a mesma condição de retorno imediato que o helper já verificava; DIV/RSQRT, WAITQ, valores Q antigos/novos e o tempo de emissão não foram alterados. As mesmas 37 continuações privadas foram regeneradas. Não houve ampliação indiscriminada da cobertura AOT nem mudança dos dados do jogo.

Diagnósticos opcionais: `PS2_VU_Q_REFERENCE=1` usa o algoritmo anterior; `PS2_VU_Q_CHECK=1` compara cada análise nova que falta no cache com ele e aborta se houver diferença. Nenhum é necessário para jogar. A função anterior permanece como oráculo do teste e modo de referência; isso não transforma o modelo Q atual em certificação de hardware.

## Medições isoladas e versão completa

As comparações isoladas foram iniciadas em 17/10 e concluídas em três pares alternados por alteração, em Fuji CCW curta. Índice: 38.04→42.00 FPS (+10.4%), com o mesmo EXE e apenas `PS2_VU_Q_REFERENCE` alternado. Guarda: 40.99→41.47 FPS (+1.2%), usando o snapshot com índice mas sem guarda versus a candidata. O efeito da guarda é pequeno e sujeito a ruído; não se deve somar os percentuais.

A consolidação repete a v4 inteira contra a v5, três pares alternados nas quatro cenas, com os mesmos checkpoints e entradas. São médias de três execuções; p95 médio é a média dos três percentis, não um percentil agregado. Outros aplicativos permaneceram em execução e o plano de energia estava em Equilibrado; houve oscilação de carga, especialmente no primeiro par. Não se deve comparar diretamente os FPS absolutos de dias/rodadas diferentes. O ganho pequeno de Skorost não é conclusivo diante dessa variação; os dados por par permanecem no JSON.

| Cena | Média v4 | Média v5 | Variação | p95 médio v4/v5 |
|---|---:|---:|---:|---:|
| Thunderhead-0 | 52.40 | 57.94 | +10.6% | 27.99/24.13 ms |
| Fuji-3 | 35.67 | 40.07 | +12.3% | 37.29/33.00 ms |
| Grand-Prix-0 | 47.04 | 53.69 | +14.1% | 34.22/30.32 ms |
| Skorost-1 | 41.59 | 42.80 | +2.9% | 36.85/36.57 ms |


## Matriz final — FPS emulado

| Ambiente | CW curta | CW média | CW longa | CCW curta | CCW média | CCW longa |
|---|---:|---:|---:|---:|---:|---:|
| Thunderhead | 50.59 | 56.70 | 58.25 | 60.17 | 59.99 | 59.96 |
| Onuris | 59.80 | 58.31 | 60.02 | 59.91 | 59.61 | 60.11 |
| Fuji | 41.76 | 42.96 | 44.08 | 40.60 | 40.42 | 41.17 |
| Aurora | 59.95 | 59.96 | 60.02 | 55.18 | 57.72 | 57.44 |
| Grand-Prix | 53.65 | 52.22 | 57.41 | 54.99 | 55.62 | 57.55 |
| Skorost | 48.87 | 44.22 | 54.00 | 58.64 | 57.18 | 57.41 |


São 36 janelas Class 1, com 600 VBlanks cada, com aceleração e comandos de boost/curva/Car-Fu; os primeiros 60 frames são descartados. Windows nativo com threads, Vulkan/Mailbox, 1x, fonte 640×479, janela 960×720, i5-12400/RTX3060, áudio WASAPI. Screenshot, diagnóstico e profiler são executados separadamente. A velocidade compara ciclos EE/294.912.000 com tempo real, com taxa nominal 60 Hz do runtime; ainda falta extrair independentemente o cronômetro da corrida. Percentis por percurso e callbacks de apresentação estão no JSON. Callback anterior ao present não é scanout; amostra de fila de áudio vazia não é contador de underruns reais.

A matriz não certifica voltas/corridas completas, todas as classes, Mirror, todos os efeitos ou estabilidade contínua de 30 min. Médias próximas de 60 não provam pacing estável. Fuji e outros trechos continuam abaixo da meta; permanecem P0. O replay tem entradas fixas, mas não se declarou determinismo integral da execução com threads.

## Validação

- **21/21 CTest passaram**, com a suíte anterior de VIF, GS/mips/feedback/CLIP/controle preservada.
- Novo índice Q: **30.772 comparações diferenciais**, cobrindo VU0/1, DIV/RSQRT/WAITQ, branches condicionais/incondicionais/indiretos, fan-in, loops e orçamento, wrap, bits E/I e alterações de código com o mesmo endereço de memória. Há resultados dynamic/new/old e consultas repetidas para reutilização do buffer.
- As **4.400 comparações completas VU** agora também rodam com verificação Q ativa.
- Nos seis ambientes: **1.264.870 comparações de invocações VU** em registradores, memória e pacotes GIF; **416.563 análises Q reais** comparadas com a função anterior. As contagens Q são faltas do cache verificadas, não total de instruções Q.
- **12 imagens idênticas byte a byte à v4**, nos frames 10680/10800 dos seis ambientes, com as mesmas entradas. É regressão destas alterações, não paridade integral PS2/PCSX2.
- Todos os 36 replays finais terminaram com exit 0 e 600 linhas de simulação. SHA do EXE ficou constante durante a validação. Controles físicos não foram recertificados nesta rodada; o código normal de entrada não foi modificado.

## Perfil atual e roadmap

O novo perfil de Fuji usa sampling perturbativo, em rodada separada. Na thread VU, `vif::run` aparece com 15,6% das amostras e os kernels `BDDB931EFD33B73E`/`3629DCD016897BE2` com 12,5%/10,8%; `QReadIndex::read` aparece com 2,9%. Na thread do renderer, `draw` e `emit_all` somam 22,4%. Isso prioriza kernels/VIF e preparação GS como trabalho residual. Não mede FPS nem quantifica causalmente o ganho por diferenças percentuais de amostras, pois o progresso da cena e a carga variam. O relatório completo está no workspace privado `work/tracks-v5/profile-final/profile.txt`.

As tarefas 2/3 avançaram: parser NOP/MASK=0, continuações e índice Q estão implementados com testes. O próximo P0 é o custo dos kernels de geometria/VIF nos trechos restantes, junto da extração do cronômetro e trajetórias mais longas. Continuam pendentes cinco pares PCSX2/nativo em 1x, dithering16/CRTC/fog dirigido por uso real, latência física/pacing/underruns por 30 min, PATH1/encerramento e PC limpo sem fallback de desenvolvimento. Remaster, mods, novos menus e multiplayer continuam fora da fase Vanilla. Critérios completos: `next-10-tasks.md`.

## Reprodução e entrega

Build Release Clang23.1.3, CMake/Ninja, C++20. `cmake --build build/windows-speedracer-clang --target SpeedRacer`; `ctest --test-dir build/windows-speedracer-clang --output-on-failure`. O teste Q é sintético, independente de assets comerciais. A alteração do gerador exige regenerar as mesmas continuações privadas com `scripts/compile_vu_continuations.py` antes do build do jogo. Capturas e gerados continuam privados.

`scripts/audit/run_tracks.py --exe <EXE> --states <CHECKPOINTS> --memcard <COPIA> --out <SAIDA> --frames 600 --maneuvers` reproduz a matriz. Entradas, CSVs, logs e estados ficam no workspace privado; `vanilla-v5-metrics.json` foi sanitizado para excluir caminhos pessoais e comandos com dados locais. O fechamento original foi local; a documentação e as métricas foram publicadas posteriormente, em 19/10/2026. Código e executável permanecem privados.

EXE SHA-256: `9401ed19b96cd43ce2626c4fc5f85a97da48fce0d9dc42ea5e8534d4c17da27b`. PE subsystem 2, Windows GUI. O pacote local usa as quatro DLLs e avisos anteriores; não inclui ISO, ELF, saves ou capturas. O fallback de desenvolvimento ainda existe e não certifica portabilidade em PC limpo. A versão anterior foi preservada.

Referência conceitual consultada: [PCSX2 microVU Analyze](https://github.com/PCSX2/pcsx2/blob/master/pcsx2/x86/microVU_Analyze.inl), que acompanha dependências de registradores e latência Q na análise. O índice é derivado e não altera o formato de save-state; a invalidação existente ao carregar estado também reinicializa a análise. O código foi escrito sobre o algoritmo deste projeto, sem copiar implementação GPL nem substituir os critérios Q por parâmetros arbitrários.
