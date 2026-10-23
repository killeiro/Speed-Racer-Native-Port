# Vanilla v13 — custo de compartilhamento nas filas

19/10/2026. **Ajuste restrito das filas validado funcionalmente; ganho de throughput inconclusivo e aceite Vanilla aberto.** O executável segue nativo Windows/Vulkan. As versões anteriores permanecem preservadas. O aceite global de Vanilla e de60FPS estáveis permanece aberto.

## Comparação do artefato final

| Cena | v11 FPS | v12 FPS | v13 FPS | v12→v13 | p95 callbacks v12/v13 ms | Callbacks >33,33ms v12/v13 |
|---|---:|---:|---:|---:|---:|---:|
| Fuji-3 | 52.72 | 51.92 | 52.27 | +0.69% | 24.86 / 24.79 | 0.33 / 2.67 |
| Skorost-1 | 45.96 | 52.11 | 52.10 | -0.02% | 28.12 / 27.94 | 1.00 / 2.00 |
| Grand-Prix-0 | — | 59.86 | 59.83 | -0.04% | 26.17 / 26.41 | 5.33 / 4.67 |
| Thunderhead-0 | — | 60.02 | 59.98 | -0.08% | 25.66 / 26.77 | 2.33 / 6.00 |
| Aurora-3 | — | 59.98 | 59.96 | -0.03% | 26.69 / 27.27 | 5.33 / 4.67 |

FPS são de simulação EE/parede. Fuji e Skorost usam três trios correspondentes em ordem ABC/BCA/CAB após um aquecimento por binário; as outras três cenas usam três pares adjacentes AB/BA/AB. Todos usam o mesmo caminho/nome,600VBlanks e descarte inicial de60. São12 aquecimentos e36 janelas medidas. Percentis são médias dos percentis de cada janela; não há pooling. Nenhuma compilação, sonda ou outro replay do agente rodou em paralelo. Aplicações do usuário/carga do host não foram isoladas.

A mudança de layout/leitura recupera apenas0,69% na média de Fuji contra v12 e fica cerca de0,84% abaixo da v11 desta mesma rodada. Skorost preserva o ganho da v12 contra v11, mas o ajuste adicional fica praticamente neutro. As outras médias variam menos de0,1%, próximas do teto nominal. Isso não resolve a câmera lenta nem sustenta uma nova melhoria geral de desempenho; as caudas/intervalos longos também apresentam resultados adversos. Retém-se o ajuste pequeno e os testes, com as baselines disponíveis, sem promover a v13 como versão de60FPS estáveis.

Todos os resultados e aquecimentos estão no JSON, inclusive variações adversas de FPS/p95/callbacks em Fuji-3, Skorost-1, Grand-Prix-0, Thunderhead-0, Aurora-3. As comparações v11/v12 desta rodada não apagam os resultados adversos da v12 nem usam FPS absolutos de outra rodada. Não há prova isolada da causa daquela regressão, nem contadores de hardware de cache/coerência.

As cinco menores médias na matriz separada de36 rotas foram:

| Rota | FPS simulação | p95 callbacks ms | p99 callbacks ms |
|---|---:|---:|---:|
| Skorost-2 | 47.38 | 34.78 | 47.45 |
| Fuji-4 | 47.40 | 30.82 | 41.83 |
| Skorost-1 | 48.05 | 31.88 | 38.20 |
| Fuji-5 | 51.26 | 27.42 | 30.77 |
| Skorost-0 | 52.40 | 26.52 | 30.61 |

São execuções únicas de triagem, com carga de host variável e sem baseline pareada nesta fase. Servem para selecionar novos trechos de perfil; não medem ganho/regressão contra v12. Em particular, Fuji-4 e Skorost-2 entram no próximo diagnóstico junto com as cenas já pareadas.

**Precisão das métricas:** o campo histórico `stutter_over_33ms` do helper conta intervalos dos callbacks anteriores ao present acima de33,3333ms. Não conta intervalos de simulação. Este relatório corrige o rótulo; valores históricos não são alterados. Callbacks não medem scanout, e amostras de fila de áudio vazia não são underruns de hardware.

## Evidência e correção

