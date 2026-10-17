# Fidelidade gráfica — auditoria Vanilla v2

A paridade com PS2/PCSX2 **não foi certificada**. Imagens iguais entre dois builds detectam regressões locais; não provam que ambos reproduzem o console corretamente. Não foram aplicados filtros cosméticos nem removidos efeitos.

## Evidências atuais

O GS já implementa swizzle e formatos PSM, CLUT, texturas/TFX, alpha blending, testes alpha/Z, máscaras, fog e feedback de framebuffer. Iluminação e transformações também vêm da EE/VU. A descrição de que só o essencial é desenhado ainda não é um diagnóstico técnico.

A corrida solicita mipmapping: no teste 1x foram **139.131 setups com MMIN>=2 e MXL>0**, entre 502.061 reconstruções. Entretanto `gpu.cpp::make_setup` só transmite MMAG, e `gs.wgsl::sample` busca nível zero. É uma lacuna ativa confirmada, ainda sem quantificação da diferença por pixel. Dithering de 16 bits foi solicitado em 703 setups; AA1 em zero. Esses contadores são de reconstruções de setup, não de primitivas ou pixels. O raster CPU compartilha essas lacunas; acordo CPU/GPU não basta para provar precisão.

A fonte da cena medida foi **640x479, escala 1, halved=0 e field_blend=0**. A escala padrão amplia essa imagem na janela 960x720. A mistura temporal existe para outros modos, mas estava desativada nessa amostra; portanto não explica, por evidência atual, o borrão desta corrida.

## Matriz de defeitos

| Severidade | Subsistema | Evidência e estado | Aceite da correção |
|---|---|---|---|
| Alta | Mipmapping/MMIN/LOD | Ausente e solicitado em cerca de 28% dos setups 1x | Regras GS para Q/LCM/K/L/MXL, MIPTBP, filtros e hazards/cache; padrões sintéticos e comparação da corrida em 1x |
| Média | Dithering de 16 bits | DIMX/DTHE armazenados, sem aplicação; uso ativo | Testar matriz assinada, saturação, máscaras e ordem antes de converter para 16 bits |
| Média | DATE em CT24 | Defeito determinístico corrigido no CPU e encoder GPU; 32 casos passam | Acrescentar GPU readback; uso zero no replay, sem alegar melhora estética dessa cena |
| Média | CRTC/PMODE | Composição completa de dois circuitos ausente por leitura do código | Capturar circuitos, offsets e alpha; comparar referência original |
| Média | Filtro de minificação | MMAG governa o sampling; MMIN não aplicado | Padrões com MMIN diferente de MMAG e LOD positivo/negativo; não forçar bilinear global |
| Condicional | AA1 | Cobertura incompleta; uso zero na amostra | Priorizar após ocorrência demonstrada na cena |
| Baixa | Arredondamento de fog | Possível diferença de um nível de cor | Testes F=0/255 e referência GS antes de alterar |
| A investigar | Feedback, CLUT, Z, transparências | Implementados, testes parciais; riscos residuais | Dumps e comparação por passe/formato, preservando a otimização anterior |

## Cinco cenários definidos

| ID | Estado e entrada alvo | Configuração | Captura nativa | Referência PCSX2 | Subsistema a avaliar |
|---|---|---|---|---|---|
| V01 | Boot limpo, confirmar idioma/autosave e abrir menu principal | 1x, 4:3 | Tour atual frame 3600; menu principal | Não verificada | UI, CRTC, CLUT |
| V02 | Single Player/Class 1, personagem Speed Racer | 1x, mesma posição da animação | Tour atual frames 5200 (personagem) e 5600 (carro) | Não verificada | Texturas, iluminação VU, alpha |
| V03 | Royalton Rookies Cup, mesmo carro e grid antes da largada | 1x, mesmo field | Tour atual frame 6800 (grid), sem certificar instante do countdown | Não verificada | Geometria, Z, fog, CRTC |
| V04 | Estado frame 4200 até 4400/4600/4800, sem nova entrada | 1x, GPU principal | Três imagens atuais com SHA iguais antes/depois | Não verificada | Regressão local; mipmapping ainda ausente |
| V05 | Evento Car-Fu, partículas ou boost com entrada registrada | 1x, mesma câmera/tick | Estado dedicado ainda pendente | Não verificada | Alpha, feedback e partículas |

Para cada caso faltam pares realmente sincronizados: renderer e configuração exatos, 1x, sem texture pack ou patch HD, mesmo tempo/câmera. Primeiro comparar a referência de maior precisão; depois avaliar resolução superior. Não foi identificada instalação configurada de PCSX2 com BIOS legítima neste ambiente. Não se baixou BIOS nem se substituiu referência por screenshot genérica da internet.

A regressão atual preservou exatamente os frames 4400/4600/4800 após 600 frames. Os hashes estão em `image-check.json`. Isso é coerente com DATE_CT24=0 nessa cena.

## Referências e decisões

O [PCSX2 GS HW](https://github.com/PCSX2/pcsx2/blob/master/pcsx2/GS/Renderers/HW/GSRendererHW.cpp) trata LOD, mips e hazards; o [GS SW](https://github.com/PCSX2/pcsx2/blob/master/pcsx2/GS/Renderers/SW/GSDrawScanline.cpp) serve como referência de comportamento DATE/dither; o [GSRenderer](https://github.com/PCSX2/pcsx2/blob/master/pcsx2/GS/Renderers/Common/GSRenderer.cpp) trata composição e deinterlace. Não foi copiada implementação GPL para a base MIT.

[paraLLEl-GS](https://github.com/Arntzen-Software/parallel-gs) demonstra renderer compute com dumps e controle de hazards. Replay e testes isolados se aplicam ao projeto; trocar o backend inteiro agora teria risco alto. [RT64](https://github.com/rt64/rt64) e [Zelda64Recomp](https://github.com/Zelda64Recomp/Zelda64Recomp) são referências de separação entre fidelidade, resolução e apresentação; a arquitetura N64 não resolve automaticamente GS/VU. [PS2Recomp](https://github.com/ran-j/PS2Recomp) é infraestrutura experimental. [BT3-Recomp](https://github.com/z3xox/BT3-Recomp) e [God of War Recomp](https://github.com/KIexster/god-of-war-recomp) são referências de integração, com recursos/desempenho declarados que não foram reproduzidos aqui. O alvo continua Windows nativo.

Tour atual: boot até frame 8000, saída 0 em 98,56 s, com capturas a cada 400 frames. Entradas Cross nos frames 800, 1700, 2100, 2500, 2900, 3700, 4100, 4500, 4900, 5300, 5700, 6100, 6500 e 6900, duração 6 frames. O carro ficou parado no grid; o avanço dos adversários foi observado. São capturas nativas locais, sem publicação de imagens comerciais no PR.
