# Vanilla v11 — validação exata de microcódigo e relógio vivo da cena

19/10/2026. **Correção funcional preservada; nova otimização local e telemetria opcional verificadas. O aceite global de desempenho permanece aberto.** O executável continua nativo Windows/Vulkan, com pacing legado, controles, gráficos, resolução, física e clocks emulados preservados. A v10 e as baselines anteriores continuam disponíveis.

## Comparação do executável final

| Cena | v10 FPS simulação | v11 FPS simulação | Variação | p95 callbacks v10 / v11 ms | Intervalos simulação >33ms v10 / v11 |
|---|---:|---:|---:|---:|---:|
| Fuji-3 | 53.40 | 54.40 | +1.88% | 24.02 / 23.77 | 0.00 / 0.33 |
| Skorost-1 | 47.07 | 47.34 | +0.59% | 31.76 / 31.41 | 13.00 / 11.00 |
| Grand-Prix-0 | 57.51 | 57.53 | +0.04% | 27.16 / 26.97 | 6.00 / 9.00 |
| Thunderhead-0 | 59.95 | 59.99 | +0.07% | 25.14 / 25.04 | 3.67 / 3.33 |
| Aurora-3 | 60.00 | 60.02 | +0.04% | 27.43 / 26.44 | 8.00 / 5.67 |

Três pares adjacentes alternados AB/BA/AB por cena, após um aquecimento separado de cada binário no mesmo caminho/nome. Cada janela contém 600 VBlanks, descartando os primeiros 60. Os dez aquecimentos e trinta janelas medidas são retidos. Aurora-3 entrou no conjunto primário antes das medições, após o resultado adverso da v10. O JSON contém todas as repetições, p50/p95/p99 e contadores. Percentis são médias dos percentis por execução, sem pooling.

Há resultados adversos em **Fuji-3, Grand-Prix-0** ao considerar FPS, p95 de callbacks ou intervalos acima de 33 ms. Não se escondem essas diferenças nem se interpreta um pequeno ganho sintético como ganho global. Aplicativos concorrentes permaneceram ativos; variações de carga e dispersão limitam a atribuição. Comparações com FPS absolutos de outras rodadas não são válidas. Esta iteração não demonstra 60 FPS estáveis nem fecha a lentidão em todas as pistas.

**Próximo gargalo a discriminar:** a v11 ainda passa em média **7.78ms em Fuji** e **10.43ms em Skorost** na publicação do present, com espera de pacing praticamente nula. Esse trecho pode bloquear pela capacidade da fila ou quando há mais de dois presents pendentes. Não é tempo puro de GPU. Junto dos pontos amostrados em preparação GS, isso justifica separar trabalho do renderer, espera produtor/consumidor e submissão GPU, correlacionando com o relógio vivo, antes de escolher outra otimização. A profundidade da fila permanece preservada.

## Auditoria e mudança mínima

Antes da edição, foram revisados seleção de programas VU, spans alcançáveis, invalidação por geração, MPG, escritas diretas de microcódigo, reset/carregamento de estados, fallbacks e os perfis anteriores. A amostra inicial não encontrou workers criados depois do inventário; foi mantida como inadequada e corrigida com atualização periódica dos workers. No levantamento completo,189 retornos amostrados da comparação CRT apontavam para lookup VU, contra seis no renderer. Isso atribui os pontos observados; não conta chamadas nem mede tempo absoluto de CPU. Profiler e leituras do processo ficaram fora de todas as janelas de FPS.

A seleção do cache precisava apenas saber se dois spans são iguais, mas passava pela comparação lexicográfica da CRT. A v11 usa igualdade de bytes SSE2, com blocos inteiramente dentro do span, cauda de oito bytes e fallback escalar. Todos os bytes continuam verificados. Não há hash aproximado, validação relaxada, remoção de candidatos, mudança de geração/invalidação, novo pressuposto de alinhamento ou alteração de semântica VU. SSE2 já integra o mínimo x64; o caminho portátil mantém a comparação anterior.

**2.308.915 casos** não divergiram da igualdade anterior: mutações em cada byte, tamanhos/caudas, desalinhamentos, aliases, spans sobrepostos e páginas protegidas. O teste do cache real cobre variantes, eviction, gerações, spans longos e com wrap, mutações alcançáveis, restauração e alterações fora do programa. O microbenchmark separado registra90 amostras, incluindo caudas e divergência no primeiro/último byte, e não fornece FPS do jogo. A média sintética de16KB iguais caiu de383,918 para260,637ns (32,11% de redução), sem ganho equivalente demonstrado no jogo.

## Relógio interno da cena

