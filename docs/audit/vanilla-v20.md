# Vanilla v20 — VU e cadência de áudio

20/10/2026. **Experimento não promovido; fonte e EXE exatos v17 restaurados.** Compilação privada de referência atual: **v17**. A equipe mantém a meta Vanilla perto de 58–60 FPS com gráficos, efeitos e física preservados; esta etapa não fecha aceitação do jogo inteiro.

## Causa investigada e alteração

A espera legacy publica o frame antes de consultar o teto de 80 ms da fila de áudio. O bloco de 1.024 amostras a 48 kHz corresponde a 21,33 ms, acima do período de vídeo de 16,67 ms. A fila de software avança em blocos e não é um cursor exato do áudio reproduzido. A v18 com 256 melhorou caudas, mas falhou em Fuji; a v19 ganhou throughput VU, mas piorou o p99 Skorost-1 nos três pares. Ambos os resultados permanecem rejeitados, sem mudar seus critérios depois dos testes.

A nova candidata combina os bytes exatos da implementação/teste de rejeição adaptativa VU v19 com pedido Windows de **512 amostras SDL**, 10,67 ms a 48 kHz. É a maior potência de dois abaixo de um período PAL/NTSC nesse formato e exige menos callbacks que 256. Há fallback para o pedido anterior de 1.024 se a abertura falhar; o spec obtido é registrado. Todas as execuções medidas da candidata confirmam WASAPI512, 48k estéreo16. Não se afirma que isso seja o período físico do dispositivo.

Uma palavra VU divergente apenas rejeita cedo; toda aceitação continua comparando os spans completos. Geração/invalidação, kernels/Q/status/CLIP, filas GS/atomics, profundidade de dois presents, teto de áudio de 80 ms, cap de 500 ms, pacing legacy, física/relógios, shaders, efeitos e controles são preservados. O deadline antigo continua opt-in. Fonte privada `7a8d3e45f97c1c41a2cbfe8702be77eb1fe72ca2`; EXE congelado `619f7d712a0531e4b7200ba67e6627fd20639634ac124b7b8bdfbbc325661cc4`.

## Verificações antes de FPS

- 31/31 CTests em 13,19 s, incluindo os casos ampliados do cache real. Não há teste que apenas espelhe uma constante.
- Três diagnósticos nativos novos com o host combinado: **21.078.049 decisões** comparadas com o validador completo anterior, zero divergências. As sondas foram removidas e a recompilação pura conferiu código/dados com o EXE congelado, exceto timestamp COFF/checksum PE.
- Três pares novos em Fuji-4, Skorost-1 e GP0: arquivos WAV gerados integralmente idênticos para baseline/candidata. Respectivamente 480.000, 480.000 e 480.032 sample-frames em cada par. Gravação/checagem são diagnósticos separados de FPS; não certificam áudio físico ou underruns.

## Controles de desempenho

Sete cenas: aquecimento AB e três pares medidos AB/BA/AB, mesmo caminho/nome do EXE, checkpoint e comandos. Fuji usa 1.800 VBlanks, demais 600; descarte de 60, com 1.700/500 callbacks comuns. São 14 aquecimentos e 42 janelas medidas; todos os dados adversos ficam retidos. Sem build, sonda, captura ou segundo jogo do agente durante FPS; carga externa do host não controlada. As entradas automáticas não certificam corrida concluída.

Os critérios foram escritos antes da edição: os mesmos ganhos Fuji da v19, mais melhora de p99 em Skorost-1 nos três pares e pelo menos 5% na média; quatro cenas com p99 melhor; nenhuma piora de p99 acima de 5% nos três pares; perda média de FPS no máximo 1% por cena e nenhuma perda acima de 2% em dois pares. Os 21 pares de contadores terminais GS devem coincidir. Não há arredondamento para aprovar ou mudança posterior de limiar.

| Cena | FPS v17 / candidata | Variação | p99 callback comum v17 / candidata, ms |
|---|---:|---:|---:|
| Fuji-4 | 55.84 / 56.39 | +0.99% | 27.50 / 29.65 |
| Fuji-3 | 57.87 / 59.57 | +2.93% | 26.71 / 26.35 |
| Skorost-1 | 59.91 / 59.55 | -0.60% | 30.03 / 30.34 |
| Skorost-2 | 60.01 / 59.98 | -0.05% | 34.50 / 33.50 |
| Grand-Prix-0 | 59.84 / 59.95 | +0.19% | 33.51 / 34.93 |
| Thunderhead-0 | 59.99 / 59.98 | -0.02% | 33.52 / 32.90 |
| Aurora-3 | 60.00 / 59.99 | -0.02% | 33.22 / 32.28 |

- `Fuji4_all_three_positive`: FAIL.
- `Fuji4_mean_gain_at_least3`: FAIL.
- `Fuji3_mean_gain_at_least1`: PASS.
- `no_scene_mean_loss_over1`: PASS.
- `no_two_pair_losses_over2`: PASS.
- `no_consistent_p99_loss_over5`: PASS.
- `Skorost1_p99_all_three_improve`: FAIL.
- `Skorost1_mean_p99_reduction_at_least5`: FAIL.
- `at_least_four_mean_p99_improvements`: PASS.
- `all21_terminal_counter_pairs_identical`: PASS.

21/21 pares de contadores terminais idênticos. Isso não prova identidade completa do fluxo GPU assíncrono. Ganhos de outras iterações ou cenas não são somados.

