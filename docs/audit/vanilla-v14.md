# Vanilla v14 — experimento Q não promovido

19/10/2026. **Versão de trabalho mantida na v13.** O executável continua nativo Windows/Vulkan. A estabilização Vanilla permanece aberta; não há novo pacote jogável nesta iteração.

## Resultado e decisão

O protótipo não foi promovido. Fuji melhora modestamente, mas Skorost-1 cai44,08→33,75 FPS na série principal; Grand Prix, Thunderhead e Aurora também têm médias adversas. A dispersão e a carga não isolada limitam a atribuição causal, mas não justificam descartar essas perdas. Os testes de correção e a redução de trabalho não bastam para recomendar a mudança. Fontes e executável de trabalho voltaram byte por byte à v13; o protótipo está preservado em branch local separada. A investigação nativa adicional depende de recuperar a imagem legítima do jogo, ausente após a limpeza de Downloads relatada pelo usuário.

| Cena | v13 FPS | Candidato FPS | Variação | p95 callbacks ms | p99 callbacks ms | Callbacks >33,33ms |
|---|---:|---:|---:|---:|---:|---:|
| Fuji-4 | 49.63 | 51.81 | +4.40% | 26.88 / 25.69 | 30.40 / 28.89 | 3.00 / 1.67 |
| Fuji-3 | 49.51 | 50.37 | +1.73% | 27.79 / 26.82 | 31.34 / 31.14 | 4.67 / 4.67 |
| Skorost-2 | 53.87 | 56.54 | +4.96% | 27.89 / 26.15 | 39.97 / 31.68 | 10.33 / 4.67 |
| Skorost-1 | 44.08 | 33.75 | -23.44% | 35.94 / 48.54 | 43.40 / 75.81 | 59.67 / 177.67 |
| Grand-Prix-0 | 54.48 | 51.16 | -6.09% | 29.25 / 33.42 | 34.73 / 42.45 | 12.33 / 39.67 |
| Thunderhead-0 | 57.28 | 54.35 | -5.10% | 26.32 / 28.07 | 31.03 / 38.78 | 4.00 / 13.00 |
| Aurora-3 | 56.87 | 54.78 | -3.69% | 27.94 / 29.04 | 35.32 / 36.89 | 8.33 / 17.67 |

São três pares adjacentes AB/BA/AB em sete cenas após um aquecimento separado por binário/cena. Mesmo caminho/nome e SHA conferido a cada execução;600VBlanks,60 iniciais descartados. Quatorze aquecimentos e42 janelas medidas estão preservados integralmente no JSON, inclusive todas as perdas. Percentis são médias por janela, sem pooling. Nenhum build, sampler ou outro replay do agente rodou em paralelo; carga do host não isolada. Não há teste de significância nem atribuição da queda somente ao código ou ao host. Skorost-1 perdeu nos três pares; isso impede recomendar o candidato com os dados atuais.

O driver também encontrou uma retenção transitória do executável após os primeiros aquecimentos. A cópia entre versões recebeu tentativas limitadas a15s, retomou a sequência e conferiu hashes. Os aquecimentos continuam registrados. Isso não prova a causa das perdas de FPS.

## Inventário e diagnóstico confirmado

O [inventário estrutural](architecture.md) mantém módulos, dependências, comparação com upstream, stubs e caminhos de desenvolvimento: recompilação EE, VU0/VU1 com continuações nativas/interpretação de fallback, VIF/DMA/GIF, GS compute WGSL via wgpu-native/Vulkan, SPU2/IOP/IPU, SDL2/WASAPI e controles SDL. CMake/Ninja/Clang compila o runtime C++. Esta iteração revisita VU/Q/MPG; não constitui nova auditoria de todos os efeitos GS.

Novos perfis nativos de Fuji-4/Fuji-3 apontam VU ocupada, dois kernels de geometria dominantes e custo adicional de lookup/análise Q. Skorost-2/Skorost-1 concentram mais custo no renderer, especialmente emit_all/draw. Suspender threads perturba a execução: essas amostras apenas localizam funções e não são benchmark ou percentuais absolutos de CPU.

A sonda separada confirma reconstruções frequentes de um índice de2048 instruções após pequenos uploads MPG. O primeiro protótipo apenas preservava o índice quando a topologia não mudava; evitou cerca de0,5% dos builds em Fuji e foi substituído antes dos pares FPS. O segundo atualiza as arestas alteradas e preserva a ordem de predecessores:

