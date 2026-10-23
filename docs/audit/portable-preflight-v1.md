# Portable preflight v1 — alvo Windows sem fallback de dados

> Atualização posterior de20/10/2026: a ISO legítima foi recuperada. O [novo checkpoint](restored-media-v1.md) registra preparação/boot reais, controle Skorost, escala1x/2x e pacote privado. O texto abaixo preserva as condições e resultados desta etapa histórica.

19/10/2026. **Implementado, compilado e verificado no contrato de dados ausentes.** A versão de desenvolvimento v13 foi preservada. O novo executável é uma preparação técnica para portabilidade, sem novo aceite de corrida, gráficos ou distribuição para amigos.

## Problema e mudança

O launcher de desenvolvimento incorpora DEV_ROOT/DISC_HINT. Sem ELF/ISO junto ao pacote, pode encontrar dados na máquina do desenvolvedor; isso mascara dependências durante QA. A variante portátil precisa verificar a presença dos dados locais de quem executar, com comportamento reproduzível a partir de outra pasta de trabalho.

`cmake/SpeedRacer.cmake` agora oferece `PS2_BUILD_SPEEDRACER_PORTABLE=ON`, desligado por padrão e dependente de `PS2_BUILD_SPEEDRACER=ON`. O alvo adicional `SpeedRacerPortable` produz `portable/SpeedRacer.exe` no build selecionado, com ambos os macros de fallback vazios. Ele mantém o subsistema GUI, fontes de host/controles existentes e bibliotecas ps2game/ps2runtime/SDL2. O alvo SpeedRacer original e seu caminho permanecem preservados.

Não houve alteração nos corpos de host/runtime/GS, controle, clocks, física, pacing, resolução ou mods. O launcher existente usa `data/SLUS_218.12` e `data/disc.iso` ao lado do EXE, ou argumentos explícitos. Na variante portátil, o save padrão fica em `saves/speedracer.ps2` ao lado do EXE; uma pasta gravável ainda é necessária. Não houve certificação de instalação em Program Files.

`scripts/audit/preflight_portable.py` fornece um verificador reproduzível. Recebe `--exe`, `--out` novo e, opcionalmente, um ELF legítimo e um launcher de desenvolvimento para controle. Copia executável/DLLs para fixtures privadas, usa PATH apenas do sistema, redireciona preferências/logs para as fixtures e confere hashes de todos os arquivos de entrada ao final. Não altera o pacote fornecido nem aceita sobrescrever uma pasta de saída existente.

Cada subprocesso recebe memory card privado e limite de um frame, protegendo o controle de desenvolvimento se a ISO reaparecer inesperadamente. Os resultados aceitos desta execução foram help ou erros anteriores ao jogo; nenhum frame/save foi observado. O ELF usado nos testes permanece somente nas fixtures privadas e não integra o bundle técnico.

## Compilação e verificação

As definições efetivas do Ninja confirmam DEV_ROOT/DISC_HINT vazios no alvo portátil, mesmo com ambos preenchidos no cache de desenvolvimento. O alvo original conserva suas definições. A combinação portable=ON/development=OFF é rejeitada pelo CMake.

O build recompilou as unidades de runtime pertinentes a partir das fontes v13 restauradas e ligou o novo GUI. Depois, os testes foram recompilados contra as fontes atuais e26/26 CTests passaram. A opção portátil foi habilitada no cache local; não foi recompilado nem substituído o executável original SpeedRacer.

O novo executável tem subsistema PE2 (GUI) e carregou com as quatro DLLs locais, sem o diretório MinGW no PATH. Nove cenários passaram com o verificador final:

| Cenário | Exit esperado/obtido | Resultado |
|---|---:|---|
| help | 0 | passou |
| missing-both-no-development-fallback | 1 | passou |
| explicit-missing-elf | 1 | passou |
| argument-value-is-not-help-option | 1 | passou |
| conflicting-window-flags | 1 | passou |
| working-directory-is-not-data-directory | 1 | passou |
| explicit-legitimate-elf-needs-disc | 1 | passou |
| unicode-directory-disc-still-required | 1 | passou |
| development-launcher-control | 1 | passou |

