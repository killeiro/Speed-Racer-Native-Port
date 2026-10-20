# ISO recuperada — boot portátil, controle Skorost e escala1x/2x

20/10/2026, checkpoint do trabalho iniciado em19/10. **O bloqueio de mídia foi removido.** A ISO legítima recuperada passou pelo preparador de produção, o executável portátil fez boot real e quatro cenas receberam comparação de resolução. A base continua v13; não houve alteração/recompilação nativa nem promoção do experimento Q v14 ou de2x como padrão.

## Dados e boot reais

O preparador leu a origem sem modificá-la e criou uma nova cópia privada de2.877.095.936bytes. SYSTEM.CNF/ELF correspondem à versão USA auditada. SHA-256 ISO: `a3bd02ad919c744b2dac65e1f9a4e6cdf3804d14678ca00d44ca1190084e3755`; ELF: `6d6b8e257c7019e859fa5c54276800a3566680289420a664a83609088edc7fda`. Hashes da origem/cópia/extração foram conferidos; o disco completo agora foi usado no runtime real, não uma fixture artificial.

O GUI portátil, SHA-256 `8bb240d0053670750beb4764d29e2873501732b054d249b0b275b7965c66330f`, completou1.200VBlanks com quatro DLLs locais, PATH apenas do sistema, cwd diferente, dados descobertos junto ao EXE e card privado explícito. O log indexa99 arquivos, lê assets do disco, monta o card e encerra no limite previsto. Isso fecha o boot local com mídia real, não a certificação de outro PC ou uma corrida completa.

O primeiro verificador usou uma substring incorreta para o limite de frames. O processo já havia retornado0 e o log/CSV comprovavam1.200; corrigimos a verificação dos arquivos existentes sem repetir ou sobrescrever a execução. Na primeira captura, o harness deixou de criar a pasta que o dumper espera: o jogo terminou0 sem imagem. Essa tentativa também foi preservada; as oito capturas finais usam outra pasta. Nenhum desses erros do harness é classificado como defeito do jogo.

## Controle nativo da v14

Retomado o controle declarado antes da indisponibilidade do disco: aquecimentoB/A e três paresBA/AB/BA, mesmo nome/caminho do EXE, mesmo estado/inputs,600VBlanks por janela,60 iniciais descartados. B=v14 isolada; A=v13. O caminho de dados agora usa a cópia legítima local; histórico e warm-up antigo com disco ausente foram preservados.

Skorost-1: **53.89→53.26 FPS (-1.16%)**. Paresv13/v14:53,60/52,79;54,71/53,27;53,35/53,72. A perda histórica44,08→33,75FPS não se repetiu com a mesma intensidade. Isso não explica sua causa, não autoriza descartá-la nem estabelece benefício geral. A v14 continua sem promoção.

Depois dos pares, o binário candidato exato passou **89,922 verificações Q** contra a referência durante600frames reais. Diagnósticos separados identificaram renderer/EE/VU antes do intervalo de contadores e mediram360frames sem suspensão de instruções dentro desse intervalo:

| Thread | v13 CPU ms/frame | v14 CPU ms/frame |
|---|---:|---:|
| renderer | 17.97 | 17.75 |
| vu | 17.01 | 16.06 |
| ee | 10.24 | 10.42 |

São dois intervalos diagnósticos, não uma nova comparação FPS. O renderer já ocupa aproximadamente18ms de CPU por frame, acima do orçamento de16,7ms de60FPS; a VU também tem custo elevado. A amostragem intrusiva separada da v14 concentra28,3% das amostras do renderer em emit_all/flush_batch inline,18,2% em draw e12,3% no CRT. A inferência útil é priorizar preparação/binning GS e conservar investigação da VU em Fuji; não atribuir a regressão antiga à carga externa ou à manutenção de Q sem evidência.

## Serrilhado e custo da resolução

Mesmo GUI portátil, Vulkan/Mailbox, WASAPI, i5-12400/RTX3060, Windows11Pro26200, plano Equilibrado. Cada cena teve aquecimento1x/2x e três paresAB/BA/AB: **8warm-ups e24janelas medidas**,600VBlanks cada,60 descartados. Não rodaram build, sampler ou outro jogo de agente em paralelo; a carga geral da máquina não foi isolada. Percentis completos e todas as amostras estão nas métricas.

