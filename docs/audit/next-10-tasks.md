# Próximas dez tarefas — Vanilla

Atualização de22/10/2026: a equipe aprovou a v36 jogando. [V37](vanilla-v37.md)
fecha o kit experimental privado para outro PC: importador gráfico nativo sem
Python,49 testes/239 verificações, dependências/diagnóstico e ZIP extraído,
importado e iniciado com sucesso. Alta3×/som/HUD preservados. **Agora é teste
externo, sem outra mudança de renderer ou campanha inteira antes desse retorno.**

| # | Prioridade | Entrega e critério de conclusão |
|---|---|---|
| 1 | P0 | Uma sessão no segundo Windows11: primeiro acesso, dependências, controle/áudio/fullscreen e duas corridas acessíveis, Fuji se disponível; não chamar teste local de segundo PC |
| 2 | P0 | Conferir resultado natural/save, fechar e reabrir no segundo PC; logs/cartão QA isolados e retorno humano explícito, sem equiparar hash ou teste SIO2 a corrida completa |
| 3 | P0 | Analisar o diagnóstico e relato dessa sessão; corrigir incompatibilidade concreta sem alterar a base que a equipe aprovou |
| 4 | P0 | Atribuir picos residuais de cadência/compilação em uma rota fixa, somente quando necessário, preservando caches/condições e evidência adversa |
| 5 | P0 | Somente após causa concreta, propor patch isolado com limites prévios e equivalência VU/memória/GIF; não reabrir experimentos de áudio já rejeitados |
| 6 | P1 | Confirmar dispositivos USB/Bluetooth, reconexão e fullscreen/DPI no novo PC; suporte físico anterior permanece preservado, sem recertificação universal |
| 7 | P1 | Completar pistas/classes2–4/Mirror e sessão longa de forma direcionada após o teste externo inicial; não repetir campanhas manuais sem alteração ou hipótese |
| 8 | P1 | Medir latência física/underruns quando houver evidência, separando simulação, callback e apresentação real |
| 9 | P0 para release público | Fechar versões/licenças/fonte correspondente, código recompilado e arte/marca;22 avisos adicionados na v37 não equivalem à aprovação integral |
| 10 | P1 | Depois da aceitação externa e revisão de distribuição, definir versão alpha/release e CI; GitHub continua documental, PR23 aberto sem merge |

Concluído nesta etapa: o importador gráfico substitui o fluxo de Python do kit
v36; ISO e destino são verificados, cancelamento do importador e corrida de
publicação estão cobertos. A auditoria diferencia MSVC externo de bibliotecas
garantidas do Windows. Não se copiam runtimes do System32 nem se instala nada
automaticamente. O ZIP limpo contém instruções e atalho oficial para o
pré-requisito, sem ISO/ELF/cartão/cache/log. Não há novo benchmark de FPS.

Os dados históricos de desempenho e rejeições v33/v34 permanecem preservados.
Remaster/mods seguem depois da Vanilla estável; o objetivo atual é o executável
nativo Windows, com a qualidade e o som aceitos, validado em outra máquina.