| Cena | Builds completos v13 | Candidato | Consultas iguais | Mudanças iguais | Q conferidos em execução |
|---|---:|---:|---:|---:|---:|
| Fuji-4 | 60,089 | 0 | 244,771 | 88,768 | 406,160 |
| Skorost-2 | 9,709 | 0 | 35,826 | 100,953 | 63,621 |
| Fuji-3 | 63,831 | 0 | 253,476 | 97,094 | 413,718 |

Os números são do intervalo presents120–480, com consultas/mudanças coincidentes e883.499 checks Q contra a análise original sem divergência. A redução de varreduras completas está confirmada nesse trecho instrumentado. O candidato ainda processa pares/listas; inicialização, stores desconhecidos e fallback podem reconstruir o índice. Esses contadores e tempos perturbados não provam ganho de FPS. Também foi estudado um modelo de epochs por página do cache, sem adoção: somar spans lógicos não mede bytes efetivamente lidos, pois comparações falham cedo.

## Implementação experimental preservada

Antes de copiar cada fragmento MPG alterado, o protótipo remove/insere somente a aresta que mudou, em ordem crescente de PC. O predicado de branch direto/I e a ordem reproduzem o builder original. E, condição e dataflow continuam lidos do código atual. O percurso de atualização tem orçamento limitado a duas vezes o número de instruções por fragmento; vínculo inesperado, alinhamento parcial ou orçamento esgotado marca dirty e força rebuild completo. Uma atualização parcial dirty não é consumida.

Todos os candidatos de código executável e resultados/delays Q ainda invalidam a cada mudança. Só se avança a geração do grafo se já correspondia à geração anterior; stores diretos e load-state permanecem conservadores. Os callbacks rodam no dono VU; dry-run não toca o índice. Não se alteraram shaders/efeitos/resolução, clocks/física, controles, transporte de filas ou pacing padrão.

Fontes experimentais: `runtime/include/ps2/vu_q_analysis.hpp`, `runtime/src/vif_upload.hpp`, `runtime/src/vif.cpp`, `runtime/src/vu_micro.cpp` e `.hpp`. Testes: `tests/vu_q_analysis.cpp`, `tests/vif_upload.cpp`, `tests/vu_cache.cpp`, `tests/vif_nop.cpp` e `CMakeLists.txt`. Commit local isolado: `cc41535177dbc924ce6a34dce7cc71151a5d5ebe`, branch `codex/v14-q-incremental-experiment`. Nenhuma dessas mudanças ficou na branch de trabalho. Fontes v13 e executável foram restaurados byte por byte; cinco alterações históricas de modo e19 backups permanecem preservados.

## Testes executados e validação interrompida

- Release GUI experimental compilado e26/26 CTests passaram. Após ampliar o teste de fallback,26/26 passaram novamente.
-225.036 comparações diferenciais Q cobrem os três resultados, VU0/VU1, histórias consecutivas, wrap, E/I/dataflow, ordem de fan-in e escrita parcial. Um upload denso esgota o orçamento depois de alterações parciais e confirma a reconstrução segura.
-24mil diferenciais MPG com reconstrução independente das arestas verificam callbacks, wrap e uploads idênticos.69.168 diferenciais do parser VIF e mutações do cache real passaram, preservando invalidação de executáveis.
-883.499 checks Q no caminho nativo instrumentado de Fuji-4/Skorost-2/Fuji-3 passaram antes da indisponibilidade da imagem. As três fontes instrumentadas foram restauradas antes das medições; hooks temporários estão ausentes do candidato final.
- As sete cenas terminaram600VBlanks em todas as56 janelas, com aceleração/boost/direção/Car-Fu. Isso não cobre todas as36 rotas, voltas completas, outras classes/Mirror ou30min.
- A primeira tentativa de aquecimento do controle separado de Skorost-1 saiu1, com zero frames: imagem de disco ausente. Ela está preservada e excluída dos dados FPS. O usuário informou limpeza de Downloads. Não foi encontrada outra ISO nas pastas locais pesquisadas nem entrada correspondente na Lixeira; isso não prova ausência em todos os dispositivos.
- **Não executados nesta iteração:** novo controle Skorost, checks Q do binário exato nas cenas adversas, perfil CPU do candidato,12 imagens, matriz36 rotas, smoke de pacote e corridas longas. Os scripts estão preparados, mas não se registram resultados hipotéticos.

