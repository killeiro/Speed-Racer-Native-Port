# Vanilla v36 — logo e caminhos portáteis no Windows

**Compilação privada verificada, sem nova otimização de FPS.** O logo fornecido
pela equipe foi incorporado ao executável, janela e barra de tarefas. O PNG
original permanece intacto; o ICO usa transparência, proporção preservada e
sete tamanhos:16/24/32/48/64/128/256. Os sete payloads incorporados nos três
alvos GUI foram comparados byte a byte ao ICO. A imagem não é publicada aqui.

## Falha reproduzida e correção

O executável v35, copiado com suas dependências, recursos, mídia e cartão QA
para uma pasta Unicode, falhava imediatamente ao carregar o ELF. Não faltavam
arquivos e o alvo já estava sem fallback de dados de desenvolvimento.

O launcher agora lê a linha de comando Windows em UTF-16 e fornece UTF-8 ao
runtime. ELF, ISO e cartão convertem esses nomes para caminhos nativos ao abrir
arquivos. A gravação atômica existente do cartão e suas regras de falha/retry
foram preservadas. Limites de arquivo de estado/dump também usam o conversor,
sem habilitar checkpoints do backend hardware, que continuam incompatíveis.

Não se alteraram instruções geradas, VU, relógios, filas, amostras de áudio,
shaders ou presets. O GS DLL continua com o hash v35. Alta 3×, bilinear/HUD,
FXAA, fullscreen adaptável e controles permanecem configurados.

## Verificação

- Build e **48/48 testes do runtime** passam. Teste do leitor ELF/ISO real em
  caminhos Unicode, com conteúdo/BSS/entrada e leitura de setor conferidos.
- Teste real de persistência SIO2 exercitado em três pastas: ASCII, acentos e
  chinês/emoji, incluindo substituição, falha, retry e reabertura.
- **52/52 testes sintéticos do importador existente** passam no Windows normal.
  São testes do preparo de dados, não provas de gameplay.
- 332 inputs gerados e 24 alterações locais anteriores preservados. Hashes e
  timestamps dos três cartões originais continuam idênticos; usa-se cópia QA.

| Boot nativo | Frames | Saída | Condições |
|---|---:|---:|---|
| Descoberta automática em pasta Unicode | 600 | 0 | ELF/ISO/cartão ao lado, cache normal |
| Argumentos Unicode explícitos | 600 | 0 | ELF/ISO/cartão com caminhos completos |
| GUI do pacote privado | 1.200 | 0 | Alta 3×, Win32/Vulkan, drenagem/join normais |

Todos partiram de diretório de trabalho separado e PATH somente do Windows.
Não são testes de segundo PC, de corrida completa ou benchmarks de FPS.

Evidência adversa preservada: uma tentativa definiu o cache por variável de
ambiente Unicode, que ainda atravessa `getenv` ANSI e falhou na conversão.
A execução normal usa o cache adjacente e passou na mesma pasta Unicode sem
esse override. As variáveis de diagnóstico ainda precisam de revisão separada.
No sandbox restrito, a suíte do importador falhou por acesso negado ao TEMP;
a mesma implementação e testes passaram no Windows normal, sem patch para isso.

## Preparação da alpha e limites

Uma nova pasta privada jogável inclui o logo e uma cópia do progresso/cache da
equipe; v35/v30 e os cartões anteriores continuam preservados. Outro kit
privado, sem ISO/ELF/cartão/log/cache, inclui dependências, hashes, avisos
disponíveis e o importador de engenharia. Verificou-se a recusa por mídia
ausente, sem fallback local, e o `--help` da cópia exata do importador.

O importador exige Python 3.10+ no Windows para preparar a ISO própria USA
auditada. O jogo com os dados preparados não exige Python. Ainda não é um
importador gráfico nem uma entrega pública pronta para amigos. A ausência de
ISO no kit não resolve a revisão do executável recompilado, dependências e arte.

Continuam abertos: picos residuais/custo de pipelines/cadência, resultado natural
seguido de save e reabertura no jogo, cobertura restante, outro Windows/GPU e
revisão completa de distribuição. Os testes SIO2 não fecham a aceitação de ponta
a ponta. Os ganhos e comparações de imagem/áudio da v35 continuam vinculados
ao hash daquele binário; não foram medidos novamente para v36.

Publicação anônima e apenas documental. Sem fonte, binário, logo, mídia, cartão,
captura ou log bruto neste PR; PR23 permanece aberto/sem merge.
[Métricas](vanilla-v36-metrics.json) · [V35](vanilla-v35.md) · [Próximas tarefas](next-10-tasks.md).
