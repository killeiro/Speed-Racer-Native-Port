# Vanilla v17 — eliminar uniões repetidas de mip no snapshot GS

20/10/2026. **Nova compilação Windows nativa privada, com ganho repetido no alvo Skorost-1 e a validação gráfica preservada.** Três pares alternados passam de 58.32 para 59.89 FPS em média (+2.69%). Os deltas individuais são +2.78%, +2.60%, +2.70%. A aceitação de 60 FPS estáveis em todo o jogo continua aberta. Pacote/save v16 e históricos anteriores foram preservados.

## Causa e implementação

O caminho EE/VIF/VU/GIF chega ao renderer GS e a snapshot_batch. A v15 já reutilizava limites e compatibilidade do último descritor elegível, mas ainda unia os mesmos intervalos físicos de mip a cada primitiva. Com mip ativo, a função usa a região inteira do descritor: os intervalos não dependem do UV daquela primitiva. A união min/max de intervalos idênticos é idempotente.

A v17 pula somente essa repetição dentro da chamada, depois dos filtros de textura e reads_own_word. Trocar o descritor elegível força o cálculo; sem mip, o retângulo UV por primitiva continua sendo avaliado. Não há estado persistente entre chamadas nem relaxamento de hazards, formatos, wrap ou níveis de mip. Shaders, rasterização, comandos/parâmetros GPU, física, relógios, controles, filas e pacing não mudaram. 1x/legacy continuam padrão; a saída ordenada e a persistência da v16 são preservadas. A correção segue uma propriedade do código local; nenhuma implementação externa foi copiada.

Uma sonda temporária contou a carga entre presents 60 e 600 usando contador pertencente ao renderer. Em Skorost-1, 257.571.299 de 259.603.075 chamadas de união eram repetíveis; Skorost-2 tinha 175.348.407 de 177.008.100; Fuji-4, 4.907.778 de 5.269.172. São contagens do helper, não tempos nem porcentagens de ganho FPS. A sonda foi removida e os hashes restaurados antes dos testes do binário final.

Fonte privada: `9477221b4c219c35f9092f39f9bbdd2c9ee39556`. EXE exato medido/empacotado: `7b088cdaeb06838613a3e6344a23fb364eab8ab2d27eb7fd7c53156578fe8a3e`. A recompilação pura após remover as sondas produziu os mesmos bytes de código/dados; apenas timestamp COFF/checksum PE diferem (dois bytes no arquivo inteiro). O alvo final usa o EXE congelado das medições. Hashes e prova estão nas [métricas](vanilla-v17-metrics.json).

## Correção verificada

- **31/31 CTests**, 13,09 s. O fixture extrai a função real e a compara com o corpo congelado da v16: 6.786 casos, 1.115.619 primitivas e 5.628 snapshots positivos, com retornos, limites e payloads ordenados idênticos. Inclui mip0–6, escala1–3, 1.024 primitivas repetidas, descritores intercalados/ignorados, own-word, wrap e casos aleatórios.
- As derivações texture_range permanecem 594.495 em ambos; chamadas de união caem de 3.822.804 para 1.034.094 no fixture. Os contadores são apenas de teste.
- **696.942 verificações nativas novas**, em Skorost-1/2 e Fuji-4. Cada invocação compara retorno/limites e sufixos de comandos/parâmetros com a v16; três diagnósticos de 600 frames saem com 0. Não são benchmarks nem prova de todo o fluxo assíncrono.
- **12 pares novos de imagens nativas síncronas**, em seis ambientes, byte a byte idênticos à v16. Não são comparação com o PS2 original nem solução de serrilhado.
- **36 rotas curtas Class1**, 600 frames cada, e duas execuções na pasta final passam. Em todas as rotas, drain GS/GPU precede estatísticas e o join das threads ocorre antes da saída. Os sete cenários especiais de lifecycle da v16 são históricos; não foram todos repetidos como novos nesta etapa.

## Comparação de desempenho

