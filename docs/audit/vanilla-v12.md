# Vanilla v12 — reutilização exata do registro de leituras GS

> **Errata de interpretação, v13:** o campo `stutter_over_33ms` conta intervalos dos callbacks antes do present acima de33,3333ms. Referências neste relatório a “intervalos de simulação” para esse contador devem ser lidas como “intervalos de callbacks”. Valores, pares, resultados adversos e hashes históricos permanecem inalterados. Veja [a definição corrigida e a v13](vanilla-v13.md).

19/10/2026. **Candidato experimental: preparação GS reduzida com equivalência funcional verificada, mas desempenho misto entre cenas. O aceite global de Vanilla permanece aberto.** O executável continua nativo Windows/Vulkan. Gráficos, resolução, controles, física, clocks emulados, profundidade das filas e pacing legado foram preservados. A v11 e as baselines anteriores permanecem disponíveis.

## Comparação do executável final

| Cena | v11 FPS simulação | v12 FPS simulação | Variação | p95 callbacks v11 / v12 ms | Intervalos de simulação >33ms v11 / v12 |
|---|---:|---:|---:|---:|---:|
| Skorost-1 | 38.60 | 47.71 | +23.60% | 40.85 / 31.70 | 100.67 / 23.33 |
| Fuji-3 | 53.28 | 51.54 | -3.27% | 24.30 / 25.58 | 0.00 / 1.67 |
| Grand-Prix-0 | 51.51 | 50.61 | -1.75% | 31.91 / 32.01 | 23.33 / 23.00 |
| Thunderhead-0 | 56.37 | 56.00 | -0.64% | 25.61 / 27.70 | 8.33 / 11.33 |
| Aurora-3 | 59.99 | 58.70 | -2.15% | 26.67 / 26.32 | 7.00 / 4.33 |

São médias de três pares adjacentes alternados AB/BA/AB por cena. Ambos os binários receberam aquecimento separado no mesmo caminho/nome antes das medições. Cada janela contém 600 VBlanks; os primeiros 60 são descartados. Dez aquecimentos e trinta execuções medidas são retidos. Todos os pares individuais e p50/p95/p99 constam no JSON; percentis são médias dos percentis por execução, sem pooling.

A carga concorrente do host não foi isolada, e houve dispersão entre execuções. A atribuição quantitativa das diferenças é limitada. Resultados adversos de FPS, p95 ou intervalos longos aparecem em **Fuji-3, Grand-Prix-0, Thunderhead-0, Aurora-3** e não foram removidos. Não se comparam FPS absolutos com outras rodadas. Esta iteração não certifica 60 FPS estáveis nem resolve todas as pistas.

**Controle adicional de Fuji:** a queda no conjunto primário motivou dois novos aquecimentos e três pares separados, no mesmo caminho e protocolo. Essa rodada mediu **50.59→49.64 FPS**, p95 de callbacks **26.36→27.79ms** e intervalos de simulação acima de33ms **3.33→8.67 por janela**. Os oito resultados ficam no JSON, separados das médias primárias. Nenhum resultado posterior apaga a queda original; o aceite global e a atribuição em Fuji continuam limitados pela dispersão e carga concorrente.

**Diagnóstico de CPU por frame em Fuji:** após os benchmarks, um único par adicional leu contadores de threads durante os mesmos360 VBlanks, sem suspensão de instruções dentro do intervalo. A VU consumiu **19.358→19.792ms de CPU por frame**, incluindo kernel **1.085→1.172ms**; a thread janela/renderer consumiu **17.144→17.318ms**. O JSON também guarda ciclos, sem convertê-los para tempo de parede. Esse diagnóstico único não isola a causa da regressão nem prova um aumento específico de wakeups. O custo de VU, a interação das filas e a variação do host permanecem a discriminar antes de promover a v12 a melhoria geral.

## Diagnóstico do caminho crítico

A auditoria seguiu a publicação da EE, a fila VU, o processamento VIF/microcódigo, a fila de render, GIF/GS, preparação de comandos e present GPU. O tempo de publicação pode incluir espera por mais de dois frames pendentes; não é tempo puro de GPU. Capacidade, notificações e ordem das filas foram revisadas.

A amostragem começou após carregar a corrida. Em aproximadamente dez segundos, a thread da janela/renderer consumiu **8,797s de CPU em Fuji** e **9,813s em Skorost**; a VU consumiu **9,750s e 7,984s**, respectivamente. O sampler suspende threads e perturba execução; essas medições não são benchmarks de FPS. Pontos de instrução no renderer destacaram `draw`/`emit_all`, sobretudo em Skorost. A inspeção do código de máquina localizou o loop de contenção da lista de leituras entre os pontos mais amostrados de `draw`.

Uma sonda temporária em três arquivos mediu estágios e esperas, e foi restaurada byte por byte antes do candidato final. Entre os presents 120 e 480, **não houve espera por capacidade das filas** nos dois casos. Em Fuji, a VU teve 0ms de espera ociosa e o renderer cerca de 1.328ms; em Skorost, a VU teve cerca de 1.187ms e o renderer 0ms. A EE passou cerca de 2.848/3.435ms aguardando publicação/conclusão de presents. O diagnóstico distingue os gargalos das cenas e sustenta focar a preparação GS em Skorost.

Os comandos foram amostrados aleatoriamente em 1/64, com presents medidos sempre. Estimativas por tipo de comando têm erro de amostragem, incluem chamadas filhas e não são tempos exatos de CPU nem valores somáveis. A sonda e o profiler ficaram fora das medições finais. A ausência da sonda no executável final foi conferida.

