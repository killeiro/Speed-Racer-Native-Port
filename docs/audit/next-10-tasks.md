# Próximas dez tarefas — Vanilla

Atualização de 21/10/2026: a [v28](vanilla-v28.md) corrige o contrato de janela Win32 e defeitos de consumo/mistura SPU2; 45 testes passam. **Prioridade imediata: áudio do Championship 2, sobretudo a progressão para as etapas2/3; ainda não aceito.** Histórico: a [v27](vanilla-v27.md) integra o GS Vulkan, passa 44 testes e verifica cenas Fuji/Thunderhead em 3x. Há um pacote GUI experimental privado; a v25 foi preservada. O próximo trabalho é medir o pipeline normal com threads, sem outra matriz ampla ou rodada manual repetida.

| # | Prioridade | Entrega e critério de conclusão |
|---|---|---|
| 1 | P0 | Reproduzir Championship 2 em sequência, distinguir música/vozes/efeitos e confirmar áudio nas etapas2/3 antes de fechar o relato. Depois registrar uma janela normal com threads em Fuji e uma de controle; separar EE/VU, GIF/preparação, espera e GPU, sem captura/trace pesado no intervalo |
| 2 | P0 | Otimizar a etapa dominante indicada por essa medição; se considerar agrupar GIFs, provar ordem entre paths, EOP, CSR/reset/FIFO e limites antes de promover |
| 3 | P0 | Comparar imagem/eventos com referência original/PCSX2, incluindo bloom, feedback, mip, dither, deinterlace e áreas de HUD |
| 4 | P0 | Comparar presets 1x/2x/3x no pipeline normal; escolher padrão por estabilidade medida, sem inferir FPS da janela a partir do headless |
| 5 | P1 | Aceitar seletor, fullscreen/monitor/DPI e interação física de controles USB/Bluetooth no novo backend |
| 6 | P0 | Aceitar corridas completas, resultado verificável, classes2–4/Mirror e 30 minutos contínuos |
| 7 | P1 | Salvar resultado normal do jogo, encerrar e confirmar leitura após reabrir; decidir se importador de checkpoints de desenvolvimento realmente é necessário |
| 8 | P1 | Medir underruns e latência física, distinguindo simulação, callbacks e apresentação real |
| 9 | P1 | Verificar outro Windows/GPU, dependências, CPU AVX2/Vulkan, IO Unicode e diretório protegido |
| 10 | P1 | Fechar proveniência/licenças/CI e gate da alpha; manter publicação documental até revisão de distribuição |

Concluído: biblioteca gráfica nativa, ligação ao consumidor do jogo, registradores e FIFO, rejeição explícita de checkpoints incompatíveis, falha com drenagem das filas, correção do compilador ausente, CRT/área ativa, dois smoke tests 3x e pacote local com PATH mínimo. O suporte físico a controle já confirmado em versões anteriores foi preservado, mas não recertificado aqui. As 36 rotas e dados adversos anteriores permanecem como histórico; mods/remaster seguem posteriores à Vanilla estável.
