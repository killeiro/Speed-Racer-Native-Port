# Release readiness, serrilhado e pesquisa gráfica

19/10/2026. **Pesquisa e planejamento; executável ativo v13 preservado.** Não houve nova alteração no renderer, download de assets, integração de mods, build ou teste de corrida nesta revisão. A imagem legítima local continua ausente no caminho conhecido. Resultados de performance anteriores estão no [relatório v14](vanilla-v14.md).

## Previsão realista

Já existe um executável Windows nativo com controles e sem console. A etapa pendente é torná-lo adequado para uma sessão de jogo em outro PC. A v13 ainda desacelera em cenas de Fuji/Skorost; a v14 experimental teve regressões e não foi promovida. Não estamos apenas aguardando empacotamento.

| Marco | Faixa de planejamento | Condições e alcance |
|---|---|---|
| Protótipo local | Já existe | v13 experimental; precisa dos dados legítimos locais, que agora faltam |
| Alfa limitada para amigos | 2–4 semanas de trabalho efetivo | ISO recuperada, diagnóstico retomado, escopo/PCs explícitos, corridas completas de referência, saves/saída verificados e pacote portátil; limites de FPS conhecidos e declarados |
| Vanilla mais estável e amplamente testado | 6–12 semanas de trabalho efetivo, podendo exceder | Gargalos remanescentes, classes/Mirror/30min, fidelidade original, pacing/áudio/input, lifecycle, outra GPU/PC limpo e proveniência resolvidos |
| Pack HD/skins integrado | Sem prazo responsável ainda | Loader nativo inexistente; depende de Vanilla, compatibilidade de formatos/cache e direitos de uso |

**Confiança baixa.** São faixas preliminares de planejamento baseadas nas lacunas conhecidas, não produtividade medida, datas prometidas ou trabalho automático em segundo plano. A contagem pressupõe dados restaurados, continuidade de engenharia e disponibilidade de QA. Uma regressão não isolada ou bloqueio de distribuição pode ultrapassar as faixas. A estimativa deve ser refeita após reproduzir/isolar Skorost e completar uma corrida de referência e um boot portátil com dados locais. Compilar mais versões numeradas não constitui progresso suficiente para fechar esses marcos.

## Critérios para a alfa de amigos

1. Escolher pistas/configurações da alfa com limites conhecidos; concluir corridas representativas sem quebra funcional. Não anunciar60FPS estáveis nem suporte completo antes da cobertura correspondente.
2. Medir velocidade da simulação e caudas de entrega; confirmar cronômetro/cadência original. Pacing suave com simulação lenta não atende ao objetivo final.
3. Verificar entrada, seleção, corrida, pausa/reinício, resultado/save, reabertura e saída; pelo menos uma sessão de30min no escopo escolhido antes de chamar o pacote de alfa para uso externo.
4. Executar num segundo Windows com controles e dependências locais; retirar DEV_ROOT/DISC_HINT da variante portátil e usar diretório de dados explícito. Validar caminhos com espaços/Unicode e saves graváveis.
5. Entregar o executável e dependências permitidas com instruções de importação dos dados legítimos de cada usuário. Rever licenças/proveniência inclusive dos componentes gerados; não presumir que remover a ISO por si só autoriza distribuir o executável derivado. A autorização para GitHub continua documental.

## Serrilhado: o que o código sustenta

O padrão em `runtime/src/gs/gpu/gpu.cpp` é `g_scale=1`. O build registra fonte próxima de640×479 e janela960×720 nas medições. Aumentar a janela amplia essa imagem; isso não adiciona amostras à geometria. `blit.wgsl::sample/fs` interpola a apresentação e pode misturar campos, mas não tem um passe moderno de antialiasing de bordas. Essa combinação é uma explicação forte para o relato de serrilhado; não é uma confirmação visual nova do frame atual do usuário.

`PS2_SCALE=2` e `3` já existem. O renderer escala VRAM, buffers, raster/display e snapshots; não é só ampliar a janela. Para uma fonte640×479,2x corresponde aproximadamente1280×958 e3x1920×1437, antes da composição na janela. O fator de pixels e de alguns buffers escala em4x/9x; isso não implica FPS dividido por4/9, pois o gargalo pode estar na CPU. Algumas escalas já foram executadas na auditoria v2, mas isso não certifica desempenho/efeitos da v13. Não alteramos o padrão enquanto a mídia falta.

Textura HD pode melhorar detalhes de HUD, placas e carro, mas não elimina por si só o serrilhado das silhuetas e bordas da pista. A prioridade técnica é comparar1x/2x e tratar filtragem/cadência corretamente. AA adicional seria uma opção separada, com análise de nitidez, HUD e custo; não um substituto para acertar a imagem original ou resolver a lentidão. AA1 do GS só recebe implementação prioritária se o jogo o usar; não deve ser confundido com AA moderno de saída.

## Repositórios encontrados

