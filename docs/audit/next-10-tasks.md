# Próximas dez tarefas — Vanilla

Atualização v8, 19/10/2026. Estamos na estabilização Vanilla. O pacing foi implementado e medido, mas permanece experimental e opt-in; a baseline consolidada v6 foi preservada. [Relatório v8](vanilla-v8.md) · [v7](vanilla-v7.md) · [Roadmap](../../ROADMAP.md).

| # | Prioridade | Próxima tarefa e aceite | Dificuldade | Impacto | Dependências |
|---|---|---|---|---|---|
| 1 | P0 | Extrair cronômetro vivo e confirmar cadência; função de tempo da UI localizada é só pista estática. Depois, replays de voltas completas, classes2–4/Mirror e captura nativa assíncrona | Alta | Fidelidade e diagnóstico | Estado/replay; validação da origem do tempo; #2/#3 |
| 2 | P0 | Medir e reduzir preparação GS e VIF/UNPACK em Fuji/Grand Prix/Skorost. NOP, MASK=0 e contexto VIF implementados; cópia V4_32 rejeitada. Exigir ganho repetido sem perda de efeitos | Alta | Throughput da corrida | Perfil por estágio, entradas e relógio; issue#4 |
| 3 | P0 | Otimizar kernels VU remanescentes com cobertura seletiva. 37 continuações, índice Q e contrato de registradores auditados; v7 teve resultados mistos. Preservar CLIP/Q/status, código mutável e GIF | Alta | Throughput da corrida | Diferenciais VU/Q; cache de instruções; issue#4 |
| 4 | P0 | Fechar paridade do mipmapping/hazards em referência1x. Implementação CPU/GPU e regressões passaram; comparação nativa anterior não prova PS2 | Alta | Fidelidade gráfica | Cena original sincronizada; issue#6 |
| 5 | P0 | Produzir cinco pares originais/nativos: menu, seleção, largada, carros e efeitos. Mesmo estado/tick/câmera/1x | Alta | Localizar defeitos visuais | Referência PS2/PCSX2 configurada legitimamente; issue#5 |
| 6 | P1 | Corrigir dither16/CRTC/fog usados pelo jogo, após identificar divergências; AA1 apenas se observado | Alta | Aparência original | Pares de referência e testes isolados; issue#6 |
| 7 | P1 | Aceitar pacing sem regressão de corrida, medir underruns reais e latência física, fazer30min. v8 melhora cadência do menu, mas resultados de pista mistos; opt-in, sem mudança padrão | Alta | Fluidez, áudio e resposta | Throughput P0; relógio; telemetria de áudio; issue#3 |
| 8 | P1 | Medir PATH1 SIGNAL/FINISH/LABEL e completar pedido atômico, drain/join, pause/restart, saída/save | Alta | Estabilidade | Donos EE/VU/renderer; testes de ciclo de vida; #3/#4 |
| 9 | P1 | Build reproduzível e portátil sem DEV_ROOT; Unicode, pasta sem escrita, outra GPU e PC limpo | Média/alta | Uso independente | Dados locais legítimos, dependências fixadas; issue#7 |
| 10 | P1 | Proveniência/licenças transitivas e CI; GitHub documental com evidências e hashes. PR22 integrado; PR23 recebe v7/v8 e permanece aberto | Média/alta | Colaboração e distribuição | Revisão de fontes/dependências; #1/#8 |

Aceite Vanilla segue aberto: ritmo original confirmado, imagens fiéis, percentis adequados e áudio/controle/save estáveis durante corridas e30min. As36 rotas da v7 e as quatro cenas da v8 são janelas curtas. Publicação continua restrita a documentos e métricas sanitizadas. Resolução superior e Remaster/Core/UI/câmeras/mods/multiplayer/navegador ficam depois da estabilização.
