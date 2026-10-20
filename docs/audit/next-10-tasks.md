# Próximas dez tarefas — Vanilla

Atualização de 20/10/2026: [v17 e métricas](vanilla-v17.md). A união repetida de regiões mip foi eliminada dentro do snapshot GS: Skorost-1 +2.69%, com três pares positivos e controles em sete cenas. Passaram 31 testes, 696.942 checks nativos novos, 12 pares de imagem, 36 rotas curtas e dois smokes do novo pacote privado. Caudas adversas foram retidas; o aceite Vanilla continua aberto. A [v16](vanilla-v16.md) mantém os testes históricos de encerramento/card; os pacotes/saves anteriores estão preservados. [Ganho v15](vanilla-v15.md) · [ISO/escalas](restored-media-v1.md) · [v14 isolado](vanilla-v14.md) · [Roadmap](../../ROADMAP.md).

| # | Prioridade | Próxima tarefa e aceite | Dependências |
|---|---|---|---|
| 1 | P0 | Uniões repetidas de mip eliminadas na v17; perfilar preparação/binning GS restante e caudas de frame time, preservando hazards/efeitos/payloads e exigindo pares finais | Perfis v15/v17, pares e issue #4 |
| 2 | P0 | Medir kernels/lookup/validação VU em Fuji e investigar causas reproduzíveis das regressões v12/v14; preservar código mutável, Q/status/CLIP e fallback | Perfis separados, controles e issue #4 |
| 3 | P1 | Pedido atômico/drain/join e casos de saída normal/erro implementados e testados na v16; ampliar lifecycle para pause/restart dentro do processo e sessões longas | Barreira v16; contadores terminais retidos; PATH1 SIGNAL/FINISH/LABEL ainda aberto |
| 4 | P0 | Usar relógio vivo em voltas/corridas completas, classes 2–4 e Mirror; confirmar jogo/parede, cadência PS2 e timing individual | Checkpoints, dados e referência original; issue #3 |
| 5 | P0 | Fechar mip/hazards e cinco pares PS2 original/nativo a 1x; classificar filtragem/tramas/serrilhado com referência | Capturas sincronizadas; issues #5/#6 |
| 6 | P1 | Corrigir dither16/CRTC/fog demonstrados; AA1 somente se observado. Avaliar custo/qualidade de escala depois de throughput | Referência original; 2x já perdeu 8–13% no checkpoint anterior |
| 7 | P0 | Resolver caudas adversas de callback (v17: piora em6/7 cenas); usar controle separado legacy/deadline e exigir cadência sem perda de corrida; medir underruns reais, USB/Bluetooth e30min | Throughput, relógio e telemetria; issue #3 |
| 8 | P1 | Flush forçado/replacement/retry do card passaram em fixture; provar save de resultado real e leitura após reabertura, com QA separado | #3, corridas completas; issue #7 |
| 9 | P1 | Testar outro Windows/GPU, Unicode no IO real e pasta protegida; manter preparador, dependências e pacote reproduzíveis | Boot/pacote local v17 passaram; não é aceite de segundo PC; issue #7 |
| 10 | P1 | Concluir proveniência/licenças transitivas, CI e critérios para alpha distribuível; manter GitHub documental | PR23 aberto, sem merge novo; nenhum código/binário/dado do jogo publicado |

1x e pacing legacy continuam padrão; o experimento Q v14 não foi promovido. A v16 move as estatísticas para depois do drain; os contadores anteriores e os novos são retidos com esse limite de cobertura. Isso não prova identidade do fluxo GPU assíncrono completo ou todos os caminhos de saída. O pacote v17 contém ISO/ELF próprias e é privado local. Corridas completas/classes/Mirror/30 min, cinco pares originais, save de resultado, controles físicos/áudio e distribuição continuam abertos. Remaster/UI/câmeras/mods/multiplayer/web seguem posteriores à estabilização Vanilla.
