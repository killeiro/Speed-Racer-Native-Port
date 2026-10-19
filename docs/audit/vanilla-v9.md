# Vanilla v9 — reutilização de descritores GS

19/10/2026. **Otimização local de preparação na CPU validada; aceite global de desempenho permanece aberto.** A v9 conserva o pacing legado como padrão e mantém o experimento v8 opt-in. Não modifica shader, efeitos, resolução, física, clocks emulados ou controles. As baselines v6/v7/v8 foram preservadas.

## Resultado

O renderer comparava os31 campos de um descritor GS para cada primitiva, inclusive quando o cache de estado era o mesmo. A v9 reutiliza o último descritor enquanto essa equivalência continua válida. No teste diferencial final, **61,265 chamadas** produziram os mesmos registros, comandos e bytes para a GPU; as comparações caíram de **36,648 para 1,347 (96.32% a menos)**. Esse percentual pertence ao teste, não a uma contagem completa do jogo.

No microbenchmark sem contadores, cinco pares alternados de1.228.800 chamadas de preparação de triângulos sem textura mediram **42.047→33.129 ms** em média, redução de custo de **21.21%**. É um caso sintético de CPU, não ganho de FPS do jogo. A rodada exploratória anterior ficou próxima de17%; ambas são dados de diagnóstico, não promessa de ganho global.

| Cena | v8 FPS simulação | v9 FPS simulação | Variação | p95 callbacks v8 / v9 ms |
|---|---:|---:|---:|---:|
| Grand-Prix-0 | 57.08 | 57.42 | +0.59% | 27.08 / 26.41 |
| Fuji-3 | 44.43 | 44.27 | -0.35% | 29.46 / 29.43 |
| Skorost-1 | 45.70 | 47.35 | +3.61% | 32.29 / 31.51 |
| Thunderhead-0 | 60.05 | 59.97 | -0.13% | 23.50 / 23.94 |

Grand Prix e Skorost tiveram ganho pequeno; Fuji ficou praticamente igual, com média ligeiramente menor, e Thunderhead ficou próximo do limite nominal. Os valores negativos foram mantidos. A média perto de60 FPS não elimina irregularidade dos intervalos: a matriz ainda tem p95 próximos de29 ms. Não se declaram60 FPS estáveis ou lentidão resolvida no jogo inteiro.

## Evidência e auditoria antes da alteração

O binário v8 atual foi preservado antes da edição. A desmontagem confirmou uma chamada CRT `memcmp` no caminho de `gpu::draw`. O perfil anterior colocava `draw` em15,3% e `emit_all` em10,4% das amostras da thread de renderização. A nova amostragem de Fuji encontrou14,0% em `draw` e9,4% em `emit_all`, enquanto a VU ainda concentrava custo em VIF e kernels nativos. Essas porcentagens são amostras de posição de instrução por thread, não tempos absolutos ou CPU total. O perfil de Grand Prix também observou35,7% no módulo de compilação do driver durante aquela janela; não se extrapola esse evento para o custo em regime estável. Profiling ficou separado do benchmark.

A hipótese foi reduzir comparação redundante, preservando a sequência de lotes e dependências. A auditoria verificou todos os escritores de `g_batch.setups` e do cache. `plan_decodes` modifica o campo24 durante o flush, imediatamente antes de limpar o lote. O novo conhecimento de equivalência é invalidado quando o cache é reconstruído e quando o lote é limpo. A invalidação ocorre **antes** de rejeitar primitivas por cobertura vazia ou área zero; caso contrário a próxima primitiva poderia reutilizar estado incorreto. Quando o estado mudou, a comparação completa anterior continua sendo usada, inclusive para reconhecer escritas redundantes.

