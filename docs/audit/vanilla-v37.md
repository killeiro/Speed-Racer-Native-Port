# Vanilla v37 — kit privado para testar em outro PC

**A equipe aprovou a v36 jogando; o próximo marco é uma sessão em outro PC.**
A v37 entrega um ZIP privado com importação gráfica da ISO própria e diagnóstico
de dependências. Alta 3×, bilinear/HUD, FXAA, som, controles e fullscreen da base
aprovada foram preservados. Não há nova otimização nem benchmark de FPS.

## Primeiro acesso nativo

Depois de extrair o ZIP inteiro, abre-se SpeedRacer.exe. Sem dados preparados,
o próprio programa oferece seleção da ISO USA, progresso e cancelamento.
Python deixou de ser requisito do setup. A versão aceita é fixa pelo ELF
auditado: tamanho, MIPS/entrada e SHA-256; não há flag para aceitar outra versão.

O leitor ISO9660 limita setores, descritores, diretório e extents; recusa
duplicatas, sobreposições, nomes impróprios e BOOT2 divergente. A ISO original
fica aberta somente para leitura, com compartilhamento que impede gravação e
rename/delete comuns durante o preparo. Copia-se em blocos, verificam-se cópia,
executável extraído e fonte novamente. A pasta temporária fica no mesmo volume
e só é publicada após as verificações, por rename sem substituição. Mesmo uma
pasta de destino vazia ou criada durante a operação é preservada. O cancelamento
limpa somente os arquivos temporários de nomes fixos criados pelo importador.

O trabalho de disco roda em outra thread; controles da janela ficam na thread
da UI. Importar não cria cartão nem cache gráfico. Checkpoints hardware seguem
incompatíveis; saves normais do jogo continuam no caminho SIO2 existente.

## Dependência que faltava explicitar

A auditoria dos imports PE revelou MSVCP140/VCRUNTIME140/VCRUNTIME140_1 usados
por DLLs auxiliares. Estarem no System32 deste PC não os transforma em componentes
garantidos do Windows. O pacote agora distingue **13 DLLs incluídas** do
**Visual C++ v14 x64 externo** e do driver/loader Vulkan do sistema.

Antes do primeiro preparo/jogo gráfico, o launcher verifica os arquivos locais
e usa o loader real para conferir o compilador de shaders e seus imports. Uma
falha orienta a extrair o pacote completo e, se necessário, usar o atalho para
o instalador oficial Microsoft. Não se copiaram DLLs do System32 nem se executou
instalação automática. O teste do loader Vulkan não certifica capacidade da GPU.

Um relatório local registra CPU/AVX2, RAM, build do Windows, nome do adaptador,
loader e presença de dependências. Não coleta usuário, hostname ou IDs de produto
e dispositivo. Não envia nada pela rede. O log normal permanece local; nenhum
relatório, cartão, cache ou log da máquina de desenvolvimento entra no ZIP.

## Verificações realizadas

**49/49 testes passam**, incluindo **239 verificações do importador nativo**:
vetores SHA conhecidos, arquivos reais com ISO/ELF sintéticos, Unicode, ISO inválida, escrita e
rename da fonte bloqueados, cancelamento em cinco fases e corrida de criação do
destino. A versão sintética só existe no teste; a API pública continua fixa.

O assistente gráfico importou a ISO própria real para outra pasta Unicode,
com saída 0; ISO e ELF resultantes foram conferidos por hash independente.
Fonte com tamanho/mtime preservados e nenhum cartão/cache criado pelo setup.
A tentativa de input de cancelamento ocorreu quando a janela já tinha fechado:
não se conta isso como teste positivo de cancelamento da UI. A cobertura de
cancelamento desta iteração é a do importador real nos testes automatizados.

Oito casos de integração passam: preflight, relatório local, DLL ausente,
compilador corrompido, ISO inválida, destino já existente, GUI fresca de1.200
frames em Alta 3×/Win32/Vulkan com drenagem/join normais, e reabertura de600
frames. Cartão QA explícito; PATH somente do Windows e cwd separado.

O ZIP de87 arquivos foi aberto, teve CRC e todos os86 hashes de conteúdo
conferidos, e foi extraído em outra pasta Unicode. Cinco verificações do artefato
extraído passam: preflight, relatório, recusa sem mídia, importação pela entrada
de produção e boot de600 frames. A ausência real do MSVC em uma instalação limpa
e outro PC físico ainda não foram exercitadas.

332 inputs gerados, DLL GS e24 alterações anteriores preservados. Os cartões
v29/v30/v35 continuam idênticos. O check rígido do quarto cartão detectou que
uma sessão humana v36 continuou durante o trabalho: o progresso mais recente
foi mantido e copiado para backup privado, sem restaurar o hash antigo. Todos
os jogos executados pelo agente usaram outra pasta/cartão QA.

## Entrega e próximo gate

O kit privado inclui instruções e um protocolo de uma sessão: primeiro acesso,
controle/áudio/fullscreen, corrida e resultado/save, Fuji se disponível, saída
e reabertura para conferir progresso. Não se exige outra campanha manual inteira.
Os dados de jogo, progresso e cache são preparados/criados no computador de teste.

**Próximo: executar essa sessão no segundo PC e analisar o retorno.** Não se
promete 60 FPS nessa CPU. Picos residuais, cobertura integral, resultado natural
com save/reabertura e revisão completa de proveniência/distribuição seguem abertos.
22 avisos de componentes foram acrescentados ao kit; a correspondência exata de
algumas versões upstream e a revisão do executável recompilado/arte não estão
certificadas. O ZIP está pronto como artefato experimental privado, sem release
público ou upload de fonte/binário/imagem no GitHub. PR23 segue aberto/sem merge.

[Métricas](vanilla-v37-metrics.json) · [V36](vanilla-v36.md) · [Próximas tarefas](next-10-tasks.md).

Referências de implementação: [CreateFileW](https://learn.microsoft.com/en-us/windows/win32/api/fileapi/nf-fileapi-createfilew),
[MoveFileExW](https://learn.microsoft.com/en-us/windows/win32/api/winbase/nf-winbase-movefileexw),
[BCryptCreateHash](https://learn.microsoft.com/en-us/windows/win32/api/bcrypt/nf-bcrypt-bcryptcreatehash),
[Visual C++ Redistributable oficial](https://learn.microsoft.com/en-us/cpp/windows/latest-supported-vc-redist/).
