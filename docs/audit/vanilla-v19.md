# Vanilla v19 — seleção VU com rejeição adaptativa

20/10/2026. **Experimento não promovido; fonte/EXE exatos v17 restaurados.** A meta prática da equipe é uma Vanilla estável perto de58–60FPS, com quedas breves toleráveis, sem exigir60 cravados. Essa meta não altera física, relógios ou efeitos e não anula o resultado negativo do experimento de áudio v18.

## Corrida humana de Fuji

A equipe relata vitória e engasgos ao longo da pista. A sessão v17 de controle físico registrou18.815VBlanks em327,11s incluindo abertura. Após60 amostras iniciais:57,72FPS de simulação e96,20% da velocidade nominal por ciclos EE. Dos65 blocos temporais de aproximadamente5s,12 ficam abaixo de55FPS; o pior registra50,02FPS.41 blocos ficam em58FPS ou acima. A posição geográfica na pista, teclas/foco e o instante de término não foram traçados; esses são blocos temporais da sessão, não um mapa de curvas ou um benchmark pareado.

No pior bloco, entre aproximadamente165–170s, o relógio de cena e a velocidade EE avançam ambos a cerca de83% do tempo real. A espera média de publicação é9,92ms e a de pacing0,001ms. Isso demonstra um trecho limitado por throughput nesse runtime; a fila de áudio não está impondo aquela espera. Na sessão inteira, o relógio de cena soma305,32s em325,77s de parede. Esse campo continua distinto do cronômetro individual e não confirma a cadência do PS2 original.

O callback anterior à apresentação tem p99 de31,61ms,95 intervalos acima de33,333ms e máximo109,61ms. Houve673 amostras de fila de áudio vazia; não são contadores de underrun físico. A sessão sai0 com drain/join e os hashes dos cards original/QA preservados. A vitória é relato direto; tela de resultado e save/readback ainda não foram verificados de forma independente.

## Nova pilotagem: candidata v19 e vitória relatada

A equipe relata vitória em Fuji a bordo do Mach 6, largando em último. O controle Xbox 360 é reconhecido na porta 1; não há comandos sintéticos ou limite de frames. A sessão dura 318,53 s incluindo abertura e registra 18.790 VBlanks. Após 60 amostras iniciais: **59,20 FPS de simulação**, 98,67% da velocidade nominal por ciclos EE, 55/63 blocos temporais em pelo menos 58 FPS; dois abaixo de 55, pior de 49,42 FPS entre aproximadamente 115–120 s. Nesse bloco a publicação espera 9,74 ms em média e o pacing 0,0012 ms: ainda há limitação de throughput. Não há trace de foco/posição geográfica que permita identificar uma curva ou atribuir toda a queda ao runtime.

Callback p99: **32,05 ms**, 112 intervalos acima de 33,333 ms, dois acima de 50 e um acima de 100; máximo 126,20 ms. A fila de áudio tem 225 amostras zero, sem contagem de underrun físico. O relógio de cena avança 307,17 s em 317,23 s de parede, com três passos estacionários; não é o cronômetro individual da corrida. Saída 0, GS/GPU drenados, workers unidos e cards original/QA inalterados. A vitória e a largada são relato direto do piloto; tela de resultado e gravação/leitura do progresso não foram verificadas independentemente. Não houve novo relato de engasgos nesta mensagem.

As sessões humanas v17/v19 não são pares controlados: direção, acontecimentos e carga do host diferem. Não interpretar 57,72→59,20 como um ganho causal. A nova pilotagem ocorreu antes do fechamento da matriz automática, a pedido explícito da equipe; não constituiu promoção do experimento.

## Evidência e implementação

Um perfil separado do EXE v17 mede18,03ms de CPU por frame no renderer,19,39 na VU e10,29 na EE durante598VBlanks. Amostras de instrução de uma janela posterior encontram432/5.406 pontos VU em lookup e uso intenso de dois kernels nativos. Percentuais de RIP incluem espera/viés da suspensão e não são frações de parede. Parte das amostras do renderer cai em módulos carregados depois do inventário inicial e permanece sem classificação. A primeira tentativa do coletor falhou ao salvar sua agregação por um nome de variável importado; seus CSVs/logs foram retidos, o coletor corrigido e a coleta válida identificada separadamente.

Em600VBlanks, a sonda baseline conta6.721.491 verificações de candidatos/5.734.210 rejeições em Fuji-4 e7.364.853/6.339.088 em Fuji-3. Checar os primeiros, últimos ou8bytes centrais não rejeita nenhuma dessas variantes Fuji: as diferenças estão em outras instruções internas.

A alteração armazena, em cada Candidate, o endereço/offset de uma instrução que já divergiu. Uma diferença nesse ponto permite rejeitar cedo. Se o ponto coincide, **todos os spans alcançáveis continuam sendo comparados integralmente**. Uma nova falha aprende outro ponto contra a cópia imutável. Não há hash usado como prova, atalho de aceitação, mudança de geração, ordem/limite de candidatos, Q/status/CLIP ou código de kernel. Os offsets sobrevivem à movimentação dos vetores. Shaders, hazards, gráficos, controles, filas/atomics, física, áudio e relógios convidados continuam iguais;1x/legacy permanecem padrão.

Fonte privada: `0b3b1281c0c5bbd9c871b790c8f78b9bf6738ca8`. EXE congelado: `1296b92359d52e350455ab9b2e39c3d001a768a7d351eb4bb09d2cc936d0f09a`. Nenhum código-fonte ou dado do jogo foi publicado.

## Validação funcional