Essa mudança não relaxa hazards, feedback, mipmapping, alpha, depth ou regras PS2; apenas evita repetir a comparação quando o próprio fluxo já garante igualdade. O descritor continua com31 palavras e o formato de primitivas/GPU é preservado. Nenhuma regra ou implementação de PCSX2 foi copiada. As referências de GS já pesquisadas permanecem no [inventário de auditoria](https://github.com/killeiro/Speed-Racer-Native-Port/blob/codex/vanilla-v7-register-access-20261019/docs/audit/README.md).

## Implementação e validação

Fonte privada: `aaf4f0bcea324814e3dd675b4cf884e40caac326`. Arquivos alterados: `runtime/src/gs/gpu/gpu.cpp` (reutilização/invalidação), `tests/gs_setup.cpp` (diferencial e microbenchmark separado) e `CMakeLists.txt` (alvos e geração do corpo de referência). O corpo de referência vem do mesmo código real, em namespace isolado, conservando a comparação incondicional original. O teste conta comparações; o executável de microbenchmark não tem esses contadores. O controle de fluxo foi auditado para descartar primitivas, trocar atributos/contextos/CLUT, refazer estado idêntico, descarregar o lote e reutilizar descritores após decode.

- **23/23 testes passaram.** A extensão final do teste de descritores, cobrindo decode/flush em lote texturizado, também passou separadamente; os outros22 testes não mudaram. As suítes GS de mipmapping, regiões, feedback e testes anteriores VU/VIF/Q/controle continuam passando.
- **24 janelas medidas em quatro cenas**, três pares alternados AB/BA/AB por cena. Antes delas, oito janelas de600 VBlanks aqueceram ambos os binários, no mesmo caminho/nome, uma por binário/cena. Os aquecimentos estão retidos no JSON e excluídos das médias principais. SHA verificado antes/depois de cada execução.
- **36/36 rotas Class1** concluíram600 VBlanks, exit0, com aceleração, boost, stick direito e Car-Fu. A matriz é de janelas curtas, aproximadamente dez segundos simulados, não de todas as seções ou corridas completas.
- **12 imagens idênticas à v7**, dois ticks em cada um dos seis ambientes. Capturas síncronas/headless são verificações de conteúdo e ficam separadas das medições da janela nativa multithread. Não se afirma determinismo multithread integral.
- Executável nativo Windows recompilado e mantido com o mesmo hash durante as medições; pacote local verifica PE GUI, DLLs e smoke. Continuidade do controle Xbox/PlayStation por SDL foi preservada; a confirmação física é de rodada anterior, sem recertificar todos os dispositivos USB/BT.

Condições: i5-12400, RTX3060 driver617.14, Vulkan/wgpu nativo,1x (640×479), janela960×720, WASAPI48k stereo S16, Release O3/Clang23. Aplicativos concorrentes ficaram ativos; prioridade, afinidade e plano de energia não foram alterados. Não houve build ou amostragem simultânea aos benchmarks. Os primeiros60 VBlanks de cada execução são descartados. A tabela usa a média dos percentis de cada repetição, não um percentil calculado por pooling.

SHA-256 do executável v9: `3a7b956a51c9996d7904426a860d1d337a2385036b780ee18ce9841f6b476a56`.

O inventário EE AOT,37 continuações VU com fallback, IOP/HLE/SPU2/IPU, GS compute e dependências permanece conforme [arquitetura](https://github.com/killeiro/Speed-Racer-Native-Port/blob/codex/vanilla-v7-register-access-20261019/docs/audit/architecture.md). A nova opção de teste só existe nos alvos de teste; o jogo usa a otimização de CPU por padrão. A execução continua sendo nativa Windows, sem lançar PCSX2 ou navegador.

## Limites e próximos P0

O cronômetro vivo ainda não foi extraído: a taxa60 Hz é a nominal atual do runtime, não uma confirmação independente do ritmo original. Callbacks não medem scanout/input-to-photon; fila de áudio zerada não mede underrun de hardware. Não se confirmam30min, outras classes/Mirror, corridas completas, outra GPU, PC limpo sem fallback ou paridade PS2. Não se atribuem diferenças entre matrizes de rodadas distintas à otimização atual.

Fuji continua limitada, apesar da redução de trabalho na preparação GS. O próximo P0 é discriminar VIF/UNPACK e kernels VU com os mesmos replays, além de completar a extração do relógio vivo. A preparação GS remanescente, áudio/pacing, cinco pares visuais originais/nativos em1x, dither/fog/CRTC ativos e ciclo de vida/portabilidade seguem no [plano de dez tarefas](https://github.com/killeiro/Speed-Racer-Native-Port/blob/codex/vanilla-v7-register-access-20261019/docs/audit/next-10-tasks.md). Remaster, resolução superior, UI/câmeras/mods/multiplayer/navegador permanecem posteriores à estabilização Vanilla.

Checklist: [x] baseline preservada e evidência antes da edição; [x] otimização isolada e diferencial de payload; [x] testes/build/pares/matriz/imagens; [x] pacote local e atualização documental; [ ] desempenho global e cronômetro; [ ] paridade PS2; [ ] corridas/30min/áudio/latência; [ ] ciclo de vida/PC limpo/proveniência. As cinco alterações preexistentes de modo em scripts e os backups foram preservados. O GitHub recebe documentos/métricas; implementação, executável, ISO/BIOS/ELF, assets, imagens e saves permanecem locais. Não se solicitaram novos logs manuais.
