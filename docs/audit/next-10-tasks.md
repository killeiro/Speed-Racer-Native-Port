# Próximas dez tarefas — Vanilla

Atualização de 20/10/2026: [v15 e métricas](vanilla-v15.md). O novo pacote privado local usa a base v13 com cache limitado de snapshot GS. Skorost-1 ganha 5,54% nos três pares; Fuji muda pouco. 27 testes, 697.211 checks nativos, 12 pares de imagem idênticos e 36 rotas curtas passaram. Isso não encerra o aceite Vanilla. [ISO recuperada/escalas](restored-media-v1.md) · [v14 isolado](vanilla-v14.md) · [Roadmap](../../ROADMAP.md).

| # | Prioridade | Próxima tarefa e aceite | Dependências |
|---|---|---|---|
| 1 | P0 | Reduzir preparação/binning GS residual em Skorost, preservando hazards, efeitos e payloads; exigir diferenciais e ganho repetido nos artefatos finais | Perfil v15, pares e issue #4 |
| 2 | P0 | Medir kernels/lookup/validação VU em Fuji e investigar causas reproduzíveis das regressões v12/v14; preservar código mutável, Q/status/CLIP e fallback | Perfis separados, controles e issue #4 |
| 3 | P1 | Implementar pedido atômico, donos explícitos e drain/join no encerramento EE/VU/renderer; testar perda, deadlock, pause/restart e contadores finais | Diferenças agregadas v15; lifecycle e PATH1 SIGNAL/FINISH/LABEL |
| 4 | P0 | Usar relógio vivo em voltas/corridas completas, classes 2–4 e Mirror; confirmar jogo/parede, cadência PS2 e timing individual | Checkpoints, dados e referência original; issue #3 |
| 5 | P0 | Fechar mip/hazards e cinco pares PS2 original/nativo a 1x; classificar filtragem/tramas/serrilhado com referência | Capturas sincronizadas; issues #5/#6 |
| 6 | P1 | Corrigir dither16/CRTC/fog demonstrados; AA1 somente se observado. Avaliar custo/qualidade de escala depois de throughput | Referência original; 2x já perdeu 8–13% no checkpoint anterior |
| 7 | P1 | Aceitar pacing sem regressão de corrida; medir underruns reais, latência física USB/Bluetooth e sessão de 30 min | Throughput, relógio e telemetria; issue #3 |
| 8 | P1 | Provar save de resultado, leitura após reabertura, pause/restart e saída; preservar saves existentes e QA separado | #3, corridas completas; issue #7 |
| 9 | P1 | Testar outro Windows/GPU, Unicode no IO real e pasta protegida; manter preparador, dependências e pacote reproduzíveis | Boot/pacote local v15 passaram; não é aceite de segundo PC; issue #7 |
| 10 | P1 | Concluir proveniência/licenças transitivas, CI e critérios para alpha distribuível; manter GitHub documental | PR23 aberto, sem merge novo; nenhum código/binário/dado do jogo publicado |

1x e pacing legacy continuam padrão; o experimento Q v14 não foi promovido. Os contadores finais diferem em 12/21 pares medidos (máximo absoluto de primitivas: 0,3231%); não há alegação de identidade do fluxo GPU assíncrono completo ou saída sem perdas. O pacote v15 contém ISO/ELF próprias e é privado local. Corridas completas/classes/Mirror/30 min, cinco pares originais, save de resultado, controles físicos/áudio e distribuição continuam abertos. Remaster/UI/câmeras/mods/multiplayer/web seguem posteriores à estabilização Vanilla.
