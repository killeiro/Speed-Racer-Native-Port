# Vanilla v22 — discriminador compartilhado no cache VU

20/10/2026. **Candidata não promovida; experimento isolado e fonte/EXE exatos v17 restaurados.** Referência privada atual: **v17**. O alvo permanece Windows nativo,1x/legacy; gráficos, efeitos, física, clocks, áudio, controles e filas GS não são simplificados.

## Alteração sustentada pelo código

O [diagnóstico v21](vanilla-v21.md) separou espera por capacidade de fila do limite de frames pendentes e atribuiu mais de17ms CPU/frame à VU em Fuji. O perfil anterior identificava buscas recorrentes por variantes de microprograma. Esta candidata aprende uma única palavra divergente por entrada de cache quando cria uma nova variante, lê a palavra atual uma vez por busca e guarda o valor esperado apenas nas variantes que contêm esse endereço alcançável.

Palavras diferentes rejeitam cedo. Variantes sem o endereço escolhido seguem pela comparação completa; colisões na palavra também precisam comparar todos os spans. **Toda aceitação continua validando todos os bytes alcançáveis.** Ordem/última variante/evicção, gerações/invalidação, reachability/hash e kernels/Q/status/CLIP são preservados. A v19 aprendia endereços separadamente por variante; seu experimento permanece rejeitado. Não há novo ajuste de áudio ou aumento da profundidade de frames.

## Verificação antes de FPS

- 31/31 CTests, ampliando o cache real para variantes curtas sem o endereço discriminador, colisões, mutações alcançáveis, evicção e spans com wrap.
- **21.078.049 decisões nativas** em Fuji4/Fuji3/Skorost2 conferidas contra o validador completo anterior, zero divergências; **13,500,822 rejeições antecipadas**. Sondas removidas; recompilação pura confere código/dados com o EXE congelado, exceto timestamp COFF/checksum PE.
- Três pares novos de WAV gerado integralmente idênticos em Fuji4,Skorost1,GP0:480.000/480.000/480.032 sample-frames48k estéreo16. São diagnósticos separados de FPS, não aceite de latência física/underruns.

## Controles finais

Protocolo declarado antes da edição: sete cenas, mesmo caminho/nome de EXE/checkpoints/inputs/card QA, aquecimento AB e três pares AB/BA/AB, Fuji1.800VBlanks e demais600, descarte60 e1.700/500 callbacks comuns. Todos os14 aquecimentos e42 controles medidos ficam retidos. Nenhum build/sonda/captura/outro jogo acompanha o FPS; carga externa não controlada. Nenhum resultado humano é usado como par causal.

Critérios prévios: Fuji4>=3% e três pares positivos; Fuji3>=1%; perda média de FPS no máximo1% em qualquer cena e nunca>2% em dois pares; nenhuma piora de p99>5% nos três pares da mesma cena; p99 médio Skorost1 no máximo2% pior;21 pares de contadores terminais idênticos. Não há mudança posterior de limiar.

| Cena | FPS v17 / candidata | Variação | p99 callback comum v17 / candidata, ms |
|---|---:|---:|---:|
| Fuji-4 | 55.45 / 57.01 | +2.81% | 27.19 / 27.23 |
| Fuji-3 | 57.17 / 58.71 | +2.70% | 26.39 / 26.20 |
| Skorost-1 | 59.66 / 59.87 | +0.35% | 29.62 / 30.84 |
| Skorost-2 | 60.02 / 60.01 | -0.03% | 34.05 / 33.53 |
| Grand-Prix-0 | 60.01 / 60.00 | -0.01% | 33.76 / 33.84 |
| Thunderhead-0 | 60.02 / 60.02 | -0.01% | 32.75 / 32.55 |
| Aurora-3 | 60.02 / 60.02 | -0.01% | 32.63 / 33.10 |

- `Fuji4_all_three_positive`: PASS.
- `Fuji4_mean_gain_at_least3`: FAIL.
- `Fuji3_mean_gain_at_least1`: PASS.
- `no_scene_mean_loss_over1`: PASS.
- `no_two_pair_losses_over2`: PASS.
- `no_consistent_p99_loss_over5`: PASS.
- `Skorost1_mean_p99_loss_at_most2`: FAIL.
- `all21_terminal_counter_pairs_identical`: PASS.

21/21 pares de contadores terminais coincidem; não é prova do fluxo GPU assíncrono completo. Ganhos de iterações e cenas distintas não são somados.

## Resultado e próximo aceite

Após falhar o critério prévio, a candidata é preservada em branch privada; a fonte original volta, a recompilação pura confere código/dados com v17 exceto timestamp COFF/checksum PE e31 testes baseline passam novamente. O alvo e o staging recebem o EXE v17 exato. Não há nova matriz de imagens/36 rotas nem pacote v22 após rejeição.

Não houve pilotagem humana desta candidata. A rodada da equipe em seis ambientes usou o EXE v17 e está preservada na [v20](vanilla-v20.md). Restam cadência/caudas, corridas/relógio individual/resultado/save/reabertura, classes2–4/Mirror/30min contínuos, cinco pares original/nativo1x e serrilhado, áudio/input físicos, outro Windows/GPU e proveniência/CI/distribuição. O pacote com mídia própria continua privado.

O [registro técnico KillzoneRecomp](https://github.com/drakolordx7/KillzoneRecomp/blob/master/docs/findings.md) também identifica busca/revalidação de microprogramas como custo recorrente e relata que só substituir o comparador SIMD não resolveu aquele perfil. Sua memorização de estados é diferente deste filtro de rejeição; a referência não transfere ganhos e nenhum código externo foi transplantado. A consulta ao [código de memória PCSX2](https://github.com/PCSX2/pcsx2/blob/master/pcsx2/Memory.cpp) reforça manter o contrato de invalidação de microcódigo; esta candidata não altera esse contrato.

[Métricas](vanilla-v22-metrics.json) · [Próximas tarefas](next-10-tasks.md) · [Roadmap](../../ROADMAP.md). Fonte e EXE privados identificados nas métricas; GitHub documental, PR23 aberto e main inalterada. Atribuição pública: a equipe.
