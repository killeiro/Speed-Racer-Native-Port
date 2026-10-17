# Próximas dez tarefas — Vanilla

| # | Prioridade | Tarefa | Dificuldade | Impacto | Dependências e critério de aceite | Issues |
|---|---|---|---|---|---|---|
| 1 | P0 | Replay determinístico e relógio da corrida | Alta | Base das medições | Capturar entradas/ticks/cronômetro e sincronizar EE/VU/GS; cinco cenários repetíveis e taxa original confirmada | #2, #3 |
| 2 | P0 | VIF parser/UNPACK orientado pelo perfil | Média | Throughput CPU | Depende de 1; medir NOP/UNPACK, fuzz de parser/estado, paridade GIF e ganho sem remover efeitos | #4 |
| 3 | P0 | Cobertura AOT VU dirigida por custo | Alta | Throughput CPU | Depende de 1; ordenar por tempo/instruções, preservar CLIP/Q/status, comparar registradores/memória/pacotes | #4 |
| 4 | P0 | Mipmapping GS completo | Alta | Fidelidade ativa | Testes LOD/MMIN/MIPTBP/hazards e cena V04 em PCSX2 1x; preservar feedback e cache | #6 |
| 5 | P0 | Cinco pares PCSX2/nativo | Média | Referência visual | Depende de 1 e referência legítima; mesma cena/tick/câmera, 1x, precisão e matriz de diferenças | #5 |
| 6 | P1 | Dithering 16 bits, CRTC e fog | Alta | Fidelidade | Depende de 5; priorizar uso ativo, testes isolados antes do shader; AA1 após ocorrência | #6 |
| 7 | P1 | Latência e pacing com métricas de underrun | Alta | Resposta e regularidade | Depende de 1–3; medir polling/SIO2 e input-to-photon adequado, áudio/presents por 30 minutos | #3 |
| 8 | P1 | Sincronização PATH1 e encerramento | Alta | Estabilidade | Contar SIGNAL/FINISH/LABEL; mailbox EE se usado; halt atômico, drain/join e testes de saída/save | #3, #4 |
| 9 | P1 | Build portátil reproduzível em PC limpo | Média | Manutenção | Receita de geração/deps fixadas, sem fallback DEV_ROOT; Unicode, pasta sem escrita e outra GPU | #7 |
| 10 | P1 | Proveniência, licenças e CI permitida | Média | Distribuição e QA | Allowlist de fontes independentes, notices transitivos, sem gerados comerciais; binário público só com direitos esclarecidos | #1, #8 |

A meta é a simulação no ritmo original documentado, p95/p99 dentro do orçamento apropriado e sem underruns recorrentes em largada, corrida, efeitos e sessão de 30 minutos. Resolução superior vem depois da paridade em 1x. Uma rodada 2x mais rápida que 1x não conclui otimização. Remaster, novas interfaces, mods, multiplayer e navegador ficam fora desta iteração.