- 31/31 CTests,12,73s. O cache real recebe320 seleções adicionais de variantes com prefixo/meio/fim comuns, diferenças internas móveis, entrada com wrap, escrita inalcançável e mutação fora do ponto aprendido. A identidade exata da função selecionada é conferida; uma palavra coincidente não pode aceitar código incompatível. Os casos prévios de80 variantes/evicção e spans longos permanecem.
- 21.078.049 decisões nativas novas, em três cenas, comparadas com o validador anterior completo; zero divergências. O filtro reconhece17.255.161 rejeições precoces. Em Fuji, isso cobre mais de92% das rejeições observadas. São contagens diagnósticas com referência extra, não ganho FPS.
- Todas as sondas são removidas antes das comparações de FPS. A recompilação pura confere código/dados idênticos ao EXE congelado, exceto timestamp COFF/checksum PE.
- A matriz nova de 12 imagens/36 rotas e o pacote v19 não foram executados após a falha do gate. As validações históricas v17 não certificam esta candidata.

## Comparação de desempenho

Mesmo caminho/nome, checkpoint e entradas,1x,Vulkan/Mailbox,WASAPI e pacing legacy. Sete cenas: aquecimentoAB, depois paresAB/BA/AB;14 aquecimentos/42 janelas medidas. Fuji-4/3 usam1.800VBlanks/descarte60 e1.700 callbacks comuns; demais cenas600/descarte60 e500 callbacks. Sem build, sonda, captura ou outro jogo do agente durante FPS; carga externa do host não controlada. As entradas automatizadas não são um piloto e não certificam corrida completa.

Regra declarada antes dos pares: Fuji-4 ganha nos três e pelo menos3% na média; Fuji-3 pelo menos1%; nenhuma cena perde mais de2% na média ou3% em dois pares; nenhuma piora p99 mais de10% em todos os três pares. Dados adversos e aquecimentos são retidos. A sequência foi interrompida para liberar o controle ao piloto. Os três primeiros cenários completos foram mantidos. O primeiro aquecimento de Skorost-2 e os arquivos da tentativa interrompida continuam preservados fora da matriz selecionada; apenas o par de aquecimento incompleto foi refeito junto antes dos controles restantes. São 56 janelas selecionadas mais um aquecimento completo anterior e a tentativa incompleta, sem substituição de pares medidos.

| Cena | FPS v17 / candidata | Variação | p99 callback comum v17 / candidata, ms |
|---|---:|---:|---:|
| Fuji-4 | 55.43 / 57.44 | +3.63% | 27.99 / 27.42 |
| Fuji-3 | 56.03 / 56.77 | +1.33% | 28.16 / 26.59 |
| Skorost-1 | 58.68 / 59.22 | +0.91% | 28.99 / 32.48 |
| Skorost-2 | 56.05 / 59.58 | +6.30% | 37.90 / 34.42 |
| Grand-Prix-0 | 60.00 / 59.99 | -0.02% | 34.63 / 36.33 |
| Thunderhead-0 | 60.02 / 60.02 | -0.01% | 32.13 / 32.74 |
| Aurora-3 | 60.01 / 60.02 | +0.02% | 32.85 / 33.08 |

Fuji-4 cumpre o ganho mínimo de 3% e vence nos três pares; Fuji-3 cumpre 1% na média. **Skorost-1 piora o p99 em todos os três pares (+13.86%, +10.48%, +11.88%), falhando o guard prévio de 10%.** O experimento permanece em branch privada; não há novo pacote v19 ou alteração do padrão. Todos os resultados adversos são mantidos; não se atribui cada variação exclusivamente ao código em um host sem isolamento.

21/21 pares têm os nove contadores GS terminais idênticos. Isso não prova identidade completa do fluxo assíncrono GPU. A candidata e a restauração pura são compiladas e verificadas separadamente; a restauração confere todos os bytes de código/dados com v17, exceto timestamp COFF/checksum PE, e volta ao EXE congelado exato.

## Referência de outro port nativo

O [registro técnico do KillzoneRecomp](https://github.com/drakolordx7/KillzoneRecomp/blob/master/docs/findings.md) também identifica a busca/validação de microprogramas VU como custo recorrente e relata que apenas trocar o comparador por SSE não resolveu aquele perfil. A solução deles memoriza estados de microcódigo; a candidata local usa uma palavra divergente apenas para rejeição, mantendo a validação completa para aceitar. Arquiteturas, jogo e medições são diferentes: a referência apoia a investigação do custo, não transfere ganhos nem comprova esta implementação. Nenhuma implementação externa foi transplantada. A comparação anterior com PCSX2 continua no [relatório v18](vanilla-v18.md).

## Próximos aceites

A candidata já teve pilotagem humana por solicitação direta, mas ainda não cumpre estabilidade perto de 58–60 FPS em todos os blocos, nem o guard de caudas em Skorost-1. O próximo P0 é preservar o ganho VU de Fuji enquanto se investiga a cadência/backpressure e a quantização do áudio, com novos critérios definidos antes de outra candidata. Não repetir rodadas manuais sem uma mudança concreta sustentada pelo código. Depois: resultado/save/reabertura, classes2–4/Mirror e30min contínuos; cinco pares original/nativo1x, análise de serrilhado, áudio/input físicos, outro Windows/GPU e proveniência/distribuição. O pacote privado com ISO/ELF próprias não é uma alpha pública ou para enviar aos amigos.

[Roadmap](../../ROADMAP.md) · [Tarefas](next-10-tasks.md) · [Auditoria anterior](vanilla-v18.md). GitHub documental; PR23 aberto, main inalterada.
