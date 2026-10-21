# Vanilla v27 — GS Vulkan integrado ao jogo

Implementação e verificação local pela equipe, em 21/10/2026. **A ponte agora recebe o fluxo real de Speed Racer. Existe um EXE GUI experimental separado, com Vulkan e 3x iniciais. A v25 foi preservada; ainda não há aceite de 60 FPS ou de corridas completas nesta arquitetura.** [Métricas](vanilla-v27-metrics.json).

## Implementação

O consumidor existente mantém a ordem EE → VU → GS. Os GIFs completos de XGKICK seguem por PATH1, e PATH2/3 mantêm fragmentos. Cada apresentação leva uma cópia do bloco privilegiado de 0x2000 bytes; SIGNAL/FINISH/LABEL e CSR/IMR continuam sob o host. A leitura FIFO do hardware é síncrona e não reutiliza o cache de downloads do quadro anterior. Falha de renderer solicita parada e permite que as filas ainda sejam consumidas e reconhecidas, evitando deixar produtores bloqueados.

`--renderer hardware|compute` permite seleção explícita. Um alvo GUI separado inicia em hardware por padrão, com dados locais ao lado do executável; o launcher compute anterior continua separado. O título identifica Vulkan HW em vez de mostrar um percentual de GPU derivado do contador exclusivo do renderer antigo. O suporte SDL a controles e o fluxo de fullscreen foram mantidos; a interação física não foi recertificada nesta etapa.

Checkpoints de desenvolvimento do renderer anterior são rejeitados antes da carga/serialização. O freeze da biblioteca não foi apresentado como um importador compatível. Os saves normais no cartão usam o caminho IOP existente; aceite de resultado/salvar/reabrir ainda precisa de uma corrida completa.

## Defeitos encontrados e correções

O primeiro boot real ficou preto apesar de os testes sintéticos simples passarem. O GS tentava carregar `shaderc_shared.dll` por nome no worker, depois de terminar o carregamento da biblioteca a partir de outra pasta. Os shaders simples já estavam em cache; variantes de textura novas não podiam ser compiladas. Um fixture mínimo com amostragem de render target CT24 → CT16 reproduziu os erros do compilador ausente. O host agora carrega explicitamente o compilador adjacente, com caminho absoluto normalizado e dependências locais. O fixture usa cache novo em cada execução. Sua primeira expectativa de cor também foi corrigida: o vermelho CT16 desta saída é 248, não 255. Esses resultados adversos foram preservados.

O SetGsCrt HLE apenas guardava argumentos, sem programar SMODE1/SMODE2. Agora os modos NTSC/PAL fornecem CMOD/LC e interlace/field ao GS; a biblioteca identifica o modo de vídeo em vez de tratá-lo como VESA. As definições foram confrontadas com [GSRegs do PCSX2 fixado](https://github.com/PCSX2/pcsx2/blob/646df006a4688063e56c0826e7ea4b8bb0c112c4/pcsx2/GS/GSRegs.h) e [PS2SDK graph_mode](https://github.com/ps2dev/ps2sdk/blob/master/ee/graph/src/graph_mode.c).

A primeira captura Fuji em 3x ainda cortava a parte inferior do HUD: o recorte analógico padrão limitava a saída a 448 linhas. A opção CRT overscan preserva o DISPLAY ativo de 479 linhas do jogo. A captura final é 1920×1437, com o velocímetro completo; as imagens continuam privadas. Essa correção de enquadramento não constitui paridade gráfica com o PS2.

## Verificação final

- Biblioteca refeita do zero: 174 passos, três CTests; shaders/compilador e runtimes MinGW incluídos ao lado da DLL.
- Suíte do runtime: **44/44**, incluindo cinco casos hardware novos, janela Win32 oculta, fila EE/VU/GS, snapshots que sobrevivem a alterações posteriores do EE, FIFO atualizado, resets, rejeição de estado e drenagem das filas após falha.
- Boot real, menus e cenas Fuji-4/Thunderhead-4 em 3x, sem carregar checkpoints antigos; saída final 1920×1437 e encerramento normal. A cena executada com entradas programadas é curta, não uma corrida completa.
- Pacote experimental abre com PATH mínimo e fora da pasta de desenvolvimento, escolhendo hardware sem variável ou argumento de renderer. PE confirmado como Windows GUI. A resolução 3x foi explícita nesse teste headless; o INI inicial também escolhe 3x no uso gráfico.
- EXE v25, 332 inputs gerados, 310 programas extra e 24 alterações/backups anteriores preservados por hash.

Os trechos diagnósticos de 300 quadros em **headless/single-thread**, após boot completo, registraram **31,48 ms/quadro em Fuji** e **23,54 ms/quadro em Thunderhead**. Não são FPS de apresentação em janela nem comparação válida com a série fullscreen da v25. Compilação/cache, área de saída e execução diferem; nenhum ganho geral ou 60 FPS é afirmado. As cenas não acionaram leitura FIFO do guest; essa parte foi verificada pelos fixtures.

## Próximo gate

Medir a execução normal com threads em Fuji e uma pista de controle, sem capturas/trace pesado no intervalo. Separar custo EE/VU, preparação/GIF e GPU antes de escolher a próxima otimização. Depois comparar imagem/eventos com referência, avaliar presets 1x/2x/3x e aceitar corridas completas, resultado/save/reabertura, áudio/latência e outra máquina. Não repetir a matriz de 36 rotas nem pedir novos logs manuais para este mesmo build sem uma pergunta técnica concreta.

O pacote continua local e experimental. AVX2/Vulkan e a máquina atual são a configuração verificada. A licença GPL da integração foi preservada. O GitHub recebe apenas documentação e métricas sanitizadas; não recebe implementação, EXE/DLL, shaders, imagens, ISO/ELF, cartões ou logs brutos. PR23 permanece aberto, sem merge.
