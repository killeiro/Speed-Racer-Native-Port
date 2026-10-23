# Vanilla v8 — investigação e experimento de frame pacing

Data: 19/10/2026. **Pacing experimental, desativado por padrão.** O comportamento padrão de pacing da v7 foi preservado. A v6 continua como baseline consolidada e seus arquivos não foram substituídos. Esta rodada não recomenda um novo pacote como solução geral da lentidão.

## Resultado e decisão

O código anterior usava apenas o limite de 80 ms de áudio enfileirado para regular a execução com áudio. A fila é transferida ao dispositivo em blocos: no menu ela manteve aproximadamente 60 FPS, mas apresentou intervalos muito irregulares. O novo prazo monotônico melhorou esse caso. As pistas apresentaram resultados mistos, com amostras desfavoráveis mantidas; não há evidência suficiente para habilitá-lo por padrão ou anunciar ganho geral de fluidez.

No menu, três pares alternados mediram 60.03 / 60.00 FPS de simulação; a média dos p95 dos callbacks caiu de **29.65 para 23.16 ms**, e p99 de 32.20 para 25.61 ms. Isso comprova melhora de cadência nesse cenário, não menor latência física nem ritmo original de corrida.

| Cena | Legado FPS | Prazo FPS | Variação | p95 legado / prazo ms | p99 legado / prazo ms |
|---|---:|---:|---:|---:|---:|
| Thunderhead-0 | 57.29 | 56.13 | -2.04% | 24.21 / 24.86 | 29.82 / 29.56 |
| Grand-Prix-0 | 54.77 | 54.98 | +0.38% | 27.89 / 27.31 | 31.47 / 31.40 |
| Fuji-3 | 41.28 | 41.58 | +0.73% | 34.88 / 34.50 | 41.26 / 41.78 |
| Skorost-1 | 43.92 | 42.50 | -3.24% | 33.64 / 35.98 | 36.71 / 42.25 |

Os percentis da tabela são médias dos percentis por execução. Cada modo usa o mesmo binário, caminho, nome e checkpoint, com três pares AB/BA/AB por cena, 600 VBlanks e descarte dos primeiros 60. As entradas automatizadas incluem aceleração, boost, stick direito e Car-Fu. A comparação é entre modos do protótipo v8, não uma nova comparação direta v6/v8. O benchmark não usa screenshots, profiling ou testes diferenciais invasivos.

## Diagnóstico, hipóteses e implementação