O [inventário estrutural](architecture.md) mantém os módulos e dependências auditados: recompilação EE, continuações VU/interpretação de fallback, VIF/DMA/GIF, GS por compute WGSL em wgpu-native/Vulkan, áudio WASAPI via SDL2 e controles SDL. O build usa CMake/Ninja/Clang e runtime C++; dados legítimos do jogo permanecem locais. Esta iteração revisa o caminho de sincronização; não é uma nova auditoria de todos os efeitos do GS ou uma validação de proveniência completa.

A auditoria seguiu publicação EE, fila VU, VIF/microcódigo, fila render, GIF/GS e conclusão de presents; examinou post/peek/pop/wait/wake e todos os chamadores de wake. Não houve falta de capacidade na sonda entre presents120–480. Em Fuji, esse trecho processou11.822.111 pacotes EE→VU e2.606.865 VU→render; a VU enviou685.966 notificações ao renderer, com276,406ms instrumentados dentro das chamadas. O renderer entrou587.411 vezes no caminho de espera do sistema operacional. Em Skorost foram13.042.726 pacotes EE→VU e1.615.221 VU→render; não houve notificação/espera ociosa no renderer nesse trecho. São contagens da execução instrumentada; medir cada notificação perturba a escalada e os tempos, portanto não são benchmark nem prova causal.

O layout real da Ring no Windows colocava freed e ambos os indicadores de espera nos offsets256/260/264, na mesma linha de64bytes. O consumidor altera freed em cada pop; o produtor lia freed e consumer_waiting em cada post. Isso cria compartilhamento dispensável. A v13 coloca os indicadores nos offsets320/384; Ring cresce320→448bytes, apenas128bytes por fila. Head/tail/posted/freed mantêm seus offsets.

**Protótipo separado, rejeitado:**64 chamadas limitadas a YieldProcessor no renderer antes de armar a espera do SO. Dois pares exploratórios por cena, com quatro aquecimentos separados, mediram Fuji 52.55→53.87 FPS e Skorost 52.08→52.02. Em Fuji os callbacks longos médios foram 0.00→1.50. O ganho de média ficou abaixo do limiar de3% para justificar outra rodada final, declarado antes da execução; esse limiar é uma heurística de esforço, não significância estatística. Não se prova ausência de benefício. O experimento não foi instalado, não está no executável final e suas12 janelas estão preservadas no JSON. Uma espera adaptativa exige medir CPU/cadência e equivalência antes de promoção.

A leitura de freed agora ocorre somente após detectar falta de espaço, antes de armar producer_waiting e repetir a leitura de tail. Se o consumidor liberar espaço nesse intervalo, a releitura evita esperar; se liberar depois, o protocolo anterior de contador/notificação continua ativo. Mantêm-se todas as ordens atômicas, incrementos e notificações repetidas enquanto o waiter detém o indicador. Não há exchange do indicador pelo produtor, relaxamento de atomics, novas esperas/spins, mudança de timeout ou aumento da fila.

A sonda temporária alterou um arquivo e foi restaurada byte por byte antes do candidato. Seus símbolos/opções estão ausentes do executável final. O renderer GS permanece exatamente igual à v12; não há redução de gráficos/efeitos, mudança de clock/física, resolução, controles ou pacing padrão.

## Verificação