O controle negativo é relevante: a v13 de desenvolvimento encontra o ELF por fallback e acusa ISO ausente; a variante portátil sem dados acusa ELF ausente, apesar de o ELF de desenvolvimento continuar acessível nesta máquina. Outro teste coloca um ELF no `data/` da pasta de trabalho, distante do EXE; a variante o ignora. Com ELF privado junto ao EXE numa pasta com espaços/Unicode, a descoberta passa e a verificação seguinte acusa ISO ausente.

**Limite do teste Unicode:** só foram verificados a localização do executável e o reconhecimento da existência do ELF. Leitura real de ELF/ISO, conversões de caminhos e gameplay Unicode continuam pendentes. Os casos foram repetidos durante o desenvolvimento do checker; são nove cenários, não27 cenários independentes. O teste auxiliar CMake foi ajustado para usar a mesma política3.20 do projeto; warnings da primeira tentativa ficaram no log privado e não foram classificados como falha do jogo.

## Artefatos e rastreabilidade

- Commit privado de fonte: `20396d12b4df6a5adce28af833b4d1eeea72a07a`; somente o CMake e o checker foram incluídos.
- SHA-256 portátil: `8bb240d0053670750beb4764d29e2873501732b054d249b0b275b7965c66330f`.
- SHA-256 executável v13 preservado: `ae621120cce2ec9cacc43d5b3b4b02602244745760de0084b6ece8814b65838f`.
- Bundle técnico local: SpeedRacer.exe, quatro DLLs, avisos de licença, relatório e metadados; sem ISO, ELF, assets, saves ou estados. Não foi criado ZIP de release jogável.
- As cinco alterações históricas de modo e19 backups foram preservados. O experimento Q v14 continua isolado; suas perdas de FPS não foram apagadas.

O [inventário](architecture.md) continua descrevendo as dependências e o caminho EE/VU/GS. Os macros de localização dos dados ficam vazios na variante portátil; isso não afirma que todo caminho de build/debug foi removido dos símbolos do binário. Licenças transitivas e proveniência dos componentes gerados permanecem pendentes antes de distribuição externa.

## O que esta etapa fecha

Foi implementada a variante sem busca automática dos dados de desenvolvimento e seu checker, com build real, erro de configuração inválida, nove contratos GUI e26 testes. Isso permite testar um futuro pacote sem que o ELF da máquina local esconda a falta de dados junto ao EXE.

Não houve boot bem-sucedido do jogo: a ISO legítima local continua ausente no caminho conhecido. PATH mínimo nesta máquina também não equivale a um segundo PC limpo. Não foram medidos FPS do novo artefato,1x/2x, áudio, latência, saves de resultado, pausa/reinício/saída com jogo carregado, corridas completas ou30min. O pacote não é uma nova alfa pronta para amigos.

## Próximos marcos

1. Restaurar a ISO legítima ou indicar seu novo caminho. Concluir o controle nativo da regressão Skorost antes de promover outra otimização.
2. Alimentar a variante portátil com dados legítimos, confirmar boot e localização dos saves sem fallback, inclusive a partir de outra pasta de trabalho.
3. Validar corridas/save/reabertura/saída/30min e repetir em outro Windows/GPU. Resolver caminhos Unicode e pasta protegida conforme evidência.
4. Retomar a comparação1x/2x planejada para o serrilhado, com imagens separadas dos benchmarks. Texturas HD/skins permanecem futuras, dependentes de loader e permissões.

As faixas de planejamento continuam condicionais e de baixa confiança no [relatório de prontidão](release-readiness-and-graphics.md). Este avanço é uma parte do empacotamento; não reduz automaticamente o prazo de performance/QA.

| Estado | Checklist |
|---|---|
| Concluído agora | Alvo portátil separado, fallbacks vazios verificados, build GUI, checker reutilizável, nove cenários,26 testes e preservação v13 |
| Pendente de dados locais | Boot/jogo real e diagnóstico nativo de regressão, dependentes da ISO legítima |
| Pendente de QA/engenharia | Corridas/classes/Mirror/30min, save/lifecycle, Unicode IO, outra GPU/PC limpo, gráficos/pacing/áudio e proveniência |
| Publicação | Documentos/métricas apenas; PR23 aberto, main e issues de aceite preservadas |

[Próximas dez tarefas](next-10-tasks.md) · [Roadmap](../../ROADMAP.md) · [Métricas](portable-preflight-v1-metrics.json).
