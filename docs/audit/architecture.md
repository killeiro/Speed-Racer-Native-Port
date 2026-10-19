# Architecture — Vanilla audit v2

> **Historical v2 snapshot (2026-10-16).** This report records the code and tests at that date. Mipmapping and VU/VIF execution subsequently changed. For current implementation, measurements and unresolved work, read the [audit index](README.md).


Escopo: fonte local atual, não o ZIP antigo. Data: 16/10/2026. Leitura estrutural de host, recompilador, runtime, shaders, build e testes; testes dirigidos aos caminhos ativos, sem certificação integral do hardware PS2.

## Estado e proveniência

O checkout local é derivado de `snuri00/ps2-web-recomp`, HEAD `c628ae843209f6e4cef34ec04efb6267a1618882`, também a ponta upstream consultada. As adaptações Windows/Speed Racer já estavam no working tree (19 arquivos tracked alterados, além de arquivos novos e backups). Nesta iteração foi criada a branch local `codex/vanilla-audit-v2`. O repositório público `killeiro/Speed-Racer-Native-Port` possui árvore independente de documentação e issues; seu README, ROADMAP e 21 issues foram consultados. Não foi feito push deste checkout para o origin upstream.

## Módulos e percurso

| Camada | Arquivos e funções reais | Responsabilidade |
|---|---|---|
| Launcher GUI | `host/speedracer_main.cpp`: `start`, `executable_directory`, `main`; `cmake/SpeedRacer.cmake` | Windows x64 GUI; opções, localização ELF/ISO, logs locais e encaminhamento ao runner |
| Recompilação EE | `recomp/{main,elf,r5900,analysis,codegen,snr2}.cpp` | ELF/MIPS R5900 → C++; ferramentas eerecomp/vurecomp/vujit_dump |
| Registro/dispatch | `host/main.cpp`: registro EE/VU; `runtime/src/dispatch.cpp`: `register_units`, `dispatch`, `call` | Liga endereços guest a funções compiladas, registra faltas |
| EE/memória/kernel | `runtime/include/ps2/{cpu,mmi,fpu,memory}.hpp`; `system.cpp`: `run`, `now`, `vblank`, `sync_iop`; `kernel.cpp` | Estado CPU, eventos/ciclos e kernel HLE |
| DMA | `runtime/src/dmac.cpp`: `deliver`, `run_chain`, `start` | Canais EE para VIF, GIF, IPU, SIF, SPU/scratchpad |
| VIF/VU | `vif.cpp`: `execute`, `run`, `transfer`, `unpack`; `vu_micro.cpp`: `lookup`, `run_entry`, `run_fast`; `vu_ops.hpp` | Unpack/microcode, VU0 e VU1, pipeline e cobertura AOT |
| JIT | `vu_jit.cpp`, `vu_jit_web.cpp`: `mode`, `compile` | Gerador WASM; Windows retorna modo0/compile nulo, usa AOT ou intérprete |
| GIF/GS | `gs/gif.cpp`: `walk`, `transfer`; `gs/gs.cpp`: `write`, `kick`, `post_present`, `render_pending` | Registros/VRAM, pacotes GIF e ordenação |
| Renderer | `gs/gpu/gpu.cpp`: `draw`, `make_setup`, `flush_batch`, `submit`, `present`; `gs.wgsl`, `blit.wgsl` | Rasterização GS por compute, hazards, texturas/CLUT, testes e blit |
| Referência CPU | `gs/raster.cpp`: `setup`, `draw`; `gs.cpp`: `display` | Rasterizador próprio de comparação; também tem lacunas, não é referência definitiva de hardware |
| Threads | `gs/queue.cpp`: `Ring::post`, `peek`, `pop`, `wait_for_work`; `host/window.cpp`: `run_window` | EE, VU1 e renderer/UI; ring buffers, WaitOnAddress em Windows |
| IOP | `iop/{cpu,kernel,libs,hw,sif,cdvd,cdvdfsv,io}.cpp` | R3000 interpretado, módulos IRX originais, kernel/bibliotecas HLE e streaming |
| Áudio | `iop/spu2.cpp`: `decode_block`, `render_voice`, `tick`; `window.cpp`: `queue_audio`, `pace` | ADPCM/ADSR/vozes e SDL; reverb não modelado, interpolação linear |
| Vídeo | `ipu/ipu.cpp`: `run_idec`, `run_command`, `write_fifo`, `read_fifo` | IPU/MPEG2; tabelas VLC adaptadas de Play! com NOTICE próprio |
| Entrada/saves | `host/controllers.cpp`; `window.cpp`: `poll`, `poll_port`; `iop/sio2.cpp`: `controller`, `set_input`, `flush_cards` | Controle/teclado, snapshot coerente sob mutex, pressão/vibração e memory card |
| Dados | `runtime/src/disc.cpp`: `open`, `read`, `find`; `system.cpp`: `load_elf`, `load_state` | ISO9660 local, ELF, IRX e assets lidos do disco do usuário |

