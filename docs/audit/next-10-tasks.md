# Próximas dez tarefas — Vanilla

Atualização de 22/10/2026: som/HUD e Alta 3× v30 preservados. [V35](vanilla-v35.md) concluiu as 18 execuções automáticas e passou nos critérios originais da otimização VU (Fuji **+8.011%**), 47 testes e três pares idênticos de imagem/áudio gerado. Compilação privada verificada; progresso da pilotagem e cartões anteriores preservados. **Próximo: atribuir cadência ligada ao áudio e custo síncrono de pipelines; depois resultado/save/reabertura, cobertura restante e segundo PC.** Os picos da pilotagem permanecem abertos. V33/V34 rejeitadas; sem distribuição pública.

| # | Prioridade | Entrega e critério de conclusão |
|---|---|---|
| 1 | P0 | Correlacionar timestamps de compilação SPIR-V/criação de pipeline com os picos, em uma rota fixa e cópias de cache inicial/aquecido; manter diagnóstico separado do benchmark e preservar todos os intervalos |
| 2 | P0 | Somente após causa concreta, propor outra mudança isolada; definir controles/limites antes, preservar equivalência VU/memória/GIF e todos os dados adversos |
| 3 | P0 | Comparar HUD e eventos com referência original/PCSX2, incluindo textura/AA, bloom, feedback, mip e deinterlace; preservar a correção de som já confirmada pela equipe |
| 4 | P0 | Preservar Alta 3× como padrão; comparar custo dos presets no pipeline normal somente se a atribuição apontar limite de GPU, sem confundir FPS headless com apresentação real |
| 5 | P1 | Aceitar seletor, fullscreen/monitor/DPI e interação física de controles USB/Bluetooth no novo backend |
| 6 | P0 | Aceitar corridas/resultados por pista e classes2–4/Mirror; sessão humana de 42min37s já concluída sem crash, sem certificar todas as rotas ou vazamentos |
| 7 | P0 | Confirmar resultado natural, persistência e leitura após reabrir na pasta final, preservando o progresso da equipe; não depender de checkpoints incompatíveis |
| 8 | P1 | Medir underruns e latência física, distinguindo simulação, callbacks e apresentação real |
| 9 | P1 | Verificar outro Windows/GPU, dependências, CPU AVX2/Vulkan, IO Unicode e diretório protegido |
| 10 | P1 | Fechar proveniência/licenças/CI e gate da alpha; manter publicação documental até revisão de distribuição |

Concluído: som/HUD aceitos, identidade/pausa e atribuição delimitada Fuji/controle v31, biblioteca gráfica nativa, ligação ao consumidor do jogo, registradores e FIFO, rejeição explícita de checkpoints incompatíveis, falha com drenagem das filas, correção do compilador ausente, CRT/área ativa, dois smoke tests 3x e pacote local com PATH mínimo. O suporte físico a controle já confirmado em versões anteriores foi preservado, mas não recertificado aqui. As 36 rotas e dados adversos anteriores permanecem como histórico; mods/remaster seguem posteriores à Vanilla estável.