A busca anterior havia localizado um accessor da UI que lê registros de resultados, vazios no checkpoint ativo. A auditoria da v11 encontrou outro campo, atualizado pelo delta da cena quando ela está ativa, e seguiu seu escritor e consumidores. Quatro diagnósticos da v10 verificaram o comportamento:180 VBlanks ativos avançaram **3,004914s**; a pausa avançou **0,168338s** antes de congelar;180 VBlanks já pausados avançaram **0s**; após retomar, o trecho avançou **2,860287s**. O menu de pausa também foi inspecionado visualmente.

A v11 acrescenta CSV opcional no launcher, ativado somente por `PS2_RACE_CLOCK_CSV`. A leitura ocorre na thread EE após boot/estado e encadeia/restaura o callback já instalado pela janela. Ponteiros, limites da RAM, layout esperado e valores finitos/não negativos são verificados. Menus ou layouts não reconhecidos são rejeitados. Não há escrita na memória guest. Sem a variável, não se instala callback adicional por frame.

O executável final passou por cinco diagnósticos nativos com threads e Vulkan, separados dos benchmarks: corrida ativa em Fuji/Thunderhead, pausa, continuação pausada e retomada. Cada um produziu181 amostras válidas, com relógio conferido contra o estado salvo e callbacks de simulação preservados. Os testes unitários também conferem ponteiros inválidos, layout, CSV, habilitação e restauração do callback.

**Esse campo mede o tempo da cena ativa neste build.** Não está certificado como cronômetro individual de volta/resultado; sua correspondência com a cadência original do PS2 continua pendente. Os diagnósticos curtos e suas durações de parede não são benchmarks pareados. Essa ferramenta permite investigar o slow motion pelo tempo do próprio jogo nos próximos replays.

## Verificação, pacote e limites

- Compilação Release do alvo GUI SpeedRacer;25/25 CTests passaram.
- 12 imagens em seis ambientes permaneceram idênticas à v10; capturas síncronas separadas das medições de FPS.
- 36/36 janelas nativas Class1 completaram600 VBlanks com aceleração, boost, direção e Car-Fu.
- Cinco cenas receberam pares aquecidos; dez aquecimentos e trinta execuções medidas retidos.
- Cinco diagnósticos adicionais do relógio rodaram no executável final. A telemetria fica desligada por padrão.
- O pacote local passa por smoke de180 frames com as quatro DLLs incluídas e PATH mínimo; o resultado e hashes ficam em `package-check.json`. O uso local de dados pelo fallback de desenvolvimento não prova portabilidade em PC limpo.

Não foram certificadas corridas completas, todas as seções/classes2–4/Mirror,30 minutos, underruns de hardware, latência física, scanout, paridade PS2, reinício completo ou instalação independente. As imagens iguais detectam regressões contra v10 e não provam fidelidade ao original. A prioridade continua Vanilla; Remaster vem depois desses gates.

## Próximas ações

1. Usar o relógio vivo nos replays de voltas completas e separar avanço do jogo, VBlank, áudio e apresentação; confirmar a cadência original com referência legítima.
2. Separar trabalho e esperas EE/VU/GS, preparação/submissão GPU e publicação nas cenas Fuji/Skorost. Otimizar o estágio que limita a corrida; exigir comparação controlada, inclusive p95/p99 e resultados adversos.
3. Estender cobertura para classes/Mirror,30 minutos e ciclo de vida; verificar áudio real, entrada física e instalação sem fallback.
4. Produzir os cinco pares originais/nativos a1x e corrigir diferenças gráficas ativas antes de subir resolução ou iniciar Remaster.

[Próximas dez tarefas](next-10-tasks.md) · [Roadmap](../../ROADMAP.md) · [Métricas completas](vanilla-v11-metrics.json). O PR23 recebe apenas documentos/métricas e permanece aberto; main não é alterada. Implementação, dados, estados, CSVs com IDs internos, imagens e executáveis continuam locais.

## Proveniência

- Commit privado da implementação: `8bea2624bd7ed9fcc0f5f88a15e51c01d598f0a7`.
- SHA-256 v10: `241b3fd9f467c4708403d1d4ac851dba5cf332511d91f79725ab98e7c8623a1b`.
- SHA-256 v11: `f5bb27127af9de49720b5db84a94c9ba50133d24bb66b9b3a02e36edd59549ec`.
- [Lista oficial de intrínsecos x64 da Microsoft](https://learn.microsoft.com/en-us/cpp/intrinsics/x64-amd64-intrinsics-list?view=msvc-170) para suporte SSE2; [cache microVU do PCSX2](https://github.com/PCSX2/pcsx2/blob/master/pcsx2/x86/microVU_Misc.h) como contexto arquitetural. Nenhuma implementação PCSX2 foi copiada.
- CPU/GPU/backend, compilador, protocolo, hashes por arquivo e todas as medições constam no JSON. SHA de fonte privada identifica apenas o checkout local.
