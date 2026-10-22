# Próximas dez tarefas — Vanilla

Atualização de21/10/2026: a [v29](vanilla-v29.md) corrige áudio de saída na pausa/envelopes e oferece FXAA opcional.46 testes do runtime e3 da biblioteca passam. A sessão real v28 durou42min37s e mostrou espera gráfica em um bloco ativo lento. **O próximo trabalho usa essa evidência para atribuir o gargalo, sem repetir matrizes amplas ou exigir outra rodada genérica de pilotagem.** Championship2/Class1 é Thunderhead→Onuris; a música em Onuris foi verificada por avanço diagnóstico, sem conclusão natural.

| # | Prioridade | Entrega e critério de conclusão |
|---|---|---|
| 1 | P0 | Identificar variante e estado de pausa nos registros; atribuir a espera de postagem observada entre preparação GS, consumidor e GPU em uma janela Fuji e uma de controle, sem captura pesada |
| 2 | P0 | Corrigir a etapa dominante medida e provar ordem entre paths, EOP, CSR/reset/FIFO se houver agrupamento de GIFs; manter todos os resultados adversos |
| 3 | P0 | Validar chiado da pausa após o bloqueador DC, áudio após resultado natural Thunderhead→Onuris e música/vozes/efeitos; distinguir fila SDL de underruns físicos |
| 4 | P0 | Comparar presets 1x/2x/3x no pipeline normal; escolher padrão por estabilidade medida, sem inferir FPS da janela a partir do headless |
| 5 | P1 | Aceitar seletor, fullscreen/monitor/DPI e interação física de controles USB/Bluetooth no novo backend |
| 6 | P0 | Aceitar corridas/resultados por pista e classes2–4/Mirror; sessão humana de42min37s já concluída sem crash, sem certificar todas as rotas ou vazamentos |
| 7 | P1 | Salvar resultado normal do jogo, encerrar e confirmar leitura após reabrir; decidir se importador de checkpoints de desenvolvimento realmente é necessário |
| 8 | P1 | Medir underruns e latência física, distinguindo simulação, callbacks e apresentação real |
| 9 | P1 | Verificar outro Windows/GPU, dependências, CPU AVX2/Vulkan, IO Unicode e diretório protegido |
| 10 | P1 | Fechar proveniência/licenças/CI e gate da alpha; manter publicação documental até revisão de distribuição |

Concluído: biblioteca gráfica nativa, ligação ao consumidor do jogo, registradores e FIFO, rejeição explícita de checkpoints incompatíveis, falha com drenagem das filas, correção do compilador ausente, CRT/área ativa, dois smoke tests 3x e pacote local com PATH mínimo. O suporte físico a controle já confirmado em versões anteriores foi preservado, mas não recertificado aqui. As 36 rotas e dados adversos anteriores permanecem como histórico; mods/remaster seguem posteriores à Vanilla estável.
