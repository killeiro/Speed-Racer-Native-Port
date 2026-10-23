# Vanilla v21 — diagnóstico de publicação VU/GS

20/10/2026. A equipe concluiu um diagnóstico automático separado das seis [sessões humanas v17](vanilla-v20.md#seis-sessões-da-equipe-no-exe-de-referência-v17). Não há versão jogável v21 nem ganho de FPS atribuído às sondas.

## O que foi separado

O host publica o frame antes de esperar pelo áudio. O pacote passa por EE→VU→renderer; a publicação pode bloquear na inserção do ring ou no limite de dois presents pendentes. A sonda temporária separa esses pontos, acumula esperas por capacidade por produtor e registra timestamps monotônicos e contadores CPU de cada thread nas fronteiras de apresentação. Predicados, atomics, notificações, pacotes e profundidade permanecem iguais.

| Cena | CPU VU, ms/frame | CPU renderer, ms/frame | Inserção EE, ms | Espera limite2 presents, ms |
|---|---:|---:|---:|---:|
| Fuji-4 | 17.18 | 15.57 | 0.0134 | 6.11 |
| Skorost-1 | 16.23 | 16.30 | 0.0138 | 4.29 |
| Thunderhead-0 | 12.54 | 12.64 | 0.0134 | 0.02 |

São médias de dois diagnósticos por cena, descartando60 registros iniciais; contadores CPU não são tempo puro de GPU. **Nenhum dos seis diagnósticos teve espera por capacidade nos rings EE/VU.** Em Fuji, VU17,17/17,19ms excede o orçamento16,67ms de60FPS, enquanto o renderer usa15,66/15,48ms. A entrega VU após publicação EE fica em cerca34–35ms, e renderer começa cerca1,2ms após encaminhamento VU. Em Skorost ambos os produtores usam cerca16,2ms e a espera após encaminhamento VU aumenta para13,6–13,9ms. Thunderhead fica em12,4–12,7ms CPU e quase não espera no limite de presents. Os timestamps são depois da publicação e incluem uma pequena corrida de amostragem; diferenças negativas pequenas ficam retidas, não são latência física.

## Controle e limites

O protocolo foi escrito antes da instrumentação: três cenas,600VBlanks de aquecimento baseline e900VBlanks A/B/B/A no mesmo caminho de EXE, checkpoint, QA card e comandos,1x/legacy/WASAPI.15 execuções terminam normalmente. **6/6 pares de contadores terminais coincidem**, sem provar identidade do fluxo GPU completo. A variação média de FPS diagnóstico/referência é+1,88% Fuji,+0,23% Skorost,+0,11% Thunderhead, dentro da tela prévia de validade±10%; esses percentuais não são ganhos de otimização. A carga externa continua não controlada.

31 testes passam. Uma proteção de preparação detectou texto de edição ambíguo antes de compilar/executar; os bytes originais foram restaurados e a tentativa fica retida. A versão corrigida prepara as substituições em memória antes de gravar. Depois da captura, todos os fontes originais e o header temporário são restaurados/removidos, a recompilação pura confere todos os bytes com v17 exceto timestamp COFF/checksum PE e o EXE congelado exato é recolocado. Nenhuma sonda foi promovida.

Conclusão delimitada: reduzir trabalho VU em Fuji e preparação GS em Skorost é mais sustentado por estes dados que aumentar capacidade de fila ou ajustar outro bloco de áudio. A [candidata v22](vanilla-v22.md) testa uma rejeição mais barata de variantes VU, sempre com validação completa para aceitar. Corridas/relógio individual/save/reabertura, classes/Mirror/30min contínuos, fidelidade original1x/serrilhado, áudio/input físicos e outro PC continuam abertos. Nenhuma nova rodada manual do mesmo EXE é solicitada.

[Métricas](vanilla-v21-metrics.json) · [Roadmap](../../ROADMAP.md). GitHub documental; atribuição pública: a equipe.
