# Vanilla v18 — auditoria de cadência e experimento de áudio isolado

20/10/2026. **A compilação de jogo continua sendo a v17.** O pedido de bloco de áudio menor melhora vários indicadores, mas falha na proteção de velocidade definida antes dos testes: Fuji-4 fica 1,0416% abaixo da v17, contra o limite de 1%. Não houve arredondamento do limite, descarte de amostras ou promoção. O código experimental está em um ramo local; fonte e EXE v17 foram restaurados e verificados.

## O que a auditoria encontrou

A EE publica o present pela FIFO EE→VU→GS; a fila limita o avanço a dois presents pendentes. Em seguida, o pacing legacy espera enquanto há mais de 80 ms de áudio na fila SDL. Os samples continuam em 48 kHz, estéreo, 16 bits. O renderer processa GS, prepara o display, adquire uma textura da surface, submete comandos e chama a API de apresentação.

O CSV anterior marca um callback **antes** desse trabalho de apresentação. Seus intervalos não são scanout, conclusão GPU ou latência física. Para distinguir os pontos, uma sonda temporária registrou publicação/espera na EE e flush/acquire/submit/present no renderer, usando o mesmo steady_clock e sequências locais a cada thread. Ela não lê frame_count ou RAM da EE a partir do renderer. Os retornos normais da v16 garantem o fechamento dos logs após drain/join.

No SDL instalado, versão 2.32.10, os deltas da fila observados entre enqueues eram predominantemente 4.096 bytes: 1.024 frames de áudio, ou 21,33 ms a 48 kHz. O código público da versão fixa mostra que a fila é drenada por callbacks e que a parte faltante é preenchida com silêncio se os dados acabarem. A contagem da fila não identifica a posição física já reproduzida. Portanto, a quantização é um mecanismo sustentado para parte da irregularidade, sem provar a causa de toda queda.

Três amostras legacy de 600 VBlanks produziram os percentis abaixo. **São diagnósticos instrumentados, agrupados, sem comparação pareada de FPS.** A coluna de intervalo mede chamadas da API; não mede o monitor.

| Cena | p99 espera EE, ms | p99 acquire, ms | p99 chamada present, ms | p99 intervalo API, ms |
|---|---:|---:|---:|---:|
| Fuji-4-legacy | 0.00 | 0.101 | 0.615 | 30.27 |
| Grand-Prix-0-legacy | 21.52 | 0.061 | 0.378 | 35.34 |
| Skorost-1-legacy | 21.15 | 0.088 | 0.511 | 31.43 |

As chamadas acquire/present são curtas nessas amostras; preparação GS anterior, VU, publicação e escalonamento ainda podem dominar. As três amostras com deadline existente também foram mantidas, com resultados mistos. Não se habilitou o experimento antigo.

## Experimento escolhido e teste final

Foi pedido um bloco de 256 frames apenas no Windows, com nova tentativa de 1.024 se a abertura falhasse e registro do formato solicitado/obtido. A reserva de 80 ms, o limite anterior de descarte de 500 ms, amostras, ordem, frequência, física, relógios convidados, shaders, hazards e atomics das filas permaneceram iguais. As execuções locais retornaram 256 frames/48 kHz/estéreo16. Isso não garante período de hardware de 5,33 ms: o backend pode agrupar callbacks.

A sonda de 256 mostrou principalmente deltas de 1.024/2.048 bytes, além de agrupamentos maiores. Skorost teve menor espera de cauda; Grand Prix ainda teve p99 de intervalo API próximo de 35 ms. Esse dado impede tratar o tamanho do bloco como explicação completa. Todas as sondas foram removidas e os fontes restaurados antes do build puro usado nos pares finais.

O candidato passou **31/31 CTests em 13,61 s**. Não se acrescentou um teste que apenas repetisse a constante. O EXE congelado foi `7d55a9d1b70b8ad07a134e9fd6c4217e7dc77e58f0617bee5faf5547e4199df5`. A implementação isolada está no commit privado `7b8c3ef100bde98b89f57027d06a4a6836bd007b`, ramo `codex/v18-audio-quantum-experiment`; nenhum fonte foi enviado ao GitHub.

