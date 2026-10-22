# Vanilla v31 — identidade de Fuji e atribuição CPU/VU

22/10/2026. **A equipe aceitou o HUD/Alta qualidade da v30; o relato de som já está
resolvido na v29. A v30 continua sendo a versão para jogar.** Esta etapa entrega
diagnóstico opcional e atribuição delimitada. Nenhuma otimização de FPS ou outro
pacote jogável é promovido.

## Pipeline atual, duas cenas

Duas partidas novas com a mídia original, threads normais, Vulkan direto Win32 e
preset Alto3×, em Fuji e Thunderhead médio/reverso. Cartões e caches são separados;
os comandos sintéticos são equivalentes. Cada partida tem12.500 quadros emulados,
saída0 e drain/join. A janela10650–12400 contém1.751 callbacks por pista. Não houve
captura, syscall tracing, amostragem de instruções, build ou outro jogo do agente
durante essas sondas. Há instrumentação de filas/relógio e CPU a1Hz, com custo de
observação; a carga externa não foi isolada. Não são corridas completas/FPS físico.

| Média, ms por quadro | Fuji médio reverso | Thunderhead médio reverso |
|---|---:|---:|
| Intervalo do callback | 22,088 | 17,045 |
| Espera de postagem do host | 11,121 | 0,216 |
| Espera de pacing | 0,001 | 6,607 |
| CPU da thread VU | 21,087 | 10,411 |
| CPU da thread EE | 10,079 | 9,886 |
| CPU da thread GS nativa | 9,469 | 6,079 |
| GS nativa esperando entrada | 15,990 | 12,315 |
| Atividade estimada entre GSvsyncs | 5,785 | 4,396 |
| Parede em GSvsync/render-present | 0,316 | 0,331 |
| Espera por espaço no ring nativo | 0 | 0 |
| Espera pelo limite de frames nativo | 0 | 0,257 |

CPU é uma média de subjanela interna delimitada pelos contadores a1Hz. Os intervalos
das threads se sobrepõem: não se somam. GSvsync inclui submissão/apresentação,
**não é tempo puro de GPU**. Atividade entre vsyncs é parede menos idle declarado,
incluindo outros comandos/esperas do driver. GetThreadTimes é grosseiro; picos
individuais não são utilização. O hook lê relógios nas transições de ring vazio.

A VU ocupa perto de um núcleo no trecho Fuji, enquanto a GS nativa fica sem entrada
e o ring não enche. A espera de postagem do host também depende do caminho EE→VU→GS;
não provava saturação da GPU. **O limite observado aponta para CPU/VU antes do
renderer.** Isso não exclui limites gráficos em outras cenas ou variantes.

## Implementação e validação

Os setters/construtores e dados originais identificam ambiente, circuito e direção
da configuração selecionada. O caminho original de pausar/retomar fornece um estado
explícito: relógio parado em largada/resultado não é automaticamente pausa. O CSV
opcional do relógio acrescenta validade independente, com ponteiros, layouts,
strings e enums verificados, somente na thread EE.

A DLL usa o hook existente para guardar até262.144 quadros por trilha. Cada trilha
tem um dono; não há alocação, lock ou IO no callback. O CSV é escrito após a junção
do worker e informa contagens/truncamento. Desligado por padrão, não instala hook
nem aloca buffers. A API C, filas e ordem GIF permanecem iguais.

- **46/46 testes do runtime e5/5 da biblioteca passam.** Cobrem dados inválidos de
  pista/pausa, concorrência, limite, falha de arquivo, ordem e fechamento repetido.
- O EXE final registra11.700 amostras com mídia original em headless:850 ativas e160
  pausadas confirmam Fuji médio reverso e o relógio parado ao pausar. Esse modo sem
  captura emite0 presents; o trace GS é validado separadamente nas duas janelas e
  no teste C da DLL final. O wrapper não guardou o exit code filho antes de uma
  asserção incorreta de contagem; o log registra limite de frames efailed=0, sem
  alegar saída0 independentemente medida. Tentativas/falhas estão nas métricas.
- Outra execução com a v30 intacta faz amostragem de instruções, saída0: cerca de
  1.445 observações por thread. Dois kernels VU compilados aparecem em213/184 pontos;
  lookup aparece em175. São RIPs com viés de suspensão, não frações de parede.
- Um filtro negativo de variantes repetia a [v19](vanilla-v19.md), rejeitada por
  caudas em Skorost. A tentativa não medida foi retirada; três arquivos foram
  restaurados byte a byte e recompilados. A [v22](vanilla-v22.md) também fica rejeitada.
  Não se apresenta esse experimento antigo como ganho novo.

Áudio, kernels VU, física, clocks, shaders e preset Alto permanecem iguais aos
aceitos.24 alterações preexistentes e332 entradas geradas foram preservadas, com
guard de310 extras. A v30 e saves jogados ficam no lugar; cartões de teste separados.

Commit privado do diagnóstico: `de187fff594fa26fba5f7f52fe8efbf7348d54aa`.

## Próxima entrega

Identidade/atribuição fecham **para as duas janelas**, não para todas as variantes.
O próximo P0 é auditar os dois kernels VU quentes e suas transições/Q, confrontando
experimentos rejeitados antes de propor uma mudança diferente. Depois: equivalência
de registradores/memória/pacotes GIF e controles Fuji/Skorost/Thunderhead, com critérios
definidos antes da candidata. Estes dados não sustentam reduzir a qualidade ou
aumentar a profundidade das filas.

Resultado/save/reabertura, classes/Mirror, paridade original, latência física,
segundo PC e distribuição continuam nos [próximos passos](next-10-tasks.md).
Publicação somente documental/anônima; PR23 aberto, sem merge.