Evidência anterior à edição: CSV v7 de Thunderhead alterna intervalos EE de cerca de 9–11 ms com 20–29 ms, incluindo esperas de áudio próximas de 17–19 ms. A documentação da [SDL_GetQueuedAudioSize](https://wiki.libsdl.org/SDL2/SDL_GetQueuedAudioSize) explica que a quantidade ainda não enviada ao hardware não representa a posição exata já reproduzida. A [SDL_Delay](https://wiki.libsdl.org/SDL2/SDL_Delay) também pode exceder a espera pedida por escalonamento. São causas sustentadas para investigar a irregularidade; não provam que toda queda de FPS vem do áudio.

A primeira tentativa aguardou antes de publicar o present. A auditoria de `system.cpp::render_pending`, `gs.cpp::render_pending` e `gpu.cpp::present` confirmou que a mensagem leva ao envio dos comandos acumulados à GPU. A espera antecipada pode atrasar esse envio; essa ordenação foi rejeitada. O relatório conserva todas as medições completas do primeiro protótipo e as amostras completas do segundo. O segundo driver foi encerrado deliberadamente após os resultados desfavoráveis; seu replay filho em andamento terminou normalmente. Não se declara essa validação completa.

A versão final do experimento conserva **publicar present → aguardar**, em ambos os modos. `host/frame_pacer.hpp` usa `steady_clock`, preserva a fase em pequenos atrasos e abandona prazos obsoletos após atraso longo. A reserva de áudio usa histerese de 20/60 ms: evita espera de prazo no início ou durante reposição após lentidão; mantém a proteção anterior de 80 ms. Isso não modifica amostras, clocks emulados ou contagem de frames. O alvo de 50/60 Hz é o nominal atual do runtime; a taxa específica do jogo ainda não foi confirmada independentemente. O código de [timing do PCSX2](https://github.com/PCSX2/pcsx2/blob/master/pcsx2/Counters.cpp) foi consultado como referência de separação de tempos; nenhum código dele foi incorporado.

`host/window.cpp` deixa o experimento opt-in por `PS2_EXPERIMENTAL_PACING=1`; `PS2_LEGACY_PACING=1` força o legado. Sem variáveis o comportamento padrão de pacing permanece legado. `scripts/audit/run_pacing.py` compara os modos em um único executável, alterna os pares, verifica SHA antes/depois, exige contagem de frames e saída normal e recusa sobrescrever resultados anteriores. Os estados continuam privados.

Não se alteraram o caminho SDL do controle, efeitos, geometria, texturas, shaders, resolução, física, dados do jogo ou matemática VU. O acesso estático a uma função de tempo da interface também foi localizado na análise privada, mas pode representar resultados de corrida: ainda não se afirma extração do cronômetro vivo.

## Build, testes e inventário

- Fonte privada da implementação: `72a7809bc540d07eba38c1aa2f05d1dd59e21ee9`. Arquivos: `host/window.cpp`, `host/frame_pacer.hpp`, `tests/frame_pacer.cpp`, `scripts/audit/run_pacing.py`, `CMakeLists.txt`.
- **22/22 CTest**, incluindo 50/60 Hz, deriva/fase, atraso longo, sobrecarga, troca de modo, reset e histerese da reserva; suites anteriores de VU/VIF/Q/GS e controles passaram.
- **24 janelas nativas de corrida** e seis de menu no protótipo final, todas 600 VBlanks e exit 0. São quatro cenas, não nova cobertura das 36 rotas.
- **12 imagens idênticas à v7**, dois ticks em cada um dos seis ambientes, em janela nativa com renderer síncrono para captura. Esse modo é separado do benchmark multithread.
- Build final opt-in recompilado; três smokes de 180 VBlanks, exit 0: padrão, legado explícito e experimental. O helper de comparação executou o par legado/experimental nesse build. Os números extensos acima pertencem ao protótipo preservado; os hashes são distintos.
- Recompilação EE C++, 37 continuações VU seletivas mais fallback, GS por compute em Vulkan/wgpu, SDL2 de janela/controle/áudio, IOP/HLE/SPU2/IPU e CMake/Ninja/Clang continuam conforme [inventário de arquitetura](architecture.md). Continua um executável nativo Windows, sem PCSX2 ou navegador. Controle físico já foi confirmado pelo mantenedor em rodada anterior; não se recertificaram todos os dispositivos USB/BT nesta rodada.
- i5-12400 / RTX3060, driver617.14, Release O3, 1x (640×479), janela960×720, WASAPI48k. Aplicativos concorrentes ativos; prioridade/afinidade/plano de energia preservados. Uma observação de carga total chegou a aproximadamente sete CPUs lógicas equivalentes, incluindo o jogo. É apenas uma amostra, não uma atribuição causal por execução. Oscilação e resultados negativos permanecem na evidência.

SHA-256 do protótipo medido: `8c5b20e6c52a34a7d44636713f5ef30d069c1b8242bc01fa045cdba31624f54c`.

SHA-256 do build final opt-in, verificado nos smokes: `99dcab536c1d44e1e297de0ec23b80bf95f4feba47146b9c1ced041ab4800f03`.

Os artefatos privados anteriores e as cinco mudanças preexistentes de modo em scripts e backups foram preservados. Não houve nova distribuição binária pública.

## Limites, riscos e próxima etapa

As métricas medem ciclos EE e callbacks anteriores à apresentação; não medem scanout, input-to-photon ou underruns reais. Fila zerada não é prova de falha no hardware de áudio. O protótipo não elimina o custo de GS/VIF/VU em Fuji, Grand Prix ou Skorost. Não se altera o clock ou remove efeito para esconder esse custo. Não se comprovam 60 FPS globais, todas as classes/Mirror, voltas completas, 30 minutos ou fidelidade PS2 integral.

O próximo trabalho P0 volta ao custo de preparação GS e VIF/VU, com tempos por estágio e repetição em Grand Prix/Fuji/Skorost; segue a extração de cronômetro vivo para diferenciar ritmo do jogo de apresentação. [Próximas dez tarefas](next-10-tasks.md) registra prioridade, dificuldade, impacto e dependências. Cinco pares visuais originais/nativos em1x, fog/dither/CRTC ativos, áudio real, shutdown/drain/join e portabilidade permanecem abertos. Inventário transitivo de licenças e proveniência ainda precede distribuição do código derivado e dos dados comerciais.

Checklist: [x] auditoria do estado e baseline preservada; [x] experimentos implementados/medidos e rejeições registradas; [x] 22 testes e regressão de imagens; [x] helper reproduzível e build opt-in; [ ] desempenho global; [ ] relógio vivo e referência original; [ ] corridas completas/30min/áudio/latência; [ ] outra GPU/PC limpo/proveniência. Os testes automáticos disponíveis foram feitos sem pedir novos logs manuais; medição física e outra máquina permanecem não verificadas.