Antes da medição, registrou-se a seguinte regra: Skorost-1 deve reduzir o p99 nos três pares e em pelo menos 5% na média; quatro das sete cenas devem melhorar a média; nenhuma cena pode piorar o p99 mais de 5% nos três pares. Nenhuma cena pode perder mais de 1% de FPS na média ou mais de 2% em dois dos três pares. O limite de FPS foi ultrapassado em Fuji-4, e a candidata foi rejeitada para promoção.

Condições: mesmo caminho/nome, estado e entradas; Vulkan/wgpu Mailbox, WASAPI e 1x; aquecimento AB seguido de AB/BA/AB por cena, 600 VBlanks/descarte60. São **14 aquecimentos e 42 janelas medidas**. Não houve build, sonda, captura ou outro jogo do agente durante FPS; a carga externa do host não foi controlada. O p99 comparável usa 500 callbacks após os 60 iniciais; as caudas brutas e todas as amostras são mantidas nas métricas.

| Cena | FPS v17 / candidata | p99 callback comum v17 / candidata, ms | Variação FPS |
|---|---:|---:|---:|
| Skorost-1 | 55.11 / 59.94 | 35.97 / 29.65 | +8.76% |
| Skorost-2 | 60.00 / 60.01 | 33.59 / 30.47 | +0.00% |
| Fuji-4 | 59.79 / 59.16 | 27.10 / 25.61 | -1.04% |
| Fuji-3 | 54.81 / 55.08 | 29.29 / 27.68 | +0.48% |
| Grand-Prix-0 | 59.60 / 59.68 | 36.10 / 30.77 | +0.13% |
| Thunderhead-0 | 60.02 / 60.00 | 33.28 / 26.51 | -0.03% |
| Aurora-3 | 60.02 / 60.01 | 31.77 / 28.57 | -0.02% |

O p99 médio melhorou nas sete cenas. Porém, em Skorost-1 o primeiro baseline caiu para 45,31 FPS, com p99 de 45,62 ms, contra 59,77 FPS/27,47 ms na candidata. Nos outros dois pares, ambos ficaram perto de 60 FPS e as reduções de p99 foram somente cerca de 1,3% e 1,2%. A média de +8,76% FPS e a redução média de cauda são fortemente influenciadas pelo primeiro par; não se atribui esse ganho causalmente à mudança. A amostra permanece visível, sem exclusão ou repetição seletiva.

Fuji-4 ficou em média 1,0416% abaixo; três pares e host não controlado não provam uma perda causal universal. Ainda assim, a regra declarada não foi cumprida. Os 21 pares conservaram os mesmos contadores gráficos agregados finais; isso não prova identidade completa do fluxo assíncrono nem ausência de underruns físicos.

## Restauração e validação mais longa da v17

O ramo de trabalho voltou à v17. Os 12 fontes acompanhados e os 24 arquivos inicialmente sujos/backups mantêm seus hashes. A recompilação restaurada é idêntica ao EXE v17 em todos os bytes, exceto timestamp COFF/checksum PE; o alvo final recebeu novamente o EXE congelado exato. Pacote e save anteriores, ISO original e desenvolvimento v13 foram preservados.

Depois dos controles, a v17 executou **18.000 VBlanks em modo nativo threaded**, partindo de Skorost-2 Class1, com aceleração e entradas automáticas. Foram 304.21 s de parede, saída0, drain GS/GPU e join. O card é de QA separado; o card do usuário foi preservado. O teste não é um benchmark pareado: há serialização de estado perto do final.

Um estado foi salvo em28590 e reproduzido separadamente por dois frames síncronos para inspecionar o ponto alcançado. A captura não está na execução longa nem nos pares FPS. Observação visual: **O carro está encostado na lateral, em 8º de 8, a cerca de 2 mph, ainda na volta 1 de 2. A automação sem direção não concluiu a corrida; a imagem serve apenas para confirmar o ponto alcançado no replay separado.**