Mesmo caminho/nome, checkpoint e entradas, 1x, Vulkan/Mailbox, WASAPI. Sete cenas, aquecimento AB e pares AB/BA/AB por cena: 14 aquecimentos e 42 janelas medidas de 600 VBlanks, descartando 60 iniciais. Sem build/sonda/captura/outro jogo do agente durante FPS; carga externa do host não foi controlada. A regra foi registrada antes da edição: Skorost-1 deve ganhar nos três pares, média ≥1%; nenhum controle pode perder >3% nos três pares. A candidata passou e só então seguiu para 36 rotas/empacotamento.

| Cena | v16 FPS | v17 FPS | Variação | p99 callback comum v16/v17, ms |
|---|---:|---:|---:|---:|
| Skorost-1 | 58.32 | 59.89 | +2.69% | 30.63 / 31.94 |
| Skorost-2 | 60.02 | 60.01 | -0.03% | 34.25 / 34.84 |
| Fuji-4 | 59.09 | 59.44 | +0.60% | 26.21 / 27.52 |
| Fuji-3 | 59.30 | 58.99 | -0.52% | 25.69 / 26.63 |
| Grand-Prix-0 | 60.00 | 59.96 | -0.07% | 34.34 / 36.50 |
| Thunderhead-0 | 60.02 | 60.00 | -0.04% | 32.75 / 32.97 |
| Aurora-3 | 59.99 | 59.97 | -0.04% | 32.67 / 32.15 |

O p99 usa os mesmos 500 callbacks depois dos 60 iniciais; a tabela mostra a média dos percentis por execução. **O p99 piora em seis das sete cenas**, incluindo Skorost-1 (30,63→31,94 ms), Fuji-4 (26,21→27,52 ms) e Grand Prix (34,34→36,50 ms). Aurora-3 melhora. Os intervalos >33 ms e os pares adversos também permanecem nas métricas. A candidata passou o critério de throughput; não é recomendação geral de fluidez nem solução de stutter. Esses callbacks não medem scanout ou latência física. A piora de p99 nos três controles da v16 anterior continua registrada e sem causa estabelecida. Os números de horários/iterações diferentes não devem ser somados ou tratados como comparação direta.

Ambas as versões já concluem o trabalho final antes de registrar estatísticas. Dos 21 pares, 21 têm todos os contadores agregados terminais iguais; maior delta absoluto de primitivas: 0.0000%. Totais iguais não provam identidade do fluxo GPU assíncrono completo. Todos os totais/prefixos estão nas métricas.

## Controle separado do pacing existente

A auditoria de host/window.cpp confirmou que o padrão espera enquanto a fila SDL contém mais de80ms de áudio; o modo deadline de host/frame_pacer.hpp já existe desde a [v8](vanilla-v8.md), opt-in após regressões em corridas. Depois da matriz e dos smokes, o mesmo EXE v17 foi comparado nos dois modos em Skorost-1, Fuji-4 e Grand Prix: seis aquecimentos e18 janelas medidas, pares AB/BA/AB,600VBlanks/descarte60 e prefixo comum500 callbacks. As condições de ausência de build/sonda/captura/outro jogo do agente e carga externa não controlada são as mesmas. Esta série separada não deve ser misturada com v16/v17.

| Cena | FPS legacy / deadline | p99 callback legacy / deadline, ms | p99 melhora nos três pares? |
|---|---:|---:|---|
| Skorost-1 | 59.46 / 59.78 | 29.38 / 27.58 | sim |
| Fuji-4 | 58.53 / 55.68 | 28.01 / 28.47 | não |
| Grand-Prix-0 | 58.85 / 59.72 | 39.76 / 30.81 | sim |

O filtro registrado antes desse controle exige melhora de p99 nos três pares das três cenas e nenhuma perda FPS >1% nos três pares de uma cena. Resultado: **não passou**. Fuji-4 perde4,88% de FPS na média, incluindo um par de−14,70%, e piora o p99 em dois pares. Grand Prix tem um baseline adverso de49,36ms de p99 em um par; a dispersão permanece registrada, sem atribuição causal à carga externa. Os nove pares mantêm os mesmos totais gráficos terminais, o que não prova o fluxo assíncrono completo. Todos os resultados foram retidos. Não houve implementação nova nem alteração do padrão: o pacote continua legacy. Mesmo passar esse filtro curto não certificaria cadência original, corridas completas, underruns físicos ou latência. O custo de throughput e a cadência precisam de aceites separados; a causa de cada piora não está estabelecida por este experimento.

