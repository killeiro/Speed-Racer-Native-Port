# Vanilla v15 — custo de snapshots GS e novo pacote local

20/10/2026. **Uma alteração limitada na preparação GS melhora Skorost-1 de 52,98 para 55,91 FPS simulados (+5,54%) nos três pares medidos.** O novo executável portátil foi compilado e recebe somente essa alteração de runtime sobre a base v13. Fuji muda pouco e os controles mantêm picos irregulares; o aceite de 60 FPS e de jogo completo continua aberto. O experimento Q v14 permanece isolado.

## Causa sustentada e implementação

O perfil anterior apontava preparação GS em Skorost. Uma sonda temporária subdividiu flush_batch: limites/contagens de tiles, cópias/decode, metadados/prefixos, preenchimento das listas, snapshot e dispatch. Nos lotes amostrados a 1/256, snapshot representa cerca de 55,8% do tempo medido dessas etapas em Skorost-1, 48,6% em Skorost-2 e 20,2% em Fuji-4. São custos amostrados de flush, não percentuais de um frame inteiro ou uma previsão de FPS. A sonda foi retirada antes das medições finais.

Dentro de snapshot_batch, cada primitiva repetia a derivação dos níveis mip, limites de textura e compatibilidade PSM das escritas para o mesmo descritor imutável. O novo cache guarda apenas o último descritor durante aquela chamada e refaz os cálculos quando o índice muda. Não persiste entre chamadas. Limites de leitura dependentes da primitiva, own-word, todos os mips, wrap físico, interseções, ordem e parâmetros dos comandos permanecem nos mesmos caminhos. Não há mudança de shader, cobertura, batching raster, relógio, física, atomics, controles ou pacing. 1x e pacing legacy continuam padrão.

## Correção e artefato

- 27/27 CTests passaram. O teste novo compila o código GPU real e uma cópia congelada da função anterior: 6.747 casos, 1.078.317 primitivas e 5.589 snapshots positivos, com retornos, limites e comandos/parâmetros ordenados idênticos. Chamadas de texture_range caem de 2.554.497 para 592.323 (76,81%) **nesse teste**, não no jogo inteiro.
- Em três execuções nativas diagnósticas, 697.211 decisões de snapshot conferem com a função anterior, incluindo parâmetros e dispatches ordenados: 212.593 em Skorost-1,211.582 em Skorost-2 e 273.036 em Fuji-4. A versão instrumentada é separada dos testes de FPS.
- 12 pares de capturas síncronas nativas em seis ambientes são byte a byte idênticos. Isso verifica regressão nativa/nativa, não fidelidade PS2 original.
- O rebuild puro após retirada das sondas é idêntico em todos os bytes exceto timestamp COFF e checksum PE (quatro bytes diferentes nesses dois campos); código, dados, seções e símbolos são iguais. O pacote preserva o EXE exato medido. Fonte privada: `ba54286518d091c66590315ab245b6a5c6ca9a1b`. Executável portátil: `a2101e11bafb9da8616fb51d29d6217a7ef4c36e2c25f1d80de2e9708e5a7b7e`. Hashes dos quatro arquivos e dos artefatos estão nas [métricas](vanilla-v15-metrics.json).

## Comparação de desempenho

Mesmo caminho/nome de EXE, checkpoint e entradas; 1x, Vulkan/Mailbox e WASAPI. Cada cena recebe aquecimento AB e três pares AB/BA/AB, 600 VBlanks por execução, descarte inicial de 60. 14 aquecimentos e 42 janelas medidas, sem compilação, capturas, sondas ou outro jogo do agente durante FPS. Carga externa da máquina não foi controlada. Todos os resultados foram retidos; os percentis abaixo são médias dos percentis por execução.

| Cena | Base FPS | v15 FPS | Variação | Callback p99 base/v15, ms |
|---|---:|---:|---:|---:|
| Skorost-1 | 52.98 | 55.91 | +5.54% | 33.92 / 31.97 |
| Skorost-2 | 60.12 | 60.02 | -0.18% | 31.08 / 32.26 |
| Fuji-4 | 55.80 | 56.03 | +0.40% | 27.08 / 26.85 |
| Fuji-3 | 57.38 | 57.62 | +0.42% | 26.33 / 25.56 |
| Grand-Prix-0 | 60.00 | 59.98 | -0.04% | 34.06 / 34.12 |
| Thunderhead-0 | 60.02 | 60.00 | -0.04% | 33.36 / 33.09 |
| Aurora-3 | 60.02 | 59.98 | -0.08% | 31.55 / 32.89 |

Skorost-1 melhora nos três pares (+0,80%,+6,29%,+9,82%); a dispersão limita a precisão do efeito. P95/p99 da simulação passam 29,76/34,97→27,98/31,60 ms. Intervalos de callback acima de 33,33 ms caem em média 8→3,67. Ainda roda abaixo de 60 na cena-alvo. Fuji-3/Fuji-4 têm diferenças pequenas, inconclusivas. Skorost-2 e Aurora-3 pioram no callback p99; Thunderhead-0 piora no p95; esses resultados não foram descartados. Nenhum controle perde mais de 3% em todos os pares, atendendo a regra local previamente registrada, sem fechar fluidez global.

Um diagnóstico Win32 separado de 360 frames por binário mede CPU do renderer 17,23→16,28 ms/frame e 43,09→41,26 milhões de ciclos/frame. O tempo de usuário é 5,6875 s nos dois; a parcela kernel muda 1,43→0,48 ms/frame. VU permanece 16,23 e EE 10,24 ms/frame. Uma janela por variante e essa diferença user/kernel impedem atribuir toda a redução ao cache. Não são pares FPS nem prova estatística de causalidade.

