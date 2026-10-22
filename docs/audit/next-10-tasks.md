# Próximas dez tarefas — Vanilla

Atualização de22/10/2026: a equipe aceitou HUD/Alta qualidade v30 e som v29. A [v31](vanilla-v31.md) entrega identidade/pausa e atribuição de uma janela Fuji médio reverso e uma de Thunderhead no pipeline3×. O limite observado é CPU/VU;46/5 testes passam. **P0: auditar os dois kernels VU quentes e buscar uma alteração isolada que preserve caudas.** A v30 continua jogável; nenhum patch de FPS novo foi promovido.

| # | Prioridade | Entrega e critério de conclusão |
|---|---|---|
| 1 | P0 | Auditar os dois kernels VU quentes e transições/Q; confrontar v19/v22/v23 rejeitados antes de propor outra otimização, preservando cobertura e preset Alto |
| 2 | P0 | Implementar uma alteração isolada com equivalência de registradores/memória/pacotes GIF; definir antes controles Fuji/Skorost/Thunderhead e limites de regressão, mantendo dados adversos |
| 3 | P0 | Comparar HUD e eventos com referência original/PCSX2, incluindo textura/AA, bloom, feedback, mip e deinterlace; preservar a correção de som já confirmada pela equipe |
| 4 | P0 | Comparar presets 1x/2x/3x no pipeline normal; escolher padrão por estabilidade medida, sem inferir FPS da janela a partir do headless |
| 5 | P1 | Aceitar seletor, fullscreen/monitor/DPI e interação física de controles USB/Bluetooth no novo backend |
| 6 | P0 | Aceitar corridas/resultados por pista e classes2–4/Mirror; sessão humana de42min37s já concluída sem crash, sem certificar todas as rotas ou vazamentos |
| 7 | P1 | Salvar resultado normal do jogo, encerrar e confirmar leitura após reabrir; decidir se importador de checkpoints de desenvolvimento realmente é necessário |
| 8 | P1 | Medir underruns e latência física, distinguindo simulação, callbacks e apresentação real |
| 9 | P1 | Verificar outro Windows/GPU, dependências, CPU AVX2/Vulkan, IO Unicode e diretório protegido |
| 10 | P1 | Fechar proveniência/licenças/CI e gate da alpha; manter publicação documental até revisão de distribuição |

Concluído: som/HUD aceitos, identidade/pausa e atribuição delimitada Fuji/controle v31, biblioteca gráfica nativa, ligação ao consumidor do jogo, registradores e FIFO, rejeição explícita de checkpoints incompatíveis, falha com drenagem das filas, correção do compilador ausente, CRT/área ativa, dois smoke tests 3x e pacote local com PATH mínimo. O suporte físico a controle já confirmado em versões anteriores foi preservado, mas não recertificado aqui. As 36 rotas e dados adversos anteriores permanecem como histórico; mods/remaster seguem posteriores à Vanilla estável.
