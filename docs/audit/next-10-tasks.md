# Próximas dez tarefas — Vanilla

Atualização de 21/10/2026: v24 encerra a base de build limpo/cache128 e v25 entrega resolução 1x–4x. O foco passa para eficiência do renderer, sem outra bateria ampla de FPS antes de uma mudança arquitetural concreta. [Análise](vanilla-v24.md) · [Medições](vanilla-v25.md) · [Roadmap](../../ROADMAP.md).

| # | Prioridade | Entrega e critério de conclusão |
|---|---|---|
| 1 | P0 | Definir adaptador GS gráfico nativo: ABI/toolchain/licenças, pacotes GIF, registradores, VSync, reset, readback e proprietário de cada thread |
| 2 | P0 | Prova de renderer com uma cena Fuji e uma cena de controle; confrontar imagem/eventos com a referência antes de medir 1x/2x |
| 3 | P0 | Medir etapas EE/VU/GS no protótipo correto; avaliar microVU ou kernels AOT apenas se o VU continuar limitante, sem acelerar o relógio |
| 4 | P1 | Aceitar interação do seletor de resolução, atalhos fullscreen, mudança de monitor/DPI e mensagens de falha; não confundir preenchimento com câmera ultrawide |
| 5 | P0 | Comparar cenas sincronizadas original/nativo a 1x e upscale; validar bloom/feedback, mip, dither/CRTC/fog e serrilhado |
| 6 | P0 | Corridas completas com relógio vivo, resultado verificável, classes2–4/Mirror e 30 minutos contínuos |
| 7 | P1 | Salvar resultado real, encerrar normalmente e confirmar leitura após reabrir, com card QA separado |
| 8 | P1 | Medir underruns e latência física USB/Bluetooth, distinguindo simulação, callbacks e apresentação real |
| 9 | P1 | Reproduzir em outro Windows/GPU; IO Unicode, diretório protegido, dependências e preparação de dados |
| 10 | P1 | Concluir proveniência/licenças/CI e critérios da alpha; manter GitHub documental até revisão de distribuição |

Concluído nesta etapa: build em diretório novo, 332 inputs preservados, 310 programas extra, invalidação128 reproduzida/corrigida, 39 testes, quatro níveis reais GPU e quatro capturas. Quatro amostras curtas de resolução não substituem aceite de fluidez. 2x é uma escolha de qualidade; o baseline1x e todos os dados adversos anteriores permanecem preservados. Mods HD/câmeras/remaster/multiplayer seguem posteriores à Vanilla estável.
