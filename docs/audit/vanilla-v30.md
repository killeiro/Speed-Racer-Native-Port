# Vanilla v30 — HUD suavizado e alta qualidade padrão

Atualizado em 22/10/2026. **Aceite posterior da equipe: HUD e Alta qualidade resolvidos; a v30 permanece jogável. A [v31](vanilla-v31.md) segue na atribuição de Fuji.** A equipe confirmou que o som da v29 foi resolvido, mas o HUD
continuava serrilhado. A v30 adiciona a filtragem das texturas à suavização final e
inicia em **Alta qualidade: 3× + bilinear incluindo sprites + FXAA**. O código de áudio
permanece exatamente o da v29. Executável e cartão anteriores foram preservados.

## Causa e correção

O modo anterior usa a filtragem PS2 do renderer: respeita TEX1 e pode ampliar texturas
do HUD por vizinho mais próximo. Aumentar a resolução interna melhora a geometria,
mas não reconstrói uma borda já gravada em texels discretos. FXAA atua depois da composição.

O renderer PCSX2/kzgs já oferece bilinear forçado, inclusive para sprites. A v30 usa
essa opção no preset Alto, sem modificar texturas, geometria, registradores do jogo
ou algoritmos GS. A mesma amostragem pode afetar texturas fora do HUD e suavizar textos;
não é uma reconstrução em HD nem garantia de eliminar todo serrilhado.

Um teste C da DLL real envia uma textura sintética 8×8 com borda em degraus, ampliada
como sprite, e TEX1 pedindo nearest. Com FXAA desligado para isolar o sampler, o modo
PS2 mantém0 pixels intermediários; o modo Alto produz127.125, retendo cores uniformes.
O teste também rejeita valor inválido da opção. Ele cobre o caminho que o FXAA isolado
não altera. A leitura de configuração usa o contrato Win32 já corrigido na v29.

## Comparação no jogo

Duas partidas novas com mídia original, cartões de teste equivalentes, FXAA ligado e
resolução3× capturam os mesmos frames de menu/carregamento/corrida. As imagens1920×1437
foram inspecionadas: a barra de vida tem bordas mais suaves; o círculo de voltas e os
demais elementos recebem a nova filtragem. Não apareceram elementos ausentes ou vazamento
óbvio de atlas nos três frames verificados. Isso não certifica todas as telas.

As capturas usam a DLL gráfica final com o launcher v29 e overrides explícitos para
isolar o sampler; a lógica do jogo permanece a mesma. A integração e os padrões do
EXE v30 foram verificados separadamente na janela normal. As sondas de imagem ocorreram
em paralelo, portanto seus tempos não são usados como benchmark. Contagens de pixels
alterados nos recortes são métricas de atuação, não uma pontuação objetiva de qualidade.

## Custo na janela normal

Uma comparação sequencial usa o **mesmo pacote v30**, Vulkan/Win32 direto,3×, FXAA,
WASAPI, sem captura de frames, PS2_TIME ou outro build/teste simultâneo. Cada caso parte
de boot novo, com cache separado previamente aquecido e a mesma rota automática de
Thunderhead. Mede callbacks a partir de10.600 até11.939; não é pilotagem humana/corrida
completa nem apresentação física do monitor. O caso Alto usa o preset salvo, sem override
de resolução, renderer, DLL, disco, FXAA ou filtragem; o controle força somente filtragem PS2.

| Janela medida | Filtragem PS2 + FXAA | Alta qualidade padrão |
|---|---:|---:|
| Callbacks | 1340 | 1340 |
| Intervalo médio (ms) | 16.661 | 16.661 |
| p99 (ms) | 34.590 | 32.806 |
| Fila SDL média (ms) | 84.300 | 82.451 |
| Fila SDL zerada — observações | 0 | 0 |

É um único par, sem alternância/repetições suficientes para atribuir porcentagem de
ganho ou garantir ausência de custo. A evidência serve para verificar que o preset
funciona e não mostrou perda grande de cadência nesse trecho. A queda em Fuji, caudas
de frame time e a atribuição de espera gráfica da sessão anterior continuam abertas.

## Opções e pacote

O padrão GUI passa a3× também sem INI válido. **Shift ao abrir** permite escolher1×–4×
e depois Alta qualidade, Suavização leve (FXAA) ou Original (filtragem PS2 sem FXAA).
As escolhas são salvas e preservadas ao mudar resolução; ainda é possível suavizar
as texturas em uma resolução menor. Diagnósticos headless preservam a filtragem PS2
quando não recebem configuração explícita.

- **46/46 testes do runtime e4/4 da biblioteca gráfica** aprovados.
- Ambas as janelas finalizam normalmente, com GS direto, áudio e workers unidos.
- O caso Alto confirma automaticamente bilinear incluindo sprites e FXAA, usando
  dados/DLL adjacentes ao EXE fora da pasta de desenvolvimento.
- Pacote GUI sem CMD, fullscreen adaptável e controle preservados. O save atual da
  v29 foi copiado para a pasta nova; os anteriores não foram sobrescritos.

Commit privado: `93add46d9ae0c107a10b18b8a53e6abcde85f4f3`.
EXE: `ce53dcc55d165e7f9c0dd4cdba37e55b0db683270f4dee7fa199d4dd6b76ab1c`. DLL: `7d2992096708714225a399f092153ecb1a0f7234ca503e97143d7aec2ada0dc2`.

Próximo foco de desempenho: identificar a variante Fuji e separar preparação GS,
postagem/consumo e GPU. A confirmação do som pela equipe é registrada como resolução
do relato anterior; latência/underruns físicos continuam critérios independentes.
Resultado/save/reabertura verificáveis, classes/Mirror, paridade original e segundo
PC permanecem no roadmap. Sem promessa de60FPS globais ou distribuição pública.

GitHub recebe apenas documentos e métricas anônimas; PR23 segue aberto, sem merge.

## Referência primária

[PCSX2 GSVertexTrace: modos PS2 e Forced de filtragem](https://github.com/PCSX2/pcsx2/blob/646df006a4688063e56c0826e7ea4b8bb0c112c4/pcsx2/GS/Renderers/Common/GSVertexTrace.cpp).