| Projeto | Conteúdo verificado | Utilidade para nosso port |
|---|---|---|
| [BMT619/Speed-Racer-PCSX2-HD-Texture-Pack](https://github.com/BMT619/Speed-Racer-PCSX2-HD-Texture-Pack) | Pack de texturas para Speed Racer PS2/PCSX2, apresentado pelo autor como produzido com Upscayl | Candidato futuro para avaliar arte/texturas; exige loader e adaptação nativos |
| [Kermalis/SpeedRacerTool](https://github.com/Kermalis/SpeedRacerTool) | Ferramenta de leitura/extração de dados PS2/Wii, formatos NIF/XDS e exportação de geometria; README indica uso por edição de Program.cs | Referência para entender assets e futura pipeline cosmética; não é pack de skins pronto nem renderer substituto |

A [release v1.0 do pack](https://github.com/BMT619/Speed-Racer-PCSX2-HD-Texture-Pack/releases/tag/v1.0) lista `SLUS-21812.zip`,1.190.071.056bytes comprimidos, com data de publicação19/04/2024 segundo a API consultada. O arquivo não foi baixado nem inspecionado internamente; cobertura, qualidade visual, conteúdo e licenças internas não foram verificados. Tamanho comprimido não é consumo de VRAM nem tamanho descompactado.

Na árvore consultada, o repositório do pack contém somente README; não foi encontrado LICENSE. No SpeedRacerTool também não foi encontrado arquivo de licença, e a API não detectou licença para ambos. Não se presume permissão de reutilização/redistribuição por estarem públicos; essa questão deve ser resolvida antes de incorporar código/assets. A [documentação GitHub sobre licenciamento](https://docs.github.com/en/repositories/managing-your-repositorys-settings-and-features/customizing-your-repository/licensing-a-repository) explica a diferença entre visibilidade pública e licença. Nenhum autor foi contatado nesta tarefa.

Não localizamos um repositório de skins PS2 pronto e verificado como compatível com nosso port. Há referências comunitárias a modding de Speed Racer, mas isso não comprova disponibilidade/compatibilidade de um pacote. Também não se confundem mods de Assetto Corsa, a versão Wii e jogos de mesmo nome com assets integráveis à versão PS2.

## Por que o pack não funciona por simples cópia

O [carregador PCSX2](https://github.com/PCSX2/pcsx2/blob/master/pcsx2/GS/Renderers/HW/GSTextureReplacements.h) expõe lookup por chave de cache, texturas/mips e carregamento assíncrono; pertence à pipeline daquele renderer. Nosso caminho usa VRAM GS, CLUT e decode em buffers compute, sem esse carregador. Essa comparação é arquitetural; não se copiou implementação GPL nem se propõe usar PCSX2 como produto.

Um adaptador próprio exigiria identificar textura/paleta/região de forma estável, mapear nomes do pack ou converter um manifesto, decodificar imagens/mips com cache limitado, adaptar dimensões/UV e manter feedback/hazards/alpha/depth corretos. Texturas de framebuffer são especialmente delicadas. Também seria necessário controlar IO/memória para evitar travadas durante a corrida. A API e os nomes de arquivos PCSX2 não formam automaticamente uma ABI nativa comum.

Faz sentido pesquisar o pack como melhoria opcional após estabilizar o Vanilla. Liveries compostas somente de texturas podem usar uma futura substituição reversível; mudanças de geometria/modelos exigem outra pipeline. Não faz sentido incluí-lo agora como correção de lentidão ou serrilhado. A baseline original deve continuar disponível.

## Próxima execução concreta

Após restaurar a mídia legítima: concluir o controle de regressão v14 sem promovê-lo automaticamente; depois comparar o mesmo executável ativo a1x/2x em Fuji-4, Skorost-1, Skorost-2 e Grand-Prix-0. Aquecer cada escala e fazer três pares AB/BA/AB,600VBlanks com60 iniciais descartados, sem outro build/replay/sampler. Registrar progresso EE/parede, callbacks p50/p95/p99 e intervalos longos; fila SDL vazia continua sendo observação, não underrun real.

Capturar imagens correspondentes separadamente, com mesmo estado/input/câmera. Conferir silhuetas, estrada, HUD, alpha, mipmapping e efeitos de framebuffer. Captura síncrona não mede FPS das filas nativas. Só promover uma configuração gráfica após preservar efeitos e medir o custo real; não há resultado novo de1x/2x nesta revisão.

## Estado verificável

| Concluído agora | Pendente |
|---|---|
| Inspeção do código de escala/blit/dados, pesquisa de repositórios/releases/licenças e planejamento por critérios | ISO, diagnóstico nativo de regressão, benchmark1x/2x, nova paridade visual, integração de packs, PC limpo e distribuição jogável |
| V13, controles, fontes, executável e pacotes preservados | Nova alfa/release para amigos |
| Atualização documental do roadmap/PR | Implementação gráfica e assets de terceiros |

[Próximas dez tarefas](next-10-tasks.md) · [Roadmap](../../ROADMAP.md) · [Metadados da pesquisa](graphics-candidates.json). As hipóteses visuais e os prazos não são apresentados como validações concluídas.
