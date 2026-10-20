# Vanilla v16 — encerramento ordenado e persistência do card

20/10/2026. **Novo executável nativo privado local, com correções de encerramento e gravação pendente.** A v16 termina o trabalho EE/VU/GS antes de sair e preserva o card anterior quando a substituição falha. Esta etapa trata de estabilidade e da confiabilidade das medições; não implementa uma nova otimização de FPS. As quedas restantes e o aceite Vanilla continuam abertos. O pacote v15 e seu save foram preservados.

## Auditoria e correção

| Caminho | Antes | v16 |
|---|---|---|
| Fechar janela | Main escrevia diretamente no halt/reason da EE | Main publica pedido atômico; EE consome e mantém a propriedade do halt/reason |
| VU/GS na saída | Worker VU destacado e loop principal terminava quando EE retornava | Pacote terminal segue a mesma FIFO EE→VU→GS; VU conclui/encaminha e retorna; renderer conclui o trabalho GPU e confirma |
| Estatísticas/retorno | Estatísticas podiam observar trabalho incompleto; saída por _Exit | EE espera a confirmação antes das estatísticas; host junta EE/VU e retorna normalmente |
| Card | Espera de 50 frames; dirty apagado antes de comprovar gravação; arquivo original truncado | Flush final forçado; gravação completa em arquivo irmão .pending; substituição verificada; dirty só é apagado após sucesso |

A barreira final exige que EE não publique novos trabalhos depois dela. A thread principal continua consumindo GS enquanto EE espera; isso permite que as duas filas liberem espaço sem um join prematuro. O pop terminal VU ocorre antes do encaminhamento e a confirmação GS ocorre depois do pop e da espera GPU. A chamada de conclusão é idempotente para o produtor EE. Erros antes de run(), como ELF/estado inválidos, também passam pelo encerramento das filas no wrapper nativo. Os caminhos síncrono e sem worker VU permanecem disponíveis.