Os contadores renderizados de lotes/primitivas/tiles em Skorost-1 coincidem no par examinado; caudas de contadores gerais podem variar por trabalho ainda pendente na saída. Isso não prova equivalência visual de todos os frames. A v13 já tem imagens/matriz/filas validadas em seu próprio relatório; são evidências históricas, não QA novo da v14. A [paridade gráfica](graphics-parity.md), incluindo referência original1x, fog/dither/CRTC e cinco pares sincronizados, segue aberta.

FPS de simulação é progresso EE/parede, sem confirmar a cadência original. `stutter_over_33ms` conta intervalos de callbacks anteriores ao present, não simulação/scanout. Fila SDL vazia não mede underrun de hardware. Latência física USB/Bluetooth não foi medida.

## Hipóteses e próximas metas

A causa da regressão ainda não está isolada. É necessário medir CPU/ciclos por thread e custo das atualizações em Skorost-1, além de verificar Q no executável exato e repetir o controle predefinido BA/AB/BA com dois aquecimentos. A hipótese de trabalho é que atualizar a cada upload possa desperdiçar trabalho quando há poucas consultas ou muitos uploads entre elas; ainda não é diagnóstico confirmado. Uma atualização adiada/coalescida só deverá ser implementada se os dados sustentarem isso. Carga externa e layout/escalonamento também não foram isolados.

Primeira dependência: recuperar a imagem legítima local ou informar outro caminho. Depois, concluir esse diagnóstico antes de retomar o protótipo. [Próximas dez tarefas](next-10-tasks.md) classifica prioridade/dificuldade/impacto/dependências. Continuam P0: kernels/lookup VU em Fuji, preparação GS em Skorost, replays longos com relógio vivo, cadência original e paridade1x. Remaster/UI/câmeras/mods/multiplayer/web permanecem futuros.

| Estado | Checklist |
|---|---|
| Concluído | Perfil baseline, dois protótipos preservados, compilação,26 testes, diferenciais, sonda Q nativa, sete cenas pareadas, decisão de não promover e restauração v13 |
| Pendente de engenharia/QA | Explicar regressão; checks/counters do candidato; imagens/matriz; corridas/classes/Mirror/30min; pacing/áudio/lifecycle/portabilidade |
| Depende do usuário agora | Restaurar a imagem legítima do jogo ou indicar onde foi movida; não se pede nova rodada de logs/testes manuais |
| Depende de referência/hardware | Cadência/paridade PS2, outra GPU/PC limpo e latência física USB/Bluetooth |

## Rastreabilidade, compatibilidade e distribuição

SHA-256 candidato não promovido: `f0c09e00278d26fd288ed2f3ed85f6a56bbf89d967c0f35fee8ea0f3782655f3`. SHA-256 v13 restaurada: `ae621120cce2ec9cacc43d5b3b4b02602244745760de0084b6ece8814b65838f`. Código ativo v13: `b10c3ae06e0debf6d107f2d8064e81067ea4d750`; checkpoint documental anterior `8b09764704a76c922748b3cfc4d1a9f103a28867`. Hashes das dez fontes experimentais e todas as janelas estão no JSON. O commit documental desta iteração é registrado no checkpoint privado. Não foi criado pacote v14; pacotes anteriores permanecem intactos. O executável precisa dos dados legítimos locais; recuperar o código não recupera a ISO apagada.

A execução verificada é Windows/x64 nesta máquina. Não há formato de save novo, certificação de PC limpo ou proveniência transitiva completa. A publicação jogável permanece pendente. O [microVU do PCSX2](https://github.com/PCSX2/pcsx2/blob/master/pcsx2/x86/microVU_Compile.inl) foi consultado como referência arquitetural; nenhum código foi copiado. A implementação deriva da análise Q já presente no projeto. A [documentação Microsoft de QueryThreadCycleTime](https://learn.microsoft.com/en-us/windows/win32/api/realtimeapiset/nf-realtimeapiset-querythreadcycletime) orienta o diagnóstico preparado; nenhum resultado desse diagnóstico foi coletado agora.

GitHub recebe somente relatórios, planejamento, hashes e métricas sanitizadas. PR23 continua aberto e main inalterada; issues de aceite permanecem abertas. Nenhum código comercial/gerado, executável, imagem, estado, payload bruto, ISO/BIOS/ELF ou asset é publicado.
