# Vanilla v3 — mipmapping e otimização VIF

> Relatório local histórico, publicado como documentação em 19/10/2026. Os commits e artefatos locais citados não são downloads nem código disponível neste repositório. [Estado atual](README.md).

Data: 17/10/2026. O executável continua Windows nativo, com controles SDL e subsistema GUI. Esta entrega consolida o mipmapping que estava no working tree e aplica uma otimização pequena no parser VIF. Não certifica 60 FPS nem paridade integral com o PS2.

## Mudanças efetivas

- `runtime/src/gs/gpu/gs.wgsl` e `raster.cpp`: seleção dos níveis 0 a 6, TEX1 LCM/L/K/MXL, MMAG/MMIN, filtros nearest/bilinear e mistura entre mips. LOD vem de Q, inclusive com UV fixo; Q de sprite é preservado. CLAMP e regiões de repetição acompanham o nível.
- `gpu.cpp`: os endereços MIPTBP e suas áreas de VRAM participam da detecção de dependências, snapshots, uploads e cache. O cálculo considera wraparound da VRAM e máscaras de canais, preservando a otimização de feedback anterior.
- `gs/texture.hpp` e escrita TEX0 em `gs.cpp`: geração MTBA dos registros de mip1–3. MIPTBP2 e escritas explícitas posteriores são preservados. Context/State e formato de save-state não foram ampliados.
- `runtime/src/vif.cpp`: agrupa apenas sequências de comandos NOP literalmente zero. CODE, NUM, contadores, IRQs, comandos parciais e palavras zero de payloads mantêm o comportamento anterior. Nenhuma mudança no relógio emulado ou na física.

## Validação

**17/17 CTest passaram.** Mipmapping: 156 casos CPU e 164 GPU com readback real; também 164 casos em cada escala 2x e 3x. Cobertura de CT32/16/16S, T8/T4, paletas32/16, LOD/filtros/regiões e feedback. MTBA: 31 verificações do caminho real dos registros. Há testes separados de hazards e os testes de feedback/CLIP/controle anteriores permanecem ativos.

Os três casos de Q não finito/zero testam uma política de robustez documentada; não constituem prova de comportamento do hardware nesses valores. Q negativo finito é coberto em STQ e UV. O teste de paletas injeta a CLUT decodificada; não certifica todo o carregamento CSM1/CSM2.

NOP: **10.768 comparações diferenciais**, estado serializado após cada operação, memórias VU e efeitos IRQ/GIF/DMA/fila. Os dois parsers são gerados do fonte atual; a referência desliga apenas o agrupamento. O microbenchmark contém também o controle sem NOPs, que sofre pequena perda pelo branch adicional. Ganho sintético de NOP não é ganho de FPS do jogo.

## Imagem e limites

O mipmapping altera cerca de 13,15% dos pixels da captura frame 4400, principalmente minificação das texturas. Isso mede mudança, não uma nota de qualidade ou prova de paridade. A comparação visual está em `comparacao-frame 4400.png`. O build com NOP produziu exatamente as mesmas três imagens do build com mipmapping nos frames 4400/4600/4800 após 600 frames: `nop-image-regression.json`.

O tour previamente executado com mipmapping passou por boot, menus, seleção e grid até frame 8000, saída 0. Os benchmarks e a regressão de600frames usam um estado com o carro próprio parado e adversários ativos. Não certificam pilotagem, partículas em todos os efeitos, corrida completa ou estabilidade por 30 minutos. O código de controle foi preservado; testes virtuais passaram, sem nova certificação física USB/Bluetooth nesta rodada.

## Desempenho — alteração NOP isolada

Três pares alternados, áudio WASAPI, mesma cena, renderizador com mipmapping nos dois lados; frames 4200→4560 e descarte dos 60 iniciais. FPS é emulado; velocidade compara ciclos EE com tempo real. Percentis de apresentação são do callback anterior ao present, não do scanout.

| Par | Versão | FPS emulado | Velocidade | p95(ms) | p99(ms) |
|---|---|---:|---:|---:|---:|
| 1 | Antes | 57.16 | 95.27% | 21.62 | 23.86 |
| 1 | Depois | 58.64 | 97.73% | 21.28 | 22.64 |
| 2 | Depois | 57.50 | 95.84% | 22.15 | 23.54 |
| 2 | Antes | 56.70 | 94.50% | 22.42 | 25.90 |
| 3 | Antes | 57.80 | 96.34% | 21.10 | 22.29 |
| 3 | Depois | 58.80 | 98.00% | 20.74 | 22.90 |

Médias: **57.22 → 58.31 FPS** (aproximadamente 1.9%); velocidade 95.37%→97.19%. A melhora é pequena neste replay. Três pares não comprovam ganho universal nem eliminam a variabilidade de carga entre execuções com threads. O mipmapping teve rodada anterior separada perto de 55 FPS antes/depois, sem ganho de velocidade conclusivo; sua finalidade é restaurar o sampling solicitado pelo jogo.

## Registro e reprodução

Commits locais na branch `codex/vanilla-mipmapping`:

- `df2eb04`: mipmapping, MTBA, hazards e testes GPU.
- `f7a1cd1`: agrupamento de NOP e regressão diferencial.
- `be3d293`: cobertura de Q negativo.

Build Release com Clang23.1.3/CMake/Ninja. Comandos: `cmake --build build/windows-speedracer-clang -j 8`; `ctest --test-dir build/windows-speedracer-clang --output-on-failure`. O harness `scripts/audit/run_matrix.py` usa estado e memory card privados em cópias; os comandos completos locais estão no workspace. Dados estruturados sanitizados acompanham este relatório.

SHA-256 do EXE: `387693fd4daf169677800a34c7be497f29f446cb22b8f8e81d2d00f2c898bbfb`. O save original manteve SHA-256 `eed9f080cd5a613bed02c732cc0259e549b916a91f56de7736593fcc96591b87`. Builds anteriores foram preservados. Fontes, binários, imagens e dados do jogo desta iteração não foram enviados ao GitHub. Em 19/10/2026 o PR22 foi atualizado com documentação e métricas; nenhum código ou executável foi publicado.

## Próxima iteração

1. Tornar replay e medição do cronômetro determinísticos; criar trajetórias com aceleração, curva e Car-Fu.
2. Medir UNPACK e chamadas VU interpretadas por custo, não só quantidade, para atacar a folga restante de CPU.
3. Obter os cinco pares sincronizados PCSX2/nativo em 1x. Dithering 16, CRTC/fog e os demais efeitos continuam pendentes.
4. Validar 30 min, corrida completa, áudio e latência física; depois avaliar apresentação e resolução superior.

Fontes de comportamento usadas como referência, sem copiar implementação GPL: [PCSX2 GS SW](https://github.com/PCSX2/pcsx2/blob/091ab68708a555198d80a7216965481c7ddd0d98/pcsx2/GS/Renderers/SW/GSRendererSW.cpp), [PCSX2 GSState/MTBA](https://github.com/PCSX2/pcsx2/blob/091ab68708a555198d80a7216965481c7ddd0d98/pcsx2/GS/GSState.cpp), [paraLLEl-GS sampling](https://github.com/Arntzen-Software/parallel-gs/blob/cc6184af7e0c03da603045ca371ffa5dae9b0655/gs/shaders/ubershader.comp). Divergências e limites das referências estão no registro local `work/mip-v1/reference.md`.