O card mantém a espera usual durante o jogo e ganha flush forçado ao terminar run(). Em Windows, o arquivo .pending é fechado e substitui o destino com MoveFileExW; falhas de abertura/escrita/fechamento/substituição mantêm os dados dirty para nova tentativa durante a execução e não disparam o callback de sucesso. O retorno de run() sinaliza falha de persistência. O retry foi testado no mesmo processo; não há recuperação automática de .pending no próximo boot. A referência da [Microsoft](https://learn.microsoft.com/en-us/windows/win32/api/winbase/nf-winbase-movefileexw) descreve os flags REPLACE_EXISTING/WRITE_THROUGH e o retorno da operação. A certificação de save de resultado real e de durabilidade diante de corte de energia continua aberta.

Como referência arquitetural, o [VMManager do PCSX2](https://github.com/PCSX2/pcsx2/blob/master/pcsx2/VMManager.cpp) espera VU/GS nas transições de pausa, e [MTGS::ShutdownThread](https://github.com/PCSX2/pcsx2/blob/master/pcsx2/MTGS.cpp) usa pedido de saída, notificação e join. Isso sustenta a necessidade de propriedade e sincronização explícitas; o protocolo específico foi derivado das nossas filas. O executável continua usando o runtime nativo do projeto.

Não houve mudança de shader, snapshot GPU, física, relógios convidados, implementação de controles, ordem dos atomics das filas ou pacing. Escala 1x e pacing legacy continuam padrão; Q v14 permanece isolado. Fonte privada: `359b05304f296995a1ba9edc1238f51e58ab0138`. EXE exato medido e empacotado: `1ea34f04e62fae0c4d12cab2932df3e10b50b4bb18e116797c9347d504aa7ac9`. Os hashes dos 11 arquivos estão nas [métricas](vanilla-v16-metrics.json).

## Validação executada

- **31/31 CTests**, incluindo os 27 anteriores e quatro novos. Foram recompilados os alvos de teste e o portátil; não houve sonda temporária no candidato.
- O harness usa o worker VU e consumidor GS reais com filas de 256 bytes: 4.096 pares GIF/present por modo completo, backpressure/wrap, NOPs VIF, payload final, filas vazias, conclusão idempotente, join e pedido atômico. Inclui modo direto e fila vazia.
- O teste de card usa o handler real de comandos SIO2 e arquivos sintéticos: limiar 49/50, flush forçado, duas falhas de filesystem, preservação do card anterior, dirty/retry, callbacks e leitura posterior. Isso não é uma corrida completa do jogo.
- **Sete cenários nativos**: boot limitado, corrida com VU, sem VU, síncrona, ELF inválido, estado ausente e fechamento pelo X do Windows. As cinco saídas normais foram 0; as duas falhas de carregamento retornaram 1. Nos cenários threaded, os logs confirmam conclusão GS/GPU e join; estatísticas finais vêm depois da barreira. O fechamento real foi feito pela skill computer-use, fora das medições FPS.
- **12 pares novos de imagens nativas síncronas**, em seis ambientes, byte a byte idênticos à v15. Não constituem comparação PS2 original/nativo. Os 697.211 checks nativos de snapshot da v15 são históricos, não um novo probe nesta etapa.
- **36 rotas curtas Class 1** e duas execuções na pasta final passaram. Corridas completas, classes 2–4/Mirror e 30 minutos continuam pendentes.

## Controles de desempenho

Mesmo caminho/nome, checkpoint e entradas; Vulkan/Mailbox, WASAPI e 1x. Cada cena recebeu aquecimento AB e três pares AB/BA/AB, 600 VBlanks com descarte inicial de 60: seis aquecimentos e 18 janelas medidas. Não houve build, sonda, captura ou outro jogo do agente durante FPS; carga externa da máquina não foi controlada. A regra registrada para esta correção não exige ganho e rejeita perda acima de 3% em todos os pares de qualquer controle. Todos os resultados foram retidos.

O drain pode consumir presents que a v15 deixava pendentes. Por isso o p99 comparável usa um prefixo comum de 500 callbacks após descartar os primeiros 60. As métricas brutas do helper, que incluem caudas de cobertura diferente, também foram preservadas. Esses intervalos não medem scanout/latência física. Os percentis da tabela são médias dos percentis por execução.

| Cena | v15 FPS | v16 FPS | Variação | p99 callback, prefixo comum v15/v16, ms |
|---|---:|---:|---:|---:|
| Skorost-1 | 58.53 | 58.15 | -0.65% | 30.20 / 30.71 |
| Fuji-4 | 59.48 | 59.66 | +0.30% | 25.45 / 27.23 |
| Grand-Prix-0 | 60.02 | 60.01 | -0.00% | 34.70 / 34.97 |

Nenhum controle perde mais de 3% em todos os três pares. O p99 do prefixo comum piora nas três cenas desta série, inclusive Fuji em cerca de 1,77 ms; não há alegação de melhora de fluidez. Pequenas diferenças, regressões de percentis e carga externa impedem alegar um ganho geral. Esta série não deve ser comparada diretamente às médias de outros horários/iterações. O objetivo de 60 FPS estáveis permanece aberto.

## Contadores terminais

Skorost-1: iguais nas três execuções v16; Fuji-4: iguais nas três execuções v16; Grand-Prix-0: iguais nas três execuções v16. Entre v15/v16, 0 de 9 pares têm todos os contadores terminais iguais; o maior delta absoluto de primitivas é 0.6345%. A v16 passa a incluir o trabalho VU/GS e os lotes GPU finais antes das estatísticas. A mudança de totais não é uma redução/aumento de carga por otimização e não deve ser usada como benchmark. Mesmo totais repetidos não provam identidade completa do fluxo GPU assíncrono; os resultados de cada par permanecem nas métricas.

## Matriz curta e pacote

Cada rota abaixo completou 600 VBlanks com manobras, exit 0 e o hash do candidato. É cobertura de checkpoints Class 1, sem corrida completa ou comparação pareada de FPS:

| Rota | FPS simulado | p95 simulação, ms |
|---|---:|---:|
| Thunderhead-0 | 60.01 | 29.44 |
| Thunderhead-1 | 59.95 | 29.57 |
| Thunderhead-2 | 60.01 | 29.57 |
| Thunderhead-3 | 60.02 | 28.51 |
| Thunderhead-4 | 59.95 | 29.53 |
| Thunderhead-5 | 60.02 | 29.24 |
| Onuris-0 | 59.99 | 29.58 |
| Onuris-1 | 60.02 | 29.49 |
| Onuris-2 | 60.03 | 29.54 |
| Onuris-3 | 60.02 | 29.27 |
| Onuris-4 | 59.97 | 29.25 |
| Onuris-5 | 60.02 | 29.51 |
| Fuji-0 | 59.55 | 21.90 |
| Fuji-1 | 60.02 | 28.92 |
| Fuji-2 | 60.02 | 28.02 |
| Fuji-3 | 58.87 | 23.15 |
| Fuji-4 | 59.54 | 23.33 |
| Fuji-5 | 59.60 | 22.85 |
| Aurora-0 | 60.02 | 29.04 |
| Aurora-1 | 60.02 | 29.18 |
| Aurora-2 | 59.96 | 29.09 |
| Aurora-3 | 60.02 | 29.07 |
| Aurora-4 | 60.02 | 29.24 |
| Aurora-5 | 59.97 | 28.98 |
| Grand-Prix-0 | 60.03 | 29.13 |
| Grand-Prix-1 | 59.87 | 29.58 |
| Grand-Prix-2 | 60.03 | 29.53 |
| Grand-Prix-3 | 60.01 | 29.50 |
| Grand-Prix-4 | 60.02 | 29.44 |
| Grand-Prix-5 | 60.02 | 29.11 |
| Skorost-0 | 60.03 | 29.05 |
| Skorost-1 | 58.72 | 29.53 |
| Skorost-2 | 60.02 | 29.07 |
| Skorost-3 | 60.02 | 28.95 |
| Skorost-4 | 60.02 | 29.55 |
| Skorost-5 | 60.03 | 29.31 |

O novo pacote privado local v16 contém DLLs/licenças, dados legítimos preparados e uma cópia preservada do save v15. Os checkpoints de QA usam outro card; o card copiado foi restaurado após o smoke. Duas execuções na pasta final passaram: 600 frames na corrida e 1.200 no boot/reabertura, com PATH mínimo/cwd externo/dados locais, drain GPU e join. O pacote anterior/save, EXE/ZIP v13, ISO original e os 24 arquivos inicialmente sujos foram preservados. O pacote contém a ISO/ELF próprias e continua privado, sem ZIP público ou upload de código/dados comerciais.

## Próximos marcos

1. Retomar custos residuais GS/VU em Skorost/Fuji, com os contadores finais agora após a barreira; manter regressões históricas v12/v14 visíveis e exigir pares finais para novas otimizações.
2. Validar voltas/corridas completas, resultado/save/readback e reabertura; ampliar classes 2–4/Mirror e sessão de 30 min, usando o relógio vivo e referência de cadência original.
3. Completar cinco pares PS2/nativo a 1x e classificar filtragem/dither/fog/CRTC/serrilhado antes de AA/escala/packs. A medição anterior de 2x e suas perdas continua válida no seu escopo.
4. Medir underruns reais e latência USB/Bluetooth; testar outro Windows/GPU, IO Unicode/pasta protegida e fechar proveniência/licenças/CI antes de distribuir uma alpha.

Pedido atômico/drain/join de saída normal agora têm implementação e testes; pause/restart dentro do mesmo processo, todos os erros possíveis, resultado real e sessões longas continuam abertos. [Roadmap](../../ROADMAP.md) · [Próximas tarefas](next-10-tasks.md) · [v15](vanilla-v15.md). A atualização GitHub é documental: PR23 permanece aberto, main inalterada.
