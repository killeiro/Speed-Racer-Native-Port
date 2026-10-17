# Profiling results — Vanilla audit v2

## Ranking sustentado por evidências

| Prioridade | Custo/defeito | Evidência | Ação e risco |
|---|---|---|---|
| P0 | Throughput insuficiente em VIF/VU/GS | simulação 80,6% antes/88,4% após em 1x; single~48%, sem worker VU~63%; baseline JSON | Manter paralelismo; medir UNPACK/NOP/AOT por custo antes de otimizar. Não desacoplar física para esconder atraso |
| P0 | VIF/GIF estado sobrescrito por worker | teste sequencial EE mask→unmask→replay mask falha antes com GIF_STAT 10000003 vs 1; passa depois | Corrigido ownership em `vif.cpp::execute(0x06)`. Uso ativo: centenas de comandos06 por replay. Não provado como causa principal da lentidão |
| P1 | CPU VIF/VU | perfil anterior do mesmo exe funcional: thread VU~21% VIF::run,10,2% run_fast,10,5% runtime C,~3,9%ntdll | Priorizar parser/UNPACK e microprogramas que faltam; perfil por suspensão perturba execução e não mede FPS |
| P1 | GS preparação/lotes/feedback | após~185651 raster batches / 358 displays (~519/display), uploads~60703 e CLUT~53981; draw+emit_all~21% renderer no perfil anterior | Investigar estado/ordenação/overlap e cópias mantendo feedback; não suprimir efeitos |
| P1 | Fila de apresentação bloqueia EE | `gs::post_present` espera >2 presents; espera média~7,14ms em 1x,~9,83ms em 3x | Throughput do renderer importa. Medir fases e latência; trocar fila não produz capacidade de CPU/GPU |
| P2 | Áudio/pacing | fila média~13,9ms e espera~0,002ms em 1x | Não é gargalo dominante neste trecho. Buffer de 80 ms pode contribuir em outros momentos, mas reduzí-lo sem métrica de underrun é arriscado |
| P2 | Input | SDL poll → snapshot SIO2 sob mutex → resposta do pad→EE→VU/GS→present | Sem medição de ponta a ponta. Inputs neutros sem foco; não culpar controle por câmera lenta global |

A cobertura AOT não é total: Windows não tem JIT VU ativo. O contador interpretado variou entre 134 e~21 mil nestes casos; quantidade de chamadas não é quantidade de instruções nem custo acumulado. Compilar tudo indiscriminadamente ou entrar em AOT no meio do pipeline pode quebrar CLIP/Q/status.

## Correções desta iteração

1. `vif.cpp::execute`, comando 06: só EE altera GIF status MSKPATH3. O worker reexecuta microcódigo/VU sem reaplicar status atrasado. Novo `tests/vif_path3.cpp`: falha 4 antes, passa 0 depois. Baseado em ownership e teste local; PCSX2 VIF/MTVU foi referência conceitual, sem copiar código GPL.
2. `raster.cpp::setup` e `gpu.cpp::make_setup`: DATE ignorado em CT24. `tests/gs_date.cpp` exercita 32 casos no raster real; antes: 2 falhas; depois: 0. Teste de encoder GPU em `tests/gs_feedback.cpp`. Não há uso DATE_CT24 no replay medido, logo não explica mudança visual desta cena.
3. `host/frame_metrics.hpp` e `window.cpp`: telemetria opcional EE independente da apresentação; CSV buffered por frame, sem logs por instrução.
4. `gpu.cpp::stats`: denominador antigo usava frame guest absoluto (4560), apesar de só 360 frames processados. Agora usa dispatches reais de display e nomeia `avg/display`. O valor antigo~41 não equivalia a lotes por frame processado; o correto nesta execução é~519/display. Não é aumento de trabalho.
5. Diagnóstico opcional GS mede reconstruções de setup com mip/dither/DATE/AA solicitados; backend/presentmode reais registrados. O contador é por reconstrução de setup, não por pixel ou primitiva.
6. `.gitignore` exclui saves/estados/tarprivado e pacote local passa a conter IPU/Play! NOTICE antes ausente.

## Hipóteses que permanecem

- SIGNAL/FINISH/LABEL de PATH1 no worker podem não entregar evento à EE: precisa contagem e mailbox correto; ocorrência no jogo não demonstrada.
- Encerramento g_halted/string e worker detached precisam protocolo de dono/drain/join; não atribuir slowdown a isso sem medição.
- Scheduler agenda próximoVBlank em now()+período; deriva observada~0,006%, não suficiente para a queixa.
- CompilaçãoWGSL ocorre na inicialização e primeiros usos; não há evidência aqui de recompilação a cada frame. Cache deshader não é solução presumida.
- Uploads/CLUT/cachesVRAM são ativos, mas não foi isolado bytes/s nem custoGPU porpipeline nesta rodada. `PS2_GPU_PROFILE` precisa replay headless porque caminho comsurface não o mede da mesma maneira.

Fontes primárias: [PCSX2 Vif_Codes](https://github.com/PCSX2/pcsx2/blob/master/pcsx2/Vif_Codes.cpp), [MTVU](https://github.com/PCSX2/pcsx2/blob/master/pcsx2/MTVU.cpp), [GS software](https://github.com/PCSX2/pcsx2/blob/master/pcsx2/GS/Renderers/SW/GSDrawScanline.cpp).
