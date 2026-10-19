# Testes e estabilidade — Vanilla audit v2

> **Historical v2 snapshot (2026-10-16).** This report records the code and tests at that date. Mipmapping and VU/VIF execution subsequently changed. For current implementation, measurements and unresolved work, read the [audit index](README.md).


| Área | Resultado desta iteração | Limite |
|---|---|---|
| Build Release | Compilação de host, runtime e testes passou | Build limpo em outro PC não verificado |
| CTest | 12/12 testes passam, incluindo DATE e replay MSKPATH3 | DATE no shader GPU não foi testado por readback; encoder GPU foi testado |
| Corrida/replay | Cinco configurações antes/depois, todas exit 0; regressão de 600 frames | Não certifica corrida completa, vitória ou 30 minutos |
| Simulação | Ciclos EE medidos separadamente do present | Meta 100% pendente; cronômetro da corrida não extraído |
| Controle | Testes virtuais SDL e concorrência SIO2 passam; usuário confirmou controle físico anterior | Combinações físicas adicionais USB/Bluetooth não retestadas |
| Teclado/menus/carros | Tour automatizado até frame 8000 passou por menu, personagem, carro e grid/corrida | Próprio carro parado; não equivale a testar todos os carros, pilotagem ou completar corrida |
| Áudio | WASAPI abriu em todos os benchmarks | Sem escuta certificada, métrica de underrun ou reverb completo |
| Vídeo/IPU | Código inspecionado e vídeo de boot observado nas capturas | Fidelidade audiovisual não certificada |
| Saves | Save original preservado por SHA; testes usam cópias; load-state funciona | Save de conclusão de corrida não verificado |
| Pausa/reinício/saída | Saída por --frames passa | Pause/restart e encerramento limpo sem _Exit pendentes |
| Fullscreen/resize | Caminho F11/resize inspecionado | Teste manual atual não verificado |
| GPU | RTX3060/Vulkan/Mailbox e 1x/2x/3x executados | Intel UHD730, AMD e D3D12 não executados |
| Máquina limpa | Risco de fallback local identificado; DLL bundle já testado anteriormente | Clone/build/boot sem caminhos de desenvolvimento pendentes |
| Paridade PCSX2 | Código primário comparado | Cinco pares visuais sincronizados não verificados |

Os testes não simulam resultados físicos, visuais ou legais ausentes. A cópia funcional conhecida foi preservada antes das mudanças. Os dados e saves originais não foram apagados nem migrados.

