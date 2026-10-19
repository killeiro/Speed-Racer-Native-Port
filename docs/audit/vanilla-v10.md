# Vanilla v10 — preenchimentos VIF sem dados de entrada

19/10/2026. **Especialização VIF validada localmente; aceite global de Vanilla permanece aberto.** O executável continua nativo Windows. Pacing legado, controles SDL, resolução, efeitos, física e clocks emulados foram preservados. As versões anteriores permanecem disponíveis.

## Resultado medido

| Cena | v9 FPS simulação | v10 FPS simulação | Variação | p95 callbacks v9 / v10 ms |
|---|---:|---:|---:|---:|
| Fuji-3 | 39.54 | 47.98 | +21.35% | 37.23 / 30.34 |
| Skorost-1 | 44.29 | 45.96 | +3.78% | 33.48 / 31.96 |
| Grand-Prix-0 | 53.42 | 54.72 | +2.44% | 29.64 / 28.18 |
| Thunderhead-0 | 56.95 | 58.53 | +2.77% | 27.32 / 25.56 |

São médias de três pares adjacentes alternados AB/BA/AB, com os mesmos checkpoints e caminho/nome do executável. Antes, ambos os binários passaram por uma janela de aquecimento por cena. Cada janela contém 600 VBlanks; os primeiros 60 são descartados nas estatísticas. Os oito aquecimentos são retidos e excluídos das médias principais. Todos os resultados, inclusive variações adversas, permanecem no JSON. Não se comparam FPS absolutos com rodadas de datas/cargas diferentes.

Aplicativos concorrentes permaneceram ativos. A diferença por cena e a dispersão entre repetições limitam a atribuição quantitativa. Não se certificam 60 FPS estáveis, corridas completas ou ausência de lentidão no jogo inteiro. Percentis são médias dos percentis de cada execução, sem pooling; callbacks anteriores ao present não medem scanout.

**Verificação adicional após a matriz:** Aurora-3 marcou 53,35 FPS em uma janela isolada. Como comparação com outra rodada não atribui causa, o trecho recebeu dois aquecimentos e três pares AB/BA/AB adicionais, separados das quatro cenas principais: **58.37→59.34 FPS**, p95 callbacks **25.79→25.96 ms**. Todos os oito resultados estão no JSON, sem substituir ou apagar a queda observada na matriz.

Não apareceu queda sistemática de FPS nesse controle adicional, mas a média de intervalos de simulação acima de 33 ms aumentou de **1.33 para 5.00 por janela**, e o p95 de callbacks piorou ligeiramente. Esses resultados adversos foram mantidos; melhora de throughput não fecha o aceite de pacing.

## Causa e correção

A auditoria percorreu o parser VIF completo, UNPACK, fragmentação, transferências, estado shadow/worker e serialização, além das continuações VU, pipeline de flags/Q, configuração de build e tentativas anteriores. Os pontos de instrução mais frequentes no VIF estavam na seleção MASK/ROW/COL para cada componente. A cópia em bloco para NUM=2 e os probes anteriores de flags não foram repetidos.

Uma sonda temporária, restaurada antes da implementação final, contou comandos durante 180 frames em Fuji e Skorost. O maior trabalho por vetores usa **CL=0, WL=3, NUM=168 ou 240**: não há payload de entrada, uma posição recebe ROW e duas posições estão protegidas. O caminho escalar repetia decisões de máscara e modo em todas as posições/componentes. A sonda perturba execução e serve apenas para contar frequência, sem fornecer FPS de comparação.

Com CL=0, o runtime já trata todo seletor de dados como ROW durante fill. Nenhum modo STMOD acumula ROW nesse caso. A v10 pré-calcula até quatro linhas de máscara, ignora linhas totalmente protegidas e grava somente os componentes permitidos. A quarta máscara cobre todos os ciclos posteriores até WL. NUM é no máximo 256 e ambas as memórias VU têm pelo menos 256 qwords; os destinos são distintos mesmo no wrap, permitindo agrupamento por linha de máscara. A fonte nunca é lida. O retorno dry-run original continua anterior à especialização.

O caminho geral continua ativo para CL diferente de zero. Não há novos atalhos de renderização, mudança de microcódigo guest, hazards GS, batching, shader, simulação ou áudio. O novo helper não guarda cache persistente nem muda saves/estados. A otimização vem do comportamento escalar existente, sem copiar implementação de outro projeto.

## Validação