Segmentos válidos do relógio vivo, sem juntar cenas ou resets:

```json
[
  {
    "samples": 18000,
    "start_frame": 10601,
    "end_frame": 28600,
    "wall_seconds": 302.8402116,
    "game_seconds": 298.62058639500003,
    "game_to_wall_ratio": 0.9860664963126715
  }
]
```

Essa execução amplia a cobertura além das janelas de 600 frames. Não certifica todas as corridas/classes2–4/Mirror, resultado/save/readback, sessão de30min ou cadência do PS2 original. Nenhuma imagem, estado ou card é publicado. Não se criou pacote jogável v18 nem se executaram novos12 pares de imagem/36 rotas/WAVs como se a candidata tivesse passado; a evidência v17 anterior continua histórica e íntegra.

## Duas sessões humanas na v17

O mantenedor ofereceu pilotar após observar que a aceleração automática levava o carro à parede. As duas sessões seguintes usaram o EXE v17 exato do pacote privado, configuração padrão1x/legacy/WASAPI, sem `--press` e sem limite de frames. Foram gravados os três CSVs já existentes: simulação, callback de apresentação e relógio vivo. Nenhum outro jogo, build, sonda adicional ou captura do agente rodou durante a pilotagem. O card QA separado preserva o save original. A carga externa do host não foi controlada.

| Entrada | Parede incluindo abertura, s | VBlanks | Simulação FPS após60 | p99 callback, ms | Callbacks >33,333ms após60 |
|---|---:|---:|---:|---:|---:|
| keyboard | 515.65 | 30514 | 59.98 | 34.82 | 490 / 30453 |
| Xbox 360 Controller | 515.33 | 30813 | 59.95 | 34.94 | 471 / 30752 |

Ambas saíram com0, drain GS/GPU e join dos workers. Os cards originais e QA mantiveram seus hashes. O mantenedor relata ter **concluído e vencido a corrida pelo teclado**. A sessão seguinte abriu o dispositivo que a SDL identifica como **Xbox360 Controller**, jogador1, com suporte a rumble; isso confirma detecção/abertura, sem provar transporte USB/Bluetooth ou latência física. O término vitorioso e a persistência de resultado não foram verificados automaticamente em tela nem por gravação/leitura de progresso. Não se soma a duração das duas sessões para declarar30min contínuos.

O padrão de caudas persiste em ambas, com aproximadamente1,5–1,6% dos callbacks acima de33,333ms apesar da média de simulação próxima de60. As esperas de pacing da EE chegam a aproximadamente22ms no p99. A correlação descritiva entre intervalo de simulação e espera de pacing é0,949/0,942; intervalo com espera na publicação é0,149/0,129. A espera já compõe o próprio intervalo, portanto essa correlação não é uma descoberta causal independente. Em conjunto com a auditoria e os deltas de dequeue, ela prioriza a quantização do pacing na investigação de Skorost-2. Não exclui outras causas.

As sessões não são um par controlado de teclado versus controle: pilotagem, efeitos, instante e estado do host diferem. Não se atribui a diferença pequena de FPS ao gamepad. O timestamp de callback continua anterior à apresentação GS; não mede a cadência física do monitor.

### Relógio de cena: diferença preservada, sem alterar a simulação

Em um mesmo segmento válido, o relógio avançou486,332958s durante508,589422s de parede no teclado, e480,872662s durante513,855243s na sessão com controle: razões0,9562 e0,9358. A velocidade nominal por ciclos EE foi99,964% e99,925%, respectivamente. Portanto, o campo da cena e a contagem de VBlanks não são medidas intercambiáveis.

