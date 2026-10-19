# Performance baseline — Vanilla audit v2

> **Historical v2 snapshot (2026-10-16).** This report records the code and tests at that date. Mipmapping and VU/VIF execution subsequently changed. For current implementation, measurements and unresolved work, read the [audit index](README.md).


Não se considera concluída a meta de velocidade. Replay local começa no frame4200 de `race-fixed.state`, termina4560, sem novas entradas; o carro próprio não recebeu aceleração e ficou parado, com adversários/efeitos ativos. Não representa pilotagem, corrida completa nem a pior trajetória. Descarta60 primeiras linhas para aquecimento. O estado/ISO/ELF são privados e seus bytes não são publicados.

Host: i5-12400 (6C/12T), RTX3060, driver617.14, Windows11Pro10.0.26200; Clang23.1.3 Release-O3, SDL2.32.10, wgpu-native29.0.1.1/Vulkan/Mailbox. Áudio WASAPI. Drivers de controles físicos são desligados **somente no benchmark** para impedir entrada externa. Uso normal preserva controles.

## Definições

`PS2_FRAME_CSV`: intervalo entre callbacks anteriores ao present, não scanout. `PS2_SIM_CSV`: na thread EE registra frame emulado, ciclos EE, relógio monotônico e tempo em `post_present`/`pace`. Velocidade = delta(ciclos EE)/294912000/delta(tempo real). FPS simulado = delta(VBlanks)/tempo real. p50/p95/p99 por posição ordenada sem interpolação; stutter definido como intervalo>33,333ms, não como diagnóstico universal.

A versão USA local declara NTSC em SYSTEM.CNF. O runtime usa 60 VBlanks/s, 50 PAL. A cadência original precisa comparação independente de hardware/PCSX2 e cronômetro da corrida. Diferença entre 60 e aproximadamente59,94 é pequena e não explica perda de10–20%; não mudamos a física nem ciclos para compensar.

## Resultados

| Configuração | Sim.FPS antes | Sim.FPS após | Velocidade após | p50/p95/p99 present(ms) após | Espera post(ms) | Espera áudio(ms) |
|---|---:|---:|---:|---|---:|---:|
| threaded | 48.35 | 53.05 | 88.41% | 18.77/24.26/25.47 | 7.14 | 0.002 |
| single | 28.36 | 28.83 | 48.06% | 34.60/39.81/44.58 | 2.90 | 0.002 |
| no-vu | 36.74 | 37.71 | 62.86% | 26.38/31.84/34.89 | 0.01 | 0.001 |
| scale2 | 56.26 | 55.93 | 93.21% | 17.35/22.76/25.31 | 6.44 | 0.219 |
| scale3 | 47.65 | 47.40 | 79.00% | 20.99/25.46/29.31 | 9.83 | 0.002 |

São **uma execução por configuração**, não uma prova estatística de ganho. Antes: instrumentação de simulação sobre código anterior; após: DATE/MSKPATH3 e contadores opcionais GS ativados. As trajetórias/cargas com threads ainda variam; escala2 mais rápida que1 nesta amostra não prova otimização por escala. Comparar taxas de uma carga diferente não permite atribuir ganho à correção.

Confirmação principal: a simulação acompanha a perda de throughput. Exemplo antes, com threads: 4,9836s emulados exigiram6,1840s reais (~80,6%). Após: 4,9836s exigiram5,6367s (~88,4%). Ainda há câmera lenta real; o cronômetro interno da corrida não foi extraído da RAM e sua taxa permanece não verificada.

## Reprodução local

Configure/build do projeto atual: `cmake --build build/windows-speedracer-clang -j 8`, seguido de `ctest --test-dir build/windows-speedracer-clang --output-on-failure`. Uma máquina limpa ainda exige gerar EE/VU e obter dependências; isso não está declarado resolvido.

O harness local `scripts/audit/run_matrix.py` recebe `--exe`, `--state`, `--memcard`, `--out`, `--dll-dir` opcional e `--gs-audit`. Exemplo:

```powershell
python scripts/audit/run_matrix.py --exe BUILD/SpeedRacer.exe --state PRIVATE/race-fixed.state --memcard PRIVATE/test-card.ps2 --out RESULTS --dll-dir SDL_RUNTIME --gs-audit
```

O script não deve receber o memory card principal; use cópia. Os CSVs contêm somente tempos/contadores; comandos com caminhos pessoais são removidos de `metrics.json` público. Os resultados completos privados são preservados localmente. IDs absolutos de frame carregados do estado não são quantidade de frames processados nesta execução.

## Build IDs e limites

Executável funcional preservado: `226993b25ac1b04dcec501f8e86914f4060de9f7cf046944e9f78f2b9ade1376`. Build auditado corrigido: `69227f6323f3d3a5c7284a81338fa8c16e71382bcc9ab523e30d626046aff9f0`. O baseline instrumentado é um terceiro binário, equivalente funcionalmente ao preservado mais telemetria; não confundir seu hash com o conhecido.

Sem medição input-to-photon, sem teste30min, sem corrida completa, sem atestado de áudio sem underruns. Estatísticas GPU finais ainda não são snapshot sincronizado entre três threads. Não se removeu efeito, não se alterou física e não se forçou aceleração da simulação.

