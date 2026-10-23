# Vanilla v32 — cálculo vetorial de flags VU, candidata rejeitada

22/10/2026. **A v30 continua sendo a versão para jogar, com som/HUD aceitos e
Alta qualidade 3× preservada.** A equipe testou uma mudança distinta nos kernels
VU. A candidata passou na equivalência funcional, mas falhou no critério de
desempenho: ganho médio mínimo de 3% em Fuji. Nenhum patch de FPS ou pacote jogável novo foi promovido.

## Hipótese e referência

Os dois kernels quentes identificados na [v31](vanilla-v31.md) repetem a montagem
de flags MAC/status. A candidata usa comparações inteiras SSE2 e extração de bits
em paralelo quando três/quatro componentes estão ativos. Máscaras menores e
plataformas sem SSE2 mantêm o caminho escalar; a escolha das máscaras vem do teste
isolado, que mostrou regressão em uma componente. Esse microbenchmark não é FPS.

O [microVU do PCSX2](https://github.com/PCSX2/pcsx2/blob/646df006a4688063e56c0826e7ea4b8bb0c112c4/pcsx2/x86/microVU_Upper.inl) usa inversão da ordem de componentes e movemask
ao montar flags. Isso sustenta o mecanismo, não uma garantia de ganho no nosso
binário. A implementação preserva as regras do helper escalar atual, inclusive
subnormais e overflow; não transplanta o gamefix de overflow ou a política de
eliminar flags do PCSX2. Não repete os filtros rejeitados v19/v22 nem a
normalização da v23. Aritmética, Q, CLIP, cache, clocks, física, áudio, shaders e
filas não foram alterados. Os 332 arquivos gerados e 310 programas extras ficaram
iguais; a mudança era somente helper, teste focado e registro CMake.

## Equivalência antes de medir

47/47 testes da candidata passaram. O teste novo faz 4.314.112 comparações contra
um oráculo escalar independente, além de alias/canários, histórico de quatro
ciclos e preservação de MXCSR. Cobre todas as 16 máscaras, bits altos, zero com
sinal, subnormais, NaNs e infinitos. São equivalências com o runtime atual,
não certificação da precisão do PS2.

Três boots novos com a mídia original passaram na comparação de registradores
VU completos, 16KiB locais e bytes GIF contra o interpretador escalar inalterado,
mais referências Q. O CSV confirma Fuji médio/reverso, Skorost médio/direto e
Thunderhead médio/reverso, com pausa explícita desligada. São diagnósticos
headless separados; não medem FPS da janela.

| Cena | Comparações nativas completas | Referências Q | Saída |
|---|---:|---:|---:|
| fuji | 61,241 | 1,785,889 | 0 |
| skorost | 7,121 | 326,747 | 0 |
| thunderhead | 2,863 | 374,255 | 0 |

Na primeira Fuji, o wrapper não criou a pasta da captura: o jogo terminou com
saída 0, 1 present e checks salvos; a asserção de imagem falhou depois. Nenhuma
imagem Fuji é alegada. O erro do wrapper foi corrigido nas outras duas rotas,
sem repetir as 61.241 comparações válidas. A DLL não mudou; seus 5 testes são
evidência da v31, sem alegar uma nova execução nesta etapa.

## Desempenho e decisão

Critérios definidos antes da edição: triagem Fuji AB/BA com ganho médio >=1%;
depois terceiro par Fuji e três pares alternados Skorost/Thunderhead. Promoção
exigia todos os três pares Fuji positivos e média >=3%, sem perdas médias de
cena >1%, sem duas perdas >2%, sem piora de p99 >5% em todos os pares de uma cena,
p99 médio Skorost até 2% pior e contadores terminais iguais. A candidata foi
rejeitada pelo estágio **Fuji necessary promotion gate**, com média Fuji **+1.358%**.

Desvio explícito do plano: a triagem inicial passou, mas os três pares Fuji
completos falharam no ganho obrigatório de 3%. A matriz restante foi encerrada
administrativamente; controles adicionais não poderiam promover a candidata.
A primeira referência Skorost foi interrompida, sem saída normal/drain/join
certificados; a tentativa parcial permanece arquivada. Não é tratada como crash
do jogo nem janela concluída. Os gates de timing Skorost/Thunderhead ficaram
sem avaliação; nenhum limiar foi relaxado e nenhum dado concluído foi excluído.

Mesma localização/nome do EXE, mídia e ELF originais, threads normais, Vulkan
Win32 direto, WASAPI e preset Alto3×. Cartões QA equivalentes e caches aquecidos
separados. Cada boot tem 12.500 quadros; a janela 10650–12400 tem 1.751 amostras.
Sem captura, tracing GS/instruções, build ou outro jogo do agente durante timing.
A carga externa não foi isolada; todos os máximos/tentativas são retidos.

| Par | Ganho de simulação | Variação do p99 do callback | Contadores iguais |
|---|---:|---:|---|
| fuji 1 | +1.629% | +0.281% | sim |
| fuji 2 | +0.492% | -2.171% | sim |
| fuji 3 | +1.953% | -0.978% | sim |

| Execução | Variante | Quadros simulados/s | Callback p99 ms | Callback máximo ms |
|---|---|---:|---:|---:|
| fuji 1 | baseline | 46.896 | 29.659 | 404.866 |
| fuji 2 | candidate | 47.660 | 29.742 | 33.108 |
| fuji 3 | candidate | 47.590 | 29.903 | 35.570 |
| fuji 4 | baseline | 47.357 | 30.566 | 33.926 |
| fuji 5 | baseline | 46.460 | 30.605 | 468.829 |
| fuji 6 | candidate | 47.367 | 30.306 | 103.394 |

São intervalos de simulação/callback, não FPS físico, timestamps GPU ou corridas
completas. Igualdade de contadores significa mesmos volumes GIF/VIF e totais
de execução, não hash do payload nessa rodada. Os checks completos de payload
são os diagnósticos separados acima. Os números pequenos não justificam chamar
a candidata de uma melhora estável nem baixar a qualidade para promovê-la.

## Restauração e próximo passo

Os três arquivos da candidata foram arquivados privadamente. Helper/CMake foram
restaurados byte a byte, com timestamps atualizados para forçar recompilação;
o teste experimental saiu do build ativo. Build completo e 46/46 testes passam,
preservando 24 alterações anteriores, 332 entradas geradas, guard 310, pacote v30 e
saves jogados. Não se abriu outra matriz de 36 rotas nem uma rodada manual após
a rejeição.

Os dois kernels contêm 108 locais estáticos de atualização MAC/status, mas nenhuma
leitura direta dessas flags. Isso não prova que as escritas sejam dispensáveis:
outras continuações e o status cumulativo podem depender delas.

O [analisador microVU](https://github.com/PCSX2/pcsx2/blob/646df006a4688063e56c0826e7ea4b8bb0c112c4/pcsx2/x86/microVU_Analyze.inl)
trata produtores/consumidores e o atraso das flags. Essa é uma referência para
uma auditoria entre continuações, incluindo sticky status e as últimas quatro
operações visíveis; não uma autorização para apagar atualizações globalmente.

P0 seguinte: confrontar o código de máquina dos dois kernels quentes, temporários,
histórico e consumo de flags entre continuações antes de outra alteração. Esta experiência fecha
a hipótese específica de empacotamento SSE2; não prova que toda otimização de
flags ou VU seja inútil. Resultado/save/reabertura, classes/Mirror, paridade
original, latência física e segundo PC seguem no [roadmap](next-10-tasks.md).
GitHub documental/anônimo; PR23 aberto, sem merge ou publicação de código/dados.
