# Vanilla v24 — arquitetura GS, arquivos e adaptação à tela

Auditoria local de 20/10/2026, pela equipe. O próximo avanço de qualidade/desempenho exige uma decisão de renderer, além de micro-otimizações. O EXE continua nativo Windows; não abre PCSX2 nem navegador. [Métricas](vanilla-v24-metrics.json) · [Resolução 1x–4x na v25](vanilla-v25.md).

## Por que o PCSX2 apresenta outra qualidade

No nosso `gpu.cpp`, o desenho GS usa dispatches de compute; `gs.wgsl::raster` percorre listas de primitivas por tile e escreve a VRAM em buffers. O draw gráfico final desenha apenas o triângulo de apresentação. Há cache/decode de texturas, mas o trabalho de rasterização continua no shader de compute.

O [GSRendererHW do PCSX2](https://github.com/PCSX2/pcsx2/blob/master/pcsx2/GS/Renderers/HW/GSRendererHW.cpp) organiza texturas e render targets em cache e aplica upscale/correções. O [backend Vulkan](https://github.com/PCSX2/pcsx2/blob/master/pcsx2/GS/Renderers/Vulkan/GSDeviceVK.cpp) envia desenhos indexados à GPU. Esta diferença de arquitetura é uma explicação sustentada para a escalabilidade, não uma medição comparativa dos dois programas nesta máquina. O port já usa uma API gráfica nativa; o problema não é executar em navegador.

O [GameDB oficial](https://github.com/PCSX2/pcsx2/blob/master/bin/resources/GameIndex.yaml) define para SLUS-21812 `halfPixelOffset: 2`, comentado como alinhamento de bloom, e `autoFlush: 1`. No código HW, a realocação especial de textura depende do upscale e não se aplica em 1x; a rotina de autoflush trata sobreposição entre leitura e escrita de textura/framebuffer. Copiar números ou remover flushes sem mapear essa semântica poderia criar defeitos. Nenhuma dessas flags foi transplantada nesta etapa.

## O que outros ports ensinam

- [KillzoneRecomp](https://github.com/drakolordx7/KillzoneRecomp) mantém o EE recompilado e liga GS/microVU/IPU/SPU2 como bibliotecas. Demonstra que reaproveitar um renderer dentro do EXE nativo é uma alternativa real, sem lançar o emulador externo. Não comprova o mesmo FPS em Speed Racer.
- O [contrato kzgs](https://github.com/drakolordx7/KillzoneRecomp/blob/master/ext/kzgs/include/kzgs.h) exige pacotes GIF ordenados, snapshots de registradores, VSync, reset, sincronização e readback; SIGNAL/FINISH/LABEL e interrupções ficam com o chamador. Seu [build](https://github.com/drakolordx7/KillzoneRecomp/blob/master/ext/kzgs/CMakeLists.txt) exige MSVC x64 e dependências próprias. Nosso Clang/MinGW tem outra ABI C++; não é um módulo que basta copiar. Uma ponte C ou uma toolchain compatível e a integração/licença GPL precisam fazer parte do protótipo.
- [SRWZ-native](https://github.com/SloppyWyn/SRWZ-native) recompila 205 overlays de fases e também reutiliza microVU. A lição aplicável é inventariar código carregado dinamicamente, não assumir que compilar o ELF cobre cada fase. Seus ganhos declarados não são uma previsão para este port.
- O [relato técnico do OpenGOAL](https://opengoal.dev/docs/porting-info/drawable_and_tfrag/porting_tfrag/) descreve a evolução de renderers de referência para um renderer PC com pré-processamento dos dados de cenário e transformação/clipping na GPU. É uma rota de engenharia específica da engine, com escopo maior que corrigir nosso GS.

## Arquivos e Fuji: evidência e limites

O inventário privado inclui 87 arquivos ISO e 1.319 entradas no pacote principal, com 36 arquivos de trajetos. Todas as entradas ZIP passaram no CRC. Não apareceu um overlay executável identificado por extensões convencionais nesse ZIP; isso não exclui código embutido em outros formatos. Não foi demonstrado arquivo ausente/corrompido responsável por Fuji, nem foi concluída a semântica de todos os recursos.

A falha de cobertura de build da [v23](vanilla-v23.md) é concreta: o objeto antigo continha 310 programas extra e a fonte parcial apenas 3. A cobertura foi recuperada e protegida. A v24 compilou em diretório novo; os 332 inputs gerados permaneceram iguais. O EXE v17 original já tinha os 310 programas, portanto a perda de 307 não explica, por si, as quedas daquele baseline.

Outra falha foi reproduzida no cache real: `st128` alterava microcódigo VU sem invalidá-lo. O teste falhou antes da correção e passou depois, cobrindo cinco larguras de store e três aliases EE. A correção iguala essa notificação à dos stores menores. É um bug de correção demonstrado; não foi provada sua participação nas quedas de Fuji.

## Fullscreen e verificação

A apresentação agora preenche o monitor por padrão; 4:3 e 16:9 são opções explícitas. F11 e Alt+Enter foram implementados, com retorno de erro SDL e supressão de Start durante Alt+Enter. Eventos de tamanho/restauração/monitor atualizam dimensões em pixels; o host usa DPI por monitor. A [documentação SDL](https://wiki.libsdl.org/SDL2/SDL_HINT_WINDOWS_DPI_AWARENESS) sustenta configurar essa política antes do vídeo.

O host informa 16:9 ao sistema PS2 em boot novo numa tela larga, usando os bits documentados no [PS2SDK](https://github.com/ps2dev/ps2sdk/blob/master/ee/kernel/include/osd_config.h). O jogo consultou GetOsdConfigParam na execução real. Estados antigos retêm sua configuração; câmera ultrawide arbitrária e correção dinâmica de campo de visão não foram implementadas.

34 testes passaram. Houve abertura real em 2560×1440 e saídas normais. A verificação interativa foi interrompida; os atalhos não receberam aceite físico. O diagnóstico de boot com trace gerou 184.104.887 bytes de log, contra 6.927 sem trace, e houve breve sobreposição de processos. Esses casos não isolam custo de controle/automação e não são benchmark de fluidez.

## Decisão para a próxima etapa

Priorizar uma prova limitada de backend GS gráfico: uma cena Fuji e uma cena de controle, com reset/registradores/GIF/interrupts/readback corretos, antes de comparar 1x/2x. Só depois avaliar microVU se o tempo VU continuar limitante. O perfil v21 já mediu VU perto de 17,17 ms por quadro em Fuji e nenhum bloqueio por fila cheia; aumentar filas ou acelerar relógio não é correção sustentada.

Um [pack HD comunitário](https://github.com/BMT619/Speed-Racer-PCSX2-HD-Texture-Pack) existe para substituição de texturas no PCSX2. Ele exige mecanismo de identificação/carregamento de texturas; nosso GS atual não o consome. Não foi baixado ou integrado, e não corrige o custo de rasterização. Fidelidade 1x, HUD/texturas, timing, corridas/save/reabertura, classes/Mirror/30 minutos e outro Windows/GPU seguem abertos.
