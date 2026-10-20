# Próximas dez tarefas — Vanilla

Atualização com preparação de dados v1,19/10/2026. [Preparador e52 testes sintéticos](data-preparation-v1.md). [Verificação portátil](portable-preflight-v1.md). [Previsão e pesquisa gráfica](release-readiness-and-graphics.md). Estamos na estabilização Vanilla. O experimento Q não foi promovido após resultados adversos; fontes/executável v13 foram restaurados. [Relatório v14](vanilla-v14.md) · [Métricas](vanilla-v14-metrics.json) · [v13](vanilla-v13.md) · [Roadmap](../../ROADMAP.md).

| # | Prioridade | Próxima tarefa e aceite | Dificuldade | Impacto | Dependências |
|---|---|---|---|---|---|
| 1 | P0 | Recuperar a imagem legítima local ou indicar novo caminho. Retomar controle Skorost-1 BA/AB/BA, Q no binário exato e CPU/ciclos por thread; não descartar perdas da série principal | Média/alta | Desbloquear diagnóstico | Dados legítimos locais; issue#4 |
| 2 | P0 | Explicar regressão v14 e medir custo residual de kernels/lookup/Q em Fuji. Avaliar atualização adiada/coalescida apenas com evidência; preservar código mutável, Q/status/CLIP e fallback | Alta | Throughput | #1, diferenciais, perfis e novos pares; issue#4 |
| 3 | P0 | Reduzir preparação/binning GS em Skorost a partir de perfil, preservando hazards/feedback/payloads e efeitos; exigir ganho repetido | Alta | Throughput | #1, diferenciais GS e métricas finais; issue#4 |
| 4 | P0 | Usar relógio vivo em voltas/corridas completas, classes2–4/Mirror; confirmar cadência original, jogo/parede e timing individual | Alta | Fidelidade e cobertura | #1, estados/replay e referência original; issue#3 |
| 5 | P0 | Fechar mip/hazards e cinco pares originais/nativos a1x; medir1x/2x no mesmo binário para o serrilhado, com capturas separadas. Pack HD/skins só após loader próprio e validação | Alta | Fidelidade gráfica | #1, referência PS2/PCSX2 legítima; issues#5/#6 |
| 6 | P1 | Corrigir dither16/CRTC/fog demonstrados; AA1 somente se observado | Alta | Aparência original | Pares originais e testes isolados; issue#6 |
| 7 | P1 | Aceitar pacing sem regressão de corrida, medir underruns reais e latência física USB/Bluetooth; executar30min | Alta | Fluidez e resposta | Throughput P0, relógio e telemetria; issue#3 |
| 8 | P1 | Auditar PATH1 SIGNAL/FINISH/LABEL, pedido atômico/drain/join, pause/restart e saída/save | Alta | Estabilidade | Donos EE/VU/renderer e testes de lifecycle |
| 9 | P1 | Alvo portátil/checker e preparador específico com52 testes sintéticos implementados; usar ISO legítima completa para boot real, corridas/save/saída/30min, Unicode IO, saves graváveis e outro PC/GPU | Média/alta | Portabilidade | Dados legítimos e dependências fixadas; issue#7 |
| 10 | P1 | Proveniência/licenças transitivas e CI; manter GitHub documental com evidências. PR22 integrado; PR23 v7–v14 aberto | Média/alta | Colaboração e distribuição | Fontes/dependências e aceite Vanilla |

Os26 testes e as56 janelas do candidato v14 foram executados. Nova matriz36 rotas,12 imagens, smoke de pacote e diagnóstico adicional não foram concluídos após a indisponibilidade do disco. Evidência histórica v13 não é QA novo v14. Aceite Vanilla/60FPS permanece aberto. Remaster/UI/câmeras/mods/multiplayer/web continuam futuros.
