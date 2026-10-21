# Vanilla v23 — cobertura nativa recuperada e auditoria VU

20/10/2026. **Candidata não promovida; cobertura gerada recuperada e EXE v17 preservado.** Referência privada jogável: **v17**. A equipe manteve execução Windows nativa,1x/legacy, sem simplificar gráficos, efeitos, física ou comandos do jogo.

## Falha real de reprodução e correção

A conferência de restauração detectou uma divergência além de timestamp/checksum:
o fonte extra gerado tinha apenas **3 programas**, enquanto o EXE v17 continha
**310**. O objeto incremental antigo preservava os outros307; editar o header
forçou recompilação desse objeto e retirou essa cobertura na candidata. O conjunto
completo foi recuperado dos fontes de capturas locais preservados, com conjunto
de símbolos igual ao da referência. Rebuild das unidades VU e relink reproduzem
o EXE v17 inteiro, exceto timestamp COFF/checksum PE. Isso não é um build limpo de
todos os fontes em diretório novo.

Uma barreira CMake verifica SHA-256, número de funções e registro contra um
manifesto privado. Ela roda na configuração **e em toda compilação**, para que
um arquivo parcial copiado com timestamp antigo não escape dos checks incrementais.
32 CTests passam;2 casos sintéticos válidos são aceitos e7 inválidos rejeitados.
O caso real é reproduzido com a fonte3-programas e mtime preservado: build
rejeitado, EXE congelado intacto; restaurar a fonte310 faz o build passar.
Fontes gerados, capturas e manifesto ficam locais; somente a lógica genérica da
barreira e testes sintéticos entram no Git privado. Não muda o comportamento do
runtime jogável nem cria nova versão para distribuição.

Essa descoberta limita também os controles abaixo: **eles não isolam apenas a
comparação inteira**, pois a cobertura extra da candidata caiu310→3. Os56
resultados, positivos e negativos, permanecem retidos; nenhum percentual é
promovido a ganho causal da normalização. As provas de valores/correção continuam
válidas em seu escopo. As verificações incrementais anteriores não constituíam
um build limpo de todos os inputs gerados.

## Hipótese de normalização e implementação isolada

O [diagnóstico v21](vanilla-v21.md) identificou custo VU acima do orçamento60FPS em Fuji. A inspeção das continuações nativas mostrou normalização vetorial repetida. O helper preserva sinal, limita magnitude a um valor finito e descarta subnormais. Depois desse limite, a classificação do menor normal pode usar ordenação inteira positiva; não precisa de uma comparação float. A alteração rastreada no helper troca essa classificação, sem fast-math/FMA ou alteração intencional em Q/MAC/status/CLIP, cache, filas, áudio, clock, física, gráficos ou controles. O artefato também perdeu cobertura extra ao recompilar a fonte parcial, conforme descrito acima.

A prova de valores considera magnitude limitada no intervalo[0,0x7F7FFFFF]. Nesse intervalo finito não negativo, ordem dos bits e ordem numérica concordam; o limiar0x00800000 separa subnormais de normais. Sinal é reinserido, preservando zero negativo. Infinitos e todos os NaNs já foram limitados antes da comparação.

## Verificação antes de FPS

- Todos os **4.294.967.296 encodings** foram comparados contra a implementação SIMD anterior e o contrato escalar por expoente, sem divergência. O teste integrado acrescenta idempotência e bordas:12.885.688.320 verificações no modo exaustivo. O teste normal cobre200.000 trios de vetores aleatórios e add/sub/mul/madd/msub contra os caminhos escalares existentes.
- Bordas e lanes misturadas passam em16 configurações com exceções mascaradas de arredondamento/FTZ/DAZ. **Os sticky flags da CPU hospedeira não são idênticos:** uma entrada subnormal aciona status2 no caminho anterior e0 no novo; o runtime não consulta esses flags. MAC/status da VU são calculados separadamente e permanecem sujeitos às comparações completas.
- **32/32 CTests passam.** Três execuções nativas, stride64, comparam53.665 chamadas completas: registradores VU,16KiB de memória e bytes dos pacotes GIF, zero diferenças contra o interpretador escalar com normalização original.884.790 verificações Q passam. São diagnósticos, sem inferência de FPS.
- Três pares novos de WAV gerado são byte a byte idênticos:480.000/480.000/480.032 sample-frames48k estéreo16 em Fuji4/Skorost1/GP0. Isso não certifica reprodução física ou latência.
- As duas continuações antes mais amostradas passam de138→8 e41→4 comparações float estáticas. O total de instruções aumenta10404→10460 e2063→2069; **código menor ou ganho de runtime não são inferidos desses números**. A recompilação pura é idêntica ao EXE candidato congelado; nenhum fonte de sonda temporária foi introduzido.

