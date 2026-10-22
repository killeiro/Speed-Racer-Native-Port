# Próximas dez tarefas — Vanilla

Atualização de 22/10/2026: som/HUD e Alta 3× v30 preservados. [V33](vanilla-v33.md)/[v34](vanilla-v34.md) rejeitadas. [V35](vanilla-v35.md) experimental: 29min08s de pilotagem,104.220 quadros,59,62 quadros simulados/s nas cenas ativas; picos e custo residual de Fuji permanecem. Fuji automático +8,011%, mas controles Thunderhead incompletos após a equipe assumir a pilotagem. **Próximo: cadência ligada ao áudio e compilação síncrona de pipelines, usando cache aquecido.** Não há novo patch/pacote promovido.

| # | Prioridade | Entrega e critério de conclusão |
|---|---|---|
| 1 | P0 | Isolar cadência ligada ao áudio e compilação de pipelines nos picos observados; usar cache aquecido e preservar os dados adversos, sem outra campanha manual inteira |
| 2 | P0 | Somente após causa concreta, propor outra mudança isolada; definir controles/limites antes, preservar equivalência VU/memória/GIF e todos os dados adversos |
| 3 | P0 | Comparar HUD e eventos com referência original/PCSX2, incluindo textura/AA, bloom, feedback, mip e deinterlace; preservar a correção de som já confirmada pela equipe |
| 4 | P0 | Comparar presets 1x/2x/3x no pipeline normal; escolher padrão por estabilidade medida, sem inferir FPS da janela a partir do headless |
| 5 | P1 | Aceitar seletor, fullscreen/monitor/DPI e interação física de controles USB/Bluetooth no novo backend |
| 6 | P0 | Aceitar corridas/resultados por pista e classes2–4/Mirror; sessão humana de 42min37s já concluída sem crash, sem certificar todas as rotas ou vazamentos |
| 7 | P1 | Salvar resultado normal do jogo, encerrar e confirmar leitura após reabrir; decidir se importador de checkpoints de desenvolvimento realmente é necessário |
| 8 | P1 | Medir underruns e latência física, distinguindo simulação, callbacks e apresentação real |
| 9 | P1 | Verificar outro Windows/GPU, dependências, CPU AVX2/Vulkan, IO Unicode e diretório protegido |
| 10 | P1 | Fechar proveniência/licenças/CI e gate da alpha; manter publicação documental até revisão de distribuição |

Concluído: som/HUD aceitos, identidade/pausa e atribuição delimitada Fuji/controle v31, biblioteca gráfica nativa, ligação ao consumidor do jogo, registradores e FIFO, rejeição explícita de checkpoints incompatíveis, falha com drenagem das filas, correção do compilador ausente, CRT/área ativa, dois smoke tests 3x e pacote local com PATH mínimo. O suporte físico a controle já confirmado em versões anteriores foi preservado, mas não recertificado aqui. As 36 rotas e dados adversos anteriores permanecem como histórico; mods/remaster seguem posteriores à Vanilla estável.