- **23/23 testes passaram**, incluindo **69.168 casos diferenciais VIF sem falhas**. A referência é o parser real em namespace separado, com o novo caminho excluído. Verificam estado serializado após cada operação, VU RAM/código, memória dry-run, contadores e efeitos IRQ/GIF/DMA/fila. Há cobertura dos 256 seletores por linha, máscaras distintas, ROW/COL, formatos/signedness, modos 0–3, WL/NUM codificados como zero, TOPS/wrap, ciclos finais incompletos, fragmentação e fonte nula. As regressões GS/VU/Q/controle anteriores também passaram.
- **12 imagens idênticas à v9**, em seis ambientes. Captura síncrona/headless ficou separada das medições nativas com threads.
- **36/36 rotas Class 1** concluíram janelas de 600 VBlanks com aceleração, boost, curva e Car-Fu. Isso cobre trechos curtos, não todas as seções de corridas completas ou outras classes/Mirror.
- Binários exatos foram verificados por hash antes/depois de cada execução. Não houve compilação ou profiler simultâneo aos benchmarks.
- O pacote local inclui quatro DLLs, licenças, instruções, este relatório e métricas. O teste do pacote verifica PE GUI e 180 frames com PATH mínimo; ainda usa dados locais de desenvolvimento e não certifica PC limpo. O suporte físico de controle foi confirmado em rodada anterior; não se recertificam todos os dispositivos USB/BT nesta etapa.

O microbenchmark sem contadores executou cinco pares por padrão. No caso CL0/WL3, o custo médio por palavra do stream foi **1202.97→114.89 ns**, redução de **90.45%**. O padrão de máscara parcial e o fallback NUM=2 também constam no JSON, inclusive variações negativas. É um teste sintético do parser, não ganho de FPS do jogo.

Condições: i5-12400, RTX 3060 driver 617.14, Vulkan/wgpu nativo, fonte 640×479 em 1x, janela 960×720, WASAPI 48 kHz stereo S16, Release O3/Clang 23/CMake/Ninja. Plano de energia, prioridade e afinidade não foram alterados. A taxa de 60 Hz continua sendo a nominal do runtime; fila de áudio zerada não mede underrun real ou latência física.

Fonte privada: `fa46ace72ef62ed8f8a359d2b5821816b4fd6185`. Arquivos: `runtime/src/vif.cpp`, `runtime/src/vif_fill.hpp` e `tests/vif_nop.cpp`. SHA-256 do executável: `241b3fd9f467c4708403d1d4ac851dba5cf332511d91f79725ab98e7c8623a1b`. Hashes de fontes, estados e binários, protocolo, pares e matriz estão em [métricas](https://github.com/killeiro/Speed-Racer-Native-Port/blob/codex/vanilla-v7-register-access-20261019/docs/audit/vanilla-v10-metrics.json).

## Cronômetro, referências e próximos passos

A análise privada seguiu a função de tempo anteriormente localizada até a lista de resultados por jogador. Essa lista está vazia no checkpoint ativo de Fuji; o accessor de resultados não comprova o relógio vivo. O próximo trabalho precisa localizar o campo atualizado durante a prova e observar sua evolução, incluindo pausa/reinício. Não se alterou a frequência para compensar throughput.

Depois de todos os benchmarks, uma amostragem separada de Fuji encontrou 2,3% das posições da thread VU em `vif::run` e 2,0% no novo helper. Dois kernels de geometria concentraram 15,4% e 13,3%, e o módulo CRT, 12,6%. São frações de posições de instrução por thread, com profiler intrusivo, não tempos absolutos de CPU ou dados adicionais de FPS. Isso orienta a próxima investigação para kernels e validações/cópias de memória. Dois estados privados também geraram candidatos a relógio; sem traçar os escritores e validar pausa/reinício, nenhum foi aceito como cronômetro vivo.

O [VIF do PCSX2](https://github.com/PCSX2/pcsx2/blob/master/pcsx2/Vif_Unpack.cpp) serviu como contexto para especialização e custo de dispatch, não como fonte de implementação ou prova de paridade PS2. Arquitetura EE AOT, 37 continuações VU com fallback, IOP/HLE e GS compute segue no [inventário](https://github.com/killeiro/Speed-Racer-Native-Port/blob/codex/vanilla-v7-register-access-20261019/docs/audit/architecture.md). A execução não lança PCSX2 nem navegador.

Próximos P0: medir os custos restantes depois de remover este trabalho VIF, incluindo os kernels VU de geometria; extrair o cronômetro vivo; ampliar cobertura para voltas/corridas/classes e comparação original/nativa em 1x. Áudio/pacing, 30 minutos, latência física, dither/fog/CRTC ativos, shutdown/drain/join, PC limpo e proveniência continuam abertos no [plano de dez tarefas](https://github.com/killeiro/Speed-Racer-Native-Port/blob/codex/vanilla-v7-register-access-20261019/docs/audit/next-10-tasks.md). Remaster/HD, UI/câmeras/mods e multiplayer ficam para depois da estabilização Vanilla.

O GitHub recebe somente documentação e métricas sanitizadas. Fonte, código gerado, executável, imagens, ISO/BIOS/ELF, assets e saves ficam locais. As cinco alterações preexistentes de modo em scripts e seus backups foram preservados. Nenhum novo teste ou log manual foi exigido do usuário.
