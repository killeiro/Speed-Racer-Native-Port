# Vanilla v6 — contexto VIF por chamada

Data: 19/10/2026. Base local v5, commit `d169406`. Esta etapa mantém o Windows nativo, os controles e a renderização anterior. A meta de desempenho de todas as pistas continua aberta. Não houve corte de efeitos, alteração de física, ciclos ou taxa da simulação.

## Causa e alteração

O perfil da v5 em Fuji atribuía 15,6% das amostras da thread VU a `vif::run`. A leitura do parser encontrou consultas repetidas ao papel da thread, à unidade VIF e à existência da fila VU em `data_words`, `execute`, `unpack` e `run_vu`, para cada comando. O binário usa TLS nativo; o diagnóstico não é uma alegação de TLS emulado.

`runtime/src/vif.cpp::run` passa a capturar uma vez o papel da thread e a condição de replay EE/VU, e encaminha a mesma referência de unidade e esses valores aos helpers. O worker define seu papel ao entrar em `system.cpp::run_vu_thread`; as filas são iniciadas antes do processamento e não são iniciadas nem trocadas pelos comandos VIF. Uma chamada síncrona de parsing mantém esse contexto, mas os campos mutáveis da unidade continuam sendo lidos em cada comando. Ciclos, ROW/MASK, NUM/CODE, pending, IRQ, MPG, DIRECT e TOP/ITOP continuam com a mesma ordem. Chamadas posteriores voltam a capturar o contexto. O wrapper direto de UNPACK permanece para o teste de fontes com aliasing.

A mudança se limita ao parser: a renderização GS e os microprogramas nativos são os mesmos da v5. Os helpers recebem referências aos objetos existentes e preservam a ordem dos acessos de memória.

## Comparação controlada

Três pares alternados v5/v6 por cena; mesmo checkpoint e entradas. Os resultados abaixo usam o EXE final validado. A exploração inicial Fuji/Grand Prix mostrou 40,07→40,98 e 54,67→55,74 FPS; foi registrada separadamente e não foi somada a estes pares. A anotação `maybe_unused` posterior apenas elimina um aviso do wrapper de teste; ainda assim o par final foi repetido com o artefato definitivo.

| Cena | Média v5 | Média v6 | Variação | p95 médio v5/v6 |
|---|---:|---:|---:|---:|
| Thunderhead-0 | 58.42 | 58.97 | +0.94% | 23.66/24.41 ms |
| Fuji-3 | 40.29 | 41.41 | +2.78% | 32.86/31.60 ms |
| Grand-Prix-0 | 55.29 | 55.85 | +1.01% | 28.67/28.55 ms |
| Skorost-1 | 43.98 | 44.40 | +0.96% | 35.54/34.88 ms |


O efeito é pequeno e local. Três pares não estabelecem um ganho universal e não eliminam variações de carga, especialmente em cenas próximas do limite de 60 Hz. Outros aplicativos permaneceram ativos e o plano estava em Equilibrado. p95 médio é a média dos três percentis, não um percentil agregado; o JSON preserva cada execução e seus hashes. Esta alteração não sustenta a afirmação de que o jogo inteiro está liso ou pronto.

## Matriz final — FPS emulado

| Ambiente | CW curta | CW média | CW longa | CCW curta | CCW média | CCW longa |
|---|---:|---:|---:|---:|---:|---:|
| Thunderhead | 59.20 | 59.16 | 59.76 | 59.95 | 59.96 | 59.96 |
| Onuris | 59.96 | 60.02 | 59.96 | 60.30 | 60.20 | 60.17 |
| Fuji | 42.93 | 43.90 | 45.97 | 41.12 | 41.74 | 42.05 |
| Aurora | 59.96 | 60.02 | 60.02 | 59.96 | 59.97 | 60.23 |
| Grand-Prix | 55.67 | 54.72 | 58.21 | 55.33 | 57.46 | 58.93 |
| Skorost | 49.93 | 45.29 | 54.49 | 59.47 | 59.02 | 60.14 |


São 36 janelas Class 1 de 600 VBlanks, descartando 60 de aquecimento, com aceleração e comandos de boost/curva/Car-Fu. i5-12400, RTX3060, Vulkan/Mailbox, Windows GUI com threads, 1x, fonte 640×479, janela 960×720, WASAPI. Screenshots e sampling foram separados dos benchmarks. São aproximadamente dez segundos simulados por percurso, não voltas/corridas completas, classes 2–4, Mirror ou sessões de 30 min. O roteiro de entrada é fixo; não se certifica determinismo multithread.

A taxa nominal do runtime é 60 Hz. Ciclos EE/294.912.000 sobre tempo real medem velocidade emulada; ainda falta extrair o cronômetro da corrida independentemente. Callback anterior ao present não é scanout; fila de áudio vazia não mede underrun real. Fuji e outros trechos continuam abaixo da meta e são P0.

## Verificação

- **21/21 CTest passaram**, incluindo VIF, VU/CLIP/Q, GS/mips/feedback e controles.
- **29.968 casos diferenciais passaram contra uma cópia congelada do parser v5**, além da referência escalar habitual. A comparação serializa estado após cada operação, contadores, memórias/código VU, buffer dry-run e eventos IRQ/GIF/DMA. Cobre VIF0/1, EE/VU, fila ativa/inativa, formatos, aliasing, wrap, ciclos, IRQ/stall e payloads parciais. O hash da fonte congelada está nas métricas.
- **1,264,870 invocações VU** comparadas em registradores, memória e pacotes GIF, nos seis ambientes, sem divergência.
- **416,563 análises Q reais** comparadas com a função anterior; 4.400 fixtures VU e 30.772 casos Q sintéticos continuam passando.
- **12 imagens idênticas byte a byte à v5**. Isso mede regressão desta alteração, sem certificar paridade PS2/PCSX2.
- Os 36 replays finais saíram com código 0 e 600 linhas cada. O SHA do EXE ficou constante na validação final.

## Entrega e continuidade

EXE SHA-256: `0c051be11629b40e641ae4966c88261c27d0f3e914fb783d097884b572fd02b9`; PE subsystem 2, GUI. Pacote local com quatro DLLs e notices, sem ISO, ELF, saves ou imagens. O fallback de desenvolvimento ainda existe; PC limpo e outra GPU seguem pendentes. Controles físicos não foram recertificados nesta rodada; a integração de entrada não mudou.

Fonte local alterada: `runtime/src/vif.cpp`; build `cmake --build build/windows-speedracer-clang --target SpeedRacer`; testes `ctest --test-dir build/windows-speedracer-clang --output-on-failure`, com as DLLs do toolchain no PATH. O harness `scripts/audit/run_tracks.py` usa cópias privadas dos estados e do memory card. Métricas públicas foram sanitizadas; os estados e dados comerciais não são publicados.

Próximos critérios P0: reduzir o custo dos kernels de geometria VU e da preparação GS em Fuji/Grand Prix/Skorost com comparações isoladas; extrair o relógio da corrida e ampliar trajetórias para voltas/corridas e classes; produzir cinco pares visuais sincronizados em 1x. A lista completa está em [next-10-tasks.md](next-10-tasks.md). Latência física, underruns, 30 min, PATH1/encerramento e PC limpo continuam abertos. Remaster, novas interfaces e multiplayer ficam após Vanilla.

O GitHub recebe apenas documentação, métricas e hashes por atualização do PR22. Código derivado do jogo, executável, imagens, ISO/ELF e saves permanecem locais. Os relatórios v2 estão identificados como históricos, e README/ROADMAP distinguem implementação local de aceites ainda pendentes.