Fluxo: ELF → funções EE C++ → DMA → VIF/VU → XGKICK/GIF → registradores/vértices GS → tiles/compute → surface HWND. A versão é um executável Windows nativo; ainda há emulação de hardware e IOP/VU de fallback no runtime.

## Build e backend

CMake>=3.20, C++20, Ninja, Clang23.1.3/MinGW, Release `-O3`. `ps2runtime` e `ps2game` são bibliotecas estáticas; `SpeedRacer` usa o subsistema GUI. SDL2.32.10 trata janela, áudio e entrada; wgpu-native29.0.1.1 usa WGSL e surface Win32. A medição confirmou RTX3060/driver617.14, **Vulkan**, Mailbox. Isso vem de `WGPUAdapterInfo.backendType=6` e `WGPUPresentMode=4`, não de inferência pelo nome WebGPU. `host/profile.cpp` é profiler POSIX/Linux, não compilado no Windows.

Dependências DLL locais: SDL2, libstdc++-6, libgcc_s_seh-1 e libwinpthread-1. O wgpu está ligado pela biblioteca estática nesta configuração. O pacote não é um único arquivo autossuficiente.

## Dados, caminhos e reprodutibilidade

`speedracer_main.cpp::start` prefere `data/SLUS_218.12` + `data/disc.iso` ao lado do EXE, então usa `saves/speedracer.ps2`. Também aceita ELF explícito, `--disc` e `--memcard`. O build de desenvolvimento incorpora fallback absoluto para o projeto e ISO; um teste local sem remover esses fallbacks não comprova portabilidade. A correção desta iteração não altera os saves existentes.

`generated/`, `games/`, tools/build/wgpu baixado são ignorados e necessários para reconstruir. O clone público atual não é um build completo do jogo. Código recompilado do ELF e VU permanece local; não presumir redistribuição permitida. `.gitignore` passou a excluir `.ps2`, `.state` e o tar privado identificado. Nenhum binário/ROM/ELF/textura/save/estado foi incluído no PR documental.

## Lacunas e riscos reais

- Mipmapping/MMIN, dithering16, AA1 e composição completa dos dois circuitos CRTC: ver graphics-parity.md. Diferença de código não foi classificada automaticamente como defeito.
- SPU2 reverb não implementado; interpolação linear. Não atribuídos à câmera lenta.
- SIGNAL/FINISH/LABEL de PATH1/VU podem não chegar à EE; requer medir uso e mailbox correto.
- Encerramento usa flag/string comuns e worker VU detached; exige pedido atômico/drain/join. Contadores finais com threads ainda podem incluir trabalho pendente.
- Robustez de ELF inválido, Unicode, instalação em pasta sem escrita, troca de GPU e estados incompatíveis não foi certificada.

## Licenças e distribuição

Base upstream MIT; SDL zlib; wgpu-native MIT/Apache2 e dependências; runtimes MinGW/GCC têm condições próprias e runtime exception. IPU adapta tabelas Play! e exige `runtime/src/ipu/NOTICE` em distribuição binária. O pacote local anterior omitia esse aviso: foi acrescentado. Inventário completo transitivo de wgpu/GCC e direito de distribuir código comercial recompilado continuam pendentes (#8). O PR contém apenas documentação original, métricas e hashes, sem copiar implementação GPL do PCSX2.

Fontes: [upstream](https://github.com/snuri00/ps2-web-recomp), [projeto público](https://github.com/killeiro/Speed-Racer-Native-Port), [ROADMAP](https://github.com/killeiro/Speed-Racer-Native-Port/blob/main/ROADMAP.md).

