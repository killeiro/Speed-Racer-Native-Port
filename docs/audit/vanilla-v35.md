# Vanilla v35 — AVX2 VU e análise da sessão humana

22/10/2026. **Avaliação experimental, sem promoção de patch ou pacote novo.** A equipe pilotou por 29min08s em Alta 3×, com controle Xbox, fullscreen adaptado a 2560×1440, Vulkan nativo, bilinear do HUD e FXAA. A v30 e seus saves originais permanecem preservados.

## Resultado da pilotagem

Saída 0,104.220 quadros emulados, GS drenada, GPU ociosa ao fechar e workers unidos. Renderer registra failed=0; nenhum erro de substituição do cartão. O cartão de teste mudou e foi preservado, sem sobrescrever os cartões jogados anteriores. Isso não certifica a sequência resultado natural→save→reabertura.

São 90.430 amostras de cena com relógio avançando, identidade válida e pausa explicitamente desligada. Menus, relógios parados e pausa ficam fora dessas médias; nenhum pico é aparado. São cinco instâncias/variantes em quatro ambientes. Grand Prix e Skorost não aparecem como corrida ativa validada nesta sessão.

| Pista | Variante | Tempo ativo observado, s | Quadros simulados/s | Callback p99, ms | Observações fila áudio zero |
|---|---|---:|---:|---:|---:|
| Thunderhead | curto / direto | 113.9 | 59.56 | 37.30 | 0 |
| Thunderhead | longo / reverso | 361.0 | 59.72 | 36.36 | 0 |
| Onuris | médio / direto | 252.9 | 59.67 | 35.29 | 1 |
| Fuji | curto / direto | 254.4 | 58.93 | 33.39 | 431 |
| Aurora | longo / direto | 534.5 | 59.87 | 36.74 | 0 |

Média ativa geral **59,62 quadros simulados/s**. Há **12 intervalos de callback>100ms**, máximo **921,64ms**; 29 callbacks>50ms. Logo, média próxima de 60 não significa cadência uniforme. Fuji curto/direto tem o trecho contínuo de 600 quadros mais pesado: **53,95 quadros/s**, espera média de postagem 6,69ms. A origem dessa espera pode incluir EE/VU/GS; não é medição pura de GPU.

Na Fuji, a fila de áudio do SDL chegou a zero em 431 amostras, maior sequência de 7 quadros; Onuris tem uma amostra, demais variantes zero. São observações do buffer de software, sem captura acústica ou PCM desta sessão; não provam silêncio ou underrun físico. Áudio v29 e HUD v30 continuam aceitos.

## Código auditado para os gargalos

O caminho padrão `legacy_pacing()` permanece ativo quando `PS2_EXPERIMENTAL_PACING` está ausente, como nesta sessão. Ele espera a fila SDL cair abaixo de 80ms, consultando-a com `SDL_Delay(1)`. O dispositivo usa blocos de 1.024 amostras a 48kHz, aproximadamente 21,33ms. Esse acoplamento sustenta a hipótese de cadência irregular mesmo com média próxima de 60. Não se habilita automaticamente a alternativa antiga: trabalhos anteriores de pacing têm limites e rejeições documentados.

O GS cria pipelines ausentes de forma síncrona em `GetTFXPipeline`→`CreateTFXPipeline`; shaders ausentes passam por `CompileAndAddShaderSPV`. O cache usado começou com 176 shaders e terminou com 207, **31 novos**; pipelines passaram de 2.062.003 para 2.419.008 bytes. Compilação durante a corrida é uma hipótese concreta para picos isolados. Sem timestamps de compilação por evento, não se atribuem individualmente os 12 picos a ela; IO e agendamento do host também não foram isolados.

O cache aquecido e o cartão de teste da sessão estão preservados. O launcher humano passou a reutilizar cópias de cache/progresso de uma sessão anterior concluída, com hashes do EXE/DLL/cartão verificados, em vez de sempre reiniciar do cache curto de Fuji. Isso muda somente o harness privado, sem alterar runtime/qualidade/áudio.

O contador de callback omite seu primeiro intervalo: 104.219 linhas para 104.220 frames EE. A análise inicialmente parou no guard de igualdade; a inspeção de `trace_frame()` confirmou que o callback N termina no frame EE N+1. O alinhamento foi corrigido e verificado para todas as linhas. Não se descartou uma linha válida nem se inventou um intervalo inicial.

## Candidata AVX2 e verificações funcionais

A auditoria encontrou o GS já compilado para AVX2 enquanto os arquivos VU eram genéricos x64/SSE2. A opção `PS2_VU_AVX2`, desligada por padrão, limita `-mavx2 -mno-fma -ffp-contract=off` aos arquivos VU e à fixture gerada. EE/runtime/hosts continuam genéricos; GUI/CLI verificam suporte antes da execução VU. CPU incompatível não foi exercitada neste PC. Sem fast-math/FMA ou alteração do histórico de flags/Q/CLIP.

