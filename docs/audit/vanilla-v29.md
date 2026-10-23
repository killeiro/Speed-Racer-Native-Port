# Vanilla v29 — sessão longa, pausa e suavização do HUD

Atualizado em 21/10/2026. A equipe pilotou a v28 por **42min37s**, com controle físico,
Vulkan 3x e mídia original. Registrou serrilhado nos indicadores de volta/vida/boost,
chiado ao pausar e queda em uma variante de Fuji. A v29 corrige dois defeitos de áudio
e acrescenta FXAA opcional. **A queda de desempenho continua aberta.**

## Evidência da sessão real

Foram 150.052 frames, sete instâncias de cena, saída0 e drenagem/join normais. O save
da sessão mudou e foi preservado; o cartão anterior não foi sobrescrito. A nova pasta
jogável recebe uma cópia desse progresso. Não houve comandos sintéticos nessa sessão.

A média geral de callback foi17,031ms, p99=36,209ms; inclui menus, carregamentos e pausas,
portanto não certifica FPS de corrida. Separando blocos de600frames com relógio de cena
avançando em mais de99% deles, o pior bloco medido tem21,246ms por callback (~47,07/s),
10,720ms de espera na postagem gráfica e praticamente nenhuma espera do limitador.
A fila de áudio de software média nesse trecho é6,588ms. Isso sustenta investigar
backpressure entre produtor/consumidor gráfico; **não identifica sozinho custo de GPU,
preparação GS ou EE/VU**. O nome da variante não foi registrado pela telemetria, então
não se atribui esse bloco a Fuji sem evidência adicional. O relato de Fuji é da equipe.

## Chiado na pausa

Uma reprodução automática com a ISO original mostrou vozes sustentadas, pitch0 e
volume ativo ao pausar. Os últimos5s do PCM mantêm exatamente1074/1191 nos canais,
sem variação: é um deslocamento DC. O PCSX2 tem um filtro de saída para esse mesmo
comportamento de jogos que pausam vozes mantendo o volume. A nova saída aplica um
bloqueador DC por canal antes da fila SDL, preservando os registradores, RAM, relógio
e PCM bruto do SPU2. O mesmo trecho passado pelo filtro de produção termina em0/0.
Testes verificam continuidade entre lotes, canais independentes, reset e preservação
de um tom1kHz. Não se mediu o dispositivo físico nem se encerra todo possível chiado.

Separadamente, a queda exponencial do envelope dividia um passo negativo com truncamento
para zero. Isso podia prender uma voz em volume residual indefinidamente. Agora o passo
arredonda para baixo como no SPU2 de referência. Três das quatro novas verificações
falham no código anterior; as quatro passam corrigidas, junto com as11 anteriores.

## HUD e qualidade

FXAA passa a ser uma opção salva, ativada inicialmente no pacote3x. **Shift ao abrir**
permite escolher resolução1x–4x e depois suavização ligada/desligada. Não há troca de
texturas, modelos ou geometria. Texturas originais continuam limitando o detalhe do HUD;
FXAA pode suavizar textos e não elimina toda forma de serrilhado.

A comparação real em1920x1437 mostra atuação no círculo de volta e nos marcadores de
vida/boost; foi inspecionada. Essas capturas são diagnósticas, com dois processos e
caches separados, **não são benchmark**. A transformação gráfica foi validada também
na biblioteca final com teste C de pixels, interiores uniformes e bordas.

O primeiro smoke de empacotamento detectou que a escolha feita pelo launcher SDL não
chegava à DLL: os runtimes mantinham cópias diferentes do ambiente. A configuração
agora usa o ambiente Win32; o smoke final confirma FXAA ativado. As capturas de jogo
precedem essa correção de propagação; a transformação FXAA não mudou. O resultado
adverso anterior foi mantido e não contado como validação final.

## Championship 2 — correção de identificação

A equipe confirmou **Class1**. Dados originais e a tela do campeonato identificam o
Tallabe Trophy com **duas etapas: Thunderhead short → Onuris medium**. A v28 chamou
incorretamente a primeira pista de Grand Prix; o trajeto de menu selecionava o campeonato
correto. Referências anteriores a uma terceira etapa vieram do relato inicial incerto.

Três sondas privadas verificaram a troca de etapa. Uma cópia diagnóstica altera somente
uma ação de menu para chamar o avanço original do jogo; os outros1.318 membros do arquivo
permanecem idênticos. **Isso não é vitória, resultado ou conclusão natural do campeonato.**
Uma sonda normal com janelaVulkan3x/WASAPI chegou a Onuris e gerou música com efeitos/vozes
em ganho0 e música0,3, confirmados no estado do jogo. O comando compartilhado
speech-or-music é inoperante na versão PS2, então a sonda intermediária foi corretamente
classificada como efeitos silenciados, e não música isolada. Mídia de diagnóstico não
foi usada na pilotagem humana nem no pacote entregue. A aceitação de áudio após resultado
natural e em todas as situações continua aberta.

## Compilação e limites

- **46/46 CTests** do runtime e **3/3** da biblioteca gráfica final.
- **15 verificações** do mixer passam em UBSan trap.
- Smoke final do pacote:2400frames, PATH mínimo, sem argumentos de ELF/disco/DLL/renderer/
  resolução, superfície Win32 direta,3x, FXAA, bloqueador DC, WASAPI e join normais.
  Controle Xbox reconhecido na sessão humana anterior; não houve nova certificação física USB/Bluetooth.
- 24 alterações/backups preexistentes e332 entradas geradas preservados.
- Executável anterior, cartão original e progresso da sessão preservados. GUI sem CMD.

Commit privado: `a767b48329976e1ecbf3f292e8f8635ff9079776`.
EXE: `f2d38aa9ac71f3fab76342c88e21edb69f92f403b0164a8f028124e90b67291f`. DLL: `b4a574304b159a6ca038cae54be0f394ca957c651bc7366e3f2bc71e344bdd9b`.

Próximos passos: identificar automaticamente variante/pausa nos registros, atribuir a
espera gráfica e corrigir a etapa dominante; validar resultado/save/reabertura e comparar
HUD com referência. A sessão longa não prova todas as classes/Mirror, áudio físico,
ausência de vazamentos ou estabilidade em outro PC. Não há promessa de60FPS globais.
GitHub recebe somente documentos/métricas anônimas; PR23 continua aberto, sem merge.

## Referências primárias

- [PCSX2: filtro de saída para vozes pausadas](https://github.com/PCSX2/pcsx2/blob/master/pcsx2/SPU2/spu2.cpp).
- [PCSX2: envelopes e passos exponenciais](https://github.com/PCSX2/pcsx2/blob/master/pcsx2/SPU2/ADSR.cpp).
- [PCSX2: pós-processamento FXAA](https://github.com/PCSX2/pcsx2/blob/646df006a4688063e56c0826e7ea4b8bb0c112c4/pcsx2/GS/Renderers/Common/GSRenderer.cpp).

## Confirmação da equipe —22/10/2026

A equipe confirmou que o som foi resolvido na v29. O relato restante é serrilhado do HUD; a v30 melhora sua filtragem e passa a Alta qualidade padrão. Latência/underruns físicos e a queda residual em Fuji continuam critérios independentes de aceitação.
