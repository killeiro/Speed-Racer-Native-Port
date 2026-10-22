# Próximas dez tarefas — Vanilla

Atualização de22/10/2026: som v29 e HUD/Alta qualidade v30 aceitos. A [v31](vanilla-v31.md) atribui a janela Fuji à VU. A [v32](vanilla-v32.md) testa flags SSE2, com 47 testes e 71.225 checks nativos completos, mas falha no gate de desempenho (média Fuji +1.358%). Código de referência restaurado, 46 testes passam. **P0: inspecionar temporários/código de máquina e histórico de flags dos kernels quentes antes de outra candidata.** A v30 continua jogável; sem novo patch promovido.

| # | Prioridade | Entrega e critério de conclusão |
|---|---|---|
| 1 | P0 | Inspecionar código de máquina, temporários e histórico de flags dos dois kernels quentes; v32 SSE2 rejeitada, sem repetir v19/v22/v23 |
| 2 | P0 | Somente após causa concreta, propor outra mudança isolada; definir controles/limites antes, preservar equivalência VU/memória/GIF e todos os dados adversos |
| 3 | P0 | Comparar HUD e eventos com referência original/PCSX2, incluindo textura/AA, bloom, feedback, mip e deinterlace; preservar a correção de som já confirmada pela equipe |
| 4 | P0 | Comparar presets 1x/2x/3x no pipeline normal; escolher padrão por estabilidade medida, sem inferir FPS da janela a partir do headless |
| 5 | P1 | Aceitar seletor, fullscreen/monitor/DPI e interação física de controles USB/Bluetooth no novo backend |
| 6 | P0 | Aceitar corridas/resultados por pista e classes2–4/Mirror; sessão humana de42min37s já concluída sem crash, sem certificar todas as rotas ou vazamentos |
| 7 | P1 | Salvar resultado normal do jogo, encerrar e confirmar leitura após reabrir; decidir se importador de checkpoints de desenvolvimento realmente é necessário |
| 8 | P1 | Medir underruns e latência física, distinguindo simulação, callbacks e apresentação real |
| 9 | P1 | Verificar outro Windows/GPU, dependências, CPU AVX2/Vulkan, IO Unicode e diretório protegido |
| 10 | P1 | Fechar proveniência/licenças/CI e gate da alpha; manter publicação documental até revisão de distribuição |

Concluído: som/HUD aceitos, identidade/pausa e atribuição delimitada Fuji/controle v31, biblioteca gráfica nativa, ligação ao consumidor do jogo, registradores e FIFO, rejeição explícita de checkpoints incompatíveis, falha com drenagem das filas, correção do compilador ausente, CRT/área ativa, dois smoke tests 3x e pacote local com PATH mínimo. O suporte físico a controle já confirmado em versões anteriores foi preservado, mas não recertificado aqui. As 36 rotas e dados adversos anteriores permanecem como histórico; mods/remaster seguem posteriores à Vanilla estável.