## Matriz curta e pacote privado

Cada rota abaixo completou 600 VBlanks, com manobras, exit0 e o hash final. Esta matriz é cobertura curta Class1; não é corrida completa nem benchmark pareado entre versões.

| Rota | FPS simulado | p95 simulação, ms |
|---|---:|---:|
| Thunderhead-0 | 60.03 | 29.26 |
| Thunderhead-1 | 60.01 | 29.09 |
| Thunderhead-2 | 60.03 | 28.79 |
| Thunderhead-3 | 59.96 | 29.06 |
| Thunderhead-4 | 60.02 | 28.97 |
| Thunderhead-5 | 60.02 | 29.03 |
| Onuris-0 | 59.98 | 29.23 |
| Onuris-1 | 60.02 | 29.08 |
| Onuris-2 | 60.03 | 29.17 |
| Onuris-3 | 60.02 | 29.47 |
| Onuris-4 | 59.97 | 29.14 |
| Onuris-5 | 60.03 | 29.36 |
| Fuji-0 | 60.02 | 22.94 |
| Fuji-1 | 59.94 | 28.52 |
| Fuji-2 | 59.95 | 29.43 |
| Fuji-3 | 59.12 | 24.02 |
| Fuji-4 | 59.37 | 27.66 |
| Fuji-5 | 59.97 | 23.13 |
| Aurora-0 | 59.94 | 29.41 |
| Aurora-1 | 60.04 | 29.41 |
| Aurora-2 | 59.98 | 29.06 |
| Aurora-3 | 60.02 | 29.13 |
| Aurora-4 | 60.01 | 29.53 |
| Aurora-5 | 59.97 | 29.05 |
| Grand-Prix-0 | 60.01 | 29.04 |
| Grand-Prix-1 | 60.02 | 29.16 |
| Grand-Prix-2 | 60.02 | 29.44 |
| Grand-Prix-3 | 59.94 | 29.05 |
| Grand-Prix-4 | 60.02 | 29.27 |
| Grand-Prix-5 | 60.02 | 29.14 |
| Skorost-0 | 60.10 | 22.79 |
| Skorost-1 | 59.99 | 28.70 |
| Skorost-2 | 60.03 | 29.04 |
| Skorost-3 | 60.02 | 29.05 |
| Skorost-4 | 60.03 | 29.54 |
| Skorost-5 | 59.97 | 29.13 |

O pacote v17 preserva DLLs/licenças, dados legítimos preparados e uma cópia do save atual da v16. QA usa card separado. Duas execuções finais passam: 600 frames em corrida e 1.200 em boot/reabertura, PATH mínimo, cwd externo e descoberta dos dados/card. O card copiado foi restaurado após o smoke e a pasta v16 não foi escrita. Manifesto SHA256 acompanha o pacote. A ISO/ELF próprias permanecem privadas; não há ZIP público, código ou dados comerciais no GitHub.

## Continuação do roadmap

1. Investigar custos residuais GS/VU e as caudas de frame time sem misturar otimizações. A v17 fecha a repetição de uniões de mip, não todo o gargalo de Fuji/Skorost.
2. Validar voltas/corridas completas usando relógio vivo e referência original; ampliar classes2–4/Mirror e 30min. Provar resultado/save/readback e reabertura com QA separado; ampliar pause/restart no processo.
3. Completar cinco pares PS2/nativo a1x, classificar dither/CRTC/fog/filtro/serrilhado e só depois avaliar AA/escala/packs. A perda anterior de 8–13% em2x permanece válida no escopo dela.
4. Medir áudio/USB/Bluetooth físicos, testar outro Windows/GPU e IO Unicode/pasta protegida; fechar proveniência/licenças/CI antes de alpha distribuível.

[Roadmap](../../ROADMAP.md) · [Próximas tarefas](next-10-tasks.md) · [v16](vanilla-v16.md). GitHub documental, PR23 aberto e main inalterada.