O relógio interno da cena também foi lido na sonda. No intervalo de 360 VBlanks, Fuji avançou **5.994795s do jogo em 6.751945s de parede**; Skorost avançou **6.004103s em 7.316132s**. É evidência diagnóstica do avanço da cena durante essas execuções perturbadas, sem comparação pareada de ganho ou confirmação da cadência original do PS2. O cronômetro individual de volta/resultado continua pendente.

## Causa e implementação

Cada primitiva texturizada repetia o registro da textura base e de seus mipmaps na lista de leituras do lote. Com vários níveis, cada registro voltava a percorrer a lista, mesmo quando o descritor exato já estava presente no mesmo lote.

A v12 usa a decisão já existente de reutilizar o último descritor exato para evitar repetir esse registro. O descritor tem 31 palavras que incluem os campos necessários aos endereços base/mip e LOD. A primeira primitiva aceita já registrou essas leituras. A lista de leituras só recebe novos itens durante o lote e é limpa junto com os descritores no flush. As verificações de feedback/conflito, as saídas por cobertura vazia e todas as condições de flush continuam nas mesmas posições. A mutação de descritores pelo decode ocorre dentro do flush antes de ambas as listas serem limpas.

Não se altera o conteúdo, a ordem ou a abrangência das faixas registradas. Não há redução de efeitos, mudança de shaders, relaxamento de hazards, novo cache persistente, aumento da fila ou mudança de sincronização. O diff de produção fica restrito à seleção/registro do descritor em `gpu::draw`; CMake e o novo teste fornecem a verificação.

## Equivalência e regressão

O teste compila o renderer real contra uma referência v11 em namespace isolado, preservando a reutilização anterior de descritores e restaurando apenas o registro por primitiva. **74.531 draws** passaram sem divergência nas faixas ordenadas de leitura, registros de primitivas/descritores/cobertura, uploads pendentes, ordem dos dispatches, parâmetros e bytes completos do payload GPU.

Casos cobrem MXL 0–6, filtros 0–5, conflitos de upload em cada mip, reconstruções redundantes e descartadas do cache, decode/flush/reuso, CLUT/texflush, wrap da memória, nove formatos de textura, LOD fixo/automático, MTBA e escalas 1/2/3/4. No fixture, as invocações de registro caíram de **89.203 para 40.052**; o conteúdo final permaneceu igual. Isso é uma contagem do fixture, não uma proporção do jogo inteiro.

O microbenchmark separado e sem contadores usa cinco pares alternados por padrão. Inclui descritores com seis mips, textura sem mips e fallback sem textura. Todas as quinze amostras, inclusive casos mais lentos e dispersão, foram preservadas. Custos sintéticos não são ganhos de FPS.

- Compilação Release do alvo GUI SpeedRacer e 26/26 CTests passaram.
- 12 imagens em seis ambientes permaneceram idênticas à v11; capturas síncronas separadas dos benchmarks.
- 36/36 janelas nativas Class 1 concluíram 600 VBlanks com aceleração, boost, direção e Car-Fu.
- Cinco cenas receberam três pares aquecidos; resultados e aquecimentos estão no JSON.
- Pacote privado verificado por smoke de 180 frames com as quatro DLLs e PATH mínimo; hashes e resultado em `package-check.json`. O fallback de dados de desenvolvimento permanece; isso não certifica PC limpo.

Não há aceite de corridas completas, classes 2–4/Mirror, 30 minutos, cadência original, paridade gráfica PS2, scanout, latência física, underruns de hardware, reinício completo ou instalação independente. Imagens iguais detectam regressões contra a v11. A publicação no GitHub continua documental; implementação, executável, estados, imagens e dados comerciais ficam locais.

## Roadmap após a v12

1. Resolver a regressão de Fuji antes de promover a v12: discriminar custo VU e interação/esperas das filas, mantendo a v11 disponível. Em Skorost, reperfilar preparação/binning GS. Exigir equivalência e comparações controladas.
2. Usar o relógio vivo em replays de voltas/corridas e confirmar cadência original. Ampliar classes/Mirror e sessões de 30 minutos.
3. Fechar os cinco pares originais/nativos a 1x, depois tratar diferenças gráficas ativas de fog/dither/CRTC.
4. Completar áudio real, entrada física, ciclo de vida, build sem fallback e proveniência antes de Remaster/distribuição.

[Próximas dez tarefas](next-10-tasks.md) · [Roadmap](../../ROADMAP.md) · [Métricas completas](vanilla-v12-metrics.json). PR23 permanece aberto, sem merge na main.

## Proveniência e referências

- Commit privado da implementação: `5038ec383d600b40b0c8447ac4047ea10202eaf5`.
- SHA-256 v11: `f5bb27127af9de49720b5db84a94c9ba50133d24bb66b9b3a02e36edd59549ec`.
- SHA-256 v12: `68a94f12ec99b8c0bcea7e62e03e71f8e428946ee05191c3bc2a1d40b1ad5081`.
- [PCSX2 GSRendererHW](https://github.com/PCSX2/pcsx2/blob/master/pcsx2/GS/Renderers/HW/GSRendererHW.cpp) e [paraLLEl-GS](https://github.com/Arntzen-software/parallel-gs) foram consultados como contexto de preparação de render e dependências de texturas. Nenhuma implementação desses projetos foi copiada.
- [GetThreadTimes](https://learn.microsoft.com/en-us/windows/win32/api/processthreadsapi/nf-processthreadsapi-getthreadtimes) e [QueryThreadCycleTime](https://learn.microsoft.com/en-us/windows/win32/api/realtimeapiset/nf-realtimeapiset-querythreadcycletime): contadores oficiais usados nos diagnósticos; ciclos não são convertidos para tempo de parede.
- Ambiente, protocolo, hashes por arquivo e todas as medições estão no JSON. Commits privados identificam somente o checkout local.