As esperas mostram a interação entre produção e pacing: em Fuji-3, a publicação média cai de 6,70 para 4,50 ms, enquanto a espera de pacing cresce de 0,63 para 2,30 ms. Em Skorost-1, publicação cai de 1,89 para 1,06 ms e pacing cresce de 4,68 para 5,40 ms. Os campos atravessam filas VU/GS e áudio, não são tempo puro de GPU ou uma medida física. Essa transferência de espera, sem melhora consistente do p99 alvo, sustenta investigar o controle da cadência junto à pressão do produtor antes de outro ajuste de buffer. A causa de cada par adverso continua limitada pela carga externa não registrada.

## Seis sessões da equipe no EXE de referência v17

A equipe pilotou com o controle Xbox reconhecido, sem comandos automáticos nem limite de frames, em um checkpoint Class1 de cada ambiente. **São seis sessões separadas, 76.301 VBlanks e 1297.99s somados incluindo startup.** O EXE é o v17 congelado, não a candidata v20 rejeitada. Todas as saídas retornam0, drenam a GS, juntam EE/VU e preservam os cards original e QA.

| Ambiente/checkpoint | FPS médio de simulação | Janelas5s >=58 | Janelas5s <55 | Pior janela5s, FPS | p99 callback, ms |
|---|---:|---:|---:|---:|---:|
| Skorost-1 | 58.58 | 51/58 | 5 | 36.25 | 30.32 |
| Fuji-4 | 58.13 | 41/63 | 6 | 48.34 | 31.88 |
| Grand-Prix-0 | 59.69 | 25/26 | 1 | 54.82 | 33.82 |
| Thunderhead-0 | 59.93 | 21/21 | 0 | 59.44 | 33.80 |
| Aurora-3 | 59.72 | 47/49 | 1 | 52.92 | 33.06 |
| Onuris-0 | 59.95 | 31/31 | 0 | 59.73 | 32.91 |

Os primeiros60 registros são omitidos apenas nas estatísticas descritivas; contagens brutas e hashes ficam retidos. São248 buckets completos de5s com duração observada de pelo menos4,8s;216 atingem58FPS e13 ficam abaixo55. Buckets parciais ficam separados nas métricas e não são apagados. As sessões têm duração e pilotagem distintas; não constituem pares causais, uma corrida contínua de30min ou validação de todas as pistas/classes/Mirror. O mínimo Skorost36,25 coincide com relógio de cena parado aos20–25s, portanto não é atribuído à pilotagem. Não há novo relato de vitória nem comprovação independente de tela de resultado/save/reabertura.

Fuji mantém quedas sustentadas: o bucket265–270s marca48,34FPS enquanto o relógio de cena avança4,01s; publicação espera10,42ms em média e pacing apenas0,0013ms. A leitura do código confirma que o pacote percorre EE→VU→renderer e pode esperar na inserção do ring ou no limite de dois presents pendentes. Logo, esse tempo não identifica GPU pura. Thunderhead/Onuris permanecem perto60 com maior espera de pacing, mas ainda têm caudas de callback. Todas as seis sessões têm picos adversos; média perto60 não equivale a entrega regular.

Próximo trabalho delimitado: separar os dois locais de espera de publicação e o trabalho CPU VU/renderer em diagnóstico automático, cruzando com os perfis anteriores, antes de selecionar uma mudança mínima. Preservar profundidade/ordem de fila, clocks/física e efeitos; não iniciar outra varredura de constantes de áudio nem pedir nova rodada manual no mesmo binário. Probes ficam separados de FPS puro. O relógio de cena não é o timer individual da corrida; callbacks não medem scanout ou latência física. Os resultados desta rodada reforçam a prioridade de throughput e cadência juntos, sem aceitar os experimentos v18–v20 retrospectivamente.

## Resultado e próximos aceites

Após a falha dos critérios, não foi executada nova matriz de 12 imagens/36 rotas nem criado pacote v20. A candidata fica isolada em branch privada. A restauração pura confere código/dados com o EXE v17, exceto timestamp COFF/checksum PE, e restaura o executável congelado exato; 31 testes baseline passam novamente.

Não houve pilotagem humana nova desta candidata. A corrida de Fuji da [v19](vanilla-v19.md), relatada pela equipe, registrou 59,20 FPS médios com quedas residuais; é evidência histórica de outro EXE, não validação humana da v20. Próximos aceites: corrida/relógio individual e resultado/save/reabertura, classes2–4/Mirror, 30min contínuos, cinco pares PS2/nativo1x e serrilhado, áudio/input físicos, outro Windows/GPU e proveniência/CI/distribuição. O pacote com mídia própria é privado, não uma alpha pública ou para enviar a amigos.

A [documentação SDL de abertura de áudio](https://wiki.libsdl.org/SDL2/SDL_OpenAudioDevice) explica o spec pedido/obtido e o compromisso de blocos menores; a [consulta de fila](https://wiki.libsdl.org/SDL2/SDL_GetQueuedAudioSize) não informa posição exata de playback. A arquitetura local e os controles, não um transplante do PCSX2, sustentam esta alteração.

[Métricas](vanilla-v20-metrics.json) · [Roadmap](../../ROADMAP.md) · [Próximas tarefas](next-10-tasks.md). GitHub documental, PR23 aberto e main inalterada; nenhum fonte/binário/imagem/áudio/dado do jogo publicado. Atribuição pública: a equipe.
