# Vanilla v34 — política de flags especializada na compilação

22/10/2026. **Candidata rejeitada; referência restaurada.** Som/HUD e Alta qualidade da v30 continuam aceitos; seus arquivos e saves jogados foram preservados.

## Hipótese e código

Selecionar a política já existente de flags uma vez na entrada, chamando um corpo compilado para true ou false. A tabela mantém as mesmas37 entradas e ambas as instanciações conservam o corpo original. Não há nova análise de liveness, remoção de flags, alteração aritmética ou de cache/Q/CLIP/layout do pipeline.

O protótipo preservou a tabela e a reconstrução inversa de todos os corpos. A versão com flags ativas reduziu ramificações estáticas40→24 e 257→180; o espaço reservado na pilha aumentou. Esses números não demonstram velocidade. O teste executou2.600 casos nativos com política ativa e 1.600 com política desligada, além da transição produtor nativo→consumidor interpretado STATUS/FSSET. Todas as 4.800 comparações completas e os 46 testes passaram.

As2.123 capturas originais reproduziram os 37 trechos antes da alteração. A candidata foi regenerada pelo gerador: três corpos C++ e seu manifesto mudaram; 328 outros inputs, a tabela de entradas e 310 programas extras permaneceram iguais. A reconstrução inversa da transformação recupera cada corpo anterior, incluindo instruções e fluxo de controle.

O [microVU do PCSX2](https://github.com/PCSX2/pcsx2/blob/646df006a4688063e56c0826e7ea4b8bb0c112c4/pcsx2/x86/microVU_Upper.inl) resolve a emissão de flags no compilador. É uma referência para a investigação; não se transplantam gamefixes de overflow ou se presume equivalência geral ao PS2. As verificações abaixo usam o interpretador escalar atual.

## Correção com mídia original

Três boots headless separados, cada um com 12.500 quadros e saída registrada antes das asserções. Foram comparados registradores VU completos,16KiB locais e bytes GIF, além de referências Q. O CSV confirma Fuji médio/reverso, Skorost médio/direto e Thunderhead médio/reverso, sem pausa. Pastas de captura foram criadas previamente; todas as três imagens finais existem. São diagnósticos funcionais, não FPS da janela.

| Cena | Comparações completas | Referências Q | Saída |
|---|---:|---:|---:|
| fuji | 61,241 | 1,785,889 | 0 |
| skorost | 7,121 | 326,747 | 0 |
| thunderhead | 2,863 | 374,255 | 0 |

## Desempenho e limites

O protocolo foi definido antes das alterações. Triagem Fuji AB/BA: ambos os ganhos positivos, média>=3% e contadores iguais. Depois, terceiro par Fuji sob o mesmo limite; só então três pares alternados Skorost/Thunderhead. Gates finais: perda média por cena até1%, sem duas perdas>2%, sem piora de p99>5% em todos os três pares, p99 médio Skorost até2% pior e todos os contadores iguais. Sem relaxamento posterior.

Estágio encerrado: **Fuji initial screen**; média Fuji **+0.019%**. Cada boot usou o mesmo caminho/nome, mídia/ELF originais, threads normais, Vulkan direto Win32, WASAPI e Alta 3×/bilinear/FXAA. Cartões QA e caches aquecidos separados. A janela 10650–12400 contém1.751 amostras. Sem captura, tracing, profiler, build ou outro jogo do agente durante timing. A carga externa não foi isolada; todos os máximos são retidos.

| Par | Ganho de simulação | Variação p99 callback | Contadores iguais |
|---|---:|---:|---|
| fuji 1 | +7.059% | -38.316% | sim |
| fuji 2 | -7.021% | +8.360% | sim |

| Execução | Variante | Quadros simulados/s | Callback p99 ms | Máximo ms |
|---|---|---:|---:|---:|
| fuji 1 | baseline | 45.411 | 46.875 | 178.251 |
| fuji 2 | candidate | 48.616 | 28.914 | 33.299 |
| fuji 3 | candidate | 44.959 | 31.651 | 40.430 |
| fuji 4 | baseline | 48.354 | 29.210 | 36.415 |

São intervalos de simulação/callback, não FPS físico ou corridas completas. Contadores iguais provam volumes/totais, não hash do payload nessa rodada. A comparação completa de payload é a validação funcional separada. Gates de controles não executados permanecem sem avaliação; nenhuma rodada concluída foi excluída.

## Estado final

A candidata foi arquivada; os originais foram restaurados byte a byte, com timestamps atualizados antes da recompilação. Build e 46 testes da referência passaram, e os 332 hashes gerados originais foram recuperados. Não houve nova matriz de 36 rotas, comparação de áudio/imagens ou pacote jogável após a rejeição.

O pipeline nativo, controles, fullscreen adaptável, áudio e Alta 3× permanecem preservados. Resultado/save/reabertura, classes/Mirror, corridas completas, paridade original, latência e segundo PC continuam no [roadmap](next-10-tasks.md). A biblioteca gráfica não mudou: os cinco testes unitários do projeto da DLL pertencem à evidência anterior v31, sem alegar nova execução nesta etapa.

GitHub documental e anônimo, atribuição à equipe; PR23 aberto, sem merge. Nenhum código, executável, dado do jogo ou log bruto é publicado.
