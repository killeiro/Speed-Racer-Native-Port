# Vanilla v28 — áudio e apresentação Win32

Atualizado em 21/10/2026. A equipe confirmou fluidez visual na v27 e relatou áudio
travando na primeira corrida de **1 Player → Championship 2**, com possível silêncio
nas etapas 2 e 3. A prioridade desta iteração é áudio. O caso completo continua aberto.

## Correções sustentadas por código e regressão

O HWND fornecido pelo host SDL fica no campo de superfície do WindowTarget. A ligação
Vulkan consultava apenas o identificador numérico usado pelo X11. A conexão falhava
e o host seguia por leitura da imagem da GPU, cópia na CPU e apresentação SDL.
O teste Win32 anterior preenchia o campo numérico e não reproduzia o contrato do host.
O teste foi corrigido: falhou antes da mudança e passou depois. A janela do jogo agora
confirma superfície Win32 e apresentação direta pelo GS. O renderer, shaders e DLL são
os mesmos da v27; não se mudou a qualidade nem se aumentou o buffer de áudio para esconder cortes.

No SPU2, a leitura antecipada de dois blocos aplicava o fim de uma amostra antes de
tocar o bloco atual e fixava cedo demais o destino de um loop. Agora fim/loop seguem
o consumo da voz; a interpolação consulta a próxima amostra sem consumir o bloco nem
alterar o histórico. O próximo buffer pode receber dados e novo endereço antes da passagem.
A mistura é saturada antes do volume mestre, evitando estouro com muitas vozes.
Uma operação de envelope com deslocamento de valor negativo foi substituída por
multiplicação equivalente com comportamento definido. O layout serializado foi mantido;
o teste de retomada compara o PCM gerado. Checkpoints antigos de GS continuam incompatíveis com hardware.

## Verificação

- **45/45 CTests**, incluindo a regressão Win32 fiel ao host e o novo teste do mixer.
- Oito verificações iniciais do SPU2: seis falhavam no fonte original; todas passam
  corrigidas. Três adicionais cobrem substituição de buffer, key-off e retomada idêntica.
- **11 verificações** passam também com UBSan em modo trap. O primeiro link com a
  biblioteca UBSan não estava disponível; a variante trap usa o compilador existente.
- Duas partidas headless novas até 18.000 VBlanks, entrando em Championship 2/Grand Prix:
  30/30 imagens idênticas e 14.341.056 quadros PCM em cada WAV estéreo16/48kHz.
  O áudio mudou em 3.178 amostras intercaladas. Em 132,772 segundos do trecho ativo,
  ambos os WAVs já tinham sinal contínuo. Isso limita a atribuição do relato aos defeitos do mixer.
- Janela nativa, threads normais, Vulkan **3x**, WASAPI 48kHz/estéreo/1024 e cartões separados:
  duas entradas automáticas no mesmo campeonato até 12.600 VBlanks, encerramento e joins normais,
  sem falhas de enqueue. Não se usou PS2_TIME, captura de frames ou checkpoint na janela.

| Observação após os primeiros 10.000 callbacks | Cópia para SDL | Vulkan direto |
|---|---:|---:|
| Fila SDL média (ms) | 4.978 | 83.094 |
| Menor fila observada (ms) | 0.000 | 0.000 |
| Observações de fila zerada | 74 | 1 |

São tamanhos de uma fila de software, não contagem de underruns físicos. Há apenas
uma janela por variante; o cache difere e parte da janela anterior coincide com build/CTest.
Não se publica porcentagem de ganho ou certificação de 60 FPS a partir dessa comparação.

O primeiro link de atualização encontrou o EXE em uso pela sonda. A sonda foi encerrada
normalmente e o build completo foi repetido com sucesso; o erro não foi ocultado como build aprovado.
Nenhum teste exigiu nova pilotagem manual.

## Pacote e limites

Há um pacote **local privado v28**, GUI sem CMD, Vulkan/3x, controles e fullscreen preservados.
O cartão atual da v27 foi copiado para a nova pasta; EXE e cartão anteriores permanecem intactos.
SHA256 do EXE: `5fbded9056a4b94c5ca0dde769535484e6c29a3b0ae146f285fc46de6187be6c`. SHA256 da DLL inalterada: `eb118627ae7b76247ce8cfa64ba758ad581bc0f8c0064ddc188a2564138cdf3b`.
As 332 entradas geradas, 310 programas VU extras e 24 alterações/backups preexistentes foram preservados.

**Não se encerrou o defeito de áudio do Championship 2.** As etapas 2 e 3 após uma
progressão real ainda não foram reproduzidas nesta iteração. O próximo gate é essa
sequência com verificação de música, vozes e efeitos, seguida de resultado/save/reabertura.
Permanecem abertos captura física/latência, corridas completas, classes/Mirror, sessão
longa e segundo PC/GPU. A confirmação visual da equipe não substitui esses critérios.

GitHub recebe somente documentação e métricas anônimas. Sem fonte, executável,
DLL, imagem, WAV, ISO/ELF, save ou logs brutos. PR23 permanece aberto, sem merge.

## Referências primárias

- [PCSX2 Mixer.cpp no commit auditado](https://github.com/PCSX2/pcsx2/blob/646df006a4688063e56c0826e7ea4b8bb0c112c4/pcsx2/SPU2/Mixer.cpp): consumo do fim/loop e saturação do barramento de vozes.
- [SDL2: áudio enfileirado](https://github.com/libsdl-org/SDL/blob/release-2.32.10/src/audio/SDL_audio.c): fila de software e preenchimento de silêncio.
- [PS2SDK: interface de som](https://github.com/ps2dev/ps2sdk/blob/master/common/include/libsd-common.h).