## Comparação final e critérios prévios

Antes da edição foram declarados os mesmos critérios v22 e sete cenas. Mesmo caminho de EXE/checkpoints/inputs/card QA, aquecimentoAB seguido deAB/BA/AB, Fuji1.800VBlanks e controles600; descarte60,1.700/500 callbacks comuns. Os14 aquecimentos e42 controles medidos são retidos integralmente, inclusive perdas e picos. Sem build, profiler, captura ou outro jogo de teste durante FPS. Carga externa não controlada; os aquecimentos de Fuji variaram e não são usados como pares causais.

| Cena | FPS v17 / candidata | Variação | p99 callback comum v17 / candidata, ms |
|---|---:|---:|---:|
| Fuji-4 | 50.60 / 50.00 | -1.20% | 33.39 / 38.05 |
| Fuji-3 | 47.29 / 54.52 | +15.28% | 40.50 / 31.85 |
| Skorost-1 | 57.91 / 57.16 | -1.30% | 29.35 / 32.93 |
| Skorost-2 | 56.35 / 56.11 | -0.41% | 35.34 / 57.32 |
| Grand-Prix-0 | 57.48 / 53.39 | -7.12% | 38.29 / 45.22 |
| Thunderhead-0 | 57.83 / 59.77 | +3.34% | 49.39 / 31.91 |
| Aurora-3 | 59.22 / 58.11 | -1.88% | 34.58 / 32.84 |

Fuji3 contém uma referência medida muito lenta em um dos pares; seu percentual
agregado não deve ser apresentado como ganho causal estável. A primeira cena
Fuji4 também apresenta um par adverso forte. Todos ficam na avaliação, sem
excluir outliers depois dos resultados ou somar ganhos entre cenas.

Critérios sem relaxamento após resultados:

- `Fuji4_all_three_positive`: FAIL.
- `Fuji4_mean_gain_at_least3`: FAIL.
- `Fuji3_mean_gain_at_least1`: PASS.
- `no_scene_mean_loss_over1`: FAIL.
- `no_two_pair_losses_over2`: FAIL.
- `no_consistent_p99_loss_over5`: FAIL.
- `Skorost1_mean_p99_loss_at_most2`: FAIL.
- `all21_terminal_counter_pairs_identical`: PASS.

21/21 pares de contadores GS terminais coincidem; isso não prova identidade de todo o fluxo assíncrono. Callbacks não são scanout físico nem latência de entrada.

## Resultado e sequência

A candidata fica em branch privada. A normalização anterior volta e os310 programas adicionais são recuperados;31 testes baseline passam. O rebuild das unidades VU e relink conferem todos os bytes com v17 exceto timestamp COFF/checksum PE. A barreira de integridade passa32 testes e bloqueia a fonte parcial com mtime antigo sem modificar o EXE. Alvo e staging recebem o v17 congelado exato. Nenhuma nova matriz de imagens/36 rotas ou pacote segue a rejeição.

Na restauração, a guarda de hashes detectou conversão LF→CRLF de um header
pelo checkout Git antes de recompilar. O texto normalizado era idêntico; os bytes
originais foram repostos do backup e os metadados de stat do índice conferidos.
O incidente fica nas métricas, sem executar jogo com fontes divergentes.

As seis sessões de controle humano anteriores permanecem na [v20](vanilla-v20.md#seis-sessões-da-equipe-no-exe-de-referência-v17); esta candidata não recebeu nova pilotagem humana. Os experimentos rejeitados v18/v19/v20/v22 permanecem rejeitados. Não são somados ganhos entre iterações e não se declara fluidez global.

O próximo aceite deve validar todos os inputs gerados em build limpo antes de outra comparação de otimização. A investigação arquitetural de PCSX2 e ports nativos deve comparar GS hardware, cobertura VU, cache e sincronização por cena. O contrato de escrita/invalidação128bits permanece uma correção separada, com reprodução no cache real; não é causa demonstrada do gargalo Fuji. Preparação GS/cadência, corrida/tempo individual/resultado/save/reabertura, classes2–4/Mirror/30min contínuos, comparação original/nativo1x/serrilhado, áudio/input físicos, outro Windows/GPU e proveniência/CI/distribuição continuam abertos. Nenhuma rodada manual repetida do mesmo EXE é solicitada.

[Métricas](vanilla-v23-metrics.json) · [Próximas tarefas](next-10-tasks.md) · [Roadmap](../../ROADMAP.md). GitHub documental; PR23 aberto e main inalterada. Atribuição pública: a equipe.
