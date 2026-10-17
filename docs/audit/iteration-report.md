# Vanilla stabilization — relatório executivo v2

O executável Windows e o controle funcionam; o usuário confirmou o controle físico. A câmera lenta foi confirmada por medição independente da apresentação. A fidelidade gráfica continua incompleta: mipmapping e dithering de 16 bits são lacunas ativas. O backend medido foi Vulkan/Mailbox em RTX3060. Esta iteração não certifica 60 FPS.

## Inventário e causas

`architecture.md` mapeia código, dependências, build e proveniência. `performance-baseline.md` e `metrics.json` registram condições e medições. `profiling-results.md` apresenta o ranking e riscos. `graphics-parity.md` distingue defeitos, hipóteses e os cinco cenários de comparação. `next-10-tasks.md` organiza prioridades, dificuldade, impacto, dependências e issues.

Causa confirmada da câmera lenta observada no replay: o avanço emulado fica abaixo do tempo real quando o processamento não acompanha a taxa alvo; a EE aguarda a pipeline/apresentação. Não foi atribuída toda a perda a uma função. O áudio quase não bloqueou nesse trecho. VIF/VU e montagem GS permanecem os custos principais pelo perfil disponível.

## Correções e validação

- DATE em CT24 corrigido no raster CPU e encoder GPU. Teste real: 32 casos, duas falhas antes e zero depois. Não foi usado no replay, portanto não explica melhora visual dele.
- Worker VU deixou de sobrescrever GIF status mais recente com MSKPATH3 atrasado. Teste determinístico falhava com saída 4 e passa com saída 0.
- Telemetria opcional separa relógio EE e apresentação. A média de raster agora usa displays processados em vez do frame absoluto do save-state.
- Diagnóstico registra backend, present mode e pedidos de mip/dither/DATE/AA. Saves/estados/tar privado passam a ser ignorados pelo Git. O aviso IPU/Play! ausente foi acrescentado ao pacote local.

Build Release e 12/12 testes passaram. Os três frames comparados permaneceram idênticos após 600 frames. O tour atual chegou ao frame 8000, passando por menu, seleção de personagem/carro e grid/corrida, com o carro próprio parado. O save original manteve seu SHA. O detalhe das verificações e limitações está em `stability-matrix.md`.

A amostra 1x passou de 48,35 para 53,05 VBlanks/s (80,6% para 88,4% de velocidade emulada); não há repetição suficiente para atribuir ganho às correções. Em 2x: 56,26→55,93; 3x: 47,65→47,40. A meta de 100% continua pendente. Não foram alterados ciclos, física ou efeitos para mascarar atraso.

Build corrigido SHA-256: `69227f6323f3d3a5c7284a81338fa8c16e71382bcc9ab523e30d626046aff9f0`. A versão funcional anterior foi preservada. Branch local: `codex/vanilla-audit-v2`. As alterações de fonte permanecem locais enquanto a proveniência do conjunto é revista. Um patch incremental privado acompanha a entrega. A integração pública é documental, ligada às issues #1–#8, sem publicar binário, ROM, ELF, assets ou estados.

## Checklist final

- [x] Estado atual/upstream, inventário e dependências inspecionados; versão funcional preservada.
- [x] Relógios real/emulado separados, p50/p95/p99 e cinco configurações registrados.
- [x] Dois defeitos reproduzidos, corrigidos e cobertos por testes.
- [x] Build, 12 testes e regressão de 600 frames passaram; save original preservado.
- [x] README, ROADMAP e issues consultados; dez tarefas definidas.
- [ ] Ritmo original a 100%, pacing e sessão de 30 minutos estáveis.
- [ ] Mipmapping/dithering/CRTC com paridade.
- [ ] Cinco pares visuais PCSX2/PS2 sincronizados; dependem de referência legítima configurada.
- [ ] Cronômetro da corrida extraído; corrida completa, pausa/reinício e escuta de áudio certificados.
- [ ] Input-to-photon medido; mais controles físicos, fullscreen e GPUs testados.
- [ ] Build e execução em PC sem caminhos/dependências de desenvolvimento.
- [ ] Direitos de distribuição e notices transitivos esclarecidos antes de binário público.

Testes manuais ficam restritos a verificações físicas e de experiência que os instrumentos atuais não certificam. Não foi exigido novo ciclo de logs ao usuário.
