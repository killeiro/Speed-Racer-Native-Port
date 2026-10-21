# Vanilla v25 — resolução interna selecionável de 1x a 4x

Implementação local de 21/10/2026, pela equipe. **2x passa a ser o padrão do launcher gráfico**, por solicitação de qualidade maior; 1x, 3x e 4x permanecem selecionáveis. Não é uma promoção de otimização ou aceite de 60 FPS. [Métricas](vanilla-v25-metrics.json) · [Análise de arquitetura](vanilla-v24.md).

O seletor nativo abre com `--graphics`, pelo atalho local ou segurando Shift ao abrir o EXE. Salva `resolution=1..4` em `SpeedRacer.ini`. `--scale 1|2|3|4` sobrescreve a escolha apenas naquela execução. O runner genérico/headless mantém 1x quando não especificado. Resolução interna e tamanho/aspecto da apresentação são controles separados.

O GS anteriormente limitava a escala a 3x. Agora valida entrada e limites reais do adaptador antes de alocar: 4x usa 64 MiB de VRAM virtual e 128 MiB de scratch, além dos demais buffers/caches. Se os limites de tamanho/binding exigirem uma redução, a escala ativa é registrada e aparece no título em modo janela. Isso verifica limites, não garante disponibilidade de toda a memória física.

## Verificação concluída

- **39/39 CTests passaram**, incluindo parser/configuração, limites exatos de memória, bounds e snapshots em 4x.
- Testes reais GPU em 1x/2x/3x/4x desenham um triângulo, preservam todas as amostras no roundtrip de estado, validam imagem e download para a memória GS. Em 4x, 1.633 palavras tiveram amostras diferentes entre si; comprova rasterização subpixel, não mera ampliação de uma imagem 1x.
- Quatro capturas nativas separadas confirmam 640×479, 1280×958, 1920×1437 e 2560×1916. O recorte comparativo privado mostra contornos mais finos no carro e na pista; texturas/HUD originais não ganham detalhes que não existiam. Não houve referência sincronizada de PCSX2/PS2 nem aceite de fidelidade em upscale.
- Os 332 inputs gerados, os 310 símbolos VU extra, os 24 arquivos anteriores e os pacotes/saves anteriores foram preservados. O novo EXE usa subsistema GUI, sem CMD. O seletor foi compilado e sua persistência testada; interação física do diálogo e atalhos fullscreen continuam sem aceite.

## Custo observado em Fuji

Uma execução curta de 600 quadros por nível, mesma cena/EXE/caminho, fullscreen 2560×1440, pacing legacy, controle roteirizado e drivers físicos desativados. Primeiro trecho de 60 callbacks descartado. Capturas ocorreram depois, em execuções separadas. Sem trace de syscalls, profiler ou segundo jogo durante a medição.

| Escala | Imagem interna capturada | FPS simulado | p99 do callback de apresentação |
|---|---|---:|---:|
| 1x | 640×479 | 59.28 | 25.20 ms |
| 2x | 1280×958 | 49.37 | 31.55 ms |
| 3x | 1920×1437 | 28.76 | 48.84 ms |
| 4x | 2560×1916 | 19.29 | 75.83 ms |

São amostras descritivas, sem pares alternados, não um ranking estatístico nem tempos físicos do monitor. Ainda assim, a perda grande em 3x/4x exige ser exposta. 2x é o padrão de qualidade desta versão; 1x permite voltar ao menor custo. Não foi acelerada a simulação, reduzido efeito ou dispensado critério de uma candidata anterior.

**Próximo P0:** renderer GS gráfico eficiente, com contrato e fidelidade validados, para sustentar upscale. Repetir outra bateria ampla de micro-otimização antes desse protótipo não é o próximo passo. O executável privado desta etapa tem SHA-256 `e92849b2492f93007dc03aab75c5e044d88eca8204304fac272224ee5c0902a0`. Código-fonte, executável, ISO/ELF, estados, cards e imagens permanecem locais; o GitHub recebe apenas documentação.