- Release GUI compilado;26/26 CTests passaram, incluindo os diferenciais VU/VIF/GS existentes.
- Dez execuções extras do teste de filas:2milhões de mensagens fixas,400mil com payloads variáveis,1.280 rodadas com fila cheia e200mil rendezvous; sem divergência ou timeout. Os casos mistos/rendezvous usam espera infinita com timeout externo de15s por processo.
- Payloads cobrem0/1/15/16/17/31/63/127/223/319bytes, tipos alternados, alinhamento, wrap, consumidor ocioso e produtor bloqueado. A verificação compara cabeçalhos/bytes e ordem; não depende de timestamps para declarar ganho.
-12 imagens de seis ambientes idênticas à v12 e, transitivamente, à v11; capturas síncronas, separadas dos benchmarks.
- A captura síncrona não exercita as filas multithread. Por isso duas execuções diagnósticas adicionais verificam a fonte real das filas no caminho nativo de Fuji/Skorost: cópia independente do input do produtor antes de publicar head, comparação exata de cada cabeçalho/payload recebido e sequência monotônica por fila. Todos os pacotes dos prefixos registrados passaram; não há hashing, amostragem ou comparação apenas de contagens. Números por fila estão no JSON. Os hooks e a cópia de referência foram removidos e o executável medido restaurado. Isso corrobora transferência/ordem; não é prova geral de ausência de corridas de dados ou paridade visual PS2.
- A primeira tentativa dessa sonda abortou por erro dela própria: contava peek como consumo, embora o renderer possa adiar o pacote por orçamento de tempo e consultá-lo novamente. A revisão2 confere bytes no peek e avança sequência somente no pop. O erro, os logs e a tentativa anterior foram preservados; não foi classificado como defeito da fila de produção.
-36/36 rotas Class1 concluíram600VBlanks com aceleração/boost/direção/Car-Fu. São janelas curtas, não voltas completas.
- Pacote GUI privado e smoke de180frames com quatro DLLs/PATH mínimo registrados em package-check.json. Fallback de dados de desenvolvimento permanece; PC limpo não certificado.

## Próximas metas

1. Fuji continua P0: medir ciclos por kernel VU e custo de notificações/esperas com contadores de CPU; o layout não isolou a causa da queda v12. Avaliar espera adaptativa/batching somente com novo protocolo, equivalência e medidas de CPU/cadência.
2. Usar relógio vivo para estender replays a voltas/corridas completas, classes2–4/Mirror e30min; confirmar a cadência original.
3. Fechar cinco pares originais/nativos a1x e tratar diferenças de fog/dither/CRTC demonstradas.
4. Verificar áudio real, latência física, shutdown/pause/restart/save e pacote sem fallback antes de Remaster.

[Próximas dez tarefas](next-10-tasks.md) · [Roadmap](../../ROADMAP.md) · [Métricas](vanilla-v13-metrics.json). PR23 continua aberto; esta atualização é apenas documental.

## Checklist de aceite

| Situação | Verificação |
|---|---|
| Concluído nesta iteração | Auditoria das filas, correção restrita, compilação,26 testes, dez rodadas de stress, comparações controladas,12 imagens e36 rotas curtas |
| Pendente de engenharia/QA | Throughput completo, causa isolada da queda v12, pacing/áudio real, relógio original, voltas/classes/Mirror/30min, ciclo de vida e pacote sem fallback |
| Depende de hardware/referência disponíveis | Paridade original sincronizada, outra GPU/PC limpo e latência física USB/Bluetooth; não se solicita uma nova rodada de logs manuais ao usuário nesta iteração |

Compatibilidade: o layout privado de Ring muda e todas as unidades dependentes foram recompiladas; não é um formato de save/estado. A validação executada é Windows/x64 na máquina descrita, sem certificação de outros sistemas ou todas as GPUs/combinações de controle. Publicação/distribuição jogável segue pendente de revisão de proveniência.

## Proveniência e referências

Fonte local: `b10c3ae06e0debf6d107f2d8064e81067ea4d750`. Executável SHA-256: `ae621120cce2ec9cacc43d5b3b4b02602244745760de0084b6ece8814b65838f`. Baselines v11/v12 e arquivos anteriores preservados. O único diff de produção está nas duas fontes da fila; o terceiro arquivo amplia testes. Nenhum código comercial, executável, estado, imagem, ISO/BIOS/ELF ou asset é publicado.

A [documentação Microsoft sobre false sharing](https://learn.microsoft.com/en-us/cpp/parallel/concrt/best-practices-in-the-parallel-patterns-library?view=msvc-170) sustenta a análise de acesso e separação das linhas; a medição local avalia o efeito neste jogo. [WakeByAddressAll](https://learn.microsoft.com/en-us/windows/win32/api/synchapi/nf-synchapi-wakebyaddressall) e a [análise Microsoft de WaitOnAddress](https://devblogs.microsoft.com/oldnewthing/20160826-00/?p=94185) contextualizam as notificações e retornos espúrios. O [MTGS do PCSX2](https://github.com/PCSX2/pcsx2/blob/master/pcsx2/MTGS.cpp) foi revisto como referência arquitetural; não se copiou implementação. Investigar espera curta/batching exige uma mudança separada e nova validação.
