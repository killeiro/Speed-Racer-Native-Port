# Próximas dez tarefas — Vanilla

Atualização com ISO recuperada e boot real,20/10/2026. [Controle, escalas e pacote local](restored-media-v1.md). [Preparador e52 testes sintéticos](data-preparation-v1.md). [Verificação portátil](portable-preflight-v1.md). [Previsão e pesquisa gráfica](release-readiness-and-graphics.md). Estamos na estabilização Vanilla. O experimento Q não foi promovido após resultados adversos; fontes/executável v13 foram restaurados. [Relatório v14](vanilla-v14.md) · [Métricas](vanilla-v14-metrics.json) · [v13](vanilla-v13.md) · [Roadmap](../../ROADMAP.md).

| # | Prioridade | Próxima tarefa e aceite | Dificuldade | Impacto | Dependências |
|---|---|---|---|---|---|
| 1 | P0 | Mídia/boot real/controle Skorost/Q/CPU concluídos; aprofundar preparação/binning GS e explicar outliers v14 reproduzíveis, mantendo perdas históricas | Média/alta | Desbloquear diagnóstico | Dados recuperados e perfis/controles retidos; issue#4 |
| 2 | P0 | Explicar regressão v14 e medir custo residual de kernels/lookup/Q em Fuji. Avaliar atualização adiada/coalescida apenas com evidência; preservar código mutável, Q/status/CLIP e fallback | Alta | Throughput | #1, diferenciais, perfis e novos pares; issue#4 |
| 3 | P0 | Reduzir preparação/binning GS em Skorost a partir de perfil, preservando hazards/feedback/payloads e efeitos; exigir ganho repetido | Alta | Throughput | #1, diferenciais GS e métricas finais; issue#4 |
| 4 | P0 | Usar relógio vivo em voltas/corridas completas, classes2–4/Mirror; confirmar cadência original, jogo/parede e timing individual | Alta | Fidelidade e cobertura | #1, estados/replay e referência original; issue#3 |
| 5 | P0 | Fechar mip/hazards e cinco pares originais/nativos a1x;1x/2x medidos em32 janelas e oito capturas, com2x mais lento. Investigar tramas/filtragem com referência original; packs/skins futuros | Alta | Fidelidade gráfica | #1, referência PS2/PCSX2 legítima; issues#5/#6 |
| 6 | P1 | Corrigir dither16/CRTC/fog demonstrados; AA1 somente se observado | Alta | Aparência original | Pares originais e testes isolados; issue#6 |
| 7 | P1 | Aceitar pacing sem regressão de corrida, medir underruns reais e latência física USB/Bluetooth; executar30min | Alta | Fluidez e resposta | Throughput P0, relógio e telemetria; issue#3 |
| 8 | P1 | Auditar PATH1 SIGNAL/FINISH/LABEL, pedido atômico/drain/join, pause/restart e saída/save | Alta | Estabilidade | Donos EE/VU/renderer e testes de lifecycle |
| 9 | P1 | Preparador validado com ISO real; boot/pacote privado e descoberta de save/saída/reabertura passaram. Faltam corridas completas/save de resultado/30min, Unicode IO, pasta protegida e outro PC/GPU | Média/alta | Portabilidade | Dados legítimos e dependências fixadas; issue#7 |
| 10 | P1 | Proveniência/licenças transitivas e CI; manter GitHub documental com evidências. PR22 integrado; PR23 v7–v14 aberto | Média/alta | Colaboração e distribuição | Fontes/dependências e aceite Vanilla |

Os26 testes e as56 janelas do candidato v14 foram executados. Nova matriz36 rotas,12 imagens, smoke de pacote e diagnóstico adicional não foram concluídos após a indisponibilidade do disco. Evidência histórica v13 não é QA novo v14. Aceite Vanilla/60FPS permanece aberto. Remaster/UI/câmeras/mods/multiplayer/web continuam futuros.

A indisponibilidade do disco deixou de bloquear os testes. O relatório v14 mantém o que não foi concluído naquela etapa; o novo checkpoint conclui somente os controles/escala/boot descritos, sem nova matriz36 ou corridas completas.