A revisão do escritor no código gerado confirma soma do delta recebido e gates de atividade/pausa; os timers do runtime derivam de ciclos convidados, não de uma correção automática por relógio de parede. Os dados atuais não separam todos os efeitos/estados internos nem estabelecem a cadência PS2 original. Não se interpreta a razão como um fator fixo de câmera lenta e não se acelera física, relógio ou áudio para compensá-la. O próximo diagnóstico deve seguir o delta aplicado e seus gates por fase da corrida, distinguindo lógica do jogo de trabalho/espera do host.

## Testes independentes depois da pilotagem

Após o usuário encerrar, o mesmo EXE v17 passou por sete casos nativos novos. Três partem de checkpoints de Skorost-2, Fuji-4 e Grand-Prix-0 e executam1.800 VBlanks ativos; há ainda pausa, recarga continuando pausado, recarga/retomada e um trecho com boost/Car-Fu/entrada lateral. As entradas são automatizadas e não incluem um piloto de corrida: não certificam volta ou corrida concluída. A serialização de estado adiciona uma pausa; os números abaixo são descritivos e não benchmarks pareados. O total de linhas inclui o frame extra para assegurar que o estado solicitado foi gravado.

| Caso | Linhas de simulação | Delta de cena até estado salvo, s | FPS descritivo após corte | Espera média post / pace, ms |
|---|---:|---:|---:|---:|
| Skorost-2-active | 1801 | 30.001623 | 59.79 | 0.569 / 6.203 |
| Fuji-4-active | 1801 | 30.000395 | 48.23 | 9.175 / 0.002 |
| Grand-Prix-0-active | 1801 | 29.990602 | 60.01 | 0.007 / 6.743 |
| Skorost-2-pause | 241 | 0.167822 | 46.97 | 10.776 / 0.001 |
| Skorost-2-paused-neutral-reload | 241 | 0.000000 | 45.92 | 10.844 / 0.001 |
| Skorost-2-resume-reload | 601 | 9.861177 | 59.98 | 0.075 / 6.586 |
| Skorost-2-effects | 1801 | 29.998129 | 59.99 | 0.063 / 6.985 |

Todos verificam saída0, drain/join, relógio válido e monotônico, estado salvo e preservação do card do usuário. A pausa estabiliza o relógio; a continuação pausada mantém delta zero, e a retomada volta a avançar. Esses casos validam recarga de snapshot, não save de resultado da corrida no memory card. Fuji revela novamente espera na publicação/backpressure com pouca espera de áudio; não se trata essa espera como tempo puro de GPU. A decomposição GS/VU permanece o caminho para investigar o limite de throughput nessa pista.

Os FPS/esperas da tabela descartam60 linhas iniciais e2 finais, separando a serialização terminal. Mesmo com esse corte, o menu pausado fica perto de46–47FPS: o teste passou funcionalmente, mas isso é um resultado adverso de desempenho, preservado. Na atividade em Fuji,30,000395s de cena levaram37,134023s na abrangência do CSV, e a janela cortada fez48,23FPS, contra59,79 em Skorost e60,01 em Grand Prix. Estes três trechos são diagnósticos diferentes e não uma média de desempenho do jogo inteiro.

A primeira tentativa de continuar pausado não tinha `--press` e deixava a publicação de teclado habilitada; o relógio retomou inesperadamente. O processo saiu0, mas a asserção do harness falhou. Essa tentativa e seus dados foram preservados. O controle seguinte recarrega o mesmo estado com um script futuro que mantém a porta0 neutra durante todo o teste:241 amostras idênticas, delta zero. A retomada explícita também passa. A tentativa inicial não registrou teclas/foco, portanto sua causa exata não está provada; não se apresenta isso como uma falha de pausa corrigida no runtime. Nenhum fonte de produção mudou.

### Fuji: diagnóstico mais longo das etapas

Depois desses casos, a sonda baseline existente executou separadamente1.800 VBlanks em Fuji-4, sem serialização de estado, com timestamps pertencentes a cada thread. É mais um diagnóstico instrumentado, não comparação de ganho com o EXE final. A primeira janela curta e os trechos seguintes diferem:

