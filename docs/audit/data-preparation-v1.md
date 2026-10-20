# Preparação dos dados portáteis v1

> Atualização posterior de20/10/2026: a ISO legítima foi recuperada. O [novo checkpoint](restored-media-v1.md) registra preparação/boot reais, controle Skorost, escala1x/2x e pacote privado. O texto abaixo preserva as condições e resultados desta etapa histórica.

19/10/2026. **Implementado e testado como ferramenta de engenharia Windows.** O preparador cria uma pasta nova a partir da própria ISO legítima do usuário. A ISO completa ainda não está disponível neste ambiente; não houve boot do jogo, benchmark, comparação gráfica ou nova release.

## Evidência e implementação

A auditoria de `scripts/disc.py` encontrou uma cópia que abre o destino com sobrescrita e não trata leitura vazia no loop: uma entrada truncada pode deixar bytes pendentes sem progresso. A extração genérica também usa nomes da imagem como caminhos de saída. Essas propriedades não são adequadas à preparação do pacote portátil. O helper genérico foi preservado; esta etapa cria um caminho específico e limitado em `scripts/prepare_speedracer_data.py`, sem alterar o parser de runtime ou introduzir outra extração recursiva.

O novo preparador verifica PVD ISO9660, setores de2048 bytes, campos redundantes little/big-endian, terminador limitado, raiz limitada a1MiB e extents dentro do volume. Busca somente SYSTEM.CNF e SLUS_218.12 na raiz, rejeita entradas duplicadas, versões alternativas, extents sobrepostos de metadados/arquivos requeridos e formatos de registro não suportados. Nomes da imagem nunca são usados como destinos arbitrários. O BOOT2 deve selecionar o executável USA auditado; tamanho, ELF32/MIPS/entry e SHA-256 têm de corresponder à referência privada.

A origem é aberta somente para leitura. A cópia completa usa blocos de1MiB e falha em EOF inesperado. O hash produzido na cópia é comparado com uma releitura completa da cópia e outra da origem; identidade, tamanho e timestamps da origem também são verificados. O ELF extraído é conferido separadamente. Esses hashes mostram consistência na preparação, **não autenticam todos os assets nem comprovam que a imagem contém um jogo completo**.

O pai do destino deve existir e ser gravável; o destino deve ser novo, inclusive se a pasta existente estiver vazia. Há checagem prévia de espaço e staging no mesmo pai. Só após a verificação ocorre o rename da pasta, que no Windows falha se outro processo criar o destino. Exceções normais limpam o staging recém-criado. Save, executável e pacote anterior ficam fora da preparação.

Saída: `disc.iso`, `SLUS_218.12` e `preparation.json`. O CLI fixa a referência auditada, sem `--force` ou override de hash/versão. Suporta apenas Windows/Python3.10+ e ISO bruta ISO9660 de até16GiB. CHD/CSO/UDF-only, outras regiões/revisões e importação por interface nativa não foram implementados. Não é um instalador independente de Python.

## Validação e limites

**52/52 testes sintéticos passaram** no Windows contra os arquivos finais no repositório. Cobrem cópia maior que um bloco, origem marcada como somente leitura, caminhos Unicode, parsing/endereços malformados, volume truncado, versão/boot/hash errados, destinos existentes, preservação de save privado, falta de espaço, falha de escrita/corrupção com rollback, mutação da origem e criação concorrente de destino vazio. O conjunto fica em `scripts/audit/test_prepare_speedracer_data.py`.

Uma checagem adicional usa o CLI de produção, com o ELF local legítimo já auditado dentro de uma **fixture ISO9660 artificial**, sem outros assets do jogo. Ela confirma a referência fixa e a extração/cópia/hash do CLI. A fixture nunca foi enviada ao runtime nem usada como substituto do disco. O flag `--force` é rejeitado com exit2. Isso não conta como teste com a ISO completa, boot ou FPS.

A primeira execução dos testes encontrou restrição de acesso à pasta temporária do sandbox. O harness passou a aceitar uma raiz temporária de testes explícita, dentro do workspace. O log inicial foi preservado; não era falha de importação do jogo. O resultado final representa52 cenários, não a soma das repetições do desenvolvimento.

Os hashes confirmam v13 EXE/ZIP, fontes de runtime e **todos os arquivos do bundle portátil anterior** preservados. Não houve recompilação nativa nem repetição dos26 CTests históricos nesta etapa, pois somente ferramenta Python/testes/documentação mudaram. O extrator genérico continua tendo as limitações auditadas; o novo preparador não é uma correção global dele. Unicode passou na ferramenta Python; IO Unicode do runtime continua pendente. Queda abrupta do processo/energia, comportamento de antivírus, durabilidade do filesystem e imagem completa de vários GiB continuam sem certificação.

## Uso técnico futuro

Quando a ISO legítima estiver novamente disponível, execute no checkout privado, com Python3.10+:

```powershell
python scripts/prepare_speedracer_data.py --iso "D:/minha-copia/Speed Racer.iso" --out "D:/meu-port/data"
```

`D:/meu-port` precisa existir e `data` precisa estar ausente. A pasta `data` com marcador no bundle de preflight é intencionalmente rejeitada; prepare primeiro uma pasta separada e só depois monte um novo pacote de QA. O preparador nunca remove o marcador nem altera o bundle anterior automaticamente. O exemplo é documentação, não um teste executado com esse caminho.

Para reproduzir os testes privados:

```powershell
python scripts/audit/test_prepare_speedracer_data.py
```

Em ambiente restrito, `SPEEDRACER_TEST_TMP` pode indicar uma pasta gravável já existente. As fixtures sintéticas ficam apenas sob a raiz temporária do harness.

## Estado do roadmap

- Concluído: preparação específica, hashes e falhas de cópia/destino verificados em fixtures; commit privado `fc58a9516afd2de50e7ecfcaf17c63396dded562`.
- Próximo P0: recuperar os dados legítimos, terminar o controle nativo da regressão Skorost e perfis antes de promover nova otimização.
- Portabilidade ainda aberta: boot real, saves de resultado/reabertura/saída, corridas completas/30min, IO Unicode do jogo e outro PC/GPU.
- Gráficos: comparação1x/2x planejada para serrilhado; nenhum preset, AA, pack ou skin promovido.
- Publicação: documentação e métricas apenas; fonte, executáveis, fixture e ELF continuam locais. PR23 permanece aberto e a main preservada.

As [faixas de planejamento](release-readiness-and-graphics.md) continuam condicionais e de baixa confiança; concluir esta ferramenta não reduz automaticamente o prazo de performance/QA. [Roadmap](../../ROADMAP.md) · [Próximas dez tarefas](next-10-tasks.md) · [Métricas](data-preparation-v1-metrics.json) · [Preflight anterior](portable-preflight-v1.md).
