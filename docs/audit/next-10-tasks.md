# Próximas dez tarefas — Vanilla

Atualização de20/10/2026: [integridade de build e auditoria VU v23](vanilla-v23.md). Candidata não promovida; cobertura gerada recuperada e EXE v17 preservado. Todos2^32 encodings equivalentes,32 testes,53.665 comparações nativas completas,três WAVs idênticos e56 controles com critérios prévios. Dados adversos preservados. Próximo: comparar arquitetura PCSX2/ports nativos e validar inputs gerados em build limpo; depois GS/VU/cadência e corridas/resultado/save/reabertura/classes/Mirror/30min. Seis sessões humanas v17 permanecem descritivas; nenhuma rodada manual repetida do mesmo EXE. [Roadmap](../../ROADMAP.md).

| # | Prioridade | Próxima tarefa e aceite | Dependências |
|---|---|---|---|
| 1 | P0 | Uniões repetidas de mip eliminadas na v17; perfilar preparação/binning GS restante e caudas de frame time, preservando hazards/efeitos/payloads e exigindo pares finais | Perfis v15/v17, pares e issue #4 |
| 2 | P0 | Cobertura extra310 recuperada e manifesto verificado em todo build. Validar build limpo e arquitetura GS/VU com referências PCSX2 e ports; separar custo por cena antes de outra otimização. Reproduzir invalidação128bits no cache real como correção independente | Auditoria v23, inputs gerados e issue #4 |
| 3 | P1 | Pedido atômico/drain/join e casos de saída normal/erro implementados e testados na v16; ampliar lifecycle para pause/restart dentro do processo e sessões longas | Barreira v16; contadores terminais retidos; PATH1 SIGNAL/FINISH/LABEL ainda aberto |
| 4 | P0 | Usar relógio vivo em voltas/corridas completas, classes 2–4 e Mirror; confirmar jogo/parede, cadência PS2 e timing individual | Checkpoints, dados e referência original; issue #3 |
| 5 | P0 | Fechar mip/hazards e cinco pares PS2 original/nativo a 1x; classificar filtragem/tramas/serrilhado com referência | Capturas sincronizadas; issues #5/#6 |
| 6 | P1 | Corrigir dither16/CRTC/fog demonstrados; AA1 somente se observado. Avaliar custo/qualidade de escala depois de throughput | Referência original; 2x já perdeu 8–13% no checkpoint anterior |
| 7 | P0 | Isolar backpressure Fuji e avaliar pacing informado por áudio sem perda de throughput; blocos256 v18/512 v20 e deadline v17 não foram promovidos. Usar timestamps e controles finais; medir underruns reais, USB/Bluetooth e30min | Throughput, relógio e telemetria; issue #3 |
| 8 | P1 | Flush forçado/replacement/retry do card passaram em fixture; provar save de resultado real e leitura após reabertura, com QA separado | #3, corridas completas; issue #7 |
| 9 | P1 | Testar outro Windows/GPU, Unicode no IO real e pasta protegida; manter preparador, dependências e pacote reproduzíveis | Boot/pacote local v17 passaram; não é aceite de segundo PC; issue #7 |
| 10 | P1 | Concluir proveniência/licenças transitivas, CI e critérios para alpha distribuível; manter GitHub documental | PR23 aberto, sem merge novo; nenhum código/binário/dado do jogo publicado |

1x e pacing legacy continuam padrão; o experimento Q v14 não foi promovido. A v16 move as estatísticas para depois do drain; os contadores anteriores e os novos são retidos com esse limite de cobertura. Isso não prova identidade do fluxo GPU assíncrono completo ou todos os caminhos de saída. O pacote v17 contém ISO/ELF próprias e é privado local. Corridas completas/classes/Mirror/30 min, cinco pares originais, save de resultado, controles físicos/áudio e distribuição continuam abertos. Remaster/UI/câmeras/mods/multiplayer/web seguem posteriores à estabilização Vanilla.