| Frames | Post EE média, ms | Pace EE média, ms | Acquire p99, ms | Chamada present p99, ms | Intervalo API médio, ms |
|---|---:|---:|---:|---:|---:|
| 10661–11200 | 4.536 | 2.526 | 0.072 | 0.412 | 16.820 |
| 11201–11800 | 8.116 | 0.001 | 0.116 | 0.432 | 18.596 |
| 11801–12400 | 8.295 | 0.001 | 0.079 | 0.397 | 18.764 |

Nos dois blocos posteriores, a publicação espera cerca de8,1–8,3ms por frame e o pacing de áudio praticamente não espera. Acquire e a chamada de present seguem curtos; a submissão leva aproximadamente3ms em média. O intervalo do renderer entre essas entradas inclui preparação GS, espera por VU/FIFO, escalonamento e tempo ocioso: não é uma medição de CPU/GPU pura. A sequência aponta o trabalho/suprimento antes da apresentação como prioridade em Fuji; não sustenta culpar apenas VSync ou o buffer de áudio. A execução instrumentada tem valores diferentes da execução pura; não se misturam as duas como benchmark. Há0 erros de enqueue observados, sem certificação de underrun físico. O EXE exato v17 foi restaurado no caminho de staging após a sonda.

## Próximos trabalhos

1. Isolar a perda/variabilidade de Fuji e a interação entre backpressure VU/GS e espera de áudio. Medir o custo antes de impor novo prazo; proteger throughput e reserva durante recuperação de cenas lentas.
2. Avaliar cadência informada pelo áudio e pela disponibilidade do produtor, com modelo de relógio explícito e testes de quantização, atraso, recuperação e drift. Evitar habilitar o deadline antigo ou reduzir a reserva às cegas.
3. Preservar o relato de vitória humana e verificar independentemente a tela de resultado, gravação e leitura do progresso; ampliar classes/Mirror/30min e comparar o relógio original. Distinguir gates/delta da cena de clocks do host, sem fator artificial de aceleração.
4. Fechar cinco pares PS2/nativo1x, classificar filtro/dither/CRTC/fog/serrilhado e só depois AA/escala/packs. Medir áudio/input físicos e testar outro Windows/GPU, IO/proveniência/licenças/CI antes de distribuição.

## Fontes primárias consultadas

O PCSX2 separa clock convidado, limitação no host e controle de frames pendentes. A ordem de publicação e as condições de throttle são específicas daquela arquitetura; não foram transplantadas para este runtime nem usadas para executar o jogo. A implementação da candidata foi derivada da fila local e da API SDL existente.

- [SDL_GetQueuedAudioSize: software queue is not exact playback position](https://wiki.libsdl.org/SDL2/SDL_GetQueuedAudioSize).
- [SDL_OpenAudioDevice: sample frames, latency/buffering and obtained spec](https://wiki.libsdl.org/SDL2/SDL_OpenAudioDevice).
- [SDL2 release2.32.10 audio queue drain callback](https://github.com/libsdl-org/SDL/blob/release-2.32.10/src/audio/SDL_audio.c).
- [SDL2 release2.32.10 Windows timer implementation](https://github.com/libsdl-org/SDL/blob/release-2.32.10/src/timer/windows/SDL_systimer.c).
- [PCSX2 VMManager throttle and presentation policy](https://github.com/PCSX2/pcsx2/blob/master/pcsx2/VMManager.cpp).
- [PCSX2 Counters VSyncStart ordering](https://github.com/PCSX2/pcsx2/blob/master/pcsx2/Counters.cpp).
- [PCSX2 MTGS queued-frame limiter](https://github.com/PCSX2/pcsx2/blob/master/pcsx2/MTGS.cpp).

[Roadmap](../../ROADMAP.md) · [Próximas tarefas](next-10-tasks.md) · [Compilação preservada v17](vanilla-v17.md). GitHub documental, PR23 aberto e main inalterada.
