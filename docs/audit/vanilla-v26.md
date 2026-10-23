# Vanilla v26 — ponte GS gráfico nativa

Auditoria e implementação local de 21/10/2026, pela equipe. **A biblioteca Vulkan e a interface C foram implementadas, compiladas e verificadas. A integração ao jogo ainda está pendente; a versão jogável continua sendo a v25.** [Métricas](vanilla-v26-metrics.json) · [Resolução na v25](vanilla-v25.md).

## Entrega concreta

O protótipo produz uma DLL nativa que incorpora o GS gráfico de PCSX2/kzgs, sem abrir PCSX2 nem navegador. Uma tabela C versionada permite carregar a biblioteca sem compartilhar `std::string`, `std::vector`, exceções ou propriedade de alocações entre módulos. O jogo mantém seu EE recompilado; esta etapa não transfere lógica ou física do jogo para a GPU.

A barreira MSVC/MinGW foi tratada em um build isolado: alocação alinhada e intrínsecos Windows, semântica de inline, chamadas COM com retorno de structs, imports/UUIDs, assembly x64 e dependências. A receita fixa os arquivos por SHA256 e compila em diretório novo; não instala outra toolchain no sistema. Os algoritmos GS são os das versões fixadas, com configurações explícitas do jogo.

Os pontos de partida são [kzgs](https://github.com/drakolordx7/KillzoneRecomp/tree/5f0700079f9ac4e14799d66d01747dbcdcec55f6/ext/kzgs) e [PCSX2](https://github.com/PCSX2/pcsx2/tree/646df006a4688063e56c0826e7ea4b8bb0c112c4). O [GameIndex dessa versão](https://github.com/PCSX2/pcsx2/blob/646df006a4688063e56c0826e7ea4b8bb0c112c4/bin/resources/GameIndex.yaml) seleciona half-pixel 2 e auto-flush 1 para SLUS-21812. Na enum correspondente, 1 é SpritesOnly. A identidade e o escalonamento agressivo específicos de Killzone não são herdados.

## Verificação e restrições encontradas

Um build novo concluiu 174 passos e três CTests. O chamador compilado como C verifica a DLL em janela de teste oculta e sem superfície: respectivamente 405 e 403 verificações. Foram conferidos desenhos sintéticos, dimensões e pixels em 1x/2x/3x/4x, buffers pequenos, leitura FIFO para buffer desalinhado, reset, freeze/restauração da VRAM nativa amostrada e novo quadro completo. Em 3x, a saída sintética é 1920×1344. Isso não mede o FPS de uma corrida.

O PATH1 precisa de pacote completo terminado em EOP; a rotina Transfer<0> do backend descarta uma continuação incompleta ao retornar. A ponte rejeita esse caso antes de alterar o renderer. PATH2/3 aceitam fragmentos reais de tags/dados. Há um teste separado para tamanhos, NREG16, reglist ímpar, IMAGE, EOP e entradas inválidas. A compatibilidade dos limites XGKICK do port continua sendo uma tarefa de integração.

Freeze restaura memória/estado nativo do GS, sem reconstruir os objetos do cache gráfico ou preservar cada amostra de upscale. O primeiro fixture exigia indevidamente a imagem imediata após restore. O teste final verifica pixels da VRAM pela leitura do guest e, separadamente, o primeiro quadro completo redesenhado. Não se afirma equivalência de todas as palavras da VRAM nem compatibilidade com os checkpoints atuais do port.

O teste original chegou a desenhar com Vulkan, mas falhou na troca opcional para D3D11. O caminho de instalação de SMAA do upstream contém introspecção de vtable específica de MSVC. A causa da falha dessa troca não foi isolada por stack; D3D11/D3D12 e o modo software não estão aceitos nem expostos nesta ABI. Vulkan passou nas provas finais. O protótipo foi compilado para AVX2 e ainda precisa de outra máquina/GPU.

## Onde estamos no roadmap

1. **Concluído:** biblioteca Vulkan compilável com nossa toolchain, ponte C e verificação sintética reproduzível.
2. **Próximo P0:** conectar a fila ordenada do jogo, snapshots completos de registradores, leitura do guest e ciclo de vida. SIGNAL/FINISH/LABEL e CSR/IMR continuam pertencendo ao host. Tratar importação dos checkpoints explicitamente.
3. **Depois:** validar imagem/eventos em uma cena Fuji e uma de controle. Só com essa integração correta comparar execução normal em 1x/2x/3x e atribuir o custo restante de EE/VU/GS.

Nenhum novo teste de pilotagem é solicitado nesta etapa. Não houve benchmark novo do jogo, ganho de FPS demonstrado nem novo pacote jogável. A v25, o padrão 2x, os 332 inputs gerados, os 310 programas extra e as 24 alterações/backups anteriores foram preservados. Os 39 testes da v25 são evidência histórica separada dos três testes desta biblioteca.

O renderer experimental é ligado a código GPL-3.0-or-later, com licença e referências preservadas na implementação privada. Esta atualização do GitHub permanece documental: não publica código de implementação, DLL/EXE, recursos de shader, imagens, ISO/ELF, saves ou dados do jogo. O PR permanece aberto; não há merge ou release pública nesta etapa.