## Limitação dos contadores finais e encerramento

Somente 9 dos 21 pares medidos têm todos os contadores agregados finais iguais; os demais têm diferenças pequenas, com maior delta absoluto de primitivas de 0,3231%. Não se afirma identidade do fluxo GPU assíncrono completo. Os checks exatos cobrem entradas e saídas por chamada, e as imagens são síncronas.

A auditoria encontra uma limitação relevante: system::run emite gs::stats ao sair do loop EE; run_window usa worker VU destacado, para o loop de render quando EE termina, junta EE e encerra por std::_Exit. Não há nesse caminho um join VU e drain final explícito de todas as filas; gpu wait_idle sozinho não drena produtores. Isso limita o significado dos agregados e o aceite de saída/save. Atribuir cada diferença exclusivamente a essa causa seria prematuro. A v15 não altera esse lifecycle; corrigir e testar drain/join passa a ser uma prioridade separada.

## 36 rotas e pacote final

As 36 rotas Class 1 (seis ambientes × seis variantes) completaram 600 VBlanks cada, com manobras, exit 0 e o hash do candidato. São janelas de checkpoints, não corridas completas nem comparação pareada de desempenho:

| Rota | FPS simulado | p95 simulação, ms |
|---|---:|---:|
| Thunderhead-0 | 60.02 | 29.53 |
| Thunderhead-1 | 60.02 | 29.46 |
| Thunderhead-2 | 59.96 | 29.06 |
| Thunderhead-3 | 59.97 | 29.02 |
| Thunderhead-4 | 60.02 | 29.58 |
| Thunderhead-5 | 60.02 | 29.44 |
| Onuris-0 | 60.03 | 29.14 |
| Onuris-1 | 60.05 | 29.23 |
| Onuris-2 | 59.96 | 29.18 |
| Onuris-3 | 59.97 | 29.14 |
| Onuris-4 | 60.04 | 29.05 |
| Onuris-5 | 59.97 | 29.26 |
| Fuji-0 | 59.23 | 21.54 |
| Fuji-1 | 59.97 | 21.83 |
| Fuji-2 | 59.43 | 22.52 |
| Fuji-3 | 54.86 | 24.00 |
| Fuji-4 | 57.04 | 23.90 |
| Fuji-5 | 55.91 | 24.71 |
| Aurora-0 | 59.96 | 29.22 |
| Aurora-1 | 57.91 | 29.46 |
| Aurora-2 | 59.90 | 29.51 |
| Aurora-3 | 60.02 | 28.54 |
| Aurora-4 | 59.96 | 29.52 |
| Aurora-5 | 60.02 | 29.52 |
| Grand-Prix-0 | 60.03 | 29.03 |
| Grand-Prix-1 | 59.65 | 29.03 |
| Grand-Prix-2 | 59.95 | 29.42 |
| Grand-Prix-3 | 59.96 | 29.18 |
| Grand-Prix-4 | 59.96 | 29.34 |
| Grand-Prix-5 | 60.02 | 29.47 |
| Skorost-0 | 58.81 | 23.79 |
| Skorost-1 | 56.13 | 28.92 |
| Skorost-2 | 59.99 | 28.91 |
| Skorost-3 | 59.44 | 29.50 |
| Skorost-4 | 60.02 | 29.07 |
| Skorost-5 | 60.02 | 29.54 |

O novo pacote **privado local v15** contém o EXE GUI, DLLs/licenças e uma cópia dos dados legítimos já preparados. O save do pacote anterior foi copiado e preservado; os checkpoints de QA usam outro card. Duas execuções na pasta final passaram: 600 frames de corrida e 1.200 de boot/reabertura, com PATH mínimo, cwd externo e descoberta dos dados locais. Isso verifica abertura/descoberta/saída limitada, não gravação e leitura de resultado de corrida. O pacote anterior, o EXE/ZIP v13 original e a ISO fonte foram preservados. Não foi criado ZIP público; o pacote local contém a ISO/ELF próprias e não serve para enviar aos amigos.

## Próximas metas

1. Continuar preparação/binning GS em Skorost e custos de kernels/validação VU em Fuji; somente promover alterações com diferenciais exatos e pares finais. Manter as regressões históricas v12/v14 visíveis.
2. Implementar encerramento com donos explícitos, pedido atômico e drain/join; provar ausência de perda/deadlock e verificar resultado/save/reabertura.
3. Usar relógio vivo em voltas e corridas completas; incluir classes 2–4/Mirror e 30 min, e confirmar cadência original antes de fechar throughput/pacing.
4. Comparar cinco pares PS2 original/nativo a 1x; investigar filtragem/dither/fog/CRTC e AA conforme evidência. 2x já custa 8–13% no checkpoint anterior e continua opcional. Packs/skins não foram integrados.
5. Medir underruns e latência física USB/Bluetooth; testar outro PC/GPU, Unicode IO/pastas protegidas e concluir proveniência/licenças/CI antes de uma alpha distribuível.

[Roadmap](../../ROADMAP.md) · [Próximas dez tarefas](next-10-tasks.md) · [ISO recuperada e escalas](restored-media-v1.md) · [v14 isolado](vanilla-v14.md). O GitHub recebe apenas documentação/métricas sanitizadas, sem fonte, binário, imagem ou dados do jogo; PR23 continua aberto e main não muda nesta atualização.