| Cena | 1x FPS | 2x FPS | Variação | Velocidade simulada1x /2x |
|---|---:|---:|---:|---:|
| Fuji-4 | 55.18 | 49.10 | -11.02% | 91.97% / 81.83% |
| Skorost-1 | 53.67 | 46.66 | -13.06% | 89.45% / 77.77% |
| Skorost-2 | 60.17 | 55.30 | -8.10% | 100.29% / 92.17% |
| Grand-Prix-0 | 59.82 | 54.04 | -9.66% | 99.70% / 90.07% |

2x custa entre8% e13% de FPS nestas cenas. Não se aplica a regra de dividir FPS por quatro, embora o número de amostras e alguns buffers cresçam4x. P95 menor em algumas janelas2x não compensa a simulação mais lenta. O valor ligeiramente acima de60 em uma amostra curta não significa cadência original confirmada ou60FPS estáveis no jogo inteiro. Intervalos são callbacks anteriores à apresentação, não scanout; fila SDL vazia não prova underrun de hardware.

As **oito imagens** foram capturadas depois, em modo síncrono, com o mesmo estado/input/frame11200:640×479 em1x e1280×958 em2x. Foram inspecionados carro, pista, HUD e efeitos visíveis nesses checkpoints.2x acrescenta amostras nas bordas, mas mantém texturas/HUD originais de baixa resolução e tramas/linhas finas ainda visíveis; não é um remaster nem comprovação de paridade PS2. Precisamos de pares com a referência original para classificar diferenças de fog/dither/CRTC/feedback. Nenhuma imagem ou asset foi publicado. **1x permanece padrão**, e não houve integração de pack HD/skin ou novo AA.

## Pacote local utilizável

Foi montada uma pasta privada `SpeedRacer-Portable-local-v1`, com o GUI portátil existente, quatro DLLs, avisos de licença, a própria ISO/ELF recuperadas e uma cópia do card de QA anterior. Não substitui os saves/pacotes de desenvolvimento. Duas execuções dessa pasta, com cwd diferente e PATH mínimo, completaram600frames de corrida por checkpoint e1.200de reabertura. Sem argumentos de ELF/disco/card, o log confirma `data/` e `saves/speedracer.ps2` junto ao EXE. As duas saídas são0; isso verifica descoberta do card e encerramento limitado, **não gravação de resultado ou save completo**.

É um pacote experimental local para o mantenedor, com jogo real executado; **não é alfa pública ou pacote para enviar a amigos**, pois contém os dados locais e os critérios de distribuição/QA ainda estão abertos. Não foi criado ZIP de release. Basta abrir seu SpeedRacer.exe local;2x não foi ativado. A integração de controle e o subsistema GUI existentes foram preservados; dispositivos físicos ficaram desativados só nos subprocessos de automação.

## Roadmap após a recuperação

1. P0: detalhar o perfil dentro de flush_batch/add_spans/listas de tiles e validar uma redução de preparação GS contra payloads congelados. Máscaras PSM derivadas podem ser uma hipótese menor de cache; não se presume que expliquem os28,3% de emit_all. Exigir ganho repetido em Skorost e controles em Fuji/GrandPrix antes de promover código.
2. P0: preservar os resultados adversos v12/v14, explicar o que for reproduzível com CPU/ciclos e avançar corridas completas com relógio vivo, classes2–4/Mirror e cadência original.
3. P0/P1: fechar pares original/nativo1x, dither/CRTC/fog/feedback; reavaliar2x só com custo e efeitos aceitáveis.
4. P1: resultados/saves/reabertura, pause/restart/shutdown,30min, underruns reais, latência física e outro Windows/GPU. Boot local já passou; PC limpo, IO Unicode do jogo e pasta protegida continuam abertos.
5. P1: proveniência/empacotamento e critérios da alfa de amigos. A recuperação remove a dependência de mídia; não recalibra sozinha as faixas de prazo de baixa confiança sem corrida completa e QA independente.

Fontes/runtime e v13EXE/ZIP e todo o bundle anterior foram conferidos por hash. Os26 CTests e52 testes sintéticos do preparador continuam evidência histórica, sem repetição nesta etapa que não alterou runtime. GitHub recebe somente documentos/métricas; PR23 aberto, main e issues de aceite preservadas. [Métricas](restored-media-v1-metrics.json) · [Próximas dez tarefas](next-10-tasks.md) · [Roadmap](../../ROADMAP.md) · [Prontidão](release-readiness-and-graphics.md).