**47 testes passam**, incluindo 1.048.576 casos dual ISA em 16 modos de arredondamento/FTZ/DAZ, com resultados e MXCSR idênticos. As fixtures comparam4.800 estados completos e as políticas existentes; produtor nativo→consumidor interpretado STATUS/FSSET está coberto. Os332 inputs gerados continuam idênticos,37 continuações e 310 programas extras preservados. São verificações contra a semântica atual do runtime, não certificação geral do PS2.

Três boots headless separados com ISO original,12.500 quadros cada, compararam registradores completos,16KiB locais, payload GIF e referências Q. Identidade e pausa verificadas; capturas finais existem. Estes diagnósticos não são FPS da janela.

| Cena | Checks completos | Referências Q | Saída |
|---|---:|---:|---:|
| fuji | 61,241 | 1,785,889 | 0 |
| skorost | 7,121 | 326,747 | 0 |
| thunderhead | 2,863 | 374,255 | 0 |

## Comparação automática preservada

O protocolo anterior às edições exige três pares Fuji positivos/média>=3%, três pares de cada controle, limites de perda média/cauda e contadores iguais. Fuji e Skorost completaram três pares cada. Thunderhead completou um par. A equipe pediu assumir o controle para pilotar percursos completos; a automação foi encerrada no terceiro boot Thunderhead. A tentativa parcial fica identificada como interrupção solicitada, sem classificá-la como crash ou medição completa.

Há14 execuções completas preservadas, todas saída0/contadores iguais. Média Fuji **+8.011%** na janela medida. A referência Skorost variou bastante; a carga externa não foi isolada. São simulação/callback em janelas curtas, não FPS físico ou prova causal isolada. A pilotagem humana amplia cobertura de uso, mas não substitui os pares restantes ou os gates audiovisuais de promoção. A candidata permanece experimental; não foi rejeitada/restaurada nem promovida por essa matriz incompleta.

| Par | Ganho de simulação | Variação p99 callback | Contadores iguais |
|---|---:|---:|---|
| fuji 1 | +8.257% | -0.433% | sim |
| fuji 2 | +8.027% | -4.565% | sim |
| fuji 3 | +7.751% | -8.311% | sim |
| skorost 1 | -0.273% | +7.856% | sim |
| skorost 2 | +15.047% | -26.426% | sim |
| skorost 3 | +6.345% | -13.216% | sim |
| thunderhead 1 | -0.239% | +4.990% | sim |

| Execução | Variante | Quadros simulados/s | Callback p99, ms | Máximo, ms |
|---|---|---:|---:|---:|
| fuji 1 | baseline | 39.789 | 39.627 | 85.286 |
| fuji 2 | candidate | 43.074 | 39.455 | 65.851 |
| fuji 3 | candidate | 43.747 | 37.319 | 77.123 |
| fuji 4 | baseline | 40.496 | 39.104 | 51.898 |
| fuji 5 | baseline | 39.725 | 44.615 | 68.083 |
| fuji 6 | candidate | 42.804 | 40.907 | 375.385 |
| skorost 1 | baseline | 49.812 | 31.639 | 36.061 |
| skorost 2 | candidate | 49.676 | 34.124 | 42.966 |
| skorost 3 | candidate | 50.656 | 32.601 | 336.639 |
| skorost 4 | baseline | 44.031 | 44.311 | 91.209 |
| skorost 5 | baseline | 47.654 | 36.688 | 44.870 |
| skorost 6 | candidate | 50.678 | 31.840 | 45.135 |
| thunderhead 1 | baseline | 59.593 | 33.039 | 54.054 |
| thunderhead 2 | candidate | 59.450 | 34.688 | 296.098 |

## Próximos passos delimitados

1. Isolar cadência ligada ao áudio e custo de criação de pipelines, usando os dados existentes e cache aquecido, sem repetir uma campanha manual inteira.
2. Tratar o custo residual de Fuji preservando Alta 3× e a correção de áudio; evitar simplesmente aumentar filas ou remover precisão.
3. Fechar controles automáticos restantes, cobertura Grand Prix/Skorost e resultado/save/reabertura; classes/Mirror, latência física e segundo PC continuam abertos.

[V33](vanilla-v33.md) e [v34](vanilla-v34.md) falharam nos respectivos gates e foram retiradas; seus dados adversos e restaurações exatas estão preservados. O GS não mudou; seus cinco testes unitários upstream são evidência anterior v31, enquanto a suíte atual do runtime foi executada separadamente.

GitHub documental e anônimo, atribuição à equipe. PR23 permanece aberto/sem merge. Nenhum código, executável, ISO/ELF, shader, cartão, imagem, áudio ou log bruto é publicado. [Métricas agregadas](vanilla-v35-metrics.json) e [roadmap](next-10-tasks.md).
