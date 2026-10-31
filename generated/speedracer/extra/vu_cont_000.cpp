#include "ps2/vu_continuation.hpp"
namespace gen_cont {
using namespace ps2; using namespace ps2::vuops;
std::uint32_t vu1_0021D387DEF27931(Vu0Regs &PS2_VU_REGS_RESTRICT r, std::uint8_t *mem, FlagPipe &fl) {
    const bool live_flags = vu::continuation_flags_used();
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    v4u n1 = vfix(vload(r.vf[1]));
    v4u n2 = vfix(vload(r.vf[2]));
    v4u n3 = vfix(vload(r.vf[3]));
    v4u n4 = vfix(vload(r.vf[4]));
    v4u n5 = vfix(vload(r.vf[5]));
    v4u n6 = vfix(vload(r.vf[6]));
    v4u n7 = vfix(vload(r.vf[7]));
    v4u n8 = vfix(vload(r.vf[8]));
    v4u n9 = vfix(vload(r.vf[9]));
    v4u n10 = vfix(vload(r.vf[10]));
    v4u n12 = vfix(vload(r.vf[12]));
    v4u n13 = vfix(vload(r.vf[13]));
    v4u n14 = vfix(vload(r.vf[14]));
    v4u n15 = vfix(vload(r.vf[15]));
    v4u n16 = vfix(vload(r.vf[16]));
    v4u n18 = vfix(vload(r.vf[18]));
    v4u n19 = vfix(vload(r.vf[19]));
    v4u n21 = vfix(vload(r.vf[21]));
    v4u n23 = vfix(vload(r.vf[23]));
    v4u n24 = vfix(vload(r.vf[24]));
    v4u n25 = vfix(vload(r.vf[25]));
    v4u n26 = vfix(vload(r.vf[26]));
    v4u n27 = vfix(vload(r.vf[27]));
    v4u nacc = vfix(vload(r.acc));
    goto L_0948;
L_0948: { ++fl.t; const v4u uv = vaddn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); { const std::uint8_t *q = qword(mem, r.vi[5]); std::memcpy(&r.vf[2], q, 16); set_vi(r, 5, r.vi[5] + 1u); } vstore(r.vf[31], vsel(vload(r.vf[31]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[31], 14u); fl.set_mac(r.mac, r.status); } n2 = vfix(vload(r.vf[2])); }
L_0950: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[5]); std::memcpy(&r.vf[3].w[0], q + 0, 4); std::memcpy(&r.vf[3].w[1], q + 4, 4); std::memcpy(&r.vf[3].w[2], q + 8, 4); set_vi(r, 5, r.vi[5] + 1u); } n3 = vfix(vload(r.vf[3])); }
L_0958: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[5]); std::memcpy(&r.vf[4].w[0], q + 0, 4); std::memcpy(&r.vf[4].w[1], q + 4, 4); std::memcpy(&r.vf[4].w[2], q + 8, 4); set_vi(r, 5, r.vi[5] + 1u); } n4 = vfix(vload(r.vf[4])); }
L_0960: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[5]); std::memcpy(&r.vf[25], q, 16); set_vi(r, 5, r.vi[5] + 1u); } n25 = vfix(vload(r.vf[25])); }
L_0968: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[5]); std::memcpy(&r.vf[1], q, 16); set_vi(r, 5, r.vi[5] + 1u); } n1 = vfix(vload(r.vf[1])); }
L_0970: { ++fl.t; set_vi(r, 10, r.vi[4] + 3u); }
L_0978: { ++fl.t; const v4u uv = vmuln(n2, vsplat(n2[3])); set_vi(r, 11, r.vi[7] + 0u); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[2], 14u); fl.set_mac(r.mac, r.status); } n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0980: { ++fl.t; const v4u uv = vsubn(v4u{0u, 0u, 0u, 0x3F800000u}, n25); set_vi(r, 12, r.vi[6] + 0u); vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); if (live_flags) { flags(r, r.vf[4], 1u); fl.set_mac(r.mac, r.status); } n4 = vsel(n4, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0988: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n1[3])); set_vi(r, 13, r.vi[0] + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[1], 14u); fl.set_mac(r.mac, r.status); } n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0990: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[10] + 0u); std::memcpy(&r.vf[5].w[0], q + 0, 4); std::memcpy(&r.vf[5].w[1], q + 4, 4); std::memcpy(&r.vf[5].w[2], q + 8, 4); } n5 = vfix(vload(r.vf[5])); }
L_0998: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[10] + 4294967295u); std::memcpy(&r.vf[6].w[0], q + 0, 4); std::memcpy(&r.vf[6].w[1], q + 4, 4); std::memcpy(&r.vf[6].w[2], q + 8, 4); } n6 = vfix(vload(r.vf[6])); }
L_09A0: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[11] + 0u); std::memcpy(&r.vf[7].w[0], q + 0, 4); std::memcpy(&r.vf[7].w[1], q + 4, 4); std::memcpy(&r.vf[7].w[2], q + 8, 4); } n7 = vfix(vload(r.vf[7])); }
L_09A8: { ++fl.t; set_vi(r, 9, r.vi[10] + r.vi[0]); }
L_09B0: { ++fl.t; const v4u uv = vsubn(n5, n4); set_vi(r, 11, r.vi[11] + 1u); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[9], 14u); fl.set_mac(r.mac, r.status); } n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_09B8: { ++fl.t; set_vi(r, 10, r.vi[10] + 3u); }
L_09C0: { ++fl.t; const v4u uv = vmuln(n3, n9); pend = r.vi[7] == r.vi[4]; vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[10], 14u); fl.set_mac(r.mac, r.status); } n10 = vsel(n10, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_09C8: { ++fl.t; }
    if (pend) { pend = false; goto L_0B40; }
L_09D0: { ++fl.t; }
L_09D8: { ++fl.t; const v4u uv = vaddn(n10, vsplat(n10[1])); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); if (live_flags) { flags(r, r.vf[10], 8u); fl.set_mac(r.mac, r.status); } n10 = vsel(n10, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_09E0: { ++fl.t; const v4u uv = vmuln(n9, n9); vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[13], 14u); fl.set_mac(r.mac, r.status); } n13 = vsel(n13, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_09E8: { ++fl.t; }
L_09F0: { ++fl.t; }
L_09F8: { ++fl.t; const v4u uv = vaddn(n10, vsplat(n10[2])); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); if (live_flags) { flags(r, r.vf[11], 8u); fl.set_mac(r.mac, r.status); } }
L_0A00: { ++fl.t; const v4u uv = vaddn(n13, vsplat(n13[1])); vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); if (live_flags) { flags(r, r.vf[13], 8u); fl.set_mac(r.mac, r.status); } n13 = vsel(n13, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0A08: { ++fl.t; }
L_0A10: { ++fl.t; set_vi(r, 14, r.vi[9] + r.vi[0]); }
L_0A18: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vload(r.vf[11])); efu(r, 115u, 9u, 2u); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n12 = vfix(vload(r.vf[12])); }
L_0A20: { ++fl.t; const v4u uv = vaddn(n13, vsplat(n13[2])); vstore(r.vf[14], vsel(vload(r.vf[14]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); if (live_flags) { flags(r, r.vf[14], 8u); fl.set_mac(r.mac, r.status); } n14 = vsel(n14, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0A28: { ++fl.t; const v4u uv = vmuln(n7, n9); vstore(r.vf[19], vsel(vload(r.vf[19]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[19], 14u); fl.set_mac(r.mac, r.status); } n19 = vsel(n19, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0A30: { ++fl.t; const v4u uv = vmuln(n6, vsplat(0x3F800000u)); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.acc, 14u); fl.set_mac(r.mac, r.status); } nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0A38: { ++fl.t; const v4u uv = vmuln(n12, n12); vstore(r.vf[15], vsel(vload(r.vf[15]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); if (live_flags) { flags(r, r.vf[15], 8u); fl.set_mac(r.mac, r.status); } n15 = vsel(n15, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0A40: { ++fl.t; const v4u uv = vmuln(n14, vsplat(n4[3])); vstore(r.vf[16], vsel(vload(r.vf[16]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); if (live_flags) { flags(r, r.vf[16], 8u); fl.set_mac(r.mac, r.status); } n16 = vsel(n16, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0A48: { ++fl.t; const v4u uv = vaddn(n19, vsplat(n19[1])); vstore(r.vf[19], vsel(vload(r.vf[19]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); if (live_flags) { flags(r, r.vf[19], 8u); fl.set_mac(r.mac, r.status); } n19 = vsel(n19, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0A50: { ++fl.t; }
L_0A58: { ++fl.t; const v4u uv = vmuln(n15, vsplat(n25[3])); vstore(r.vf[22], vsel(vload(r.vf[22]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); if (live_flags) { flags(r, r.vf[22], 8u); fl.set_mac(r.mac, r.status); } }
L_0A60: { ++fl.t; const v4u uv = vsubn(n15, n16); vstore(r.vf[17], vsel(vload(r.vf[17]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); if (live_flags) { flags(r, r.vf[17], 8u); fl.set_mac(r.mac, r.status); } }
L_0A68: { ++fl.t; const v4u uv = vaddn(n19, vsplat(n19[2])); vstore(r.vf[20], vsel(vload(r.vf[20]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); if (live_flags) { flags(r, r.vf[20], 8u); fl.set_mac(r.mac, r.status); } }
L_0A70: { ++fl.t; }
L_0A78: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[22].w[0]); fl.end_q(r, qb, vu::continuation_q_delay(2680u, 7u)); } }
L_0A80: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vload(r.vf[17])); vstore(r.vf[18], vsel(vload(r.vf[18]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n18 = vfix(vload(r.vf[18])); }
L_0A88: { ++fl.t; const v4u uv = vmin(v4u{0u, 0u, 0u, 0x3F800000u}, vload(r.vf[20])); vstore(r.vf[21], vsel(vload(r.vf[21]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n21 = vfix(vload(r.vf[21])); }
L_0A90: { ++fl.t; }
L_0A98: { ++fl.t; }
L_0AA0: { ++fl.t; const v4u uv = vmuln(n18, n21); vstore(r.vf[23], vsel(vload(r.vf[23]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); if (live_flags) { flags(r, r.vf[23], 8u); fl.set_mac(r.mac, r.status); } n23 = vsel(n23, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0AA8: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[10] + 0u); std::memcpy(&r.vf[5].w[0], q + 0, 4); std::memcpy(&r.vf[5].w[1], q + 4, 4); std::memcpy(&r.vf[5].w[2], q + 8, 4); } n5 = vfix(vload(r.vf[5])); }
L_0AB0: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[10] + 4294967295u); std::memcpy(&r.vf[6].w[0], q + 0, 4); std::memcpy(&r.vf[6].w[1], q + 4, 4); std::memcpy(&r.vf[6].w[2], q + 8, 4); } n6 = vfix(vload(r.vf[6])); }
L_0AB8: { ++fl.t; const v4u uv = vmuln(n2, vsplat(n23[0])); { const std::uint8_t *q = qword(mem, r.vi[11] + 0u); std::memcpy(&r.vf[7].w[0], q + 0, 4); std::memcpy(&r.vf[7].w[1], q + 4, 4); std::memcpy(&r.vf[7].w[2], q + 8, 4); } vstore(r.vf[24], vsel(vload(r.vf[24]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[24], 14u); fl.set_mac(r.mac, r.status); } n7 = vfix(vload(r.vf[7])); n24 = vsel(n24, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0AC0: { ++fl.t; set_vi(r, 9, r.vi[10] + r.vi[0]); }
L_0AC8: { ++fl.t; const v4u uv = vsubn(n5, n4); set_vi(r, 11, r.vi[11] + 1u); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[9], 14u); fl.set_mac(r.mac, r.status); } n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0AD0: { ++fl.t; set_vi(r, 13, r.vi[13] + 1u); }
L_0AD8: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 2776u, 29410908u); const v4u uv = vmuln(n24, vfix(vsplat(r.q))); r.vf[26].w[0] = r.p; vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[25], 14u); fl.set_mac(r.mac, r.status); } n26 = vfix(vload(r.vf[26])); n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0AE0: { ++fl.t; set_vi(r, 10, r.vi[10] + 3u); }
L_0AE8: { ++fl.t; const v4u uv = vmuln(n3, n9); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[10], 14u); fl.set_mac(r.mac, r.status); } n10 = vsel(n10, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0AF0: { ++fl.t; const v4u uv = vmaddn(nacc, n1, vsplat(0x3F800000u)); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.acc, 14u); fl.set_mac(r.mac, r.status); } nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0AF8: { ++fl.t; const v4u uv = vmuln(n25, vsplat(n26[0])); r.vf[8].w[0] = r.vf[31].w[0]; r.vf[8].w[1] = r.vf[31].w[1]; r.vf[8].w[2] = r.vf[31].w[2]; r.vf[8].w[3] = r.vf[31].w[3]; vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[27], 14u); fl.set_mac(r.mac, r.status); } n8 = vfix(vload(r.vf[8])); n27 = vsel(n27, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0B00: { ++fl.t; }
L_0B08: { ++fl.t; const v4u uv = vaddn(n10, vsplat(n10[1])); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); if (live_flags) { flags(r, r.vf[10], 8u); fl.set_mac(r.mac, r.status); } n10 = vsel(n10, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B10: { ++fl.t; const v4u uv = vmuln(n9, n9); vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[13], 14u); fl.set_mac(r.mac, r.status); } n13 = vsel(n13, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0B18: { ++fl.t; const v4u uv = vmsubn(nacc, n27, n8); vstore(r.vf[28], vsel(vload(r.vf[28]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[28], 14u); fl.set_mac(r.mac, r.status); } }
L_0B20: { ++fl.t; }
L_0B28: { ++fl.t; const v4u uv = vaddn(n10, vsplat(n10[2])); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); if (live_flags) { flags(r, r.vf[11], 8u); fl.set_mac(r.mac, r.status); } }
L_0B30: { ++fl.t; const v4u uv = vaddn(n13, vsplat(n13[1])); pend = r.vi[2] != r.vi[13]; vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); if (live_flags) { flags(r, r.vf[13], 8u); fl.set_mac(r.mac, r.status); } n13 = vsel(n13, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B38: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[14] + 4294967295u); std::memcpy(q + 0, &r.vf[28].w[0], 4); std::memcpy(q + 4, &r.vf[28].w[1], 4); std::memcpy(q + 8, &r.vf[28].w[2], 4); } }
    if (pend) { pend = false; goto L_0A10; }
L_0B40: { ++fl.t; jpc = (static_cast<std::uint32_t>(r.vi[15]) * 8u) & 16383u; pendj = true; }
L_0B48: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    return 2896u;
dispatch:
    return jpc;
}

std::uint32_t vu1_09CE38C705559BC8(Vu0Regs &PS2_VU_REGS_RESTRICT r, std::uint8_t *mem, FlagPipe &fl) {
    const bool live_flags = vu::continuation_flags_used();
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    v4u n1 = vfix(vload(r.vf[1]));
    v4u n2 = vfix(vload(r.vf[2]));
    v4u n3 = vfix(vload(r.vf[3]));
    v4u n4 = vfix(vload(r.vf[4]));
    v4u n5 = vfix(vload(r.vf[5]));
    v4u n6 = vfix(vload(r.vf[6]));
    v4u n8 = vfix(vload(r.vf[8]));
    v4u n9 = vfix(vload(r.vf[9]));
    v4u n10 = vfix(vload(r.vf[10]));
    v4u n11 = vfix(vload(r.vf[11]));
    v4u n13 = vfix(vload(r.vf[13]));
    v4u n14 = vfix(vload(r.vf[14]));
    v4u n15 = vfix(vload(r.vf[15]));
    v4u n16 = vfix(vload(r.vf[16]));
    v4u n19 = vfix(vload(r.vf[19]));
    v4u n21 = vfix(vload(r.vf[21]));
    v4u n23 = vfix(vload(r.vf[23]));
    v4u n24 = vfix(vload(r.vf[24]));
    v4u n25 = vfix(vload(r.vf[25]));
    v4u n26 = vfix(vload(r.vf[26]));
    v4u n27 = vfix(vload(r.vf[27]));
    v4u n28 = vfix(vload(r.vf[28]));
    v4u n29 = vfix(vload(r.vf[29]));
    v4u n30 = vfix(vload(r.vf[30]));
    v4u n31 = vfix(vload(r.vf[31]));
    v4u nacc = vfix(vload(r.acc));
    goto L_2E00;
L_2A20: { ++fl.t; const v4u uv = vmuln(n14, n21); set_vi(r, 13, r.vi[13] + 3u); vstore(r.vf[20], uv); if (live_flags) { flags(r, r.vf[20], 15u); fl.set_mac(r.mac, r.status); } }
L_2A28: { ++fl.t; const v4u uv = vmax(vload(r.vf[17]), vsplat(0u)); vstore(r.vf[17], vsel(vload(r.vf[17]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); }
L_2A30: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 10800u, 29394012u); const v4u uv = vmuln(n16, vfix(vsplat(r.q))); set_vi(r, 1, (fl.clip() & 262143u) ? 1u : 0u); vstore(r.vf[17], vsel(vload(r.vf[17]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[17], 14u); fl.set_mac(r.mac, r.status); } }
L_2A38: { ++fl.t; const v4u uv = vmaddn(nacc, n8, vsplat(n15[0])); { std::uint16_t v; std::memcpy(&v, qword(mem, r.vi[13] + 4294967295u) + 12, 2); set_vi(r, 2, v); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2A40: { ++fl.t; const v4u uv = vmaddn(nacc, n9, vsplat(n15[1])); { std::uint8_t *q = qword(mem, r.vi[6]); std::memcpy(q + 0, &r.vf[22].w[0], 4); std::memcpy(q + 4, &r.vf[22].w[1], 4); std::memcpy(q + 8, &r.vf[22].w[2], 4); set_vi(r, 6, r.vi[6] + 1u); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2A48: { ++fl.t; const v4u uv = vmaddn(nacc, n10, vsplat(n15[2])); pend = r.vi[0] != r.vi[1]; vstore(r.vf[16], uv); if (live_flags) { flags(r, r.vf[16], 15u); fl.set_mac(r.mac, r.status); } n16 = uv; }
L_2A50: { ++fl.t; const v4u uv = vftoi(vload(r.vf[17]), 4); vstore(r.vf[18], uv); }
    if (pend) { pend = false; goto L_2AD8; }
L_2A58: { ++fl.t; const v4u uv = vmuln(n4, vsplat(0x3F800000u)); { const std::uint8_t *q = qword(mem, r.vi[13] + 1u); std::memcpy(&r.vf[14], q, 16); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } n14 = vfix(vload(r.vf[14])); nacc = uv; }
L_2A60: { ++fl.t; const v4u uv = vmaddn(nacc, n1, vsplat(n15[0])); { const std::uint8_t *q = qword(mem, r.vi[13] + 0u); std::memcpy(&r.vf[13].w[0], q + 0, 4); std::memcpy(&r.vf[13].w[1], q + 4, 4); std::memcpy(&r.vf[13].w[3], q + 12, 4); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } n13 = vfix(vload(r.vf[13])); nacc = uv; }
L_2A68: { ++fl.t; const v4u uv = vftoi(vload(r.vf[20]), 0); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[16].w[3]); fl.end_q(r, qb, vu::continuation_q_delay(10856u, 7u)); } vstore(r.vf[20], uv); }
L_2A70: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n15[1])); set_vi(r, 1, r.vf[18].w[3]); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2A78: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n15[2])); set_vi(r, 1, r.vi[1] | r.vi[2]); vstore(r.vf[23], uv); if (live_flags) { flags(r, r.vf[23], 15u); fl.set_mac(r.mac, r.status); } n23 = uv; }
L_2A80: { ++fl.t; const v4u uv = vmuln(n11, vsplat(0x3F800000u)); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(r.vi[1]))); r.vf[18].w[3] = v; } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2A88: { ++fl.t; const v4u uv = vmin(vload(r.vf[14]), vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, r.vi[6]); std::memcpy(q, &r.vf[20], 16); set_vi(r, 6, r.vi[6] + 1u); } vstore(r.vf[14], uv); n14 = vfix(vload(r.vf[14])); }
L_2A90: { ++fl.t; const v4u uv = vmin(vload(r.vf[13]), vsplat(r.i)); { const std::uint8_t *q = qword(mem, r.vi[13] + 5u); std::memcpy(&r.vf[15].w[0], q + 0, 4); std::memcpy(&r.vf[15].w[1], q + 4, 4); std::memcpy(&r.vf[15].w[2], q + 8, 4); } vstore(r.vf[17], vsel(vload(r.vf[17]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n15 = vfix(vload(r.vf[15])); }
L_2A98: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[23], r.vf[23].w[3]); pend = r.vi[12] != r.vi[6]; r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2AA0: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 10912u, 29388188u); const v4u uv = vmuln(n13, vfix(vsplat(r.q))); { std::uint8_t *q = qword(mem, r.vi[6]); std::memcpy(q, &r.vf[18], 16); set_vi(r, 6, r.vi[6] + 1u); } vstore(r.vf[22], vsel(vload(r.vf[22]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[22], 14u); fl.set_mac(r.mac, r.status); } }
    if (pend) { pend = false; goto L_2A20; }
L_2AA8: { ++fl.t; set_vi(r, 1, vu::itop()); }
L_2AB0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, r.vi[1] + 0u) + 0, 2); set_vi(r, 11, v); } }
L_2AB8: { ++fl.t; set_vi(r, 11, r.vi[11] + r.vi[1]); }
L_2AC0: { ++fl.t; vu::kick(1, r.vi[11]); }
L_2AC8: { ++fl.t; ending = true; }
L_2AD0: { ++fl.t; }
    if (ending) { r.tpc = 10968u; fl.flush_q(r); return vu::kContinuationEnd; }
L_2AD8: { ++fl.t; const v4u uv = vaddn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); pend = r.vi[0] != r.vi[2]; vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[27], 2u); fl.set_mac(r.mac, r.status); } n27 = vsel(n27, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_2AE0: { ++fl.t; const v4u uv = vaddn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); { const std::uint8_t *q = qword(mem, r.vi[13] + 4294967289u); std::memcpy(&r.vf[25].w[0], q + 0, 4); std::memcpy(&r.vf[25].w[1], q + 4, 4); std::memcpy(&r.vf[25].w[2], q + 8, 4); } vstore(r.vf[28], vsel(vload(r.vf[28]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[28], 2u); fl.set_mac(r.mac, r.status); } n25 = vfix(vload(r.vf[25])); n28 = vsel(n28, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_2A58; }
L_2AE8: { ++fl.t; const v4u uv = vaddn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(r, 1, ((fl.clip() | 16710639u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); vstore(r.vf[30], vsel(vload(r.vf[30]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[30], 2u); fl.set_mac(r.mac, r.status); } n30 = vsel(n30, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_2AF0: { ++fl.t; pend = r.vi[0] != r.vi[1]; }
L_2AF8: { ++fl.t; const v4u uv = vmuln(n4, vsplat(0x3F800000u)); { const std::uint8_t *q = qword(mem, r.vi[13] + 4294967292u); std::memcpy(&r.vf[19].w[0], q + 0, 4); std::memcpy(&r.vf[19].w[1], q + 4, 4); std::memcpy(&r.vf[19].w[2], q + 8, 4); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } n19 = vfix(vload(r.vf[19])); nacc = uv; }
    if (pend) { pend = false; goto L_2F78; }
L_2B00: { ++fl.t; const v4u uv = vmaddn(nacc, n1, vsplat(n25[0])); set_vi(r, 1, ((fl.clip() | 16644063u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2B08: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n25[1])); pend = r.vi[0] != r.vi[1]; vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2B10: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n25[2])); { const std::uint8_t *q = qword(mem, r.vi[13] + 4294967288u); std::memcpy(&r.vf[26], q, 16); } vstore(r.vf[25], uv); if (live_flags) { flags(r, r.vf[25], 15u); fl.set_mac(r.mac, r.status); } n26 = vfix(vload(r.vf[26])); n25 = uv; }
    if (pend) { pend = false; goto L_2F78; }
L_2B18: { ++fl.t; const v4u uv = vmuln(n4, vsplat(0x3F800000u)); { const std::uint8_t *q = qword(mem, r.vi[13] + 4294967291u); std::memcpy(&r.vf[29], q, 16); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } n29 = vfix(vload(r.vf[29])); nacc = uv; }
L_2B20: { ++fl.t; const v4u uv = vmaddn(nacc, n1, vsplat(n19[0])); { const std::uint8_t *q = qword(mem, r.vi[13] + 4294967287u); std::memcpy(&r.vf[27].w[0], q + 0, 4); std::memcpy(&r.vf[27].w[1], q + 4, 4); std::memcpy(&r.vf[27].w[3], q + 12, 4); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } n27 = vfix(vload(r.vf[27])); nacc = uv; }
L_2B28: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n19[1])); { const std::uint8_t *q = qword(mem, r.vi[13] + 4294967290u); std::memcpy(&r.vf[28].w[0], q + 0, 4); std::memcpy(&r.vf[28].w[1], q + 4, 4); std::memcpy(&r.vf[28].w[3], q + 12, 4); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } n28 = vfix(vload(r.vf[28])); nacc = uv; }
L_2B30: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n19[2])); { const std::uint8_t *q = qword(mem, r.vi[13] + 4294967293u); std::memcpy(&r.vf[30].w[0], q + 0, 4); std::memcpy(&r.vf[30].w[1], q + 4, 4); std::memcpy(&r.vf[30].w[3], q + 12, 4); } vstore(r.vf[19], uv); if (live_flags) { flags(r, r.vf[19], 15u); fl.set_mac(r.mac, r.status); } n30 = vfix(vload(r.vf[30])); n19 = uv; }
L_2B38: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[25], r.vf[25].w[3]); set_vi(r, 11, fl.clip() & 0xFFFu); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2B40: { ++fl.t; const v4u uv = vmuln(n25, n24); { std::uint8_t *q = qword(mem, r.vi[4] + 3u); std::memcpy(q, &r.vf[26], 16); } vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[12], 14u); fl.set_mac(r.mac, r.status); } }
L_2B48: { ++fl.t; const v4u uv = vmuln(n23, n24); { std::uint8_t *q = qword(mem, r.vi[4] + 7u); std::memcpy(q, &r.vf[29], 16); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[6], 14u); fl.set_mac(r.mac, r.status); } n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2B50: { ++fl.t; const v4u uv = vmuln(n19, n24); { std::uint8_t *q = qword(mem, r.vi[4] + 4u); std::memcpy(q, &r.vf[25], 16); } vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[7], 14u); fl.set_mac(r.mac, r.status); } }
L_2B58: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[19], r.vf[19].w[3]); set_vi(r, 1, fl.clip() & 0xFFFu); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2B60: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[12], r.vf[25].w[3]); set_vi(r, 11, r.vi[11] | r.vi[1]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2B68: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[6], r.vf[23].w[3]); { const std::uint8_t *q = qword(mem, r.vi[13] + 4294967294u); std::memcpy(&r.vf[25], q, 16); } r.clip = uclip; fl.set_clip(uclip, fl.t); n25 = vfix(vload(r.vf[25])); }
L_2B70: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[7], r.vf[19].w[3]); { std::uint8_t *q = qword(mem, r.vi[4] + 12u); std::memcpy(q, &r.vf[23], 16); } r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2B78: { ++fl.t; set_vi(r, 1, fl.clip() & 0xFFFu); }
L_2B80: { ++fl.t; set_vi(r, 11, r.vi[11] | r.vi[1]); }
L_2B88: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[4] + 11u); std::memcpy(q, &r.vf[25], 16); } }
L_2B90: { ++fl.t; set_vi(r, 1, ((fl.clip() | 16773054u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
L_2B98: { ++fl.t; pend = r.vi[0] != r.vi[1]; }
L_2BA0: { ++fl.t; set_vi(r, 1, ((fl.clip() | 16768893u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
    if (pend) { pend = false; goto L_2F78; }
L_2BA8: { ++fl.t; pend = r.vi[0] != r.vi[1]; }
L_2BB0: { ++fl.t; set_vi(r, 1, ((fl.clip() | 16760571u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
    if (pend) { pend = false; goto L_2F78; }
L_2BB8: { ++fl.t; pend = r.vi[0] != r.vi[1]; }
L_2BC0: { ++fl.t; set_vi(r, 1, ((fl.clip() | 16743927u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
    if (pend) { pend = false; goto L_2F78; }
L_2BC8: { ++fl.t; pend = r.vi[0] != r.vi[1]; }
L_2BD0: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[4] + 8u); std::memcpy(q, &r.vf[19], 16); } }
    if (pend) { pend = false; goto L_2F78; }
L_2BD8: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[4] + 2u); std::memcpy(q, &r.vf[27], 16); } }
L_2BE0: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[4] + 6u); std::memcpy(q, &r.vf[28], 16); } }
L_2BE8: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[4] + 10u); std::memcpy(q, &r.vf[30], 16); } }
L_2BF0: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[4] + 1u); const std::uint32_t v = r.vi[0]; std::memcpy(q + 0, &v, 4); } }
L_2BF8: { ++fl.t; set_vi(r, 1, r.vi[0] + 3u); }
L_2C00: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[4] + 5u); const std::uint32_t v = r.vi[1]; std::memcpy(q + 0, &v, 4); } }
L_2C08: { ++fl.t; set_vi(r, 1, r.vi[0] + 6u); }
L_2C10: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[4] + 9u); const std::uint32_t v = r.vi[1]; std::memcpy(q + 0, &v, 4); } }
L_2C18: { ++fl.t; set_vi(r, 3, r.vi[0] + 12u); }
L_2C20: { ++fl.t; set_vi(r, 9, r.vi[0] + 74u); }
L_2C28: { ++fl.t; vu::kick(1, r.vi[9]); }
L_2C30: { ++fl.t; set_vi(r, 9, r.vi[0] + 16u); }
L_2C38: { ++fl.t; set_vi(r, 9, r.vi[9] & r.vi[11]); }
L_2C40: { ++fl.t; set_vi(r, 7, r.vi[0] + 1612u); }
L_2C48: { ++fl.t; pend = r.vi[0] == r.vi[9]; }
L_2C50: { ++fl.t; }
    if (pend) { pend = false; goto L_2CE8; }
L_2C58: { ++fl.t; set_vi(r, 8, 1421u); pend = true; }
L_2C60: { ++fl.t; }
    if (pend) { pend = false; goto L_2F98; }
L_2C68: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[4] + 4u); std::memcpy(&r.vf[25], q, 16); } n25 = vfix(vload(r.vf[25])); }
L_2C70: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[4] + 8u); std::memcpy(&r.vf[26], q, 16); } n26 = vfix(vload(r.vf[26])); }
L_2C78: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[4] + 12u); std::memcpy(&r.vf[27], q, 16); } n27 = vfix(vload(r.vf[27])); }
L_2C80: { ++fl.t; set_vi(r, 14, r.vi[0] + 12u); }
L_2C88: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[25], r.vf[25].w[3]); { const std::uint8_t *q = qword(mem, r.vi[4] + 16u); std::memcpy(&r.vf[28], q, 16); } r.clip = uclip; fl.set_clip(uclip, fl.t); n28 = vfix(vload(r.vf[28])); }
L_2C90: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[26], r.vf[26].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2C98: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[27], r.vf[27].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2CA0: { ++fl.t; }
L_2CA8: { ++fl.t; set_vi(r, 11, fl.clip() & 0xFFFu); }
L_2CB0: { ++fl.t; set_vi(r, 1, fl.clip() & 0xFFFu); }
L_2CB8: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[28], r.vf[28].w[3]); set_vi(r, 11, r.vi[11] | r.vi[1]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2CC0: { ++fl.t; set_vi(r, 1, fl.clip() & 0xFFFu); }
L_2CC8: { ++fl.t; pend = r.vi[14] == r.vi[3]; }
L_2CD0: { ++fl.t; set_vi(r, 11, r.vi[11] | r.vi[1]); }
    if (pend) { pend = false; goto L_2CE8; }
L_2CD8: { ++fl.t; set_vi(r, 1, fl.clip() & 0xFFFu); }
L_2CE0: { ++fl.t; set_vi(r, 11, r.vi[11] | r.vi[1]); }
L_2CE8: { ++fl.t; set_vi(r, 9, r.vi[0] + 1u); }
L_2CF0: { ++fl.t; set_vi(r, 9, r.vi[9] & r.vi[11]); }
L_2CF8: { ++fl.t; set_vi(r, 7, r.vi[0] + 1588u); }
L_2D00: { ++fl.t; pend = r.vi[0] == r.vi[9]; }
L_2D08: { ++fl.t; }
    if (pend) { pend = false; goto L_2D20; }
L_2D10: { ++fl.t; set_vi(r, 8, 1444u); pend = true; }
L_2D18: { ++fl.t; }
    if (pend) { pend = false; goto L_2F98; }
L_2D20: { ++fl.t; set_vi(r, 9, r.vi[0] + 2u); }
L_2D28: { ++fl.t; set_vi(r, 9, r.vi[9] & r.vi[11]); }
L_2D30: { ++fl.t; set_vi(r, 7, r.vi[0] + 1594u); }
L_2D38: { ++fl.t; pend = r.vi[0] == r.vi[9]; }
L_2D40: { ++fl.t; }
    if (pend) { pend = false; goto L_2D58; }
L_2D48: { ++fl.t; set_vi(r, 8, 1451u); pend = true; }
L_2D50: { ++fl.t; }
    if (pend) { pend = false; goto L_2F98; }
L_2D58: { ++fl.t; set_vi(r, 9, r.vi[0] + 4u); }
L_2D60: { ++fl.t; set_vi(r, 9, r.vi[9] & r.vi[11]); }
L_2D68: { ++fl.t; set_vi(r, 7, r.vi[0] + 1600u); }
L_2D70: { ++fl.t; pend = r.vi[0] == r.vi[9]; }
L_2D78: { ++fl.t; }
    if (pend) { pend = false; goto L_2D90; }
L_2D80: { ++fl.t; set_vi(r, 8, 1458u); pend = true; }
L_2D88: { ++fl.t; }
    if (pend) { pend = false; goto L_2F98; }
L_2D90: { ++fl.t; set_vi(r, 9, r.vi[0] + 8u); }
L_2D98: { ++fl.t; set_vi(r, 9, r.vi[9] & r.vi[11]); }
L_2DA0: { ++fl.t; set_vi(r, 7, r.vi[0] + 1606u); }
L_2DA8: { ++fl.t; pend = r.vi[0] == r.vi[9]; }
L_2DB0: { ++fl.t; }
    if (pend) { pend = false; goto L_2DC8; }
L_2DB8: { ++fl.t; set_vi(r, 8, 1465u); pend = true; }
L_2DC0: { ++fl.t; }
    if (pend) { pend = false; goto L_2F98; }
L_2DC8: { ++fl.t; set_vi(r, 9, r.vi[0] + 32u); }
L_2DD0: { ++fl.t; set_vi(r, 9, r.vi[9] & r.vi[11]); }
L_2DD8: { ++fl.t; set_vi(r, 7, r.vi[0] + 1618u); }
L_2DE0: { ++fl.t; pend = r.vi[0] == r.vi[9]; }
L_2DE8: { ++fl.t; }
    if (pend) { pend = false; goto L_2E00; }
L_2DF0: { ++fl.t; set_vi(r, 8, 1472u); pend = true; }
L_2DF8: { ++fl.t; }
    if (pend) { pend = false; goto L_2F98; }
L_2E00: { ++fl.t; set_vi(r, 3, r.vi[3] + r.vi[4]); }
L_2E08: { ++fl.t; set_vi(r, 14, r.vi[4] + r.vi[0]); }
L_2E10: { ++fl.t; set_vi(r, 15, r.vi[5] + 1u); }
L_2E18: { ++fl.t; set_vi(r, 10, r.vi[0] + 16384u); }
L_2E20: { ++fl.t; set_vi(r, 10, r.vi[10] + 16384u); }
L_2E28: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, r.vi[14] + 1u) + 0, 2); set_vi(r, 1, v); } }
L_2E30: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[14] + 4u); std::memcpy(&r.vf[25], q, 16); } n25 = vfix(vload(r.vf[25])); }
L_2E38: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[14] + 2u); std::memcpy(&r.vf[26], q, 16); } n26 = vfix(vload(r.vf[26])); }
L_2E40: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[14] + 3u); std::memcpy(&r.vf[27], q, 16); } n27 = vfix(vload(r.vf[27])); }
L_2E48: { ++fl.t; pend = static_cast<std::int16_t>(r.vi[1]) < 0; }
L_2E50: { ++fl.t; set_vi(r, 1, r.vi[13] + r.vi[1]); }
    if (pend) { pend = false; goto L_2EA0; }
L_2E58: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[1] + 4294967289u); std::memcpy(&r.vf[25].w[0], q + 0, 4); std::memcpy(&r.vf[25].w[1], q + 4, 4); std::memcpy(&r.vf[25].w[2], q + 8, 4); } n25 = vfix(vload(r.vf[25])); }
L_2E60: { ++fl.t; const v4u uv = vmin(vload(r.vf[27]), vsplat(0x3F800000u)); vstore(r.vf[27], uv); n27 = vfix(vload(r.vf[27])); }
L_2E68: { ++fl.t; const v4u uv = vmuln(n11, vsplat(0x3F800000u)); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2E70: { ++fl.t; const v4u uv = vmaddn(nacc, n8, vsplat(n25[0])); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2E78: { ++fl.t; const v4u uv = vmaddn(nacc, n9, vsplat(n25[1])); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2E80: { ++fl.t; const v4u uv = vmaddn(nacc, n10, vsplat(n25[2])); vstore(r.vf[25], uv); if (live_flags) { flags(r, r.vf[25], 15u); fl.set_mac(r.mac, r.status); } n25 = uv; }
L_2E88: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[25].w[3]); fl.end_q(r, qb, vu::continuation_q_delay(11912u, 7u)); } }
L_2E90: { ++fl.t; pend = true; }
L_2E98: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 11928u, 29412956u); const v4u uv = vmuln(n25, vfix(vsplat(r.q))); fl.flush_q(r); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[25], 14u); fl.set_mac(r.mac, r.status); } n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_2ED8; }
L_2EA0: { ++fl.t; const v4u uv = vsubn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(n25[3])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[25].w[3]); fl.end_q(r, qb, vu::continuation_q_delay(11936u, 7u)); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); if (live_flags) { flags(r, r.vf[6], 8u); fl.set_mac(r.mac, r.status); } n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2EA8: { ++fl.t; const v4u uv = vmin(vload(r.vf[25]), vsplat(r.vf[25].w[3])); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); n25 = vfix(vload(r.vf[25])); }
L_2EB0: { ++fl.t; const v4u uv = vmin(vload(r.vf[27]), vsplat(0x3F800000u)); vstore(r.vf[27], uv); n27 = vfix(vload(r.vf[27])); }
L_2EB8: { ++fl.t; const v4u uv = vmax(vload(r.vf[25]), vsplat(r.vf[6].w[0])); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); n25 = vfix(vload(r.vf[25])); }
L_2EC0: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 11968u, 29412956u); const v4u uv = vmuln(n25, vfix(vsplat(r.q))); fl.flush_q(r); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[25], 14u); fl.set_mac(r.mac, r.status); } n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2EC8: { ++fl.t; const v4u uv = vmuln(n25, n5); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[25], 14u); fl.set_mac(r.mac, r.status); } n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2ED0: { ++fl.t; const v4u uv = vaddn(n25, n31); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[25], 14u); fl.set_mac(r.mac, r.status); } n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2ED8: { ++fl.t; const v4u uv = vmin(vload(r.vf[26]), vsplat(r.i)); set_vi(r, 10, r.vi[10] + 1u); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n26 = vfix(vload(r.vf[26])); }
L_2EE0: { ++fl.t; const v4u uv = vmuln(n27, n21); set_vi(r, 14, r.vi[14] + 4u); vstore(r.vf[27], uv); if (live_flags) { flags(r, r.vf[27], 15u); fl.set_mac(r.mac, r.status); } n27 = uv; }
L_2EE8: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 12008u, 29415068u); const v4u uv = vmuln(n26, vfix(vsplat(r.q))); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[26], 14u); fl.set_mac(r.mac, r.status); } n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2EF0: { ++fl.t; }
L_2EF8: { ++fl.t; }
L_2F00: { ++fl.t; const v4u uv = vftoi(vload(r.vf[27]), 0); vstore(r.vf[27], uv); n27 = vfix(vload(r.vf[27])); }
L_2F08: { ++fl.t; const v4u uv = vmax(vload(r.vf[26]), vsplat(0u)); { std::uint8_t *q = qword(mem, r.vi[15]); std::memcpy(q + 0, &r.vf[26].w[0], 4); std::memcpy(q + 4, &r.vf[26].w[1], 4); std::memcpy(q + 8, &r.vf[26].w[2], 4); set_vi(r, 15, r.vi[15] + 1u); } vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n25 = vfix(vload(r.vf[25])); }
L_2F10: { ++fl.t; }
L_2F18: { ++fl.t; }
L_2F20: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15]); std::memcpy(q, &r.vf[27], 16); set_vi(r, 15, r.vi[15] + 1u); } }
L_2F28: { ++fl.t; const v4u uv = vftoi(vload(r.vf[25]), 4); vstore(r.vf[25], uv); n25 = vfix(vload(r.vf[25])); }
L_2F30: { ++fl.t; }
L_2F38: { ++fl.t; }
L_2F40: { ++fl.t; pend = r.vi[14] != r.vi[3]; }
L_2F48: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15]); std::memcpy(q, &r.vf[25], 16); set_vi(r, 15, r.vi[15] + 1u); } }
    if (pend) { pend = false; goto L_2E28; }
L_2F50: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[5] + 0u); const std::uint32_t v = r.vi[10]; std::memcpy(q + 0, &v, 4); } }
L_2F58: { ++fl.t; }
L_2F60: { ++fl.t; }
L_2F68: { ++fl.t; }
L_2F70: { ++fl.t; vu::kick(1, r.vi[5]); }
L_2F78: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[19], r.vf[19].w[3]); set_vi(r, 2, r.vi[0] + 16384u); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2F80: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[23], r.vf[23].w[3]); set_vi(r, 2, r.vi[2] + 16384u); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2F88: { ++fl.t; pend = true; }
L_2F90: { ++fl.t; }
    if (pend) { pend = false; goto L_2A58; }
L_2F98: { ++fl.t; set_vi(r, 3, r.vi[3] + r.vi[4]); }
L_2FA0: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[3] + 0u); std::memcpy(&r.vf[25], q, 16); } n25 = vfix(vload(r.vf[25])); }
L_2FA8: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[3] + 4294967295u); std::memcpy(&r.vf[26], q, 16); } n26 = vfix(vload(r.vf[26])); }
L_2FB0: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[3] + 4294967294u); std::memcpy(&r.vf[27], q, 16); } n27 = vfix(vload(r.vf[27])); }
L_2FB8: { ++fl.t; }
L_2FC0: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[25], r.vf[25].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2FC8: { ++fl.t; set_vi(r, 14, r.vi[4] + r.vi[0]); }
L_2FD0: { ++fl.t; set_vi(r, 15, r.vi[5] + r.vi[0]); }
L_2FD8: { ++fl.t; }
L_2FE0: { ++fl.t; set_vi(r, 10, fl.clip() & 0xFFFu); }
L_2FE8: { ++fl.t; set_vi(r, 10, r.vi[10] & r.vi[9]); }
L_2FF0: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[14] + 4u); std::memcpy(&r.vf[28], q, 16); } n28 = vfix(vload(r.vf[28])); }
L_2FF8: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[14] + 3u); std::memcpy(&r.vf[29], q, 16); } n29 = vfix(vload(r.vf[29])); }
L_3000: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[14] + 2u); std::memcpy(&r.vf[30], q, 16); } n30 = vfix(vload(r.vf[30])); }
L_3008: { ++fl.t; set_vi(r, 14, r.vi[14] + 4u); }
L_3010: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[28], r.vf[28].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_3018: { ++fl.t; }
L_3020: { ++fl.t; }
L_3028: { ++fl.t; }
L_3030: { ++fl.t; set_vi(r, 1, fl.clip() & 0xFFFu); }
L_3038: { ++fl.t; set_vi(r, 1, r.vi[1] & r.vi[9]); }
L_3040: { ++fl.t; }
L_3048: { ++fl.t; pend = r.vi[10] == r.vi[1]; }
L_3050: { ++fl.t; }
    if (pend) { pend = false; goto L_3110; }
L_3058: { ++fl.t; pend = r.vi[0] == r.vi[1]; }
L_3060: { ++fl.t; r.vf[12].w[0] = r.vf[28].w[0]; r.vf[12].w[1] = r.vf[28].w[1]; r.vf[12].w[2] = r.vf[28].w[2]; r.vf[12].w[3] = r.vf[28].w[3]; }
    if (pend) { pend = false; goto L_30B8; }
L_3068: { ++fl.t; r.vf[28].w[0] = r.vf[25].w[0]; r.vf[28].w[1] = r.vf[25].w[1]; r.vf[28].w[2] = r.vf[25].w[2]; r.vf[28].w[3] = r.vf[25].w[3]; n28 = vfix(vload(r.vf[28])); }
L_3070: { ++fl.t; r.vf[25].w[0] = r.vf[12].w[0]; r.vf[25].w[1] = r.vf[12].w[1]; r.vf[25].w[2] = r.vf[12].w[2]; r.vf[25].w[3] = r.vf[12].w[3]; n25 = vfix(vload(r.vf[25])); }
L_3078: { ++fl.t; jpc = (static_cast<std::uint32_t>(r.vi[7]) * 8u) & 16383u; set_vi(r, 10, 1553u); pendj = true; }
L_3080: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_3088: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 12424u, 31508988u); const v4u uv = vmuln(n25, vfix(vsplat(r.q))); set_vi(r, 10, r.vi[0] - 1u); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_3090: { ++fl.t; const v4u uv = vmaddn(nacc, n28, vsplat(n6[3])); { std::uint8_t *q = qword(mem, r.vi[15] + 1u); const std::uint32_t v = r.vi[10]; std::memcpy(q + 0, &v, 4); } vstore(r.vf[12], uv); if (live_flags) { flags(r, r.vf[12], 15u); fl.set_mac(r.mac, r.status); } }
L_3098: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 12440u, 31517180u); const v4u uv = vmuln(n29, vfix(vsplat(r.q))); r.vf[28].w[0] = r.vf[25].w[0]; r.vf[28].w[1] = r.vf[25].w[1]; r.vf[28].w[2] = r.vf[25].w[2]; r.vf[28].w[3] = r.vf[25].w[3]; vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } n28 = vfix(vload(r.vf[28])); nacc = uv; }
L_30A0: { ++fl.t; const v4u uv = vmaddn(nacc, n26, vsplat(n6[3])); set_vi(r, 15, r.vi[15] + 4u); vstore(r.vf[7], uv); if (live_flags) { flags(r, r.vf[7], 15u); fl.set_mac(r.mac, r.status); } }
L_30A8: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 12456u, 31519228u); const v4u uv = vmuln(n30, vfix(vsplat(r.q))); pend = true; vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_30B0: { ++fl.t; const v4u uv = vmaddn(nacc, n27, vsplat(n6[3])); vstore(r.vf[6], uv); if (live_flags) { flags(r, r.vf[6], 15u); fl.set_mac(r.mac, r.status); } n6 = uv; }
    if (pend) { pend = false; goto L_30F8; }
L_30B8: { ++fl.t; jpc = (static_cast<std::uint32_t>(r.vi[7]) * 8u) & 16383u; set_vi(r, 10, 1561u); pendj = true; }
L_30C0: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_30C8: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 12488u, 31508988u); const v4u uv = vmuln(n25, vfix(vsplat(r.q))); set_vi(r, 10, r.vi[0] - 1u); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_30D0: { ++fl.t; const v4u uv = vmaddn(nacc, n28, vsplat(n6[3])); { std::uint8_t *q = qword(mem, r.vi[15] + 1u); const std::uint32_t v = r.vi[10]; std::memcpy(q + 0, &v, 4); } vstore(r.vf[12], uv); if (live_flags) { flags(r, r.vf[12], 15u); fl.set_mac(r.mac, r.status); } }
L_30D8: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 12504u, 31511036u); const v4u uv = vmuln(n26, vfix(vsplat(r.q))); set_vi(r, 15, r.vi[15] + 4u); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_30E0: { ++fl.t; const v4u uv = vmaddn(nacc, n29, vsplat(n6[3])); vstore(r.vf[7], uv); if (live_flags) { flags(r, r.vf[7], 15u); fl.set_mac(r.mac, r.status); } }
L_30E8: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 12520u, 31513084u); const v4u uv = vmuln(n27, vfix(vsplat(r.q))); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_30F0: { ++fl.t; const v4u uv = vmaddn(nacc, n30, vsplat(n6[3])); vstore(r.vf[6], uv); if (live_flags) { flags(r, r.vf[6], 15u); fl.set_mac(r.mac, r.status); } n6 = uv; }
L_30F8: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15] + 0u); std::memcpy(q, &r.vf[12], 16); } }
L_3100: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15] + 4294967295u); std::memcpy(q, &r.vf[7], 16); } }
L_3108: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15] + 4294967294u); std::memcpy(q, &r.vf[6], 16); } }
L_3110: { ++fl.t; pend = r.vi[0] != r.vi[1]; }
L_3118: { ++fl.t; r.vf[25].w[0] = r.vf[28].w[0]; r.vf[25].w[1] = r.vf[28].w[1]; r.vf[25].w[2] = r.vf[28].w[2]; r.vf[25].w[3] = r.vf[28].w[3]; n25 = vfix(vload(r.vf[25])); }
    if (pend) { pend = false; goto L_3150; }
L_3120: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, r.vi[14] + 4294967293u) + 0, 2); set_vi(r, 10, v); } }
L_3128: { ++fl.t; set_vi(r, 15, r.vi[15] + 4u); }
L_3130: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15] + 0u); std::memcpy(q, &r.vf[28], 16); } }
L_3138: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15] + 4294967295u); std::memcpy(q, &r.vf[29], 16); } }
L_3140: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15] + 4294967294u); std::memcpy(q, &r.vf[30], 16); } }
L_3148: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15] + 4294967293u); const std::uint32_t v = r.vi[10]; std::memcpy(q + 0, &v, 4); } }
L_3150: { ++fl.t; r.vf[26].w[0] = r.vf[29].w[0]; r.vf[26].w[1] = r.vf[29].w[1]; r.vf[26].w[2] = r.vf[29].w[2]; r.vf[26].w[3] = r.vf[29].w[3]; n26 = vfix(vload(r.vf[26])); }
L_3158: { ++fl.t; r.vf[27].w[0] = r.vf[30].w[0]; r.vf[27].w[1] = r.vf[30].w[1]; r.vf[27].w[2] = r.vf[30].w[2]; r.vf[27].w[3] = r.vf[30].w[3]; n27 = vfix(vload(r.vf[27])); }
L_3160: { ++fl.t; pend = r.vi[3] != r.vi[14]; }
L_3168: { ++fl.t; set_vi(r, 10, r.vi[1] + r.vi[0]); }
    if (pend) { pend = false; goto L_2FF0; }
L_3170: { ++fl.t; pend = r.vi[5] == r.vi[15]; }
L_3178: { ++fl.t; set_vi(r, 3, r.vi[15] - r.vi[5]); }
    if (pend) { pend = false; goto L_2F78; }
L_3180: { ++fl.t; set_vi(r, 1, r.vi[5] + r.vi[0]); }
L_3188: { ++fl.t; set_vi(r, 5, r.vi[4] + r.vi[0]); }
L_3190: { ++fl.t; jpc = (static_cast<std::uint32_t>(r.vi[8]) * 8u) & 16383u; pendj = true; }
L_3198: { ++fl.t; set_vi(r, 4, r.vi[1] + r.vi[0]); }
    if (pendj) { pendj = false; goto dispatch; }
    return 12704u;
dispatch:
    return jpc;
}

std::uint32_t vu1_0A07B95E983B1670(Vu0Regs &PS2_VU_REGS_RESTRICT r, std::uint8_t *mem, FlagPipe &fl) {
    const bool live_flags = vu::continuation_flags_used();
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    v4u n1 = vfix(vload(r.vf[1]));
    v4u n2 = vfix(vload(r.vf[2]));
    v4u n3 = vfix(vload(r.vf[3]));
    v4u n4 = vfix(vload(r.vf[4]));
    v4u n5 = vfix(vload(r.vf[5]));
    v4u n6 = vfix(vload(r.vf[6]));
    v4u n8 = vfix(vload(r.vf[8]));
    v4u n10 = vfix(vload(r.vf[10]));
    v4u n13 = vfix(vload(r.vf[13]));
    v4u n14 = vfix(vload(r.vf[14]));
    v4u n20 = vfix(vload(r.vf[20]));
    v4u n25 = vfix(vload(r.vf[25]));
    v4u n31 = vfix(vload(r.vf[31]));
    v4u nacc = vfix(vload(r.acc));
    goto L_2130;
L_2130: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, r.vi[4] + 4294967295u) + 4, 2); set_vi(r, 3, v); } }
L_2138: { ++fl.t; const v4u uv = vsubn(v4u{0u, 0u, 0u, 0x3F800000u}, v4u{0u, 0u, 0u, 0x3F800000u}); { const std::uint8_t *q = qword(mem, r.vi[5]); std::memcpy(&r.vf[6].w[0], q + 0, 4); std::memcpy(&r.vf[6].w[1], q + 4, 4); std::memcpy(&r.vf[6].w[3], q + 12, 4); set_vi(r, 5, r.vi[5] + 1u); } vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); if (live_flags) { flags(r, r.vf[8], 3u); fl.set_mac(r.mac, r.status); } n6 = vfix(vload(r.vf[6])); n8 = vsel(n8, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2140: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[5]); std::memcpy(&r.vf[8].w[0], q + 0, 4); std::memcpy(&r.vf[8].w[1], q + 4, 4); set_vi(r, 5, r.vi[5] + 1u); } n8 = vfix(vload(r.vf[8])); }
L_2148: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[5]); std::memcpy(&r.vf[1], q, 16); set_vi(r, 5, r.vi[5] + 1u); } n1 = vfix(vload(r.vf[1])); }
L_2150: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[5]); std::memcpy(&r.vf[2], q, 16); set_vi(r, 5, r.vi[5] + 1u); } n2 = vfix(vload(r.vf[2])); }
L_2158: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[5]); std::memcpy(&r.vf[3], q, 16); set_vi(r, 5, r.vi[5] + 1u); } n3 = vfix(vload(r.vf[3])); }
L_2160: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[5]); std::memcpy(&r.vf[4], q, 16); set_vi(r, 5, r.vi[5] + 1u); } n4 = vfix(vload(r.vf[4])); }
L_2168: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, r.vi[4] + 4294967295u) + 0, 2); set_vi(r, 11, v); } }
L_2170: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[5]); std::memcpy(&r.vf[5].w[0], q + 0, 4); std::memcpy(&r.vf[5].w[1], q + 4, 4); std::memcpy(&r.vf[5].w[2], q + 8, 4); set_vi(r, 5, r.vi[5] + 1u); } n5 = vfix(vload(r.vf[5])); }
L_2178: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[5]); std::memcpy(&r.vf[31].w[0], q + 0, 4); std::memcpy(&r.vf[31].w[1], q + 4, 4); std::memcpy(&r.vf[31].w[2], q + 8, 4); set_vi(r, 5, r.vi[5] + 1u); } n31 = vfix(vload(r.vf[31])); }
L_2180: { ++fl.t; set_vi(r, 11, r.vi[11] + r.vi[10]); }
L_2188: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[4] + 0u); std::memcpy(&r.vf[7], q, 16); } }
L_2190: { ++fl.t; set_vi(r, 13, r.vi[4] + r.vi[3]); }
L_2198: { ++fl.t; set_vi(r, 6, r.vi[11] + 1u); }
L_21A0: { ++fl.t; set_vi(r, 12, r.vi[0] + r.vi[0]); }
L_21A8: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[11] + 0u); std::memcpy(q, &r.vf[7], 16); } }
L_21B0: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[13] + 0u); std::memcpy(&r.vf[10].w[0], q + 0, 4); std::memcpy(&r.vf[10].w[1], q + 4, 4); std::memcpy(&r.vf[10].w[2], q + 8, 4); } n10 = vfix(vload(r.vf[10])); }
L_21B8: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[7]); std::memcpy(&r.vf[25].w[0], q + 0, 4); set_vi(r, 7, r.vi[7] + 1u); } n25 = vfix(vload(r.vf[25])); }
L_21C0: { ++fl.t; const v4u uv = vsubn(v4u{0u, 0u, 0u, 0x3F800000u}, v4u{0u, 0u, 0u, 0x3F800000u}); vstore(r.vf[16], vsel(vload(r.vf[16]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); if (live_flags) { flags(r, r.vf[16], 1u); fl.set_mac(r.mac, r.status); } }
L_21C8: { ++fl.t; const v4u uv = vmuln(n4, vsplat(0x3F800000u)); set_vi(r, 2, r.vi[2] - 1u); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_21D0: { ++fl.t; const v4u uv = vmaddn(nacc, n1, vsplat(n10[0])); { const std::uint8_t *q = qword(mem, r.vi[13] + 4294967295u); std::memcpy(&r.vf[20], q, 16); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } n20 = vfix(vload(r.vf[20])); nacc = uv; }
L_21D8: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n10[1])); r.clip = 0u; fl.set_clip(r.clip, fl.t - 4u); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_21E0: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n10[2])); set_vi(r, 10, r.vi[0] + 16384u); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_21E8: { ++fl.t; const v4u uv = vmaddn(nacc, n8, vsplat(n25[0])); set_vi(r, 10, r.vi[10] + 16384u); vstore(r.vf[13], uv); if (live_flags) { flags(r, r.vf[13], 15u); fl.set_mac(r.mac, r.status); } n13 = uv; }
L_21F0: { ++fl.t; const v4u uv = vmsubn(nacc, n8, vsplat(n25[0])); vstore(r.vf[14], uv); if (live_flags) { flags(r, r.vf[14], 15u); fl.set_mac(r.mac, r.status); } n14 = uv; }
L_21F8: { ++fl.t; const v4u uv = vmin(vload(r.vf[20]), vsplat(0x3F800000u)); vstore(r.vf[20], uv); n20 = vfix(vload(r.vf[20])); }
L_2200: { ++fl.t; }
L_2208: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[13], r.vf[13].w[3]); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[13].w[3]); fl.end_q(r, qb, vu::continuation_q_delay(8712u, 7u)); } r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2210: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[14], r.vf[14].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2218: { ++fl.t; const v4u uv = vmuln(n20, vsplat(n6[3])); vstore(r.vf[20], uv); if (live_flags) { flags(r, r.vf[20], 15u); fl.set_mac(r.mac, r.status); } n20 = uv; }
L_2220: { ++fl.t; }
L_2228: { ++fl.t; set_vi(r, 4, fl.clip() & 0xFFFu); }
L_2230: { ++fl.t; set_vi(r, 1, (fl.clip() & 4095u) ? 1u : 0u); }
L_2238: { ++fl.t; const v4u uv = vftoi(vload(r.vf[20]), 0); pend = r.vi[0] == r.vi[1]; vstore(r.vf[20], uv); n20 = vfix(vload(r.vf[20])); }
L_2240: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 8768u, 29387612u); const v4u uv = vmuln(n13, vfix(vsplat(r.q))); set_vi(r, 1, fl.clip() & 0xFFFu); vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[13], 14u); fl.set_mac(r.mac, r.status); } n13 = vsel(n13, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_2260; }
L_2248: { ++fl.t; set_vi(r, 1, r.vi[1] & r.vi[4]); }
L_2250: { ++fl.t; }
L_2258: { ++fl.t; pend = r.vi[0] != r.vi[1]; }
L_2260: { ++fl.t; const v4u uv = vmuln(n13, n5); vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[13], 14u); fl.set_mac(r.mac, r.status); } n13 = vsel(n13, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_22D8; }
L_2268: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 8808u, 29389724u); const v4u uv = vmuln(n14, vfix(vsplat(r.q))); vstore(r.vf[14], vsel(vload(r.vf[14]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[14], 14u); fl.set_mac(r.mac, r.status); } n14 = vsel(n14, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2270: { ++fl.t; const v4u uv = vmuln(n14, n5); vstore(r.vf[14], vsel(vload(r.vf[14]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[14], 14u); fl.set_mac(r.mac, r.status); } n14 = vsel(n14, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2278: { ++fl.t; r.vf[13].w[3] = r.vf[16].w[3]; n13 = vfix(vload(r.vf[13])); }
L_2280: { ++fl.t; const v4u uv = vaddn(n13, n31); r.vf[14].w[3] = r.vf[16].w[3]; vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[13], 14u); fl.set_mac(r.mac, r.status); } n14 = vfix(vload(r.vf[14])); n13 = vsel(n13, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2288: { ++fl.t; set_vi(r, 12, r.vi[12] + 1u); }
L_2290: { ++fl.t; const v4u uv = vaddn(n14, n31); vstore(r.vf[14], vsel(vload(r.vf[14]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[14], 14u); fl.set_mac(r.mac, r.status); } n14 = vsel(n14, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2298: { ++fl.t; }
L_22A0: { ++fl.t; const v4u uv = vftoi(vload(r.vf[13]), 4); vstore(r.vf[13], uv); n13 = vfix(vload(r.vf[13])); }
L_22A8: { ++fl.t; }
L_22B0: { ++fl.t; const v4u uv = vftoi(vload(r.vf[14]), 4); { std::uint8_t *q = qword(mem, r.vi[6] + 0u); std::memcpy(q + 0, &r.vf[6].w[0], 4); std::memcpy(q + 4, &r.vf[6].w[1], 4); } vstore(r.vf[14], uv); n14 = vfix(vload(r.vf[14])); }
L_22B8: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[6] + 2u); std::memcpy(q + 0, &r.vf[0].w[0], 4); std::memcpy(q + 4, &r.vf[0].w[1], 4); } }
L_22C0: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[6] + 1u); std::memcpy(q, &r.vf[13], 16); } }
L_22C8: { ++fl.t; set_vi(r, 6, r.vi[6] + 3u); }
L_22D0: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[6]); std::memcpy(q, &r.vf[14], 16); set_vi(r, 6, r.vi[6] + 1u); } }
L_22D8: { ++fl.t; pend = r.vi[0] != r.vi[2]; }
L_22E0: { ++fl.t; set_vi(r, 13, r.vi[13] + r.vi[3]); }
    if (pend) { pend = false; goto L_21B0; }
L_22E8: { ++fl.t; set_vi(r, 1, r.vi[12] + 16384u); }
L_22F0: { ++fl.t; set_vi(r, 1, r.vi[1] + 16384u); }
L_22F8: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[11] + 0u); const std::uint32_t v = r.vi[1]; std::memcpy(q + 0, &v, 4); } }
L_2300: { ++fl.t; }
L_2308: { ++fl.t; }
L_2310: { ++fl.t; }
L_2318: { ++fl.t; vu::kick(1, r.vi[11]); }
L_2320: { ++fl.t; ending = true; }
L_2328: { ++fl.t; }
    if (ending) { r.tpc = 9008u; fl.flush_q(r); return vu::kContinuationEnd; }
    return 9008u;
dispatch:
    return jpc;
}

std::uint32_t vu1_1EB60C07797C2BE0(Vu0Regs &PS2_VU_REGS_RESTRICT r, std::uint8_t *mem, FlagPipe &fl) {
    const bool live_flags = vu::continuation_flags_used();
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    v4u n1 = vfix(vload(r.vf[1]));
    v4u n2 = vfix(vload(r.vf[2]));
    v4u n3 = vfix(vload(r.vf[3]));
    v4u n4 = vfix(vload(r.vf[4]));
    v4u n5 = vfix(vload(r.vf[5]));
    v4u n6 = vfix(vload(r.vf[6]));
    v4u n8 = vfix(vload(r.vf[8]));
    v4u n9 = vfix(vload(r.vf[9]));
    v4u n10 = vfix(vload(r.vf[10]));
    v4u n11 = vfix(vload(r.vf[11]));
    v4u n13 = vfix(vload(r.vf[13]));
    v4u n14 = vfix(vload(r.vf[14]));
    v4u n15 = vfix(vload(r.vf[15]));
    v4u n16 = vfix(vload(r.vf[16]));
    v4u n19 = vfix(vload(r.vf[19]));
    v4u n21 = vfix(vload(r.vf[21]));
    v4u n23 = vfix(vload(r.vf[23]));
    v4u n24 = vfix(vload(r.vf[24]));
    v4u n25 = vfix(vload(r.vf[25]));
    v4u n26 = vfix(vload(r.vf[26]));
    v4u n27 = vfix(vload(r.vf[27]));
    v4u n28 = vfix(vload(r.vf[28]));
    v4u n29 = vfix(vload(r.vf[29]));
    v4u n30 = vfix(vload(r.vf[30]));
    v4u n31 = vfix(vload(r.vf[31]));
    v4u nacc = vfix(vload(r.acc));
    goto L_3088;
L_2A20: { ++fl.t; const v4u uv = vmuln(n14, n21); set_vi(r, 13, r.vi[13] + 3u); vstore(r.vf[20], uv); if (live_flags) { flags(r, r.vf[20], 15u); fl.set_mac(r.mac, r.status); } }
L_2A28: { ++fl.t; const v4u uv = vmax(vload(r.vf[17]), vsplat(0u)); vstore(r.vf[17], vsel(vload(r.vf[17]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); }
L_2A30: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 10800u, 29394012u); const v4u uv = vmuln(n16, vfix(vsplat(r.q))); set_vi(r, 1, (fl.clip() & 262143u) ? 1u : 0u); vstore(r.vf[17], vsel(vload(r.vf[17]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[17], 14u); fl.set_mac(r.mac, r.status); } }
L_2A38: { ++fl.t; const v4u uv = vmaddn(nacc, n8, vsplat(n15[0])); { std::uint16_t v; std::memcpy(&v, qword(mem, r.vi[13] + 4294967295u) + 12, 2); set_vi(r, 2, v); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2A40: { ++fl.t; const v4u uv = vmaddn(nacc, n9, vsplat(n15[1])); { std::uint8_t *q = qword(mem, r.vi[6]); std::memcpy(q + 0, &r.vf[22].w[0], 4); std::memcpy(q + 4, &r.vf[22].w[1], 4); std::memcpy(q + 8, &r.vf[22].w[2], 4); set_vi(r, 6, r.vi[6] + 1u); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2A48: { ++fl.t; const v4u uv = vmaddn(nacc, n10, vsplat(n15[2])); pend = r.vi[0] != r.vi[1]; vstore(r.vf[16], uv); if (live_flags) { flags(r, r.vf[16], 15u); fl.set_mac(r.mac, r.status); } n16 = uv; }
L_2A50: { ++fl.t; const v4u uv = vftoi(vload(r.vf[17]), 4); vstore(r.vf[18], uv); }
    if (pend) { pend = false; goto L_2AD8; }
L_2A58: { ++fl.t; const v4u uv = vmuln(n4, vsplat(0x3F800000u)); { const std::uint8_t *q = qword(mem, r.vi[13] + 1u); std::memcpy(&r.vf[14], q, 16); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } n14 = vfix(vload(r.vf[14])); nacc = uv; }
L_2A60: { ++fl.t; const v4u uv = vmaddn(nacc, n1, vsplat(n15[0])); { const std::uint8_t *q = qword(mem, r.vi[13] + 0u); std::memcpy(&r.vf[13].w[0], q + 0, 4); std::memcpy(&r.vf[13].w[1], q + 4, 4); std::memcpy(&r.vf[13].w[3], q + 12, 4); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } n13 = vfix(vload(r.vf[13])); nacc = uv; }
L_2A68: { ++fl.t; const v4u uv = vftoi(vload(r.vf[20]), 0); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[16].w[3]); fl.end_q(r, qb, vu::continuation_q_delay(10856u, 7u)); } vstore(r.vf[20], uv); }
L_2A70: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n15[1])); set_vi(r, 1, r.vf[18].w[3]); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2A78: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n15[2])); set_vi(r, 1, r.vi[1] | r.vi[2]); vstore(r.vf[23], uv); if (live_flags) { flags(r, r.vf[23], 15u); fl.set_mac(r.mac, r.status); } n23 = uv; }
L_2A80: { ++fl.t; const v4u uv = vmuln(n11, vsplat(0x3F800000u)); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(r.vi[1]))); r.vf[18].w[3] = v; } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2A88: { ++fl.t; const v4u uv = vmin(vload(r.vf[14]), vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, r.vi[6]); std::memcpy(q, &r.vf[20], 16); set_vi(r, 6, r.vi[6] + 1u); } vstore(r.vf[14], uv); n14 = vfix(vload(r.vf[14])); }
L_2A90: { ++fl.t; const v4u uv = vmin(vload(r.vf[13]), vsplat(r.i)); { const std::uint8_t *q = qword(mem, r.vi[13] + 5u); std::memcpy(&r.vf[15].w[0], q + 0, 4); std::memcpy(&r.vf[15].w[1], q + 4, 4); std::memcpy(&r.vf[15].w[2], q + 8, 4); } vstore(r.vf[17], vsel(vload(r.vf[17]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n15 = vfix(vload(r.vf[15])); }
L_2A98: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[23], r.vf[23].w[3]); pend = r.vi[12] != r.vi[6]; r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2AA0: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 10912u, 29388188u); const v4u uv = vmuln(n13, vfix(vsplat(r.q))); { std::uint8_t *q = qword(mem, r.vi[6]); std::memcpy(q, &r.vf[18], 16); set_vi(r, 6, r.vi[6] + 1u); } vstore(r.vf[22], vsel(vload(r.vf[22]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[22], 14u); fl.set_mac(r.mac, r.status); } }
    if (pend) { pend = false; goto L_2A20; }
L_2AA8: { ++fl.t; set_vi(r, 1, vu::itop()); }
L_2AB0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, r.vi[1] + 0u) + 0, 2); set_vi(r, 11, v); } }
L_2AB8: { ++fl.t; set_vi(r, 11, r.vi[11] + r.vi[1]); }
L_2AC0: { ++fl.t; vu::kick(1, r.vi[11]); }
L_2AC8: { ++fl.t; ending = true; }
L_2AD0: { ++fl.t; }
    if (ending) { r.tpc = 10968u; fl.flush_q(r); return vu::kContinuationEnd; }
L_2AD8: { ++fl.t; const v4u uv = vaddn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); pend = r.vi[0] != r.vi[2]; vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[27], 2u); fl.set_mac(r.mac, r.status); } n27 = vsel(n27, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_2AE0: { ++fl.t; const v4u uv = vaddn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); { const std::uint8_t *q = qword(mem, r.vi[13] + 4294967289u); std::memcpy(&r.vf[25].w[0], q + 0, 4); std::memcpy(&r.vf[25].w[1], q + 4, 4); std::memcpy(&r.vf[25].w[2], q + 8, 4); } vstore(r.vf[28], vsel(vload(r.vf[28]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[28], 2u); fl.set_mac(r.mac, r.status); } n25 = vfix(vload(r.vf[25])); n28 = vsel(n28, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_2A58; }
L_2AE8: { ++fl.t; const v4u uv = vaddn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(r, 1, ((fl.clip() | 16710639u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); vstore(r.vf[30], vsel(vload(r.vf[30]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[30], 2u); fl.set_mac(r.mac, r.status); } n30 = vsel(n30, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_2AF0: { ++fl.t; pend = r.vi[0] != r.vi[1]; }
L_2AF8: { ++fl.t; const v4u uv = vmuln(n4, vsplat(0x3F800000u)); { const std::uint8_t *q = qword(mem, r.vi[13] + 4294967292u); std::memcpy(&r.vf[19].w[0], q + 0, 4); std::memcpy(&r.vf[19].w[1], q + 4, 4); std::memcpy(&r.vf[19].w[2], q + 8, 4); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } n19 = vfix(vload(r.vf[19])); nacc = uv; }
    if (pend) { pend = false; goto L_2F78; }
L_2B00: { ++fl.t; const v4u uv = vmaddn(nacc, n1, vsplat(n25[0])); set_vi(r, 1, ((fl.clip() | 16644063u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2B08: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n25[1])); pend = r.vi[0] != r.vi[1]; vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2B10: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n25[2])); { const std::uint8_t *q = qword(mem, r.vi[13] + 4294967288u); std::memcpy(&r.vf[26], q, 16); } vstore(r.vf[25], uv); if (live_flags) { flags(r, r.vf[25], 15u); fl.set_mac(r.mac, r.status); } n26 = vfix(vload(r.vf[26])); n25 = uv; }
    if (pend) { pend = false; goto L_2F78; }
L_2B18: { ++fl.t; const v4u uv = vmuln(n4, vsplat(0x3F800000u)); { const std::uint8_t *q = qword(mem, r.vi[13] + 4294967291u); std::memcpy(&r.vf[29], q, 16); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } n29 = vfix(vload(r.vf[29])); nacc = uv; }
L_2B20: { ++fl.t; const v4u uv = vmaddn(nacc, n1, vsplat(n19[0])); { const std::uint8_t *q = qword(mem, r.vi[13] + 4294967287u); std::memcpy(&r.vf[27].w[0], q + 0, 4); std::memcpy(&r.vf[27].w[1], q + 4, 4); std::memcpy(&r.vf[27].w[3], q + 12, 4); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } n27 = vfix(vload(r.vf[27])); nacc = uv; }
L_2B28: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n19[1])); { const std::uint8_t *q = qword(mem, r.vi[13] + 4294967290u); std::memcpy(&r.vf[28].w[0], q + 0, 4); std::memcpy(&r.vf[28].w[1], q + 4, 4); std::memcpy(&r.vf[28].w[3], q + 12, 4); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } n28 = vfix(vload(r.vf[28])); nacc = uv; }
L_2B30: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n19[2])); { const std::uint8_t *q = qword(mem, r.vi[13] + 4294967293u); std::memcpy(&r.vf[30].w[0], q + 0, 4); std::memcpy(&r.vf[30].w[1], q + 4, 4); std::memcpy(&r.vf[30].w[3], q + 12, 4); } vstore(r.vf[19], uv); if (live_flags) { flags(r, r.vf[19], 15u); fl.set_mac(r.mac, r.status); } n30 = vfix(vload(r.vf[30])); n19 = uv; }
L_2B38: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[25], r.vf[25].w[3]); set_vi(r, 11, fl.clip() & 0xFFFu); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2B40: { ++fl.t; const v4u uv = vmuln(n25, n24); { std::uint8_t *q = qword(mem, r.vi[4] + 3u); std::memcpy(q, &r.vf[26], 16); } vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[12], 14u); fl.set_mac(r.mac, r.status); } }
L_2B48: { ++fl.t; const v4u uv = vmuln(n23, n24); { std::uint8_t *q = qword(mem, r.vi[4] + 7u); std::memcpy(q, &r.vf[29], 16); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[6], 14u); fl.set_mac(r.mac, r.status); } n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2B50: { ++fl.t; const v4u uv = vmuln(n19, n24); { std::uint8_t *q = qword(mem, r.vi[4] + 4u); std::memcpy(q, &r.vf[25], 16); } vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[7], 14u); fl.set_mac(r.mac, r.status); } }
L_2B58: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[19], r.vf[19].w[3]); set_vi(r, 1, fl.clip() & 0xFFFu); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2B60: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[12], r.vf[25].w[3]); set_vi(r, 11, r.vi[11] | r.vi[1]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2B68: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[6], r.vf[23].w[3]); { const std::uint8_t *q = qword(mem, r.vi[13] + 4294967294u); std::memcpy(&r.vf[25], q, 16); } r.clip = uclip; fl.set_clip(uclip, fl.t); n25 = vfix(vload(r.vf[25])); }
L_2B70: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[7], r.vf[19].w[3]); { std::uint8_t *q = qword(mem, r.vi[4] + 12u); std::memcpy(q, &r.vf[23], 16); } r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2B78: { ++fl.t; set_vi(r, 1, fl.clip() & 0xFFFu); }
L_2B80: { ++fl.t; set_vi(r, 11, r.vi[11] | r.vi[1]); }
L_2B88: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[4] + 11u); std::memcpy(q, &r.vf[25], 16); } }
L_2B90: { ++fl.t; set_vi(r, 1, ((fl.clip() | 16773054u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
L_2B98: { ++fl.t; pend = r.vi[0] != r.vi[1]; }
L_2BA0: { ++fl.t; set_vi(r, 1, ((fl.clip() | 16768893u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
    if (pend) { pend = false; goto L_2F78; }
L_2BA8: { ++fl.t; pend = r.vi[0] != r.vi[1]; }
L_2BB0: { ++fl.t; set_vi(r, 1, ((fl.clip() | 16760571u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
    if (pend) { pend = false; goto L_2F78; }
L_2BB8: { ++fl.t; pend = r.vi[0] != r.vi[1]; }
L_2BC0: { ++fl.t; set_vi(r, 1, ((fl.clip() | 16743927u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
    if (pend) { pend = false; goto L_2F78; }
L_2BC8: { ++fl.t; pend = r.vi[0] != r.vi[1]; }
L_2BD0: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[4] + 8u); std::memcpy(q, &r.vf[19], 16); } }
    if (pend) { pend = false; goto L_2F78; }
L_2BD8: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[4] + 2u); std::memcpy(q, &r.vf[27], 16); } }
L_2BE0: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[4] + 6u); std::memcpy(q, &r.vf[28], 16); } }
L_2BE8: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[4] + 10u); std::memcpy(q, &r.vf[30], 16); } }
L_2BF0: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[4] + 1u); const std::uint32_t v = r.vi[0]; std::memcpy(q + 0, &v, 4); } }
L_2BF8: { ++fl.t; set_vi(r, 1, r.vi[0] + 3u); }
L_2C00: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[4] + 5u); const std::uint32_t v = r.vi[1]; std::memcpy(q + 0, &v, 4); } }
L_2C08: { ++fl.t; set_vi(r, 1, r.vi[0] + 6u); }
L_2C10: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[4] + 9u); const std::uint32_t v = r.vi[1]; std::memcpy(q + 0, &v, 4); } }
L_2C18: { ++fl.t; set_vi(r, 3, r.vi[0] + 12u); }
L_2C20: { ++fl.t; set_vi(r, 9, r.vi[0] + 74u); }
L_2C28: { ++fl.t; vu::kick(1, r.vi[9]); }
L_2C30: { ++fl.t; set_vi(r, 9, r.vi[0] + 16u); }
L_2C38: { ++fl.t; set_vi(r, 9, r.vi[9] & r.vi[11]); }
L_2C40: { ++fl.t; set_vi(r, 7, r.vi[0] + 1612u); }
L_2C48: { ++fl.t; pend = r.vi[0] == r.vi[9]; }
L_2C50: { ++fl.t; }
    if (pend) { pend = false; goto L_2CE8; }
L_2C58: { ++fl.t; set_vi(r, 8, 1421u); pend = true; }
L_2C60: { ++fl.t; }
    if (pend) { pend = false; goto L_2F98; }
L_2C68: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[4] + 4u); std::memcpy(&r.vf[25], q, 16); } n25 = vfix(vload(r.vf[25])); }
L_2C70: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[4] + 8u); std::memcpy(&r.vf[26], q, 16); } n26 = vfix(vload(r.vf[26])); }
L_2C78: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[4] + 12u); std::memcpy(&r.vf[27], q, 16); } n27 = vfix(vload(r.vf[27])); }
L_2C80: { ++fl.t; set_vi(r, 14, r.vi[0] + 12u); }
L_2C88: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[25], r.vf[25].w[3]); { const std::uint8_t *q = qword(mem, r.vi[4] + 16u); std::memcpy(&r.vf[28], q, 16); } r.clip = uclip; fl.set_clip(uclip, fl.t); n28 = vfix(vload(r.vf[28])); }
L_2C90: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[26], r.vf[26].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2C98: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[27], r.vf[27].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2CA0: { ++fl.t; }
L_2CA8: { ++fl.t; set_vi(r, 11, fl.clip() & 0xFFFu); }
L_2CB0: { ++fl.t; set_vi(r, 1, fl.clip() & 0xFFFu); }
L_2CB8: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[28], r.vf[28].w[3]); set_vi(r, 11, r.vi[11] | r.vi[1]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2CC0: { ++fl.t; set_vi(r, 1, fl.clip() & 0xFFFu); }
L_2CC8: { ++fl.t; pend = r.vi[14] == r.vi[3]; }
L_2CD0: { ++fl.t; set_vi(r, 11, r.vi[11] | r.vi[1]); }
    if (pend) { pend = false; goto L_2CE8; }
L_2CD8: { ++fl.t; set_vi(r, 1, fl.clip() & 0xFFFu); }
L_2CE0: { ++fl.t; set_vi(r, 11, r.vi[11] | r.vi[1]); }
L_2CE8: { ++fl.t; set_vi(r, 9, r.vi[0] + 1u); }
L_2CF0: { ++fl.t; set_vi(r, 9, r.vi[9] & r.vi[11]); }
L_2CF8: { ++fl.t; set_vi(r, 7, r.vi[0] + 1588u); }
L_2D00: { ++fl.t; pend = r.vi[0] == r.vi[9]; }
L_2D08: { ++fl.t; }
    if (pend) { pend = false; goto L_2D20; }
L_2D10: { ++fl.t; set_vi(r, 8, 1444u); pend = true; }
L_2D18: { ++fl.t; }
    if (pend) { pend = false; goto L_2F98; }
L_2D20: { ++fl.t; set_vi(r, 9, r.vi[0] + 2u); }
L_2D28: { ++fl.t; set_vi(r, 9, r.vi[9] & r.vi[11]); }
L_2D30: { ++fl.t; set_vi(r, 7, r.vi[0] + 1594u); }
L_2D38: { ++fl.t; pend = r.vi[0] == r.vi[9]; }
L_2D40: { ++fl.t; }
    if (pend) { pend = false; goto L_2D58; }
L_2D48: { ++fl.t; set_vi(r, 8, 1451u); pend = true; }
L_2D50: { ++fl.t; }
    if (pend) { pend = false; goto L_2F98; }
L_2D58: { ++fl.t; set_vi(r, 9, r.vi[0] + 4u); }
L_2D60: { ++fl.t; set_vi(r, 9, r.vi[9] & r.vi[11]); }
L_2D68: { ++fl.t; set_vi(r, 7, r.vi[0] + 1600u); }
L_2D70: { ++fl.t; pend = r.vi[0] == r.vi[9]; }
L_2D78: { ++fl.t; }
    if (pend) { pend = false; goto L_2D90; }
L_2D80: { ++fl.t; set_vi(r, 8, 1458u); pend = true; }
L_2D88: { ++fl.t; }
    if (pend) { pend = false; goto L_2F98; }
L_2D90: { ++fl.t; set_vi(r, 9, r.vi[0] + 8u); }
L_2D98: { ++fl.t; set_vi(r, 9, r.vi[9] & r.vi[11]); }
L_2DA0: { ++fl.t; set_vi(r, 7, r.vi[0] + 1606u); }
L_2DA8: { ++fl.t; pend = r.vi[0] == r.vi[9]; }
L_2DB0: { ++fl.t; }
    if (pend) { pend = false; goto L_2DC8; }
L_2DB8: { ++fl.t; set_vi(r, 8, 1465u); pend = true; }
L_2DC0: { ++fl.t; }
    if (pend) { pend = false; goto L_2F98; }
L_2DC8: { ++fl.t; set_vi(r, 9, r.vi[0] + 32u); }
L_2DD0: { ++fl.t; set_vi(r, 9, r.vi[9] & r.vi[11]); }
L_2DD8: { ++fl.t; set_vi(r, 7, r.vi[0] + 1618u); }
L_2DE0: { ++fl.t; pend = r.vi[0] == r.vi[9]; }
L_2DE8: { ++fl.t; }
    if (pend) { pend = false; goto L_2E00; }
L_2DF0: { ++fl.t; set_vi(r, 8, 1472u); pend = true; }
L_2DF8: { ++fl.t; }
    if (pend) { pend = false; goto L_2F98; }
L_2E00: { ++fl.t; set_vi(r, 3, r.vi[3] + r.vi[4]); }
L_2E08: { ++fl.t; set_vi(r, 14, r.vi[4] + r.vi[0]); }
L_2E10: { ++fl.t; set_vi(r, 15, r.vi[5] + 1u); }
L_2E18: { ++fl.t; set_vi(r, 10, r.vi[0] + 16384u); }
L_2E20: { ++fl.t; set_vi(r, 10, r.vi[10] + 16384u); }
L_2E28: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, r.vi[14] + 1u) + 0, 2); set_vi(r, 1, v); } }
L_2E30: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[14] + 4u); std::memcpy(&r.vf[25], q, 16); } n25 = vfix(vload(r.vf[25])); }
L_2E38: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[14] + 2u); std::memcpy(&r.vf[26], q, 16); } n26 = vfix(vload(r.vf[26])); }
L_2E40: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[14] + 3u); std::memcpy(&r.vf[27], q, 16); } n27 = vfix(vload(r.vf[27])); }
L_2E48: { ++fl.t; pend = static_cast<std::int16_t>(r.vi[1]) < 0; }
L_2E50: { ++fl.t; set_vi(r, 1, r.vi[13] + r.vi[1]); }
    if (pend) { pend = false; goto L_2EA0; }
L_2E58: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[1] + 4294967289u); std::memcpy(&r.vf[25].w[0], q + 0, 4); std::memcpy(&r.vf[25].w[1], q + 4, 4); std::memcpy(&r.vf[25].w[2], q + 8, 4); } n25 = vfix(vload(r.vf[25])); }
L_2E60: { ++fl.t; const v4u uv = vmin(vload(r.vf[27]), vsplat(0x3F800000u)); vstore(r.vf[27], uv); n27 = vfix(vload(r.vf[27])); }
L_2E68: { ++fl.t; const v4u uv = vmuln(n11, vsplat(0x3F800000u)); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2E70: { ++fl.t; const v4u uv = vmaddn(nacc, n8, vsplat(n25[0])); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2E78: { ++fl.t; const v4u uv = vmaddn(nacc, n9, vsplat(n25[1])); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2E80: { ++fl.t; const v4u uv = vmaddn(nacc, n10, vsplat(n25[2])); vstore(r.vf[25], uv); if (live_flags) { flags(r, r.vf[25], 15u); fl.set_mac(r.mac, r.status); } n25 = uv; }
L_2E88: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[25].w[3]); fl.end_q(r, qb, vu::continuation_q_delay(11912u, 7u)); } }
L_2E90: { ++fl.t; pend = true; }
L_2E98: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 11928u, 29412956u); const v4u uv = vmuln(n25, vfix(vsplat(r.q))); fl.flush_q(r); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[25], 14u); fl.set_mac(r.mac, r.status); } n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_2ED8; }
L_2EA0: { ++fl.t; const v4u uv = vsubn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(n25[3])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[25].w[3]); fl.end_q(r, qb, vu::continuation_q_delay(11936u, 7u)); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); if (live_flags) { flags(r, r.vf[6], 8u); fl.set_mac(r.mac, r.status); } n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2EA8: { ++fl.t; const v4u uv = vmin(vload(r.vf[25]), vsplat(r.vf[25].w[3])); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); n25 = vfix(vload(r.vf[25])); }
L_2EB0: { ++fl.t; const v4u uv = vmin(vload(r.vf[27]), vsplat(0x3F800000u)); vstore(r.vf[27], uv); n27 = vfix(vload(r.vf[27])); }
L_2EB8: { ++fl.t; const v4u uv = vmax(vload(r.vf[25]), vsplat(r.vf[6].w[0])); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); n25 = vfix(vload(r.vf[25])); }
L_2EC0: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 11968u, 29412956u); const v4u uv = vmuln(n25, vfix(vsplat(r.q))); fl.flush_q(r); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[25], 14u); fl.set_mac(r.mac, r.status); } n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2EC8: { ++fl.t; const v4u uv = vmuln(n25, n5); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[25], 14u); fl.set_mac(r.mac, r.status); } n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2ED0: { ++fl.t; const v4u uv = vaddn(n25, n31); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[25], 14u); fl.set_mac(r.mac, r.status); } n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2ED8: { ++fl.t; const v4u uv = vmin(vload(r.vf[26]), vsplat(r.i)); set_vi(r, 10, r.vi[10] + 1u); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n26 = vfix(vload(r.vf[26])); }
L_2EE0: { ++fl.t; const v4u uv = vmuln(n27, n21); set_vi(r, 14, r.vi[14] + 4u); vstore(r.vf[27], uv); if (live_flags) { flags(r, r.vf[27], 15u); fl.set_mac(r.mac, r.status); } n27 = uv; }
L_2EE8: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 12008u, 29415068u); const v4u uv = vmuln(n26, vfix(vsplat(r.q))); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[26], 14u); fl.set_mac(r.mac, r.status); } n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2EF0: { ++fl.t; }
L_2EF8: { ++fl.t; }
L_2F00: { ++fl.t; const v4u uv = vftoi(vload(r.vf[27]), 0); vstore(r.vf[27], uv); n27 = vfix(vload(r.vf[27])); }
L_2F08: { ++fl.t; const v4u uv = vmax(vload(r.vf[26]), vsplat(0u)); { std::uint8_t *q = qword(mem, r.vi[15]); std::memcpy(q + 0, &r.vf[26].w[0], 4); std::memcpy(q + 4, &r.vf[26].w[1], 4); std::memcpy(q + 8, &r.vf[26].w[2], 4); set_vi(r, 15, r.vi[15] + 1u); } vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n25 = vfix(vload(r.vf[25])); }
L_2F10: { ++fl.t; }
L_2F18: { ++fl.t; }
L_2F20: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15]); std::memcpy(q, &r.vf[27], 16); set_vi(r, 15, r.vi[15] + 1u); } }
L_2F28: { ++fl.t; const v4u uv = vftoi(vload(r.vf[25]), 4); vstore(r.vf[25], uv); n25 = vfix(vload(r.vf[25])); }
L_2F30: { ++fl.t; }
L_2F38: { ++fl.t; }
L_2F40: { ++fl.t; pend = r.vi[14] != r.vi[3]; }
L_2F48: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15]); std::memcpy(q, &r.vf[25], 16); set_vi(r, 15, r.vi[15] + 1u); } }
    if (pend) { pend = false; goto L_2E28; }
L_2F50: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[5] + 0u); const std::uint32_t v = r.vi[10]; std::memcpy(q + 0, &v, 4); } }
L_2F58: { ++fl.t; }
L_2F60: { ++fl.t; }
L_2F68: { ++fl.t; }
L_2F70: { ++fl.t; vu::kick(1, r.vi[5]); }
L_2F78: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[19], r.vf[19].w[3]); set_vi(r, 2, r.vi[0] + 16384u); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2F80: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[23], r.vf[23].w[3]); set_vi(r, 2, r.vi[2] + 16384u); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2F88: { ++fl.t; pend = true; }
L_2F90: { ++fl.t; }
    if (pend) { pend = false; goto L_2A58; }
L_2F98: { ++fl.t; set_vi(r, 3, r.vi[3] + r.vi[4]); }
L_2FA0: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[3] + 0u); std::memcpy(&r.vf[25], q, 16); } n25 = vfix(vload(r.vf[25])); }
L_2FA8: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[3] + 4294967295u); std::memcpy(&r.vf[26], q, 16); } n26 = vfix(vload(r.vf[26])); }
L_2FB0: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[3] + 4294967294u); std::memcpy(&r.vf[27], q, 16); } n27 = vfix(vload(r.vf[27])); }
L_2FB8: { ++fl.t; }
L_2FC0: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[25], r.vf[25].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2FC8: { ++fl.t; set_vi(r, 14, r.vi[4] + r.vi[0]); }
L_2FD0: { ++fl.t; set_vi(r, 15, r.vi[5] + r.vi[0]); }
L_2FD8: { ++fl.t; }
L_2FE0: { ++fl.t; set_vi(r, 10, fl.clip() & 0xFFFu); }
L_2FE8: { ++fl.t; set_vi(r, 10, r.vi[10] & r.vi[9]); }
L_2FF0: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[14] + 4u); std::memcpy(&r.vf[28], q, 16); } n28 = vfix(vload(r.vf[28])); }
L_2FF8: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[14] + 3u); std::memcpy(&r.vf[29], q, 16); } n29 = vfix(vload(r.vf[29])); }
L_3000: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[14] + 2u); std::memcpy(&r.vf[30], q, 16); } n30 = vfix(vload(r.vf[30])); }
L_3008: { ++fl.t; set_vi(r, 14, r.vi[14] + 4u); }
L_3010: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[28], r.vf[28].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_3018: { ++fl.t; }
L_3020: { ++fl.t; }
L_3028: { ++fl.t; }
L_3030: { ++fl.t; set_vi(r, 1, fl.clip() & 0xFFFu); }
L_3038: { ++fl.t; set_vi(r, 1, r.vi[1] & r.vi[9]); }
L_3040: { ++fl.t; }
L_3048: { ++fl.t; pend = r.vi[10] == r.vi[1]; }
L_3050: { ++fl.t; }
    if (pend) { pend = false; goto L_3110; }
L_3058: { ++fl.t; pend = r.vi[0] == r.vi[1]; }
L_3060: { ++fl.t; r.vf[12].w[0] = r.vf[28].w[0]; r.vf[12].w[1] = r.vf[28].w[1]; r.vf[12].w[2] = r.vf[28].w[2]; r.vf[12].w[3] = r.vf[28].w[3]; }
    if (pend) { pend = false; goto L_30B8; }
L_3068: { ++fl.t; r.vf[28].w[0] = r.vf[25].w[0]; r.vf[28].w[1] = r.vf[25].w[1]; r.vf[28].w[2] = r.vf[25].w[2]; r.vf[28].w[3] = r.vf[25].w[3]; n28 = vfix(vload(r.vf[28])); }
L_3070: { ++fl.t; r.vf[25].w[0] = r.vf[12].w[0]; r.vf[25].w[1] = r.vf[12].w[1]; r.vf[25].w[2] = r.vf[12].w[2]; r.vf[25].w[3] = r.vf[12].w[3]; n25 = vfix(vload(r.vf[25])); }
L_3078: { ++fl.t; jpc = (static_cast<std::uint32_t>(r.vi[7]) * 8u) & 16383u; set_vi(r, 10, 1553u); pendj = true; }
L_3080: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_3088: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 12424u, 31508988u); const v4u uv = vmuln(n25, vfix(vsplat(r.q))); set_vi(r, 10, r.vi[0] - 1u); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_3090: { ++fl.t; const v4u uv = vmaddn(nacc, n28, vsplat(n6[3])); { std::uint8_t *q = qword(mem, r.vi[15] + 1u); const std::uint32_t v = r.vi[10]; std::memcpy(q + 0, &v, 4); } vstore(r.vf[12], uv); if (live_flags) { flags(r, r.vf[12], 15u); fl.set_mac(r.mac, r.status); } }
L_3098: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 12440u, 31517180u); const v4u uv = vmuln(n29, vfix(vsplat(r.q))); r.vf[28].w[0] = r.vf[25].w[0]; r.vf[28].w[1] = r.vf[25].w[1]; r.vf[28].w[2] = r.vf[25].w[2]; r.vf[28].w[3] = r.vf[25].w[3]; vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } n28 = vfix(vload(r.vf[28])); nacc = uv; }
L_30A0: { ++fl.t; const v4u uv = vmaddn(nacc, n26, vsplat(n6[3])); set_vi(r, 15, r.vi[15] + 4u); vstore(r.vf[7], uv); if (live_flags) { flags(r, r.vf[7], 15u); fl.set_mac(r.mac, r.status); } }
L_30A8: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 12456u, 31519228u); const v4u uv = vmuln(n30, vfix(vsplat(r.q))); pend = true; vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_30B0: { ++fl.t; const v4u uv = vmaddn(nacc, n27, vsplat(n6[3])); vstore(r.vf[6], uv); if (live_flags) { flags(r, r.vf[6], 15u); fl.set_mac(r.mac, r.status); } n6 = uv; }
    if (pend) { pend = false; goto L_30F8; }
L_30B8: { ++fl.t; jpc = (static_cast<std::uint32_t>(r.vi[7]) * 8u) & 16383u; set_vi(r, 10, 1561u); pendj = true; }
L_30C0: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_30C8: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 12488u, 31508988u); const v4u uv = vmuln(n25, vfix(vsplat(r.q))); set_vi(r, 10, r.vi[0] - 1u); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_30D0: { ++fl.t; const v4u uv = vmaddn(nacc, n28, vsplat(n6[3])); { std::uint8_t *q = qword(mem, r.vi[15] + 1u); const std::uint32_t v = r.vi[10]; std::memcpy(q + 0, &v, 4); } vstore(r.vf[12], uv); if (live_flags) { flags(r, r.vf[12], 15u); fl.set_mac(r.mac, r.status); } }
L_30D8: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 12504u, 31511036u); const v4u uv = vmuln(n26, vfix(vsplat(r.q))); set_vi(r, 15, r.vi[15] + 4u); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_30E0: { ++fl.t; const v4u uv = vmaddn(nacc, n29, vsplat(n6[3])); vstore(r.vf[7], uv); if (live_flags) { flags(r, r.vf[7], 15u); fl.set_mac(r.mac, r.status); } }
L_30E8: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 12520u, 31513084u); const v4u uv = vmuln(n27, vfix(vsplat(r.q))); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_30F0: { ++fl.t; const v4u uv = vmaddn(nacc, n30, vsplat(n6[3])); vstore(r.vf[6], uv); if (live_flags) { flags(r, r.vf[6], 15u); fl.set_mac(r.mac, r.status); } n6 = uv; }
L_30F8: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15] + 0u); std::memcpy(q, &r.vf[12], 16); } }
L_3100: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15] + 4294967295u); std::memcpy(q, &r.vf[7], 16); } }
L_3108: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15] + 4294967294u); std::memcpy(q, &r.vf[6], 16); } }
L_3110: { ++fl.t; pend = r.vi[0] != r.vi[1]; }
L_3118: { ++fl.t; r.vf[25].w[0] = r.vf[28].w[0]; r.vf[25].w[1] = r.vf[28].w[1]; r.vf[25].w[2] = r.vf[28].w[2]; r.vf[25].w[3] = r.vf[28].w[3]; n25 = vfix(vload(r.vf[25])); }
    if (pend) { pend = false; goto L_3150; }
L_3120: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, r.vi[14] + 4294967293u) + 0, 2); set_vi(r, 10, v); } }
L_3128: { ++fl.t; set_vi(r, 15, r.vi[15] + 4u); }
L_3130: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15] + 0u); std::memcpy(q, &r.vf[28], 16); } }
L_3138: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15] + 4294967295u); std::memcpy(q, &r.vf[29], 16); } }
L_3140: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15] + 4294967294u); std::memcpy(q, &r.vf[30], 16); } }
L_3148: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15] + 4294967293u); const std::uint32_t v = r.vi[10]; std::memcpy(q + 0, &v, 4); } }
L_3150: { ++fl.t; r.vf[26].w[0] = r.vf[29].w[0]; r.vf[26].w[1] = r.vf[29].w[1]; r.vf[26].w[2] = r.vf[29].w[2]; r.vf[26].w[3] = r.vf[29].w[3]; n26 = vfix(vload(r.vf[26])); }
L_3158: { ++fl.t; r.vf[27].w[0] = r.vf[30].w[0]; r.vf[27].w[1] = r.vf[30].w[1]; r.vf[27].w[2] = r.vf[30].w[2]; r.vf[27].w[3] = r.vf[30].w[3]; n27 = vfix(vload(r.vf[27])); }
L_3160: { ++fl.t; pend = r.vi[3] != r.vi[14]; }
L_3168: { ++fl.t; set_vi(r, 10, r.vi[1] + r.vi[0]); }
    if (pend) { pend = false; goto L_2FF0; }
L_3170: { ++fl.t; pend = r.vi[5] == r.vi[15]; }
L_3178: { ++fl.t; set_vi(r, 3, r.vi[15] - r.vi[5]); }
    if (pend) { pend = false; goto L_2F78; }
L_3180: { ++fl.t; set_vi(r, 1, r.vi[5] + r.vi[0]); }
L_3188: { ++fl.t; set_vi(r, 5, r.vi[4] + r.vi[0]); }
L_3190: { ++fl.t; jpc = (static_cast<std::uint32_t>(r.vi[8]) * 8u) & 16383u; pendj = true; }
L_3198: { ++fl.t; set_vi(r, 4, r.vi[1] + r.vi[0]); }
    if (pendj) { pendj = false; goto dispatch; }
    return 12704u;
dispatch:
    return jpc;
}

std::uint32_t vu1_244C0BE4B3264D2D(Vu0Regs &PS2_VU_REGS_RESTRICT r, std::uint8_t *mem, FlagPipe &fl) {
    const bool live_flags = vu::continuation_flags_used();
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    v4u n2 = vfix(vload(r.vf[2]));
    v4u n12 = vfix(vload(r.vf[12]));
    v4u n13 = vfix(vload(r.vf[13]));
    goto L_1EB0;
L_1EB0: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[6] + 0u); std::memcpy(&r.vf[13], q, 16); } n13 = vfix(vload(r.vf[13])); }
L_1EB8: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[6] + 2u); std::memcpy(&r.vf[12], q, 16); } n12 = vfix(vload(r.vf[12])); }
L_1EC0: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[6] + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vfix(vload(r.vf[2])); }
L_1EC8: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[6] + 3u); std::memcpy(&r.vf[1], q, 16); } }
L_1ED0: { ++fl.t; const v4u uv = vitof(vload(r.vf[13]), 0); r.i = 998277249u; vstore(r.vf[13], uv); n13 = vfix(vload(r.vf[13])); }
L_1ED8: { ++fl.t; const v4u uv = vitof(vload(r.vf[12]), 0); set_vi(r, 9, r.vi[6] + r.vi[2]); vstore(r.vf[12], uv); n12 = vfix(vload(r.vf[12])); }
L_1EE0: { ++fl.t; const v4u uv = vitof(vload(r.vf[2]), 0); set_vi(r, 9, r.vi[9] - 1u); vstore(r.vf[2], uv); n2 = vfix(vload(r.vf[2])); }
L_1EE8: { ++fl.t; set_vi(r, 10, r.vi[6] + r.vi[0]); }
L_1EF0: { ++fl.t; const v4u uv = vmuln(n13, vfix(vsplat(r.i))); vstore(r.vf[13], uv); if (live_flags) { flags(r, r.vf[13], 15u); fl.set_mac(r.mac, r.status); } n13 = uv; }
L_1EF8: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[10] + 4u); std::memcpy(&r.vf[11], q, 16); } }
L_1F00: { ++fl.t; const v4u uv = vmuln(n2, vfix(vsplat(r.i))); pend = r.vi[9] == r.vi[10]; vstore(r.vf[3], uv); if (live_flags) { flags(r, r.vf[3], 15u); fl.set_mac(r.mac, r.status); } }
L_1F08: { ++fl.t; const v4u uv = vitof(vload(r.vf[1]), 0); { std::uint8_t *q = qword(mem, r.vi[10]); std::memcpy(q, &r.vf[13], 16); set_vi(r, 10, r.vi[10] + 1u); } vstore(r.vf[2], uv); n2 = vfix(vload(r.vf[2])); }
    if (pend) { pend = false; goto L_1F28; }
L_1F10: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[10] + 4u); std::memcpy(&r.vf[1], q, 16); } }
L_1F18: { ++fl.t; const v4u uv = vmuln(n12, vfix(vsplat(r.i))); pend = r.vi[9] != r.vi[10]; vstore(r.vf[13], uv); if (live_flags) { flags(r, r.vf[13], 15u); fl.set_mac(r.mac, r.status); } n13 = uv; }
L_1F20: { ++fl.t; const v4u uv = vitof(vload(r.vf[11]), 0); { std::uint8_t *q = qword(mem, r.vi[10]); std::memcpy(q, &r.vf[3], 16); set_vi(r, 10, r.vi[10] + 1u); } vstore(r.vf[12], uv); n12 = vfix(vload(r.vf[12])); }
    if (pend) { pend = false; goto L_1EF8; }
L_1F28: { ++fl.t; jpc = (static_cast<std::uint32_t>(r.vi[15]) * 8u) & 16383u; pendj = true; }
L_1F30: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    return 7992u;
dispatch:
    return jpc;
}

std::uint32_t vu1_255775DE69D7ACBB(Vu0Regs &PS2_VU_REGS_RESTRICT r, std::uint8_t *mem, FlagPipe &fl) {
    const bool live_flags = vu::continuation_flags_used();
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    v4u n15 = vfix(vload(r.vf[15]));
    v4u n16 = vfix(vload(r.vf[16]));
    v4u n17 = vfix(vload(r.vf[17]));
    v4u n18 = vfix(vload(r.vf[18]));
    goto L_0000;
L_0000: { ++fl.t; set_vi(r, 12, r.vi[6] + r.vi[0]); }
L_0008: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[12]); std::memcpy(&r.vf[18], q, 16); set_vi(r, 12, r.vi[12] + 1u); } n18 = vfix(vload(r.vf[18])); }
L_0010: { ++fl.t; set_vi(r, 10, r.vi[4] + r.vi[0]); }
L_0018: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[10] + 2u); std::memcpy(&r.vf[15], q, 16); } n15 = vfix(vload(r.vf[15])); }
L_0020: { ++fl.t; set_vi(r, 9, r.vi[4] + r.vi[2]); }
L_0028: { ++fl.t; set_vi(r, 9, r.vi[9] + r.vi[2]); }
L_0030: { ++fl.t; set_vi(r, 9, r.vi[9] + r.vi[2]); }
L_0038: { ++fl.t; const v4u uv = vaddn(n18, n15); { const std::uint8_t *q = qword(mem, r.vi[12]); std::memcpy(&r.vf[17], q, 16); set_vi(r, 12, r.vi[12] + 1u); } vstore(r.vf[18], vsel(vload(r.vf[18]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[18], 14u); fl.set_mac(r.mac, r.status); } n17 = vfix(vload(r.vf[17])); n18 = vsel(n18, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0040: { ++fl.t; set_vi(r, 10, r.vi[10] + 3u); }
L_0048: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[12]); std::memcpy(&r.vf[16], q, 16); set_vi(r, 12, r.vi[12] + 1u); } n16 = vfix(vload(r.vf[16])); }
L_0050: { ++fl.t; pend = r.vi[9] == r.vi[10]; }
L_0058: { ++fl.t; const v4u uv = vaddn(n17, n15); { std::uint8_t *q = qword(mem, r.vi[10] + 4294967295u); std::memcpy(q, &r.vf[18], 16); } vstore(r.vf[17], vsel(vload(r.vf[17]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[17], 14u); fl.set_mac(r.mac, r.status); } n17 = vsel(n17, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_00A0; }
L_0060: { ++fl.t; set_vi(r, 10, r.vi[10] + 3u); }
L_0068: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[12]); std::memcpy(&r.vf[18], q, 16); set_vi(r, 12, r.vi[12] + 1u); } n18 = vfix(vload(r.vf[18])); }
L_0070: { ++fl.t; pend = r.vi[9] == r.vi[10]; }
L_0078: { ++fl.t; const v4u uv = vaddn(n16, n15); { std::uint8_t *q = qword(mem, r.vi[10] + 4294967295u); std::memcpy(q, &r.vf[17], 16); } vstore(r.vf[16], vsel(vload(r.vf[16]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[16], 14u); fl.set_mac(r.mac, r.status); } n16 = vsel(n16, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_00A0; }
L_0080: { ++fl.t; set_vi(r, 10, r.vi[10] + 3u); }
L_0088: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[12]); std::memcpy(&r.vf[17], q, 16); set_vi(r, 12, r.vi[12] + 1u); } n17 = vfix(vload(r.vf[17])); }
L_0090: { ++fl.t; pend = r.vi[9] != r.vi[10]; }
L_0098: { ++fl.t; const v4u uv = vaddn(n18, n15); { std::uint8_t *q = qword(mem, r.vi[10] + 4294967295u); std::memcpy(q, &r.vf[16], 16); } vstore(r.vf[18], vsel(vload(r.vf[18]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[18], 14u); fl.set_mac(r.mac, r.status); } n18 = vsel(n18, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_0040; }
L_00A0: { ++fl.t; jpc = (static_cast<std::uint32_t>(r.vi[15]) * 8u) & 16383u; pendj = true; }
L_00A8: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    return 176u;
dispatch:
    return jpc;
}

std::uint32_t vu1_26055AAE4E2A9630(Vu0Regs &PS2_VU_REGS_RESTRICT r, std::uint8_t *mem, FlagPipe &fl) {
    const bool live_flags = vu::continuation_flags_used();
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    v4u n1 = vfix(vload(r.vf[1]));
    v4u n2 = vfix(vload(r.vf[2]));
    v4u n4 = vfix(vload(r.vf[4]));
    v4u n6 = vfix(vload(r.vf[6]));
    v4u n10 = vfix(vload(r.vf[10]));
    v4u n16 = vfix(vload(r.vf[16]));
    v4u n17 = vfix(vload(r.vf[17]));
    v4u n18 = vfix(vload(r.vf[18]));
    v4u n26 = vfix(vload(r.vf[26]));
    v4u n27 = vfix(vload(r.vf[27]));
    v4u n29 = vfix(vload(r.vf[29]));
    v4u n30 = vfix(vload(r.vf[30]));
    v4u n31 = vfix(vload(r.vf[31]));
    v4u nacc = vfix(vload(r.acc));
    goto L_0560;
L_0560: { ++fl.t; set_vi(r, 10, r.vi[4] + 3u); }
L_0568: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[10] + 0u); std::memcpy(&r.vf[18].w[0], q + 0, 4); std::memcpy(&r.vf[18].w[1], q + 4, 4); std::memcpy(&r.vf[18].w[2], q + 8, 4); } n18 = vfix(vload(r.vf[18])); }
L_0570: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[5]); std::memcpy(&r.vf[10].w[0], q + 0, 4); std::memcpy(&r.vf[10].w[1], q + 4, 4); std::memcpy(&r.vf[10].w[2], q + 8, 4); set_vi(r, 5, r.vi[5] + 1u); } n10 = vfix(vload(r.vf[10])); }
L_0578: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[5]); std::memcpy(&r.vf[5].w[0], q + 0, 4); std::memcpy(&r.vf[5].w[1], q + 4, 4); std::memcpy(&r.vf[5].w[2], q + 8, 4); set_vi(r, 5, r.vi[5] + 1u); } }
L_0580: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[5]); std::memcpy(&r.vf[2], q, 16); set_vi(r, 5, r.vi[5] + 1u); } n2 = vfix(vload(r.vf[2])); }
L_0588: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[5]); std::memcpy(&r.vf[1], q, 16); set_vi(r, 5, r.vi[5] + 1u); } n1 = vfix(vload(r.vf[1])); }
L_0590: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[7] + 0u); std::memcpy(&r.vf[17].w[0], q + 0, 4); std::memcpy(&r.vf[17].w[1], q + 4, 4); std::memcpy(&r.vf[17].w[2], q + 8, 4); } n17 = vfix(vload(r.vf[17])); }
L_0598: { ++fl.t; const v4u uv = vsubn(n10, n18); set_vi(r, 11, r.vi[7] + 1u); vstore(r.vf[31], vsel(vload(r.vf[31]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[31], 14u); fl.set_mac(r.mac, r.status); } n31 = vsel(n31, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_05A0: { ++fl.t; const v4u uv = vmuln(n2, vsplat(n2[3])); set_vi(r, 1, r.vi[10] + 3u); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[2], 14u); fl.set_mac(r.mac, r.status); } n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_05A8: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n1[3])); { const std::uint8_t *q = qword(mem, r.vi[1] + 0u); std::memcpy(&r.vf[18].w[0], q + 0, 4); std::memcpy(&r.vf[18].w[1], q + 4, 4); std::memcpy(&r.vf[18].w[2], q + 8, 4); } vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[1], 14u); fl.set_mac(r.mac, r.status); } n18 = vfix(vload(r.vf[18])); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_05B0: { ++fl.t; set_vi(r, 1, r.vi[1] + 3u); }
L_05B8: { ++fl.t; const v4u uv = vmuln(n17, n31); efu(r, 114u, 31u, 2u); vstore(r.vf[30], vsel(vload(r.vf[30]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[30], 14u); fl.set_mac(r.mac, r.status); } n30 = vsel(n30, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_05C0: { ++fl.t; const v4u uv = vsubn(n10, n18); pend = r.vi[7] == r.vi[4]; vstore(r.vf[31], vsel(vload(r.vf[31]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[31], 14u); fl.set_mac(r.mac, r.status); } n31 = vsel(n31, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_05C8: { ++fl.t; const v4u uv = vaddn(n30, vsplat(n30[1])); set_vi(r, 13, r.vi[0] + 0u); vstore(r.vf[29], vsel(vload(r.vf[29]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); if (live_flags) { flags(r, r.vf[29], 8u); fl.set_mac(r.mac, r.status); } n29 = vsel(n29, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
    if (pend) { pend = false; goto L_0668; }
L_05D0: { ++fl.t; const v4u uv = vaddn(n29, vsplat(n30[2])); set_vi(r, 12, r.vi[6] + 0u); vstore(r.vf[28], vsel(vload(r.vf[28]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); if (live_flags) { flags(r, r.vf[28], 8u); fl.set_mac(r.mac, r.status); } }
L_05D8: { ++fl.t; const v4u uv = vaddn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[4], 14u); fl.set_mac(r.mac, r.status); } n4 = vsel(n4, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_05E0: { ++fl.t; efu(r, 114u, 31u, 2u); }
L_05E8: { ++fl.t; r.vf[20].w[1] = r.p; }
L_05F0: { ++fl.t; set_vi(r, 13, r.vi[13] + 1u); }
L_05F8: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vload(r.vf[28])); { const std::uint8_t *q = qword(mem, r.vi[11]); std::memcpy(&r.vf[17].w[0], q + 0, 4); std::memcpy(&r.vf[17].w[1], q + 4, 4); std::memcpy(&r.vf[17].w[2], q + 8, 4); set_vi(r, 11, r.vi[11] + 1u); } vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n17 = vfix(vload(r.vf[17])); n27 = vfix(vload(r.vf[27])); }
L_0600: { ++fl.t; const v4u uv = vmuln(n2, n4); { const std::uint8_t *q = qword(mem, r.vi[10] + 4294967295u); std::memcpy(&r.vf[16], q, 16); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[6], 14u); fl.set_mac(r.mac, r.status); } n16 = vfix(vload(r.vf[16])); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0608: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[20].w[1]); fl.end_q(r, qb, vu::continuation_q_delay(1544u, 7u)); } }
L_0610: { ++fl.t; set_vi(r, 14, r.vi[10] + r.vi[0]); }
L_0618: { ++fl.t; const v4u uv = vmuln(n17, n31); set_vi(r, 10, r.vi[10] + 3u); vstore(r.vf[30], vsel(vload(r.vf[30]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[30], 14u); fl.set_mac(r.mac, r.status); } n30 = vsel(n30, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0620: { ++fl.t; const v4u uv = vmuln(n6, vsplat(n27[0])); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[26], 14u); fl.set_mac(r.mac, r.status); } n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0628: { ++fl.t; const v4u uv = vmuln(n16, vsplat(0x3F800000u)); { const std::uint8_t *q = qword(mem, r.vi[1] + 0u); std::memcpy(&r.vf[18], q, 16); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.acc, 14u); fl.set_mac(r.mac, r.status); } n18 = vfix(vload(r.vf[18])); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0630: { ++fl.t; const v4u uv = vmaddn(nacc, n1, n4); set_vi(r, 1, r.vi[1] + 3u); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.acc, 14u); fl.set_mac(r.mac, r.status); } nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0638: { ++fl.t; const v4u uv = vaddn(n30, vsplat(n30[1])); vstore(r.vf[29], vsel(vload(r.vf[29]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); if (live_flags) { flags(r, r.vf[29], 8u); fl.set_mac(r.mac, r.status); } n29 = vsel(n29, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0640: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 1600u, 29413857u); const v4u uv = vmaddn(nacc, n26, vfix(vsplat(r.q))); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[7], 14u); fl.set_mac(r.mac, r.status); } }
L_0648: { ++fl.t; const v4u uv = vsubn(n10, n18); vstore(r.vf[31], vsel(vload(r.vf[31]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[31], 14u); fl.set_mac(r.mac, r.status); } n31 = vsel(n31, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0650: { ++fl.t; const v4u uv = vaddn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[4], 14u); fl.set_mac(r.mac, r.status); } n4 = vsel(n4, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0658: { ++fl.t; pend = r.vi[2] != r.vi[13]; }
L_0660: { ++fl.t; const v4u uv = vaddn(n29, vsplat(n30[2])); { std::uint8_t *q = qword(mem, r.vi[14] + 4294967295u); std::memcpy(q + 0, &r.vf[7].w[0], 4); std::memcpy(q + 4, &r.vf[7].w[1], 4); std::memcpy(q + 8, &r.vf[7].w[2], 4); } vstore(r.vf[28], vsel(vload(r.vf[28]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); if (live_flags) { flags(r, r.vf[28], 8u); fl.set_mac(r.mac, r.status); } }
    if (pend) { pend = false; goto L_05E0; }
L_0668: { ++fl.t; jpc = (static_cast<std::uint32_t>(r.vi[15]) * 8u) & 16383u; pendj = true; }
L_0670: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    return 1656u;
dispatch:
    return jpc;
}

std::uint32_t vu1_3629DCD016897BE2(Vu0Regs &PS2_VU_REGS_RESTRICT r, std::uint8_t *mem, FlagPipe &fl) {
    const bool live_flags = vu::continuation_flags_used();
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    v4u n1 = vfix(vload(r.vf[1]));
    v4u n2 = vfix(vload(r.vf[2]));
    v4u n3 = vfix(vload(r.vf[3]));
    v4u n4 = vfix(vload(r.vf[4]));
    v4u n5 = vfix(vload(r.vf[5]));
    v4u n6 = vfix(vload(r.vf[6]));
    v4u n7 = vfix(vload(r.vf[7]));
    v4u n8 = vfix(vload(r.vf[8]));
    v4u n9 = vfix(vload(r.vf[9]));
    v4u n10 = vfix(vload(r.vf[10]));
    v4u n11 = vfix(vload(r.vf[11]));
    v4u n12 = vfix(vload(r.vf[12]));
    v4u n13 = vfix(vload(r.vf[13]));
    v4u n14 = vfix(vload(r.vf[14]));
    v4u n15 = vfix(vload(r.vf[15]));
    v4u n16 = vfix(vload(r.vf[16]));
    v4u n19 = vfix(vload(r.vf[19]));
    v4u n21 = vfix(vload(r.vf[21]));
    v4u n23 = vfix(vload(r.vf[23]));
    v4u n24 = vfix(vload(r.vf[24]));
    v4u n25 = vfix(vload(r.vf[25]));
    v4u n26 = vfix(vload(r.vf[26]));
    v4u n27 = vfix(vload(r.vf[27]));
    v4u n28 = vfix(vload(r.vf[28]));
    v4u n29 = vfix(vload(r.vf[29]));
    v4u n30 = vfix(vload(r.vf[30]));
    v4u n31 = vfix(vload(r.vf[31]));
    v4u nacc = vfix(vload(r.acc));
    goto L_2810;
L_2810: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[5] + 4u); std::memcpy(&r.vf[5].w[0], q + 0, 4); std::memcpy(&r.vf[5].w[1], q + 4, 4); std::memcpy(&r.vf[5].w[2], q + 8, 4); } n5 = vfix(vload(r.vf[5])); }
L_2818: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[5] + 6u); std::memcpy(&r.vf[24], q, 16); } n24 = vfix(vload(r.vf[24])); }
L_2820: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[5] + 0u); std::memcpy(&r.vf[8], q, 16); } n8 = vfix(vload(r.vf[8])); }
L_2828: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[5] + 1u); std::memcpy(&r.vf[9], q, 16); } n9 = vfix(vload(r.vf[9])); }
L_2830: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[5].w[0]); fl.end_q(r, qb, vu::continuation_q_delay(10288u, 7u)); } }
L_2838: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[5] + 2u); std::memcpy(&r.vf[10], q, 16); } n10 = vfix(vload(r.vf[10])); }
L_2840: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[5] + 3u); std::memcpy(&r.vf[11], q, 16); } n11 = vfix(vload(r.vf[11])); }
L_2848: { ++fl.t; const v4u uv = vaddn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(n24[2])); { const std::uint8_t *q = qword(mem, r.vi[5] + 7u); std::memcpy(&r.vf[17].w[1], q + 4, 4); std::memcpy(&r.vf[17].w[2], q + 8, 4); } vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); if (live_flags) { flags(r, r.vf[12], 8u); fl.set_mac(r.mac, r.status); } n12 = vsel(n12, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2850: { ++fl.t; const v4u uv = vaddn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(n24[3])); r.i = 1124073472u; vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); if (live_flags) { flags(r, r.vf[12], 4u); fl.set_mac(r.mac, r.status); } n12 = vsel(n12, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2858: { ++fl.t; const v4u uv = vaddn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(r, 13, r.vi[4] + 1u); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[12], 2u); fl.set_mac(r.mac, r.status); } n12 = vsel(n12, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_2860: { ++fl.t; const v4u uv = vaddn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); vstore(r.vf[24], vsel(vload(r.vf[24]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[24], 2u); fl.set_mac(r.mac, r.status); } n24 = vsel(n24, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_2868: { ++fl.t; const v4u uv = vsubn(v4u{0u, 0u, 0u, 0x3F800000u}, v4u{0u, 0u, 0u, 0x3F800000u}); r.vf[30].w[1] = r.vf[17].w[1]; vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); if (live_flags) { flags(r, r.vf[7], 1u); fl.set_mac(r.mac, r.status); } n30 = vfix(vload(r.vf[30])); n7 = vsel(n7, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2870: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 10352u, 16777696u); const v4u uv = vaddn(v4u{0u, 0u, 0u, 0x3F800000u}, vfix(vsplat(r.q))); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[5].w[1]); fl.end_q(r, qb, vu::continuation_q_delay(10352u, 7u)); } vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); if (live_flags) { flags(r, r.vf[7], 8u); fl.set_mac(r.mac, r.status); } n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2878: { ++fl.t; const v4u uv = vmuln(v4u{0u, 0u, 0u, 0x3F800000u}, vfix(vsplat(r.i))); vstore(r.vf[21], vsel(vload(r.vf[21]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); if (live_flags) { flags(r, r.vf[21], 1u); fl.set_mac(r.mac, r.status); } n21 = vsel(n21, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2880: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, r.vi[4] + 4294967295u) + 0, 2); set_vi(r, 11, v); } }
L_2888: { ++fl.t; set_vi(r, 1, vu::itop()); }
L_2890: { ++fl.t; }
L_2898: { ++fl.t; }
L_28A0: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[4] + 0u); std::memcpy(&r.vf[30].w[0], q + 0, 4); std::memcpy(&r.vf[30].w[2], q + 8, 4); std::memcpy(&r.vf[30].w[3], q + 12, 4); } n30 = vfix(vload(r.vf[30])); }
L_28A8: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 10408u, 8389088u); const v4u uv = vaddn(v4u{0u, 0u, 0u, 0x3F800000u}, vfix(vsplat(r.q))); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[5].w[2]); fl.end_q(r, qb, vu::continuation_q_delay(10408u, 7u)); } vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); if (live_flags) { flags(r, r.vf[7], 4u); fl.set_mac(r.mac, r.status); } n7 = vsel(n7, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_28B0: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[5] + 5u); std::memcpy(&r.vf[31].w[0], q + 0, 4); std::memcpy(&r.vf[31].w[1], q + 4, 4); std::memcpy(&r.vf[31].w[2], q + 8, 4); } n31 = vfix(vload(r.vf[31])); }
L_28B8: { ++fl.t; r.i = 1124073472u; }
L_28C0: { ++fl.t; set_vi(r, 11, r.vi[11] + r.vi[1]); }
L_28C8: { ++fl.t; set_vi(r, 6, r.vi[11] + 1u); }
L_28D0: { ++fl.t; const v4u uv = vsubn(v4u{0u, 0u, 0u, 0x3F800000u}, n31); { std::uint16_t v; std::memcpy(&v, qword(mem, r.vi[4] + 0u) + 12, 2); set_vi(r, 1, v); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[6], 14u); fl.set_mac(r.mac, r.status); } n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_28D8: { ++fl.t; const v4u uv = vaddn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); if (live_flags) { flags(r, r.vf[6], 1u); fl.set_mac(r.mac, r.status); } n6 = vsel(n6, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_28E0: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 10464u, 4194784u); const v4u uv = vaddn(v4u{0u, 0u, 0u, 0x3F800000u}, vfix(vsplat(r.q))); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[7], 2u); fl.set_mac(r.mac, r.status); } n7 = vsel(n7, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_28E8: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[11] + 0u); std::memcpy(q, &r.vf[30], 16); } }
L_28F0: { ++fl.t; const v4u uv = vaddn(v4u{0u, 0u, 0u, 0x3F800000u}, vfix(vsplat(r.i))); vstore(r.vf[21], vsel(vload(r.vf[21]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[21], 14u); fl.set_mac(r.mac, r.status); } n21 = vsel(n21, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_28F8: { ++fl.t; const v4u uv = vaddn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); r.i = 1132396544u; vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[13], 2u); fl.set_mac(r.mac, r.status); } n13 = vsel(n13, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_2900: { ++fl.t; { const Reg128 m = r.vf[17]; r.vf[30].w[1] = m.w[2]; } n30 = vfix(vload(r.vf[30])); }
L_2908: { ++fl.t; const v4u uv = vmuln(n6, n7); set_vi(r, 2, r.vi[2] - r.vi[1]); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[6], 14u); fl.set_mac(r.mac, r.status); } n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2910: { ++fl.t; const v4u uv = vmuln(n7, vsplat(n8[0])); set_vi(r, 13, r.vi[13] + r.vi[1]); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0xFFFFFFFFu})); if (live_flags) { flags(r, r.acc, 9u); fl.set_mac(r.mac, r.status); } nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0xFFFFFFFFu}); }
L_2918: { ++fl.t; const v4u uv = vmuln(n7, vsplat(n8[1])); set_vi(r, 13, r.vi[13] + r.vi[1]); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); if (live_flags) { flags(r, r.acc, 4u); fl.set_mac(r.mac, r.status); } nacc = vsel(nacc, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2920: { ++fl.t; const v4u uv = vmuln(n7, vsplat(n8[2])); set_vi(r, 13, r.vi[13] + r.vi[1]); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.acc, 2u); fl.set_mac(r.mac, r.status); } nacc = vsel(nacc, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_2928: { ++fl.t; const v4u uv = vmaddn(nacc, n6, vsplat(n8[3])); set_vi(r, 12, r.vi[11] + r.vi[2]); vstore(r.vf[1], uv); if (live_flags) { flags(r, r.vf[1], 15u); fl.set_mac(r.mac, r.status); } n1 = uv; }
L_2930: { ++fl.t; const v4u uv = vmuln(n7, vsplat(n9[0])); set_vi(r, 12, r.vi[12] + r.vi[2]); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0xFFFFFFFFu})); if (live_flags) { flags(r, r.acc, 9u); fl.set_mac(r.mac, r.status); } nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0xFFFFFFFFu}); }
L_2938: { ++fl.t; const v4u uv = vmuln(n7, vsplat(n9[1])); set_vi(r, 12, r.vi[12] + r.vi[2]); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); if (live_flags) { flags(r, r.acc, 4u); fl.set_mac(r.mac, r.status); } nacc = vsel(nacc, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2940: { ++fl.t; const v4u uv = vmuln(n7, vsplat(n9[2])); set_vi(r, 1, r.vi[0] + 16384u); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.acc, 2u); fl.set_mac(r.mac, r.status); } nacc = vsel(nacc, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_2948: { ++fl.t; const v4u uv = vmaddn(nacc, n6, vsplat(n9[3])); set_vi(r, 1, r.vi[1] + 16384u); vstore(r.vf[2], uv); if (live_flags) { flags(r, r.vf[2], 15u); fl.set_mac(r.mac, r.status); } n2 = uv; }
L_2950: { ++fl.t; const v4u uv = vmuln(n7, vsplat(n10[0])); set_vi(r, 2, r.vi[2] + r.vi[1]); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0xFFFFFFFFu})); if (live_flags) { flags(r, r.acc, 9u); fl.set_mac(r.mac, r.status); } nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0xFFFFFFFFu}); }
L_2958: { ++fl.t; const v4u uv = vmuln(n7, vsplat(n10[1])); { std::uint8_t *q = qword(mem, r.vi[11] + 0u); const std::uint32_t v = r.vi[2]; std::memcpy(q + 0, &v, 4); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); if (live_flags) { flags(r, r.acc, 4u); fl.set_mac(r.mac, r.status); } nacc = vsel(nacc, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2960: { ++fl.t; const v4u uv = vmuln(n7, vsplat(n10[2])); { std::uint8_t *q = qword(mem, r.vi[0] + 0u); std::memcpy(q, &r.vf[30], 16); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.acc, 2u); fl.set_mac(r.mac, r.status); } nacc = vsel(nacc, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_2968: { ++fl.t; const v4u uv = vmaddn(nacc, n6, vsplat(n10[3])); { std::uint8_t *q = qword(mem, r.vi[0] + 37u); std::memcpy(q, &r.vf[30], 16); } vstore(r.vf[3], uv); if (live_flags) { flags(r, r.vf[3], 15u); fl.set_mac(r.mac, r.status); } n3 = uv; }
L_2970: { ++fl.t; const v4u uv = vmuln(n7, vsplat(n11[0])); { std::uint8_t *q = qword(mem, r.vi[0] + 74u); std::memcpy(q, &r.vf[30], 16); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0xFFFFFFFFu})); if (live_flags) { flags(r, r.acc, 9u); fl.set_mac(r.mac, r.status); } nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0xFFFFFFFFu}); }
L_2978: { ++fl.t; const v4u uv = vmuln(n7, vsplat(n11[1])); { std::uint8_t *q = qword(mem, r.vi[0] + 74u); const std::uint32_t v = r.vi[1]; std::memcpy(q + 0, &v, 4); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); if (live_flags) { flags(r, r.acc, 4u); fl.set_mac(r.mac, r.status); } nacc = vsel(nacc, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2980: { ++fl.t; const v4u uv = vmuln(n7, vsplat(n11[2])); set_vi(r, 4, r.vi[0] + 0u); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.acc, 2u); fl.set_mac(r.mac, r.status); } nacc = vsel(nacc, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_2988: { ++fl.t; const v4u uv = vmaddn(nacc, n6, vsplat(n11[3])); set_vi(r, 5, r.vi[0] + 37u); vstore(r.vf[4], uv); if (live_flags) { flags(r, r.vf[4], 15u); fl.set_mac(r.mac, r.status); } n4 = uv; }
L_2990: { ++fl.t; const v4u uv = vmuln(n11, vsplat(0x3F800000u)); { const std::uint8_t *q = qword(mem, r.vi[13] + 2u); std::memcpy(&r.vf[15].w[0], q + 0, 4); std::memcpy(&r.vf[15].w[1], q + 4, 4); std::memcpy(&r.vf[15].w[2], q + 8, 4); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } n15 = vfix(vload(r.vf[15])); nacc = uv; }
L_2998: { ++fl.t; const v4u uv = vmuln(n1, n12); set_vi(r, 2, r.vi[0] + 16384u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); if (live_flags) { flags(r, r.vf[1], 12u); fl.set_mac(r.mac, r.status); } n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_29A0: { ++fl.t; const v4u uv = vmuln(n2, n12); set_vi(r, 2, r.vi[2] + 16384u); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); if (live_flags) { flags(r, r.vf[2], 12u); fl.set_mac(r.mac, r.status); } n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_29A8: { ++fl.t; const v4u uv = vmuln(n3, n12); { std::uint8_t *q = qword(mem, r.vi[13] + 2u); const std::uint32_t v = r.vi[2]; std::memcpy(q + 12, &v, 4); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); if (live_flags) { flags(r, r.vf[3], 12u); fl.set_mac(r.mac, r.status); } n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_29B0: { ++fl.t; const v4u uv = vmaddn(nacc, n8, vsplat(n15[0])); { const std::uint8_t *q = qword(mem, r.vi[13] + 1u); std::memcpy(&r.vf[14], q, 16); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } n14 = vfix(vload(r.vf[14])); nacc = uv; }
L_29B8: { ++fl.t; const v4u uv = vmaddn(nacc, n9, vsplat(n15[1])); { const std::uint8_t *q = qword(mem, r.vi[13] + 0u); std::memcpy(&r.vf[13].w[0], q + 0, 4); std::memcpy(&r.vf[13].w[1], q + 4, 4); std::memcpy(&r.vf[13].w[3], q + 12, 4); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } n13 = vfix(vload(r.vf[13])); nacc = uv; }
L_29C0: { ++fl.t; const v4u uv = vmaddn(nacc, n10, vsplat(n15[2])); vstore(r.vf[16], uv); if (live_flags) { flags(r, r.vf[16], 15u); fl.set_mac(r.mac, r.status); } n16 = uv; }
L_29C8: { ++fl.t; const v4u uv = vmuln(n4, n12); { std::uint8_t *q = qword(mem, r.vi[13] + 5u); const std::uint32_t v = r.vi[2]; std::memcpy(q + 12, &v, 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); if (live_flags) { flags(r, r.vf[4], 12u); fl.set_mac(r.mac, r.status); } n4 = vsel(n4, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_29D0: { ++fl.t; const v4u uv = vmuln(n5, n24); r.clip = 0u; fl.set_clip(r.clip, fl.t - 4u); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); if (live_flags) { flags(r, r.vf[5], 12u); fl.set_mac(r.mac, r.status); } n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_29D8: { ++fl.t; const v4u uv = vmuln(n4, vsplat(0x3F800000u)); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[16].w[3]); fl.end_q(r, qb, vu::continuation_q_delay(10712u, 7u)); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_29E0: { ++fl.t; const v4u uv = vmaddn(nacc, n1, vsplat(n15[0])); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_29E8: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n15[1])); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_29F0: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n15[2])); vstore(r.vf[23], uv); if (live_flags) { flags(r, r.vf[23], 15u); fl.set_mac(r.mac, r.status); } n23 = uv; }
L_29F8: { ++fl.t; const v4u uv = vmin(vload(r.vf[14]), vsplat(0x3F800000u)); vstore(r.vf[14], uv); n14 = vfix(vload(r.vf[14])); }
L_2A00: { ++fl.t; const v4u uv = vmin(vload(r.vf[13]), vsplat(r.i)); vstore(r.vf[17], vsel(vload(r.vf[17]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); }
L_2A08: { ++fl.t; const v4u uv = vmuln(n11, vsplat(0x3F800000u)); { const std::uint8_t *q = qword(mem, r.vi[13] + 5u); std::memcpy(&r.vf[15].w[0], q + 0, 4); std::memcpy(&r.vf[15].w[1], q + 4, 4); std::memcpy(&r.vf[15].w[2], q + 8, 4); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } n15 = vfix(vload(r.vf[15])); nacc = uv; }
L_2A10: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[23], r.vf[23].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2A18: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 10776u, 29388188u); const v4u uv = vmuln(n13, vfix(vsplat(r.q))); vstore(r.vf[22], vsel(vload(r.vf[22]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[22], 14u); fl.set_mac(r.mac, r.status); } }
L_2A20: { ++fl.t; const v4u uv = vmuln(n14, n21); set_vi(r, 13, r.vi[13] + 3u); vstore(r.vf[20], uv); if (live_flags) { flags(r, r.vf[20], 15u); fl.set_mac(r.mac, r.status); } }
L_2A28: { ++fl.t; const v4u uv = vmax(vload(r.vf[17]), vsplat(0u)); vstore(r.vf[17], vsel(vload(r.vf[17]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); }
L_2A30: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 10800u, 29394012u); const v4u uv = vmuln(n16, vfix(vsplat(r.q))); set_vi(r, 1, (fl.clip() & 262143u) ? 1u : 0u); vstore(r.vf[17], vsel(vload(r.vf[17]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[17], 14u); fl.set_mac(r.mac, r.status); } }
L_2A38: { ++fl.t; const v4u uv = vmaddn(nacc, n8, vsplat(n15[0])); { std::uint16_t v; std::memcpy(&v, qword(mem, r.vi[13] + 4294967295u) + 12, 2); set_vi(r, 2, v); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2A40: { ++fl.t; const v4u uv = vmaddn(nacc, n9, vsplat(n15[1])); { std::uint8_t *q = qword(mem, r.vi[6]); std::memcpy(q + 0, &r.vf[22].w[0], 4); std::memcpy(q + 4, &r.vf[22].w[1], 4); std::memcpy(q + 8, &r.vf[22].w[2], 4); set_vi(r, 6, r.vi[6] + 1u); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2A48: { ++fl.t; const v4u uv = vmaddn(nacc, n10, vsplat(n15[2])); pend = r.vi[0] != r.vi[1]; vstore(r.vf[16], uv); if (live_flags) { flags(r, r.vf[16], 15u); fl.set_mac(r.mac, r.status); } n16 = uv; }
L_2A50: { ++fl.t; const v4u uv = vftoi(vload(r.vf[17]), 4); vstore(r.vf[18], uv); }
    if (pend) { pend = false; goto L_2AD8; }
L_2A58: { ++fl.t; const v4u uv = vmuln(n4, vsplat(0x3F800000u)); { const std::uint8_t *q = qword(mem, r.vi[13] + 1u); std::memcpy(&r.vf[14], q, 16); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } n14 = vfix(vload(r.vf[14])); nacc = uv; }
L_2A60: { ++fl.t; const v4u uv = vmaddn(nacc, n1, vsplat(n15[0])); { const std::uint8_t *q = qword(mem, r.vi[13] + 0u); std::memcpy(&r.vf[13].w[0], q + 0, 4); std::memcpy(&r.vf[13].w[1], q + 4, 4); std::memcpy(&r.vf[13].w[3], q + 12, 4); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } n13 = vfix(vload(r.vf[13])); nacc = uv; }
L_2A68: { ++fl.t; const v4u uv = vftoi(vload(r.vf[20]), 0); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[16].w[3]); fl.end_q(r, qb, vu::continuation_q_delay(10856u, 7u)); } vstore(r.vf[20], uv); }
L_2A70: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n15[1])); set_vi(r, 1, r.vf[18].w[3]); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2A78: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n15[2])); set_vi(r, 1, r.vi[1] | r.vi[2]); vstore(r.vf[23], uv); if (live_flags) { flags(r, r.vf[23], 15u); fl.set_mac(r.mac, r.status); } n23 = uv; }
L_2A80: { ++fl.t; const v4u uv = vmuln(n11, vsplat(0x3F800000u)); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(r.vi[1]))); r.vf[18].w[3] = v; } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2A88: { ++fl.t; const v4u uv = vmin(vload(r.vf[14]), vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, r.vi[6]); std::memcpy(q, &r.vf[20], 16); set_vi(r, 6, r.vi[6] + 1u); } vstore(r.vf[14], uv); n14 = vfix(vload(r.vf[14])); }
L_2A90: { ++fl.t; const v4u uv = vmin(vload(r.vf[13]), vsplat(r.i)); { const std::uint8_t *q = qword(mem, r.vi[13] + 5u); std::memcpy(&r.vf[15].w[0], q + 0, 4); std::memcpy(&r.vf[15].w[1], q + 4, 4); std::memcpy(&r.vf[15].w[2], q + 8, 4); } vstore(r.vf[17], vsel(vload(r.vf[17]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n15 = vfix(vload(r.vf[15])); }
L_2A98: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[23], r.vf[23].w[3]); pend = r.vi[12] != r.vi[6]; r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2AA0: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 10912u, 29388188u); const v4u uv = vmuln(n13, vfix(vsplat(r.q))); { std::uint8_t *q = qword(mem, r.vi[6]); std::memcpy(q, &r.vf[18], 16); set_vi(r, 6, r.vi[6] + 1u); } vstore(r.vf[22], vsel(vload(r.vf[22]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[22], 14u); fl.set_mac(r.mac, r.status); } }
    if (pend) { pend = false; goto L_2A20; }
L_2AA8: { ++fl.t; set_vi(r, 1, vu::itop()); }
L_2AB0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, r.vi[1] + 0u) + 0, 2); set_vi(r, 11, v); } }
L_2AB8: { ++fl.t; set_vi(r, 11, r.vi[11] + r.vi[1]); }
L_2AC0: { ++fl.t; vu::kick(1, r.vi[11]); }
L_2AC8: { ++fl.t; ending = true; }
L_2AD0: { ++fl.t; }
    if (ending) { r.tpc = 10968u; fl.flush_q(r); return vu::kContinuationEnd; }
L_2AD8: { ++fl.t; const v4u uv = vaddn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); pend = r.vi[0] != r.vi[2]; vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[27], 2u); fl.set_mac(r.mac, r.status); } n27 = vsel(n27, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_2AE0: { ++fl.t; const v4u uv = vaddn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); { const std::uint8_t *q = qword(mem, r.vi[13] + 4294967289u); std::memcpy(&r.vf[25].w[0], q + 0, 4); std::memcpy(&r.vf[25].w[1], q + 4, 4); std::memcpy(&r.vf[25].w[2], q + 8, 4); } vstore(r.vf[28], vsel(vload(r.vf[28]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[28], 2u); fl.set_mac(r.mac, r.status); } n25 = vfix(vload(r.vf[25])); n28 = vsel(n28, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_2A58; }
L_2AE8: { ++fl.t; const v4u uv = vaddn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(r, 1, ((fl.clip() | 16710639u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); vstore(r.vf[30], vsel(vload(r.vf[30]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[30], 2u); fl.set_mac(r.mac, r.status); } n30 = vsel(n30, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_2AF0: { ++fl.t; pend = r.vi[0] != r.vi[1]; }
L_2AF8: { ++fl.t; const v4u uv = vmuln(n4, vsplat(0x3F800000u)); { const std::uint8_t *q = qword(mem, r.vi[13] + 4294967292u); std::memcpy(&r.vf[19].w[0], q + 0, 4); std::memcpy(&r.vf[19].w[1], q + 4, 4); std::memcpy(&r.vf[19].w[2], q + 8, 4); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } n19 = vfix(vload(r.vf[19])); nacc = uv; }
    if (pend) { pend = false; goto L_2F78; }
L_2B00: { ++fl.t; const v4u uv = vmaddn(nacc, n1, vsplat(n25[0])); set_vi(r, 1, ((fl.clip() | 16644063u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2B08: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n25[1])); pend = r.vi[0] != r.vi[1]; vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2B10: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n25[2])); { const std::uint8_t *q = qword(mem, r.vi[13] + 4294967288u); std::memcpy(&r.vf[26], q, 16); } vstore(r.vf[25], uv); if (live_flags) { flags(r, r.vf[25], 15u); fl.set_mac(r.mac, r.status); } n26 = vfix(vload(r.vf[26])); n25 = uv; }
    if (pend) { pend = false; goto L_2F78; }
L_2B18: { ++fl.t; const v4u uv = vmuln(n4, vsplat(0x3F800000u)); { const std::uint8_t *q = qword(mem, r.vi[13] + 4294967291u); std::memcpy(&r.vf[29], q, 16); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } n29 = vfix(vload(r.vf[29])); nacc = uv; }
L_2B20: { ++fl.t; const v4u uv = vmaddn(nacc, n1, vsplat(n19[0])); { const std::uint8_t *q = qword(mem, r.vi[13] + 4294967287u); std::memcpy(&r.vf[27].w[0], q + 0, 4); std::memcpy(&r.vf[27].w[1], q + 4, 4); std::memcpy(&r.vf[27].w[3], q + 12, 4); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } n27 = vfix(vload(r.vf[27])); nacc = uv; }
L_2B28: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n19[1])); { const std::uint8_t *q = qword(mem, r.vi[13] + 4294967290u); std::memcpy(&r.vf[28].w[0], q + 0, 4); std::memcpy(&r.vf[28].w[1], q + 4, 4); std::memcpy(&r.vf[28].w[3], q + 12, 4); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } n28 = vfix(vload(r.vf[28])); nacc = uv; }
L_2B30: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n19[2])); { const std::uint8_t *q = qword(mem, r.vi[13] + 4294967293u); std::memcpy(&r.vf[30].w[0], q + 0, 4); std::memcpy(&r.vf[30].w[1], q + 4, 4); std::memcpy(&r.vf[30].w[3], q + 12, 4); } vstore(r.vf[19], uv); if (live_flags) { flags(r, r.vf[19], 15u); fl.set_mac(r.mac, r.status); } n30 = vfix(vload(r.vf[30])); n19 = uv; }
L_2B38: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[25], r.vf[25].w[3]); set_vi(r, 11, fl.clip() & 0xFFFu); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2B40: { ++fl.t; const v4u uv = vmuln(n25, n24); { std::uint8_t *q = qword(mem, r.vi[4] + 3u); std::memcpy(q, &r.vf[26], 16); } vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[12], 14u); fl.set_mac(r.mac, r.status); } n12 = vsel(n12, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2B48: { ++fl.t; const v4u uv = vmuln(n23, n24); { std::uint8_t *q = qword(mem, r.vi[4] + 7u); std::memcpy(q, &r.vf[29], 16); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[6], 14u); fl.set_mac(r.mac, r.status); } n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2B50: { ++fl.t; const v4u uv = vmuln(n19, n24); { std::uint8_t *q = qword(mem, r.vi[4] + 4u); std::memcpy(q, &r.vf[25], 16); } vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[7], 14u); fl.set_mac(r.mac, r.status); } n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2B58: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[19], r.vf[19].w[3]); set_vi(r, 1, fl.clip() & 0xFFFu); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2B60: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[12], r.vf[25].w[3]); set_vi(r, 11, r.vi[11] | r.vi[1]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2B68: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[6], r.vf[23].w[3]); { const std::uint8_t *q = qword(mem, r.vi[13] + 4294967294u); std::memcpy(&r.vf[25], q, 16); } r.clip = uclip; fl.set_clip(uclip, fl.t); n25 = vfix(vload(r.vf[25])); }
L_2B70: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[7], r.vf[19].w[3]); { std::uint8_t *q = qword(mem, r.vi[4] + 12u); std::memcpy(q, &r.vf[23], 16); } r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2B78: { ++fl.t; set_vi(r, 1, fl.clip() & 0xFFFu); }
L_2B80: { ++fl.t; set_vi(r, 11, r.vi[11] | r.vi[1]); }
L_2B88: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[4] + 11u); std::memcpy(q, &r.vf[25], 16); } }
L_2B90: { ++fl.t; set_vi(r, 1, ((fl.clip() | 16773054u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
L_2B98: { ++fl.t; pend = r.vi[0] != r.vi[1]; }
L_2BA0: { ++fl.t; set_vi(r, 1, ((fl.clip() | 16768893u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
    if (pend) { pend = false; goto L_2F78; }
L_2BA8: { ++fl.t; pend = r.vi[0] != r.vi[1]; }
L_2BB0: { ++fl.t; set_vi(r, 1, ((fl.clip() | 16760571u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
    if (pend) { pend = false; goto L_2F78; }
L_2BB8: { ++fl.t; pend = r.vi[0] != r.vi[1]; }
L_2BC0: { ++fl.t; set_vi(r, 1, ((fl.clip() | 16743927u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
    if (pend) { pend = false; goto L_2F78; }
L_2BC8: { ++fl.t; pend = r.vi[0] != r.vi[1]; }
L_2BD0: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[4] + 8u); std::memcpy(q, &r.vf[19], 16); } }
    if (pend) { pend = false; goto L_2F78; }
L_2BD8: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[4] + 2u); std::memcpy(q, &r.vf[27], 16); } }
L_2BE0: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[4] + 6u); std::memcpy(q, &r.vf[28], 16); } }
L_2BE8: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[4] + 10u); std::memcpy(q, &r.vf[30], 16); } }
L_2BF0: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[4] + 1u); const std::uint32_t v = r.vi[0]; std::memcpy(q + 0, &v, 4); } }
L_2BF8: { ++fl.t; set_vi(r, 1, r.vi[0] + 3u); }
L_2C00: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[4] + 5u); const std::uint32_t v = r.vi[1]; std::memcpy(q + 0, &v, 4); } }
L_2C08: { ++fl.t; set_vi(r, 1, r.vi[0] + 6u); }
L_2C10: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[4] + 9u); const std::uint32_t v = r.vi[1]; std::memcpy(q + 0, &v, 4); } }
L_2C18: { ++fl.t; set_vi(r, 3, r.vi[0] + 12u); }
L_2C20: { ++fl.t; set_vi(r, 9, r.vi[0] + 74u); }
L_2C28: { ++fl.t; vu::kick(1, r.vi[9]); }
L_2C30: { ++fl.t; set_vi(r, 9, r.vi[0] + 16u); }
L_2C38: { ++fl.t; set_vi(r, 9, r.vi[9] & r.vi[11]); }
L_2C40: { ++fl.t; set_vi(r, 7, r.vi[0] + 1612u); }
L_2C48: { ++fl.t; pend = r.vi[0] == r.vi[9]; }
L_2C50: { ++fl.t; }
    if (pend) { pend = false; goto L_2CE8; }
L_2C58: { ++fl.t; set_vi(r, 8, 1421u); pend = true; }
L_2C60: { ++fl.t; }
    if (pend) { pend = false; goto L_2F98; }
L_2C68: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[4] + 4u); std::memcpy(&r.vf[25], q, 16); } n25 = vfix(vload(r.vf[25])); }
L_2C70: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[4] + 8u); std::memcpy(&r.vf[26], q, 16); } n26 = vfix(vload(r.vf[26])); }
L_2C78: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[4] + 12u); std::memcpy(&r.vf[27], q, 16); } n27 = vfix(vload(r.vf[27])); }
L_2C80: { ++fl.t; set_vi(r, 14, r.vi[0] + 12u); }
L_2C88: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[25], r.vf[25].w[3]); { const std::uint8_t *q = qword(mem, r.vi[4] + 16u); std::memcpy(&r.vf[28], q, 16); } r.clip = uclip; fl.set_clip(uclip, fl.t); n28 = vfix(vload(r.vf[28])); }
L_2C90: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[26], r.vf[26].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2C98: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[27], r.vf[27].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2CA0: { ++fl.t; }
L_2CA8: { ++fl.t; set_vi(r, 11, fl.clip() & 0xFFFu); }
L_2CB0: { ++fl.t; set_vi(r, 1, fl.clip() & 0xFFFu); }
L_2CB8: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[28], r.vf[28].w[3]); set_vi(r, 11, r.vi[11] | r.vi[1]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2CC0: { ++fl.t; set_vi(r, 1, fl.clip() & 0xFFFu); }
L_2CC8: { ++fl.t; pend = r.vi[14] == r.vi[3]; }
L_2CD0: { ++fl.t; set_vi(r, 11, r.vi[11] | r.vi[1]); }
    if (pend) { pend = false; goto L_2CE8; }
L_2CD8: { ++fl.t; set_vi(r, 1, fl.clip() & 0xFFFu); }
L_2CE0: { ++fl.t; set_vi(r, 11, r.vi[11] | r.vi[1]); }
L_2CE8: { ++fl.t; set_vi(r, 9, r.vi[0] + 1u); }
L_2CF0: { ++fl.t; set_vi(r, 9, r.vi[9] & r.vi[11]); }
L_2CF8: { ++fl.t; set_vi(r, 7, r.vi[0] + 1588u); }
L_2D00: { ++fl.t; pend = r.vi[0] == r.vi[9]; }
L_2D08: { ++fl.t; }
    if (pend) { pend = false; goto L_2D20; }
L_2D10: { ++fl.t; set_vi(r, 8, 1444u); pend = true; }
L_2D18: { ++fl.t; }
    if (pend) { pend = false; goto L_2F98; }
L_2D20: { ++fl.t; set_vi(r, 9, r.vi[0] + 2u); }
L_2D28: { ++fl.t; set_vi(r, 9, r.vi[9] & r.vi[11]); }
L_2D30: { ++fl.t; set_vi(r, 7, r.vi[0] + 1594u); }
L_2D38: { ++fl.t; pend = r.vi[0] == r.vi[9]; }
L_2D40: { ++fl.t; }
    if (pend) { pend = false; goto L_2D58; }
L_2D48: { ++fl.t; set_vi(r, 8, 1451u); pend = true; }
L_2D50: { ++fl.t; }
    if (pend) { pend = false; goto L_2F98; }
L_2D58: { ++fl.t; set_vi(r, 9, r.vi[0] + 4u); }
L_2D60: { ++fl.t; set_vi(r, 9, r.vi[9] & r.vi[11]); }
L_2D68: { ++fl.t; set_vi(r, 7, r.vi[0] + 1600u); }
L_2D70: { ++fl.t; pend = r.vi[0] == r.vi[9]; }
L_2D78: { ++fl.t; }
    if (pend) { pend = false; goto L_2D90; }
L_2D80: { ++fl.t; set_vi(r, 8, 1458u); pend = true; }
L_2D88: { ++fl.t; }
    if (pend) { pend = false; goto L_2F98; }
L_2D90: { ++fl.t; set_vi(r, 9, r.vi[0] + 8u); }
L_2D98: { ++fl.t; set_vi(r, 9, r.vi[9] & r.vi[11]); }
L_2DA0: { ++fl.t; set_vi(r, 7, r.vi[0] + 1606u); }
L_2DA8: { ++fl.t; pend = r.vi[0] == r.vi[9]; }
L_2DB0: { ++fl.t; }
    if (pend) { pend = false; goto L_2DC8; }
L_2DB8: { ++fl.t; set_vi(r, 8, 1465u); pend = true; }
L_2DC0: { ++fl.t; }
    if (pend) { pend = false; goto L_2F98; }
L_2DC8: { ++fl.t; set_vi(r, 9, r.vi[0] + 32u); }
L_2DD0: { ++fl.t; set_vi(r, 9, r.vi[9] & r.vi[11]); }
L_2DD8: { ++fl.t; set_vi(r, 7, r.vi[0] + 1618u); }
L_2DE0: { ++fl.t; pend = r.vi[0] == r.vi[9]; }
L_2DE8: { ++fl.t; }
    if (pend) { pend = false; goto L_2E00; }
L_2DF0: { ++fl.t; set_vi(r, 8, 1472u); pend = true; }
L_2DF8: { ++fl.t; }
    if (pend) { pend = false; goto L_2F98; }
L_2E00: { ++fl.t; set_vi(r, 3, r.vi[3] + r.vi[4]); }
L_2E08: { ++fl.t; set_vi(r, 14, r.vi[4] + r.vi[0]); }
L_2E10: { ++fl.t; set_vi(r, 15, r.vi[5] + 1u); }
L_2E18: { ++fl.t; set_vi(r, 10, r.vi[0] + 16384u); }
L_2E20: { ++fl.t; set_vi(r, 10, r.vi[10] + 16384u); }
L_2E28: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, r.vi[14] + 1u) + 0, 2); set_vi(r, 1, v); } }
L_2E30: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[14] + 4u); std::memcpy(&r.vf[25], q, 16); } n25 = vfix(vload(r.vf[25])); }
L_2E38: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[14] + 2u); std::memcpy(&r.vf[26], q, 16); } n26 = vfix(vload(r.vf[26])); }
L_2E40: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[14] + 3u); std::memcpy(&r.vf[27], q, 16); } n27 = vfix(vload(r.vf[27])); }
L_2E48: { ++fl.t; pend = static_cast<std::int16_t>(r.vi[1]) < 0; }
L_2E50: { ++fl.t; set_vi(r, 1, r.vi[13] + r.vi[1]); }
    if (pend) { pend = false; goto L_2EA0; }
L_2E58: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[1] + 4294967289u); std::memcpy(&r.vf[25].w[0], q + 0, 4); std::memcpy(&r.vf[25].w[1], q + 4, 4); std::memcpy(&r.vf[25].w[2], q + 8, 4); } n25 = vfix(vload(r.vf[25])); }
L_2E60: { ++fl.t; const v4u uv = vmin(vload(r.vf[27]), vsplat(0x3F800000u)); vstore(r.vf[27], uv); n27 = vfix(vload(r.vf[27])); }
L_2E68: { ++fl.t; const v4u uv = vmuln(n11, vsplat(0x3F800000u)); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2E70: { ++fl.t; const v4u uv = vmaddn(nacc, n8, vsplat(n25[0])); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2E78: { ++fl.t; const v4u uv = vmaddn(nacc, n9, vsplat(n25[1])); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2E80: { ++fl.t; const v4u uv = vmaddn(nacc, n10, vsplat(n25[2])); vstore(r.vf[25], uv); if (live_flags) { flags(r, r.vf[25], 15u); fl.set_mac(r.mac, r.status); } n25 = uv; }
L_2E88: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[25].w[3]); fl.end_q(r, qb, vu::continuation_q_delay(11912u, 7u)); } }
L_2E90: { ++fl.t; pend = true; }
L_2E98: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 11928u, 29412956u); const v4u uv = vmuln(n25, vfix(vsplat(r.q))); fl.flush_q(r); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[25], 14u); fl.set_mac(r.mac, r.status); } n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_2ED8; }
L_2EA0: { ++fl.t; const v4u uv = vsubn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(n25[3])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[25].w[3]); fl.end_q(r, qb, vu::continuation_q_delay(11936u, 7u)); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); if (live_flags) { flags(r, r.vf[6], 8u); fl.set_mac(r.mac, r.status); } n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2EA8: { ++fl.t; const v4u uv = vmin(vload(r.vf[25]), vsplat(r.vf[25].w[3])); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); n25 = vfix(vload(r.vf[25])); }
L_2EB0: { ++fl.t; const v4u uv = vmin(vload(r.vf[27]), vsplat(0x3F800000u)); vstore(r.vf[27], uv); n27 = vfix(vload(r.vf[27])); }
L_2EB8: { ++fl.t; const v4u uv = vmax(vload(r.vf[25]), vsplat(r.vf[6].w[0])); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); n25 = vfix(vload(r.vf[25])); }
L_2EC0: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 11968u, 29412956u); const v4u uv = vmuln(n25, vfix(vsplat(r.q))); fl.flush_q(r); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[25], 14u); fl.set_mac(r.mac, r.status); } n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2EC8: { ++fl.t; const v4u uv = vmuln(n25, n5); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[25], 14u); fl.set_mac(r.mac, r.status); } n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2ED0: { ++fl.t; const v4u uv = vaddn(n25, n31); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[25], 14u); fl.set_mac(r.mac, r.status); } n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2ED8: { ++fl.t; const v4u uv = vmin(vload(r.vf[26]), vsplat(r.i)); set_vi(r, 10, r.vi[10] + 1u); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n26 = vfix(vload(r.vf[26])); }
L_2EE0: { ++fl.t; const v4u uv = vmuln(n27, n21); set_vi(r, 14, r.vi[14] + 4u); vstore(r.vf[27], uv); if (live_flags) { flags(r, r.vf[27], 15u); fl.set_mac(r.mac, r.status); } n27 = uv; }
L_2EE8: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 12008u, 29415068u); const v4u uv = vmuln(n26, vfix(vsplat(r.q))); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[26], 14u); fl.set_mac(r.mac, r.status); } n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2EF0: { ++fl.t; }
L_2EF8: { ++fl.t; }
L_2F00: { ++fl.t; const v4u uv = vftoi(vload(r.vf[27]), 0); vstore(r.vf[27], uv); n27 = vfix(vload(r.vf[27])); }
L_2F08: { ++fl.t; const v4u uv = vmax(vload(r.vf[26]), vsplat(0u)); { std::uint8_t *q = qword(mem, r.vi[15]); std::memcpy(q + 0, &r.vf[26].w[0], 4); std::memcpy(q + 4, &r.vf[26].w[1], 4); std::memcpy(q + 8, &r.vf[26].w[2], 4); set_vi(r, 15, r.vi[15] + 1u); } vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n25 = vfix(vload(r.vf[25])); }
L_2F10: { ++fl.t; }
L_2F18: { ++fl.t; }
L_2F20: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15]); std::memcpy(q, &r.vf[27], 16); set_vi(r, 15, r.vi[15] + 1u); } }
L_2F28: { ++fl.t; const v4u uv = vftoi(vload(r.vf[25]), 4); vstore(r.vf[25], uv); n25 = vfix(vload(r.vf[25])); }
L_2F30: { ++fl.t; }
L_2F38: { ++fl.t; }
L_2F40: { ++fl.t; pend = r.vi[14] != r.vi[3]; }
L_2F48: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15]); std::memcpy(q, &r.vf[25], 16); set_vi(r, 15, r.vi[15] + 1u); } }
    if (pend) { pend = false; goto L_2E28; }
L_2F50: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[5] + 0u); const std::uint32_t v = r.vi[10]; std::memcpy(q + 0, &v, 4); } }
L_2F58: { ++fl.t; }
L_2F60: { ++fl.t; }
L_2F68: { ++fl.t; }
L_2F70: { ++fl.t; vu::kick(1, r.vi[5]); }
L_2F78: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[19], r.vf[19].w[3]); set_vi(r, 2, r.vi[0] + 16384u); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2F80: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[23], r.vf[23].w[3]); set_vi(r, 2, r.vi[2] + 16384u); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2F88: { ++fl.t; pend = true; }
L_2F90: { ++fl.t; }
    if (pend) { pend = false; goto L_2A58; }
L_2F98: { ++fl.t; set_vi(r, 3, r.vi[3] + r.vi[4]); }
L_2FA0: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[3] + 0u); std::memcpy(&r.vf[25], q, 16); } n25 = vfix(vload(r.vf[25])); }
L_2FA8: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[3] + 4294967295u); std::memcpy(&r.vf[26], q, 16); } n26 = vfix(vload(r.vf[26])); }
L_2FB0: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[3] + 4294967294u); std::memcpy(&r.vf[27], q, 16); } n27 = vfix(vload(r.vf[27])); }
L_2FB8: { ++fl.t; }
L_2FC0: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[25], r.vf[25].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2FC8: { ++fl.t; set_vi(r, 14, r.vi[4] + r.vi[0]); }
L_2FD0: { ++fl.t; set_vi(r, 15, r.vi[5] + r.vi[0]); }
L_2FD8: { ++fl.t; }
L_2FE0: { ++fl.t; set_vi(r, 10, fl.clip() & 0xFFFu); }
L_2FE8: { ++fl.t; set_vi(r, 10, r.vi[10] & r.vi[9]); }
L_2FF0: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[14] + 4u); std::memcpy(&r.vf[28], q, 16); } n28 = vfix(vload(r.vf[28])); }
L_2FF8: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[14] + 3u); std::memcpy(&r.vf[29], q, 16); } n29 = vfix(vload(r.vf[29])); }
L_3000: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[14] + 2u); std::memcpy(&r.vf[30], q, 16); } n30 = vfix(vload(r.vf[30])); }
L_3008: { ++fl.t; set_vi(r, 14, r.vi[14] + 4u); }
L_3010: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[28], r.vf[28].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_3018: { ++fl.t; }
L_3020: { ++fl.t; }
L_3028: { ++fl.t; }
L_3030: { ++fl.t; set_vi(r, 1, fl.clip() & 0xFFFu); }
L_3038: { ++fl.t; set_vi(r, 1, r.vi[1] & r.vi[9]); }
L_3040: { ++fl.t; }
L_3048: { ++fl.t; pend = r.vi[10] == r.vi[1]; }
L_3050: { ++fl.t; }
    if (pend) { pend = false; goto L_3110; }
L_3058: { ++fl.t; pend = r.vi[0] == r.vi[1]; }
L_3060: { ++fl.t; r.vf[12].w[0] = r.vf[28].w[0]; r.vf[12].w[1] = r.vf[28].w[1]; r.vf[12].w[2] = r.vf[28].w[2]; r.vf[12].w[3] = r.vf[28].w[3]; n12 = vfix(vload(r.vf[12])); }
    if (pend) { pend = false; goto L_30B8; }
L_3068: { ++fl.t; r.vf[28].w[0] = r.vf[25].w[0]; r.vf[28].w[1] = r.vf[25].w[1]; r.vf[28].w[2] = r.vf[25].w[2]; r.vf[28].w[3] = r.vf[25].w[3]; n28 = vfix(vload(r.vf[28])); }
L_3070: { ++fl.t; r.vf[25].w[0] = r.vf[12].w[0]; r.vf[25].w[1] = r.vf[12].w[1]; r.vf[25].w[2] = r.vf[12].w[2]; r.vf[25].w[3] = r.vf[12].w[3]; n25 = vfix(vload(r.vf[25])); }
L_3078: { ++fl.t; jpc = (static_cast<std::uint32_t>(r.vi[7]) * 8u) & 16383u; set_vi(r, 10, 1553u); pendj = true; }
L_3080: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_3088: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 12424u, 31508988u); const v4u uv = vmuln(n25, vfix(vsplat(r.q))); set_vi(r, 10, r.vi[0] - 1u); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_3090: { ++fl.t; const v4u uv = vmaddn(nacc, n28, vsplat(n6[3])); { std::uint8_t *q = qword(mem, r.vi[15] + 1u); const std::uint32_t v = r.vi[10]; std::memcpy(q + 0, &v, 4); } vstore(r.vf[12], uv); if (live_flags) { flags(r, r.vf[12], 15u); fl.set_mac(r.mac, r.status); } n12 = uv; }
L_3098: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 12440u, 31517180u); const v4u uv = vmuln(n29, vfix(vsplat(r.q))); r.vf[28].w[0] = r.vf[25].w[0]; r.vf[28].w[1] = r.vf[25].w[1]; r.vf[28].w[2] = r.vf[25].w[2]; r.vf[28].w[3] = r.vf[25].w[3]; vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } n28 = vfix(vload(r.vf[28])); nacc = uv; }
L_30A0: { ++fl.t; const v4u uv = vmaddn(nacc, n26, vsplat(n6[3])); set_vi(r, 15, r.vi[15] + 4u); vstore(r.vf[7], uv); if (live_flags) { flags(r, r.vf[7], 15u); fl.set_mac(r.mac, r.status); } n7 = uv; }
L_30A8: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 12456u, 31519228u); const v4u uv = vmuln(n30, vfix(vsplat(r.q))); pend = true; vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_30B0: { ++fl.t; const v4u uv = vmaddn(nacc, n27, vsplat(n6[3])); vstore(r.vf[6], uv); if (live_flags) { flags(r, r.vf[6], 15u); fl.set_mac(r.mac, r.status); } n6 = uv; }
    if (pend) { pend = false; goto L_30F8; }
L_30B8: { ++fl.t; jpc = (static_cast<std::uint32_t>(r.vi[7]) * 8u) & 16383u; set_vi(r, 10, 1561u); pendj = true; }
L_30C0: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_30C8: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 12488u, 31508988u); const v4u uv = vmuln(n25, vfix(vsplat(r.q))); set_vi(r, 10, r.vi[0] - 1u); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_30D0: { ++fl.t; const v4u uv = vmaddn(nacc, n28, vsplat(n6[3])); { std::uint8_t *q = qword(mem, r.vi[15] + 1u); const std::uint32_t v = r.vi[10]; std::memcpy(q + 0, &v, 4); } vstore(r.vf[12], uv); if (live_flags) { flags(r, r.vf[12], 15u); fl.set_mac(r.mac, r.status); } n12 = uv; }
L_30D8: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 12504u, 31511036u); const v4u uv = vmuln(n26, vfix(vsplat(r.q))); set_vi(r, 15, r.vi[15] + 4u); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_30E0: { ++fl.t; const v4u uv = vmaddn(nacc, n29, vsplat(n6[3])); vstore(r.vf[7], uv); if (live_flags) { flags(r, r.vf[7], 15u); fl.set_mac(r.mac, r.status); } n7 = uv; }
L_30E8: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 12520u, 31513084u); const v4u uv = vmuln(n27, vfix(vsplat(r.q))); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_30F0: { ++fl.t; const v4u uv = vmaddn(nacc, n30, vsplat(n6[3])); vstore(r.vf[6], uv); if (live_flags) { flags(r, r.vf[6], 15u); fl.set_mac(r.mac, r.status); } n6 = uv; }
L_30F8: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15] + 0u); std::memcpy(q, &r.vf[12], 16); } }
L_3100: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15] + 4294967295u); std::memcpy(q, &r.vf[7], 16); } }
L_3108: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15] + 4294967294u); std::memcpy(q, &r.vf[6], 16); } }
L_3110: { ++fl.t; pend = r.vi[0] != r.vi[1]; }
L_3118: { ++fl.t; r.vf[25].w[0] = r.vf[28].w[0]; r.vf[25].w[1] = r.vf[28].w[1]; r.vf[25].w[2] = r.vf[28].w[2]; r.vf[25].w[3] = r.vf[28].w[3]; n25 = vfix(vload(r.vf[25])); }
    if (pend) { pend = false; goto L_3150; }
L_3120: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, r.vi[14] + 4294967293u) + 0, 2); set_vi(r, 10, v); } }
L_3128: { ++fl.t; set_vi(r, 15, r.vi[15] + 4u); }
L_3130: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15] + 0u); std::memcpy(q, &r.vf[28], 16); } }
L_3138: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15] + 4294967295u); std::memcpy(q, &r.vf[29], 16); } }
L_3140: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15] + 4294967294u); std::memcpy(q, &r.vf[30], 16); } }
L_3148: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15] + 4294967293u); const std::uint32_t v = r.vi[10]; std::memcpy(q + 0, &v, 4); } }
L_3150: { ++fl.t; r.vf[26].w[0] = r.vf[29].w[0]; r.vf[26].w[1] = r.vf[29].w[1]; r.vf[26].w[2] = r.vf[29].w[2]; r.vf[26].w[3] = r.vf[29].w[3]; n26 = vfix(vload(r.vf[26])); }
L_3158: { ++fl.t; r.vf[27].w[0] = r.vf[30].w[0]; r.vf[27].w[1] = r.vf[30].w[1]; r.vf[27].w[2] = r.vf[30].w[2]; r.vf[27].w[3] = r.vf[30].w[3]; n27 = vfix(vload(r.vf[27])); }
L_3160: { ++fl.t; pend = r.vi[3] != r.vi[14]; }
L_3168: { ++fl.t; set_vi(r, 10, r.vi[1] + r.vi[0]); }
    if (pend) { pend = false; goto L_2FF0; }
L_3170: { ++fl.t; pend = r.vi[5] == r.vi[15]; }
L_3178: { ++fl.t; set_vi(r, 3, r.vi[15] - r.vi[5]); }
    if (pend) { pend = false; goto L_2F78; }
L_3180: { ++fl.t; set_vi(r, 1, r.vi[5] + r.vi[0]); }
L_3188: { ++fl.t; set_vi(r, 5, r.vi[4] + r.vi[0]); }
L_3190: { ++fl.t; jpc = (static_cast<std::uint32_t>(r.vi[8]) * 8u) & 16383u; pendj = true; }
L_3198: { ++fl.t; set_vi(r, 4, r.vi[1] + r.vi[0]); }
    if (pendj) { pendj = false; goto dispatch; }
    return 12704u;
dispatch:
    return jpc;
}

std::uint32_t vu1_38F48CF1C125E523(Vu0Regs &PS2_VU_REGS_RESTRICT r, std::uint8_t *mem, FlagPipe &fl) {
    const bool live_flags = vu::continuation_flags_used();
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    v4u n1 = vfix(vload(r.vf[1]));
    v4u n2 = vfix(vload(r.vf[2]));
    v4u n3 = vfix(vload(r.vf[3]));
    v4u n10 = vfix(vload(r.vf[10]));
    v4u n12 = vfix(vload(r.vf[12]));
    v4u nacc = vfix(vload(r.acc));
    goto L_1B68;
L_1B68: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[4] + 1u); std::memcpy(&r.vf[12].w[0], q + 0, 4); std::memcpy(&r.vf[12].w[1], q + 4, 4); } n12 = vfix(vload(r.vf[12])); }
L_1B70: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[5]); std::memcpy(&r.vf[1], q, 16); set_vi(r, 5, r.vi[5] + 1u); } n1 = vfix(vload(r.vf[1])); }
L_1B78: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[5]); std::memcpy(&r.vf[2], q, 16); set_vi(r, 5, r.vi[5] + 1u); } n2 = vfix(vload(r.vf[2])); }
L_1B80: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[5]); std::memcpy(&r.vf[3], q, 16); set_vi(r, 5, r.vi[5] + 1u); } n3 = vfix(vload(r.vf[3])); }
L_1B88: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n12[0])); { const std::uint8_t *q = qword(mem, r.vi[4] + 4u); std::memcpy(&r.vf[10].w[0], q + 0, 4); std::memcpy(&r.vf[10].w[1], q + 4, 4); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.acc, 14u); fl.set_mac(r.mac, r.status); } n10 = vfix(vload(r.vf[10])); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1B90: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n12[1])); set_vi(r, 12, r.vi[4] + r.vi[2]); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.acc, 14u); fl.set_mac(r.mac, r.status); } nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1B98: { ++fl.t; set_vi(r, 12, r.vi[12] + r.vi[2]); }
L_1BA0: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(0x3F800000u)); set_vi(r, 12, r.vi[12] + r.vi[2]); vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[13], 14u); fl.set_mac(r.mac, r.status); } }
L_1BA8: { ++fl.t; set_vi(r, 13, r.vi[4] + r.vi[0]); }
L_1BB0: { ++fl.t; const v4u uv = vmuln(n3, vsplat(0x3F800000u)); set_vi(r, 13, r.vi[13] + 3u); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); if (live_flags) { flags(r, r.acc, 12u); fl.set_mac(r.mac, r.status); } nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_1BB8: { ++fl.t; const v4u uv = vmaddn(nacc, n1, vsplat(n10[0])); { const std::uint8_t *q = qword(mem, r.vi[13] + 4u); std::memcpy(&r.vf[12].w[0], q + 0, 4); std::memcpy(&r.vf[12].w[1], q + 4, 4); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); if (live_flags) { flags(r, r.acc, 12u); fl.set_mac(r.mac, r.status); } n12 = vfix(vload(r.vf[12])); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_1BC0: { ++fl.t; pend = r.vi[12] == r.vi[13]; }
L_1BC8: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n10[1])); { std::uint8_t *q = qword(mem, r.vi[13] + 4294967294u); std::memcpy(q + 0, &r.vf[13].w[0], 4); std::memcpy(q + 4, &r.vf[13].w[1], 4); } vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); if (live_flags) { flags(r, r.vf[11], 12u); fl.set_mac(r.mac, r.status); } }
    if (pend) { pend = false; goto L_1BF0; }
L_1BD0: { ++fl.t; const v4u uv = vmuln(n3, vsplat(0x3F800000u)); set_vi(r, 13, r.vi[13] + 3u); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); if (live_flags) { flags(r, r.acc, 12u); fl.set_mac(r.mac, r.status); } nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_1BD8: { ++fl.t; const v4u uv = vmaddn(nacc, n1, vsplat(n12[0])); { const std::uint8_t *q = qword(mem, r.vi[13] + 4u); std::memcpy(&r.vf[10].w[0], q + 0, 4); std::memcpy(&r.vf[10].w[1], q + 4, 4); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); if (live_flags) { flags(r, r.acc, 12u); fl.set_mac(r.mac, r.status); } n10 = vfix(vload(r.vf[10])); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_1BE0: { ++fl.t; pend = r.vi[12] != r.vi[13]; }
L_1BE8: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n12[1])); { std::uint8_t *q = qword(mem, r.vi[13] + 4294967294u); std::memcpy(q + 0, &r.vf[11].w[0], 4); std::memcpy(q + 4, &r.vf[11].w[1], 4); } vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); if (live_flags) { flags(r, r.vf[13], 12u); fl.set_mac(r.mac, r.status); } }
    if (pend) { pend = false; goto L_1BB0; }
L_1BF0: { ++fl.t; jpc = (static_cast<std::uint32_t>(r.vi[15]) * 8u) & 16383u; pendj = true; }
L_1BF8: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    return 7168u;
dispatch:
    return jpc;
}

std::uint32_t vu1_3B434CB64239C8A0(Vu0Regs &PS2_VU_REGS_RESTRICT r, std::uint8_t *mem, FlagPipe &fl) {
    const bool live_flags = vu::continuation_flags_used();
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    v4u n1 = vfix(vload(r.vf[1]));
    v4u n2 = vfix(vload(r.vf[2]));
    v4u n3 = vfix(vload(r.vf[3]));
    v4u n4 = vfix(vload(r.vf[4]));
    v4u n5 = vfix(vload(r.vf[5]));
    v4u n6 = vfix(vload(r.vf[6]));
    v4u n8 = vfix(vload(r.vf[8]));
    v4u n9 = vfix(vload(r.vf[9]));
    v4u n10 = vfix(vload(r.vf[10]));
    v4u n11 = vfix(vload(r.vf[11]));
    v4u n13 = vfix(vload(r.vf[13]));
    v4u n14 = vfix(vload(r.vf[14]));
    v4u n15 = vfix(vload(r.vf[15]));
    v4u n16 = vfix(vload(r.vf[16]));
    v4u n19 = vfix(vload(r.vf[19]));
    v4u n21 = vfix(vload(r.vf[21]));
    v4u n23 = vfix(vload(r.vf[23]));
    v4u n24 = vfix(vload(r.vf[24]));
    v4u n25 = vfix(vload(r.vf[25]));
    v4u n26 = vfix(vload(r.vf[26]));
    v4u n27 = vfix(vload(r.vf[27]));
    v4u n28 = vfix(vload(r.vf[28]));
    v4u n29 = vfix(vload(r.vf[29]));
    v4u n30 = vfix(vload(r.vf[30]));
    v4u n31 = vfix(vload(r.vf[31]));
    v4u nacc = vfix(vload(r.acc));
    goto L_2DC8;
L_2A20: { ++fl.t; const v4u uv = vmuln(n14, n21); set_vi(r, 13, r.vi[13] + 3u); vstore(r.vf[20], uv); if (live_flags) { flags(r, r.vf[20], 15u); fl.set_mac(r.mac, r.status); } }
L_2A28: { ++fl.t; const v4u uv = vmax(vload(r.vf[17]), vsplat(0u)); vstore(r.vf[17], vsel(vload(r.vf[17]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); }
L_2A30: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 10800u, 29394012u); const v4u uv = vmuln(n16, vfix(vsplat(r.q))); set_vi(r, 1, (fl.clip() & 262143u) ? 1u : 0u); vstore(r.vf[17], vsel(vload(r.vf[17]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[17], 14u); fl.set_mac(r.mac, r.status); } }
L_2A38: { ++fl.t; const v4u uv = vmaddn(nacc, n8, vsplat(n15[0])); { std::uint16_t v; std::memcpy(&v, qword(mem, r.vi[13] + 4294967295u) + 12, 2); set_vi(r, 2, v); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2A40: { ++fl.t; const v4u uv = vmaddn(nacc, n9, vsplat(n15[1])); { std::uint8_t *q = qword(mem, r.vi[6]); std::memcpy(q + 0, &r.vf[22].w[0], 4); std::memcpy(q + 4, &r.vf[22].w[1], 4); std::memcpy(q + 8, &r.vf[22].w[2], 4); set_vi(r, 6, r.vi[6] + 1u); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2A48: { ++fl.t; const v4u uv = vmaddn(nacc, n10, vsplat(n15[2])); pend = r.vi[0] != r.vi[1]; vstore(r.vf[16], uv); if (live_flags) { flags(r, r.vf[16], 15u); fl.set_mac(r.mac, r.status); } n16 = uv; }
L_2A50: { ++fl.t; const v4u uv = vftoi(vload(r.vf[17]), 4); vstore(r.vf[18], uv); }
    if (pend) { pend = false; goto L_2AD8; }
L_2A58: { ++fl.t; const v4u uv = vmuln(n4, vsplat(0x3F800000u)); { const std::uint8_t *q = qword(mem, r.vi[13] + 1u); std::memcpy(&r.vf[14], q, 16); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } n14 = vfix(vload(r.vf[14])); nacc = uv; }
L_2A60: { ++fl.t; const v4u uv = vmaddn(nacc, n1, vsplat(n15[0])); { const std::uint8_t *q = qword(mem, r.vi[13] + 0u); std::memcpy(&r.vf[13].w[0], q + 0, 4); std::memcpy(&r.vf[13].w[1], q + 4, 4); std::memcpy(&r.vf[13].w[3], q + 12, 4); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } n13 = vfix(vload(r.vf[13])); nacc = uv; }
L_2A68: { ++fl.t; const v4u uv = vftoi(vload(r.vf[20]), 0); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[16].w[3]); fl.end_q(r, qb, vu::continuation_q_delay(10856u, 7u)); } vstore(r.vf[20], uv); }
L_2A70: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n15[1])); set_vi(r, 1, r.vf[18].w[3]); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2A78: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n15[2])); set_vi(r, 1, r.vi[1] | r.vi[2]); vstore(r.vf[23], uv); if (live_flags) { flags(r, r.vf[23], 15u); fl.set_mac(r.mac, r.status); } n23 = uv; }
L_2A80: { ++fl.t; const v4u uv = vmuln(n11, vsplat(0x3F800000u)); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(r.vi[1]))); r.vf[18].w[3] = v; } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2A88: { ++fl.t; const v4u uv = vmin(vload(r.vf[14]), vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, r.vi[6]); std::memcpy(q, &r.vf[20], 16); set_vi(r, 6, r.vi[6] + 1u); } vstore(r.vf[14], uv); n14 = vfix(vload(r.vf[14])); }
L_2A90: { ++fl.t; const v4u uv = vmin(vload(r.vf[13]), vsplat(r.i)); { const std::uint8_t *q = qword(mem, r.vi[13] + 5u); std::memcpy(&r.vf[15].w[0], q + 0, 4); std::memcpy(&r.vf[15].w[1], q + 4, 4); std::memcpy(&r.vf[15].w[2], q + 8, 4); } vstore(r.vf[17], vsel(vload(r.vf[17]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n15 = vfix(vload(r.vf[15])); }
L_2A98: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[23], r.vf[23].w[3]); pend = r.vi[12] != r.vi[6]; r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2AA0: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 10912u, 29388188u); const v4u uv = vmuln(n13, vfix(vsplat(r.q))); { std::uint8_t *q = qword(mem, r.vi[6]); std::memcpy(q, &r.vf[18], 16); set_vi(r, 6, r.vi[6] + 1u); } vstore(r.vf[22], vsel(vload(r.vf[22]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[22], 14u); fl.set_mac(r.mac, r.status); } }
    if (pend) { pend = false; goto L_2A20; }
L_2AA8: { ++fl.t; set_vi(r, 1, vu::itop()); }
L_2AB0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, r.vi[1] + 0u) + 0, 2); set_vi(r, 11, v); } }
L_2AB8: { ++fl.t; set_vi(r, 11, r.vi[11] + r.vi[1]); }
L_2AC0: { ++fl.t; vu::kick(1, r.vi[11]); }
L_2AC8: { ++fl.t; ending = true; }
L_2AD0: { ++fl.t; }
    if (ending) { r.tpc = 10968u; fl.flush_q(r); return vu::kContinuationEnd; }
L_2AD8: { ++fl.t; const v4u uv = vaddn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); pend = r.vi[0] != r.vi[2]; vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[27], 2u); fl.set_mac(r.mac, r.status); } n27 = vsel(n27, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_2AE0: { ++fl.t; const v4u uv = vaddn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); { const std::uint8_t *q = qword(mem, r.vi[13] + 4294967289u); std::memcpy(&r.vf[25].w[0], q + 0, 4); std::memcpy(&r.vf[25].w[1], q + 4, 4); std::memcpy(&r.vf[25].w[2], q + 8, 4); } vstore(r.vf[28], vsel(vload(r.vf[28]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[28], 2u); fl.set_mac(r.mac, r.status); } n25 = vfix(vload(r.vf[25])); n28 = vsel(n28, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_2A58; }
L_2AE8: { ++fl.t; const v4u uv = vaddn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(r, 1, ((fl.clip() | 16710639u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); vstore(r.vf[30], vsel(vload(r.vf[30]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[30], 2u); fl.set_mac(r.mac, r.status); } n30 = vsel(n30, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_2AF0: { ++fl.t; pend = r.vi[0] != r.vi[1]; }
L_2AF8: { ++fl.t; const v4u uv = vmuln(n4, vsplat(0x3F800000u)); { const std::uint8_t *q = qword(mem, r.vi[13] + 4294967292u); std::memcpy(&r.vf[19].w[0], q + 0, 4); std::memcpy(&r.vf[19].w[1], q + 4, 4); std::memcpy(&r.vf[19].w[2], q + 8, 4); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } n19 = vfix(vload(r.vf[19])); nacc = uv; }
    if (pend) { pend = false; goto L_2F78; }
L_2B00: { ++fl.t; const v4u uv = vmaddn(nacc, n1, vsplat(n25[0])); set_vi(r, 1, ((fl.clip() | 16644063u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2B08: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n25[1])); pend = r.vi[0] != r.vi[1]; vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2B10: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n25[2])); { const std::uint8_t *q = qword(mem, r.vi[13] + 4294967288u); std::memcpy(&r.vf[26], q, 16); } vstore(r.vf[25], uv); if (live_flags) { flags(r, r.vf[25], 15u); fl.set_mac(r.mac, r.status); } n26 = vfix(vload(r.vf[26])); n25 = uv; }
    if (pend) { pend = false; goto L_2F78; }
L_2B18: { ++fl.t; const v4u uv = vmuln(n4, vsplat(0x3F800000u)); { const std::uint8_t *q = qword(mem, r.vi[13] + 4294967291u); std::memcpy(&r.vf[29], q, 16); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } n29 = vfix(vload(r.vf[29])); nacc = uv; }
L_2B20: { ++fl.t; const v4u uv = vmaddn(nacc, n1, vsplat(n19[0])); { const std::uint8_t *q = qword(mem, r.vi[13] + 4294967287u); std::memcpy(&r.vf[27].w[0], q + 0, 4); std::memcpy(&r.vf[27].w[1], q + 4, 4); std::memcpy(&r.vf[27].w[3], q + 12, 4); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } n27 = vfix(vload(r.vf[27])); nacc = uv; }
L_2B28: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n19[1])); { const std::uint8_t *q = qword(mem, r.vi[13] + 4294967290u); std::memcpy(&r.vf[28].w[0], q + 0, 4); std::memcpy(&r.vf[28].w[1], q + 4, 4); std::memcpy(&r.vf[28].w[3], q + 12, 4); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } n28 = vfix(vload(r.vf[28])); nacc = uv; }
L_2B30: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n19[2])); { const std::uint8_t *q = qword(mem, r.vi[13] + 4294967293u); std::memcpy(&r.vf[30].w[0], q + 0, 4); std::memcpy(&r.vf[30].w[1], q + 4, 4); std::memcpy(&r.vf[30].w[3], q + 12, 4); } vstore(r.vf[19], uv); if (live_flags) { flags(r, r.vf[19], 15u); fl.set_mac(r.mac, r.status); } n30 = vfix(vload(r.vf[30])); n19 = uv; }
L_2B38: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[25], r.vf[25].w[3]); set_vi(r, 11, fl.clip() & 0xFFFu); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2B40: { ++fl.t; const v4u uv = vmuln(n25, n24); { std::uint8_t *q = qword(mem, r.vi[4] + 3u); std::memcpy(q, &r.vf[26], 16); } vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[12], 14u); fl.set_mac(r.mac, r.status); } }
L_2B48: { ++fl.t; const v4u uv = vmuln(n23, n24); { std::uint8_t *q = qword(mem, r.vi[4] + 7u); std::memcpy(q, &r.vf[29], 16); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[6], 14u); fl.set_mac(r.mac, r.status); } n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2B50: { ++fl.t; const v4u uv = vmuln(n19, n24); { std::uint8_t *q = qword(mem, r.vi[4] + 4u); std::memcpy(q, &r.vf[25], 16); } vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[7], 14u); fl.set_mac(r.mac, r.status); } }
L_2B58: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[19], r.vf[19].w[3]); set_vi(r, 1, fl.clip() & 0xFFFu); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2B60: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[12], r.vf[25].w[3]); set_vi(r, 11, r.vi[11] | r.vi[1]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2B68: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[6], r.vf[23].w[3]); { const std::uint8_t *q = qword(mem, r.vi[13] + 4294967294u); std::memcpy(&r.vf[25], q, 16); } r.clip = uclip; fl.set_clip(uclip, fl.t); n25 = vfix(vload(r.vf[25])); }
L_2B70: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[7], r.vf[19].w[3]); { std::uint8_t *q = qword(mem, r.vi[4] + 12u); std::memcpy(q, &r.vf[23], 16); } r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2B78: { ++fl.t; set_vi(r, 1, fl.clip() & 0xFFFu); }
L_2B80: { ++fl.t; set_vi(r, 11, r.vi[11] | r.vi[1]); }
L_2B88: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[4] + 11u); std::memcpy(q, &r.vf[25], 16); } }
L_2B90: { ++fl.t; set_vi(r, 1, ((fl.clip() | 16773054u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
L_2B98: { ++fl.t; pend = r.vi[0] != r.vi[1]; }
L_2BA0: { ++fl.t; set_vi(r, 1, ((fl.clip() | 16768893u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
    if (pend) { pend = false; goto L_2F78; }
L_2BA8: { ++fl.t; pend = r.vi[0] != r.vi[1]; }
L_2BB0: { ++fl.t; set_vi(r, 1, ((fl.clip() | 16760571u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
    if (pend) { pend = false; goto L_2F78; }
L_2BB8: { ++fl.t; pend = r.vi[0] != r.vi[1]; }
L_2BC0: { ++fl.t; set_vi(r, 1, ((fl.clip() | 16743927u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
    if (pend) { pend = false; goto L_2F78; }
L_2BC8: { ++fl.t; pend = r.vi[0] != r.vi[1]; }
L_2BD0: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[4] + 8u); std::memcpy(q, &r.vf[19], 16); } }
    if (pend) { pend = false; goto L_2F78; }
L_2BD8: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[4] + 2u); std::memcpy(q, &r.vf[27], 16); } }
L_2BE0: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[4] + 6u); std::memcpy(q, &r.vf[28], 16); } }
L_2BE8: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[4] + 10u); std::memcpy(q, &r.vf[30], 16); } }
L_2BF0: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[4] + 1u); const std::uint32_t v = r.vi[0]; std::memcpy(q + 0, &v, 4); } }
L_2BF8: { ++fl.t; set_vi(r, 1, r.vi[0] + 3u); }
L_2C00: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[4] + 5u); const std::uint32_t v = r.vi[1]; std::memcpy(q + 0, &v, 4); } }
L_2C08: { ++fl.t; set_vi(r, 1, r.vi[0] + 6u); }
L_2C10: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[4] + 9u); const std::uint32_t v = r.vi[1]; std::memcpy(q + 0, &v, 4); } }
L_2C18: { ++fl.t; set_vi(r, 3, r.vi[0] + 12u); }
L_2C20: { ++fl.t; set_vi(r, 9, r.vi[0] + 74u); }
L_2C28: { ++fl.t; vu::kick(1, r.vi[9]); }
L_2C30: { ++fl.t; set_vi(r, 9, r.vi[0] + 16u); }
L_2C38: { ++fl.t; set_vi(r, 9, r.vi[9] & r.vi[11]); }
L_2C40: { ++fl.t; set_vi(r, 7, r.vi[0] + 1612u); }
L_2C48: { ++fl.t; pend = r.vi[0] == r.vi[9]; }
L_2C50: { ++fl.t; }
    if (pend) { pend = false; goto L_2CE8; }
L_2C58: { ++fl.t; set_vi(r, 8, 1421u); pend = true; }
L_2C60: { ++fl.t; }
    if (pend) { pend = false; goto L_2F98; }
L_2C68: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[4] + 4u); std::memcpy(&r.vf[25], q, 16); } n25 = vfix(vload(r.vf[25])); }
L_2C70: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[4] + 8u); std::memcpy(&r.vf[26], q, 16); } n26 = vfix(vload(r.vf[26])); }
L_2C78: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[4] + 12u); std::memcpy(&r.vf[27], q, 16); } n27 = vfix(vload(r.vf[27])); }
L_2C80: { ++fl.t; set_vi(r, 14, r.vi[0] + 12u); }
L_2C88: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[25], r.vf[25].w[3]); { const std::uint8_t *q = qword(mem, r.vi[4] + 16u); std::memcpy(&r.vf[28], q, 16); } r.clip = uclip; fl.set_clip(uclip, fl.t); n28 = vfix(vload(r.vf[28])); }
L_2C90: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[26], r.vf[26].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2C98: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[27], r.vf[27].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2CA0: { ++fl.t; }
L_2CA8: { ++fl.t; set_vi(r, 11, fl.clip() & 0xFFFu); }
L_2CB0: { ++fl.t; set_vi(r, 1, fl.clip() & 0xFFFu); }
L_2CB8: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[28], r.vf[28].w[3]); set_vi(r, 11, r.vi[11] | r.vi[1]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2CC0: { ++fl.t; set_vi(r, 1, fl.clip() & 0xFFFu); }
L_2CC8: { ++fl.t; pend = r.vi[14] == r.vi[3]; }
L_2CD0: { ++fl.t; set_vi(r, 11, r.vi[11] | r.vi[1]); }
    if (pend) { pend = false; goto L_2CE8; }
L_2CD8: { ++fl.t; set_vi(r, 1, fl.clip() & 0xFFFu); }
L_2CE0: { ++fl.t; set_vi(r, 11, r.vi[11] | r.vi[1]); }
L_2CE8: { ++fl.t; set_vi(r, 9, r.vi[0] + 1u); }
L_2CF0: { ++fl.t; set_vi(r, 9, r.vi[9] & r.vi[11]); }
L_2CF8: { ++fl.t; set_vi(r, 7, r.vi[0] + 1588u); }
L_2D00: { ++fl.t; pend = r.vi[0] == r.vi[9]; }
L_2D08: { ++fl.t; }
    if (pend) { pend = false; goto L_2D20; }
L_2D10: { ++fl.t; set_vi(r, 8, 1444u); pend = true; }
L_2D18: { ++fl.t; }
    if (pend) { pend = false; goto L_2F98; }
L_2D20: { ++fl.t; set_vi(r, 9, r.vi[0] + 2u); }
L_2D28: { ++fl.t; set_vi(r, 9, r.vi[9] & r.vi[11]); }
L_2D30: { ++fl.t; set_vi(r, 7, r.vi[0] + 1594u); }
L_2D38: { ++fl.t; pend = r.vi[0] == r.vi[9]; }
L_2D40: { ++fl.t; }
    if (pend) { pend = false; goto L_2D58; }
L_2D48: { ++fl.t; set_vi(r, 8, 1451u); pend = true; }
L_2D50: { ++fl.t; }
    if (pend) { pend = false; goto L_2F98; }
L_2D58: { ++fl.t; set_vi(r, 9, r.vi[0] + 4u); }
L_2D60: { ++fl.t; set_vi(r, 9, r.vi[9] & r.vi[11]); }
L_2D68: { ++fl.t; set_vi(r, 7, r.vi[0] + 1600u); }
L_2D70: { ++fl.t; pend = r.vi[0] == r.vi[9]; }
L_2D78: { ++fl.t; }
    if (pend) { pend = false; goto L_2D90; }
L_2D80: { ++fl.t; set_vi(r, 8, 1458u); pend = true; }
L_2D88: { ++fl.t; }
    if (pend) { pend = false; goto L_2F98; }
L_2D90: { ++fl.t; set_vi(r, 9, r.vi[0] + 8u); }
L_2D98: { ++fl.t; set_vi(r, 9, r.vi[9] & r.vi[11]); }
L_2DA0: { ++fl.t; set_vi(r, 7, r.vi[0] + 1606u); }
L_2DA8: { ++fl.t; pend = r.vi[0] == r.vi[9]; }
L_2DB0: { ++fl.t; }
    if (pend) { pend = false; goto L_2DC8; }
L_2DB8: { ++fl.t; set_vi(r, 8, 1465u); pend = true; }
L_2DC0: { ++fl.t; }
    if (pend) { pend = false; goto L_2F98; }
L_2DC8: { ++fl.t; set_vi(r, 9, r.vi[0] + 32u); }
L_2DD0: { ++fl.t; set_vi(r, 9, r.vi[9] & r.vi[11]); }
L_2DD8: { ++fl.t; set_vi(r, 7, r.vi[0] + 1618u); }
L_2DE0: { ++fl.t; pend = r.vi[0] == r.vi[9]; }
L_2DE8: { ++fl.t; }
    if (pend) { pend = false; goto L_2E00; }
L_2DF0: { ++fl.t; set_vi(r, 8, 1472u); pend = true; }
L_2DF8: { ++fl.t; }
    if (pend) { pend = false; goto L_2F98; }
L_2E00: { ++fl.t; set_vi(r, 3, r.vi[3] + r.vi[4]); }
L_2E08: { ++fl.t; set_vi(r, 14, r.vi[4] + r.vi[0]); }
L_2E10: { ++fl.t; set_vi(r, 15, r.vi[5] + 1u); }
L_2E18: { ++fl.t; set_vi(r, 10, r.vi[0] + 16384u); }
L_2E20: { ++fl.t; set_vi(r, 10, r.vi[10] + 16384u); }
L_2E28: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, r.vi[14] + 1u) + 0, 2); set_vi(r, 1, v); } }
L_2E30: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[14] + 4u); std::memcpy(&r.vf[25], q, 16); } n25 = vfix(vload(r.vf[25])); }
L_2E38: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[14] + 2u); std::memcpy(&r.vf[26], q, 16); } n26 = vfix(vload(r.vf[26])); }
L_2E40: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[14] + 3u); std::memcpy(&r.vf[27], q, 16); } n27 = vfix(vload(r.vf[27])); }
L_2E48: { ++fl.t; pend = static_cast<std::int16_t>(r.vi[1]) < 0; }
L_2E50: { ++fl.t; set_vi(r, 1, r.vi[13] + r.vi[1]); }
    if (pend) { pend = false; goto L_2EA0; }
L_2E58: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[1] + 4294967289u); std::memcpy(&r.vf[25].w[0], q + 0, 4); std::memcpy(&r.vf[25].w[1], q + 4, 4); std::memcpy(&r.vf[25].w[2], q + 8, 4); } n25 = vfix(vload(r.vf[25])); }
L_2E60: { ++fl.t; const v4u uv = vmin(vload(r.vf[27]), vsplat(0x3F800000u)); vstore(r.vf[27], uv); n27 = vfix(vload(r.vf[27])); }
L_2E68: { ++fl.t; const v4u uv = vmuln(n11, vsplat(0x3F800000u)); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2E70: { ++fl.t; const v4u uv = vmaddn(nacc, n8, vsplat(n25[0])); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2E78: { ++fl.t; const v4u uv = vmaddn(nacc, n9, vsplat(n25[1])); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2E80: { ++fl.t; const v4u uv = vmaddn(nacc, n10, vsplat(n25[2])); vstore(r.vf[25], uv); if (live_flags) { flags(r, r.vf[25], 15u); fl.set_mac(r.mac, r.status); } n25 = uv; }
L_2E88: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[25].w[3]); fl.end_q(r, qb, vu::continuation_q_delay(11912u, 7u)); } }
L_2E90: { ++fl.t; pend = true; }
L_2E98: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 11928u, 29412956u); const v4u uv = vmuln(n25, vfix(vsplat(r.q))); fl.flush_q(r); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[25], 14u); fl.set_mac(r.mac, r.status); } n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_2ED8; }
L_2EA0: { ++fl.t; const v4u uv = vsubn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(n25[3])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[25].w[3]); fl.end_q(r, qb, vu::continuation_q_delay(11936u, 7u)); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); if (live_flags) { flags(r, r.vf[6], 8u); fl.set_mac(r.mac, r.status); } n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2EA8: { ++fl.t; const v4u uv = vmin(vload(r.vf[25]), vsplat(r.vf[25].w[3])); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); n25 = vfix(vload(r.vf[25])); }
L_2EB0: { ++fl.t; const v4u uv = vmin(vload(r.vf[27]), vsplat(0x3F800000u)); vstore(r.vf[27], uv); n27 = vfix(vload(r.vf[27])); }
L_2EB8: { ++fl.t; const v4u uv = vmax(vload(r.vf[25]), vsplat(r.vf[6].w[0])); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); n25 = vfix(vload(r.vf[25])); }
L_2EC0: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 11968u, 29412956u); const v4u uv = vmuln(n25, vfix(vsplat(r.q))); fl.flush_q(r); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[25], 14u); fl.set_mac(r.mac, r.status); } n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2EC8: { ++fl.t; const v4u uv = vmuln(n25, n5); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[25], 14u); fl.set_mac(r.mac, r.status); } n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2ED0: { ++fl.t; const v4u uv = vaddn(n25, n31); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[25], 14u); fl.set_mac(r.mac, r.status); } n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2ED8: { ++fl.t; const v4u uv = vmin(vload(r.vf[26]), vsplat(r.i)); set_vi(r, 10, r.vi[10] + 1u); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n26 = vfix(vload(r.vf[26])); }
L_2EE0: { ++fl.t; const v4u uv = vmuln(n27, n21); set_vi(r, 14, r.vi[14] + 4u); vstore(r.vf[27], uv); if (live_flags) { flags(r, r.vf[27], 15u); fl.set_mac(r.mac, r.status); } n27 = uv; }
L_2EE8: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 12008u, 29415068u); const v4u uv = vmuln(n26, vfix(vsplat(r.q))); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[26], 14u); fl.set_mac(r.mac, r.status); } n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2EF0: { ++fl.t; }
L_2EF8: { ++fl.t; }
L_2F00: { ++fl.t; const v4u uv = vftoi(vload(r.vf[27]), 0); vstore(r.vf[27], uv); n27 = vfix(vload(r.vf[27])); }
L_2F08: { ++fl.t; const v4u uv = vmax(vload(r.vf[26]), vsplat(0u)); { std::uint8_t *q = qword(mem, r.vi[15]); std::memcpy(q + 0, &r.vf[26].w[0], 4); std::memcpy(q + 4, &r.vf[26].w[1], 4); std::memcpy(q + 8, &r.vf[26].w[2], 4); set_vi(r, 15, r.vi[15] + 1u); } vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n25 = vfix(vload(r.vf[25])); }
L_2F10: { ++fl.t; }
L_2F18: { ++fl.t; }
L_2F20: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15]); std::memcpy(q, &r.vf[27], 16); set_vi(r, 15, r.vi[15] + 1u); } }
L_2F28: { ++fl.t; const v4u uv = vftoi(vload(r.vf[25]), 4); vstore(r.vf[25], uv); n25 = vfix(vload(r.vf[25])); }
L_2F30: { ++fl.t; }
L_2F38: { ++fl.t; }
L_2F40: { ++fl.t; pend = r.vi[14] != r.vi[3]; }
L_2F48: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15]); std::memcpy(q, &r.vf[25], 16); set_vi(r, 15, r.vi[15] + 1u); } }
    if (pend) { pend = false; goto L_2E28; }
L_2F50: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[5] + 0u); const std::uint32_t v = r.vi[10]; std::memcpy(q + 0, &v, 4); } }
L_2F58: { ++fl.t; }
L_2F60: { ++fl.t; }
L_2F68: { ++fl.t; }
L_2F70: { ++fl.t; vu::kick(1, r.vi[5]); }
L_2F78: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[19], r.vf[19].w[3]); set_vi(r, 2, r.vi[0] + 16384u); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2F80: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[23], r.vf[23].w[3]); set_vi(r, 2, r.vi[2] + 16384u); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2F88: { ++fl.t; pend = true; }
L_2F90: { ++fl.t; }
    if (pend) { pend = false; goto L_2A58; }
L_2F98: { ++fl.t; set_vi(r, 3, r.vi[3] + r.vi[4]); }
L_2FA0: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[3] + 0u); std::memcpy(&r.vf[25], q, 16); } n25 = vfix(vload(r.vf[25])); }
L_2FA8: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[3] + 4294967295u); std::memcpy(&r.vf[26], q, 16); } n26 = vfix(vload(r.vf[26])); }
L_2FB0: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[3] + 4294967294u); std::memcpy(&r.vf[27], q, 16); } n27 = vfix(vload(r.vf[27])); }
L_2FB8: { ++fl.t; }
L_2FC0: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[25], r.vf[25].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2FC8: { ++fl.t; set_vi(r, 14, r.vi[4] + r.vi[0]); }
L_2FD0: { ++fl.t; set_vi(r, 15, r.vi[5] + r.vi[0]); }
L_2FD8: { ++fl.t; }
L_2FE0: { ++fl.t; set_vi(r, 10, fl.clip() & 0xFFFu); }
L_2FE8: { ++fl.t; set_vi(r, 10, r.vi[10] & r.vi[9]); }
L_2FF0: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[14] + 4u); std::memcpy(&r.vf[28], q, 16); } n28 = vfix(vload(r.vf[28])); }
L_2FF8: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[14] + 3u); std::memcpy(&r.vf[29], q, 16); } n29 = vfix(vload(r.vf[29])); }
L_3000: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[14] + 2u); std::memcpy(&r.vf[30], q, 16); } n30 = vfix(vload(r.vf[30])); }
L_3008: { ++fl.t; set_vi(r, 14, r.vi[14] + 4u); }
L_3010: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[28], r.vf[28].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_3018: { ++fl.t; }
L_3020: { ++fl.t; }
L_3028: { ++fl.t; }
L_3030: { ++fl.t; set_vi(r, 1, fl.clip() & 0xFFFu); }
L_3038: { ++fl.t; set_vi(r, 1, r.vi[1] & r.vi[9]); }
L_3040: { ++fl.t; }
L_3048: { ++fl.t; pend = r.vi[10] == r.vi[1]; }
L_3050: { ++fl.t; }
    if (pend) { pend = false; goto L_3110; }
L_3058: { ++fl.t; pend = r.vi[0] == r.vi[1]; }
L_3060: { ++fl.t; r.vf[12].w[0] = r.vf[28].w[0]; r.vf[12].w[1] = r.vf[28].w[1]; r.vf[12].w[2] = r.vf[28].w[2]; r.vf[12].w[3] = r.vf[28].w[3]; }
    if (pend) { pend = false; goto L_30B8; }
L_3068: { ++fl.t; r.vf[28].w[0] = r.vf[25].w[0]; r.vf[28].w[1] = r.vf[25].w[1]; r.vf[28].w[2] = r.vf[25].w[2]; r.vf[28].w[3] = r.vf[25].w[3]; n28 = vfix(vload(r.vf[28])); }
L_3070: { ++fl.t; r.vf[25].w[0] = r.vf[12].w[0]; r.vf[25].w[1] = r.vf[12].w[1]; r.vf[25].w[2] = r.vf[12].w[2]; r.vf[25].w[3] = r.vf[12].w[3]; n25 = vfix(vload(r.vf[25])); }
L_3078: { ++fl.t; jpc = (static_cast<std::uint32_t>(r.vi[7]) * 8u) & 16383u; set_vi(r, 10, 1553u); pendj = true; }
L_3080: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_3088: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 12424u, 31508988u); const v4u uv = vmuln(n25, vfix(vsplat(r.q))); set_vi(r, 10, r.vi[0] - 1u); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_3090: { ++fl.t; const v4u uv = vmaddn(nacc, n28, vsplat(n6[3])); { std::uint8_t *q = qword(mem, r.vi[15] + 1u); const std::uint32_t v = r.vi[10]; std::memcpy(q + 0, &v, 4); } vstore(r.vf[12], uv); if (live_flags) { flags(r, r.vf[12], 15u); fl.set_mac(r.mac, r.status); } }
L_3098: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 12440u, 31517180u); const v4u uv = vmuln(n29, vfix(vsplat(r.q))); r.vf[28].w[0] = r.vf[25].w[0]; r.vf[28].w[1] = r.vf[25].w[1]; r.vf[28].w[2] = r.vf[25].w[2]; r.vf[28].w[3] = r.vf[25].w[3]; vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } n28 = vfix(vload(r.vf[28])); nacc = uv; }
L_30A0: { ++fl.t; const v4u uv = vmaddn(nacc, n26, vsplat(n6[3])); set_vi(r, 15, r.vi[15] + 4u); vstore(r.vf[7], uv); if (live_flags) { flags(r, r.vf[7], 15u); fl.set_mac(r.mac, r.status); } }
L_30A8: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 12456u, 31519228u); const v4u uv = vmuln(n30, vfix(vsplat(r.q))); pend = true; vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_30B0: { ++fl.t; const v4u uv = vmaddn(nacc, n27, vsplat(n6[3])); vstore(r.vf[6], uv); if (live_flags) { flags(r, r.vf[6], 15u); fl.set_mac(r.mac, r.status); } n6 = uv; }
    if (pend) { pend = false; goto L_30F8; }
L_30B8: { ++fl.t; jpc = (static_cast<std::uint32_t>(r.vi[7]) * 8u) & 16383u; set_vi(r, 10, 1561u); pendj = true; }
L_30C0: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_30C8: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 12488u, 31508988u); const v4u uv = vmuln(n25, vfix(vsplat(r.q))); set_vi(r, 10, r.vi[0] - 1u); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_30D0: { ++fl.t; const v4u uv = vmaddn(nacc, n28, vsplat(n6[3])); { std::uint8_t *q = qword(mem, r.vi[15] + 1u); const std::uint32_t v = r.vi[10]; std::memcpy(q + 0, &v, 4); } vstore(r.vf[12], uv); if (live_flags) { flags(r, r.vf[12], 15u); fl.set_mac(r.mac, r.status); } }
L_30D8: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 12504u, 31511036u); const v4u uv = vmuln(n26, vfix(vsplat(r.q))); set_vi(r, 15, r.vi[15] + 4u); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_30E0: { ++fl.t; const v4u uv = vmaddn(nacc, n29, vsplat(n6[3])); vstore(r.vf[7], uv); if (live_flags) { flags(r, r.vf[7], 15u); fl.set_mac(r.mac, r.status); } }
L_30E8: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 12520u, 31513084u); const v4u uv = vmuln(n27, vfix(vsplat(r.q))); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_30F0: { ++fl.t; const v4u uv = vmaddn(nacc, n30, vsplat(n6[3])); vstore(r.vf[6], uv); if (live_flags) { flags(r, r.vf[6], 15u); fl.set_mac(r.mac, r.status); } n6 = uv; }
L_30F8: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15] + 0u); std::memcpy(q, &r.vf[12], 16); } }
L_3100: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15] + 4294967295u); std::memcpy(q, &r.vf[7], 16); } }
L_3108: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15] + 4294967294u); std::memcpy(q, &r.vf[6], 16); } }
L_3110: { ++fl.t; pend = r.vi[0] != r.vi[1]; }
L_3118: { ++fl.t; r.vf[25].w[0] = r.vf[28].w[0]; r.vf[25].w[1] = r.vf[28].w[1]; r.vf[25].w[2] = r.vf[28].w[2]; r.vf[25].w[3] = r.vf[28].w[3]; n25 = vfix(vload(r.vf[25])); }
    if (pend) { pend = false; goto L_3150; }
L_3120: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, r.vi[14] + 4294967293u) + 0, 2); set_vi(r, 10, v); } }
L_3128: { ++fl.t; set_vi(r, 15, r.vi[15] + 4u); }
L_3130: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15] + 0u); std::memcpy(q, &r.vf[28], 16); } }
L_3138: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15] + 4294967295u); std::memcpy(q, &r.vf[29], 16); } }
L_3140: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15] + 4294967294u); std::memcpy(q, &r.vf[30], 16); } }
L_3148: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15] + 4294967293u); const std::uint32_t v = r.vi[10]; std::memcpy(q + 0, &v, 4); } }
L_3150: { ++fl.t; r.vf[26].w[0] = r.vf[29].w[0]; r.vf[26].w[1] = r.vf[29].w[1]; r.vf[26].w[2] = r.vf[29].w[2]; r.vf[26].w[3] = r.vf[29].w[3]; n26 = vfix(vload(r.vf[26])); }
L_3158: { ++fl.t; r.vf[27].w[0] = r.vf[30].w[0]; r.vf[27].w[1] = r.vf[30].w[1]; r.vf[27].w[2] = r.vf[30].w[2]; r.vf[27].w[3] = r.vf[30].w[3]; n27 = vfix(vload(r.vf[27])); }
L_3160: { ++fl.t; pend = r.vi[3] != r.vi[14]; }
L_3168: { ++fl.t; set_vi(r, 10, r.vi[1] + r.vi[0]); }
    if (pend) { pend = false; goto L_2FF0; }
L_3170: { ++fl.t; pend = r.vi[5] == r.vi[15]; }
L_3178: { ++fl.t; set_vi(r, 3, r.vi[15] - r.vi[5]); }
    if (pend) { pend = false; goto L_2F78; }
L_3180: { ++fl.t; set_vi(r, 1, r.vi[5] + r.vi[0]); }
L_3188: { ++fl.t; set_vi(r, 5, r.vi[4] + r.vi[0]); }
L_3190: { ++fl.t; jpc = (static_cast<std::uint32_t>(r.vi[8]) * 8u) & 16383u; pendj = true; }
L_3198: { ++fl.t; set_vi(r, 4, r.vi[1] + r.vi[0]); }
    if (pendj) { pendj = false; goto dispatch; }
    return 12704u;
dispatch:
    return jpc;
}

std::uint32_t vu1_3D066B1041F006B6(Vu0Regs &PS2_VU_REGS_RESTRICT r, std::uint8_t *mem, FlagPipe &fl) {
    const bool live_flags = vu::continuation_flags_used();
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    v4u n15 = vfix(vload(r.vf[15]));
    v4u n16 = vfix(vload(r.vf[16]));
    v4u n17 = vfix(vload(r.vf[17]));
    v4u n18 = vfix(vload(r.vf[18]));
    goto L_0020;
L_0020: { ++fl.t; set_vi(r, 9, r.vi[4] + r.vi[2]); }
L_0028: { ++fl.t; set_vi(r, 9, r.vi[9] + r.vi[2]); }
L_0030: { ++fl.t; set_vi(r, 9, r.vi[9] + r.vi[2]); }
L_0038: { ++fl.t; const v4u uv = vaddn(n18, n15); { const std::uint8_t *q = qword(mem, r.vi[12]); std::memcpy(&r.vf[17], q, 16); set_vi(r, 12, r.vi[12] + 1u); } vstore(r.vf[18], vsel(vload(r.vf[18]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[18], 14u); fl.set_mac(r.mac, r.status); } n17 = vfix(vload(r.vf[17])); n18 = vsel(n18, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0040: { ++fl.t; set_vi(r, 10, r.vi[10] + 3u); }
L_0048: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[12]); std::memcpy(&r.vf[16], q, 16); set_vi(r, 12, r.vi[12] + 1u); } n16 = vfix(vload(r.vf[16])); }
L_0050: { ++fl.t; pend = r.vi[9] == r.vi[10]; }
L_0058: { ++fl.t; const v4u uv = vaddn(n17, n15); { std::uint8_t *q = qword(mem, r.vi[10] + 4294967295u); std::memcpy(q, &r.vf[18], 16); } vstore(r.vf[17], vsel(vload(r.vf[17]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[17], 14u); fl.set_mac(r.mac, r.status); } n17 = vsel(n17, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_00A0; }
L_0060: { ++fl.t; set_vi(r, 10, r.vi[10] + 3u); }
L_0068: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[12]); std::memcpy(&r.vf[18], q, 16); set_vi(r, 12, r.vi[12] + 1u); } n18 = vfix(vload(r.vf[18])); }
L_0070: { ++fl.t; pend = r.vi[9] == r.vi[10]; }
L_0078: { ++fl.t; const v4u uv = vaddn(n16, n15); { std::uint8_t *q = qword(mem, r.vi[10] + 4294967295u); std::memcpy(q, &r.vf[17], 16); } vstore(r.vf[16], vsel(vload(r.vf[16]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[16], 14u); fl.set_mac(r.mac, r.status); } n16 = vsel(n16, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_00A0; }
L_0080: { ++fl.t; set_vi(r, 10, r.vi[10] + 3u); }
L_0088: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[12]); std::memcpy(&r.vf[17], q, 16); set_vi(r, 12, r.vi[12] + 1u); } n17 = vfix(vload(r.vf[17])); }
L_0090: { ++fl.t; pend = r.vi[9] != r.vi[10]; }
L_0098: { ++fl.t; const v4u uv = vaddn(n18, n15); { std::uint8_t *q = qword(mem, r.vi[10] + 4294967295u); std::memcpy(q, &r.vf[16], 16); } vstore(r.vf[18], vsel(vload(r.vf[18]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[18], 14u); fl.set_mac(r.mac, r.status); } n18 = vsel(n18, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_0040; }
L_00A0: { ++fl.t; jpc = (static_cast<std::uint32_t>(r.vi[15]) * 8u) & 16383u; pendj = true; }
L_00A8: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    return 176u;
dispatch:
    return jpc;
}

std::uint32_t vu1_42E45AD777CB796C(Vu0Regs &PS2_VU_REGS_RESTRICT r, std::uint8_t *mem, FlagPipe &fl) {
    const bool live_flags = vu::continuation_flags_used();
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    v4u n1 = vfix(vload(r.vf[1]));
    v4u n2 = vfix(vload(r.vf[2]));
    v4u n3 = vfix(vload(r.vf[3]));
    v4u n4 = vfix(vload(r.vf[4]));
    v4u n10 = vfix(vload(r.vf[10]));
    v4u n11 = vfix(vload(r.vf[11]));
    v4u n15 = vfix(vload(r.vf[15]));
    v4u n20 = vfix(vload(r.vf[20]));
    v4u n21 = vfix(vload(r.vf[21]));
    v4u n23 = vfix(vload(r.vf[23]));
    v4u n25 = vfix(vload(r.vf[25]));
    v4u nacc = vfix(vload(r.acc));
    goto L_1640;
L_1640: { ++fl.t; const v4u uv = vaddn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); { const std::uint8_t *q = qword(mem, r.vi[5] + 3u); std::memcpy(&r.vf[4], q, 16); } vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[25], 2u); fl.set_mac(r.mac, r.status); } n4 = vfix(vload(r.vf[4])); n25 = vsel(n25, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_1648: { ++fl.t; const v4u uv = vaddn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); { const std::uint8_t *q = qword(mem, r.vi[4] + 3u); std::memcpy(&r.vf[23], q, 16); } vstore(r.vf[15], vsel(vload(r.vf[15]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[15], 2u); fl.set_mac(r.mac, r.status); } n23 = vfix(vload(r.vf[23])); n15 = vsel(n15, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_1650: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[5] + 0u); std::memcpy(&r.vf[1], q, 16); } n1 = vfix(vload(r.vf[1])); }
L_1658: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[5] + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vfix(vload(r.vf[2])); }
L_1660: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[5] + 2u); std::memcpy(&r.vf[3], q, 16); } n3 = vfix(vload(r.vf[3])); }
L_1668: { ++fl.t; const v4u uv = vmuln(n4, vsplat(0x3F800000u)); set_vi(r, 9, r.vi[4] + r.vi[2]); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_1670: { ++fl.t; const v4u uv = vmaddn(nacc, n1, vsplat(n23[0])); { const std::uint8_t *q = qword(mem, r.vi[4] + 6u); std::memcpy(&r.vf[10], q, 16); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } n10 = vfix(vload(r.vf[10])); nacc = uv; }
L_1678: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n23[1])); set_vi(r, 9, r.vi[9] + r.vi[2]); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_1680: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n23[2])); { const std::uint8_t *q = qword(mem, r.vi[4] + 9u); std::memcpy(&r.vf[20], q, 16); } vstore(r.vf[21], uv); if (live_flags) { flags(r, r.vf[21], 15u); fl.set_mac(r.mac, r.status); } n20 = vfix(vload(r.vf[20])); n21 = uv; }
L_1688: { ++fl.t; const v4u uv = vmuln(n4, vsplat(0x3F800000u)); set_vi(r, 9, r.vi[9] + r.vi[2]); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_1690: { ++fl.t; const v4u uv = vmaddn(nacc, n1, vsplat(n10[0])); set_vi(r, 8, r.vi[4] + r.vi[0]); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_1698: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n10[1])); { const std::uint8_t *q = qword(mem, r.vi[4] + 1u); std::memcpy(&r.vf[25].w[0], q + 0, 4); std::memcpy(&r.vf[25].w[1], q + 4, 4); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } n25 = vfix(vload(r.vf[25])); nacc = uv; }
L_16A0: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n10[2])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[21].w[3]); fl.end_q(r, qb, vu::continuation_q_delay(5792u, 7u)); } vstore(r.vf[11], uv); if (live_flags) { flags(r, r.vf[11], 15u); fl.set_mac(r.mac, r.status); } n11 = uv; }
L_16A8: { ++fl.t; const v4u uv = vmuln(n4, vsplat(0x3F800000u)); set_vi(r, 3, r.vi[2] + 16384u); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_16B0: { ++fl.t; set_vi(r, 3, r.vi[3] + 16384u); }
L_16B8: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[4] + 0u); const std::uint32_t v = r.vi[3]; std::memcpy(q + 0, &v, 4); } }
L_16C0: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 5824u, 29404572u); const v4u uv = vmuln(n21, vfix(vsplat(r.q))); fl.flush_q(r); vstore(r.vf[22], vsel(vload(r.vf[22]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[22], 14u); fl.set_mac(r.mac, r.status); } }
L_16C8: { ++fl.t; const v4u uv = vmaddn(nacc, n1, vsplat(n20[0])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[11].w[3]); fl.end_q(r, qb, vu::continuation_q_delay(5832u, 7u)); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_16D0: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 5840u, 29413020u); const v4u uv = vmuln(n25, vfix(vsplat(r.q))); { const std::uint8_t *q = qword(mem, r.vi[8] + 4u); std::memcpy(&r.vf[15].w[0], q + 0, 4); std::memcpy(&r.vf[15].w[1], q + 4, 4); } vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[26], 14u); fl.set_mac(r.mac, r.status); } n15 = vfix(vload(r.vf[15])); }
L_16D8: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n20[1])); r.vf[13].w[3] = r.vf[10].w[3]; vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_16E0: { ++fl.t; const v4u uv = vftoi(vload(r.vf[22]), 4); { const std::uint8_t *q = qword(mem, r.vi[8] + 12u); std::memcpy(&r.vf[10], q, 16); } vstore(r.vf[23], vsel(vload(r.vf[23]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n10 = vfix(vload(r.vf[10])); n23 = vfix(vload(r.vf[23])); }
L_16E8: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n20[2])); set_vi(r, 8, r.vi[8] + 3u); vstore(r.vf[21], uv); if (live_flags) { flags(r, r.vf[21], 15u); fl.set_mac(r.mac, r.status); } n21 = uv; }
L_16F0: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[8] + 4294967294u); std::memcpy(q + 0, &r.vf[26].w[0], 4); std::memcpy(q + 4, &r.vf[26].w[1], 4); std::memcpy(q + 8, &r.vf[26].w[2], 4); } }
L_16F8: { ++fl.t; const v4u uv = vmuln(n4, vsplat(0x3F800000u)); pend = r.vi[8] == r.vi[9]; vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_1700: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 5888u, 29383452u); const v4u uv = vmuln(n11, vfix(vsplat(r.q))); { std::uint8_t *q = qword(mem, r.vi[8] + 0u); std::memcpy(q, &r.vf[23], 16); } vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[12], 14u); fl.set_mac(r.mac, r.status); } }
    if (pend) { pend = false; goto L_1748; }
L_1708: { ++fl.t; const v4u uv = vmaddn(nacc, n1, vsplat(n10[0])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[21].w[3]); fl.end_q(r, qb, vu::continuation_q_delay(5896u, 7u)); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_1710: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 5904u, 29391900u); const v4u uv = vmuln(n15, vfix(vsplat(r.q))); { const std::uint8_t *q = qword(mem, r.vi[8] + 4u); std::memcpy(&r.vf[25].w[0], q + 0, 4); std::memcpy(&r.vf[25].w[1], q + 4, 4); } vstore(r.vf[16], vsel(vload(r.vf[16]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[16], 14u); fl.set_mac(r.mac, r.status); } n25 = vfix(vload(r.vf[25])); }
L_1718: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n10[1])); r.vf[23].w[3] = r.vf[20].w[3]; vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } n23 = vfix(vload(r.vf[23])); nacc = uv; }
L_1720: { ++fl.t; const v4u uv = vftoi(vload(r.vf[12]), 4); { const std::uint8_t *q = qword(mem, r.vi[8] + 12u); std::memcpy(&r.vf[20], q, 16); } vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n20 = vfix(vload(r.vf[20])); }
L_1728: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n10[2])); set_vi(r, 8, r.vi[8] + 3u); vstore(r.vf[11], uv); if (live_flags) { flags(r, r.vf[11], 15u); fl.set_mac(r.mac, r.status); } n11 = uv; }
L_1730: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[8] + 4294967294u); std::memcpy(q + 0, &r.vf[16].w[0], 4); std::memcpy(q + 4, &r.vf[16].w[1], 4); std::memcpy(q + 8, &r.vf[16].w[2], 4); } }
L_1738: { ++fl.t; const v4u uv = vmuln(n4, vsplat(0x3F800000u)); pend = r.vi[8] != r.vi[9]; vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_1740: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 5952u, 29404572u); const v4u uv = vmuln(n21, vfix(vsplat(r.q))); { std::uint8_t *q = qword(mem, r.vi[8] + 0u); std::memcpy(q, &r.vf[13], 16); } vstore(r.vf[22], vsel(vload(r.vf[22]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[22], 14u); fl.set_mac(r.mac, r.status); } }
    if (pend) { pend = false; goto L_16C8; }
L_1748: { ++fl.t; }
L_1750: { ++fl.t; }
L_1758: { ++fl.t; }
L_1760: { ++fl.t; vu::kick(1, r.vi[4]); }
L_1768: { ++fl.t; ending = true; }
L_1770: { ++fl.t; }
    if (ending) { r.tpc = 6008u; fl.flush_q(r); return vu::kContinuationEnd; }
    return 6008u;
dispatch:
    return jpc;
}

std::uint32_t vu1_4AEB7CA3612860D0(Vu0Regs &PS2_VU_REGS_RESTRICT r, std::uint8_t *mem, FlagPipe &fl) {
    const bool live_flags = vu::continuation_flags_used();
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    v4u n1 = vfix(vload(r.vf[1]));
    v4u n2 = vfix(vload(r.vf[2]));
    v4u n3 = vfix(vload(r.vf[3]));
    v4u n4 = vfix(vload(r.vf[4]));
    v4u n5 = vfix(vload(r.vf[5]));
    v4u n6 = vfix(vload(r.vf[6]));
    v4u n8 = vfix(vload(r.vf[8]));
    v4u n9 = vfix(vload(r.vf[9]));
    v4u n10 = vfix(vload(r.vf[10]));
    v4u n11 = vfix(vload(r.vf[11]));
    v4u n13 = vfix(vload(r.vf[13]));
    v4u n14 = vfix(vload(r.vf[14]));
    v4u n15 = vfix(vload(r.vf[15]));
    v4u n16 = vfix(vload(r.vf[16]));
    v4u n19 = vfix(vload(r.vf[19]));
    v4u n21 = vfix(vload(r.vf[21]));
    v4u n23 = vfix(vload(r.vf[23]));
    v4u n24 = vfix(vload(r.vf[24]));
    v4u n25 = vfix(vload(r.vf[25]));
    v4u n26 = vfix(vload(r.vf[26]));
    v4u n27 = vfix(vload(r.vf[27]));
    v4u n28 = vfix(vload(r.vf[28]));
    v4u n29 = vfix(vload(r.vf[29]));
    v4u n30 = vfix(vload(r.vf[30]));
    v4u n31 = vfix(vload(r.vf[31]));
    v4u nacc = vfix(vload(r.acc));
    goto L_2F98;
L_2A20: { ++fl.t; const v4u uv = vmuln(n14, n21); set_vi(r, 13, r.vi[13] + 3u); vstore(r.vf[20], uv); if (live_flags) { flags(r, r.vf[20], 15u); fl.set_mac(r.mac, r.status); } }
L_2A28: { ++fl.t; const v4u uv = vmax(vload(r.vf[17]), vsplat(0u)); vstore(r.vf[17], vsel(vload(r.vf[17]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); }
L_2A30: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 10800u, 29394012u); const v4u uv = vmuln(n16, vfix(vsplat(r.q))); set_vi(r, 1, (fl.clip() & 262143u) ? 1u : 0u); vstore(r.vf[17], vsel(vload(r.vf[17]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[17], 14u); fl.set_mac(r.mac, r.status); } }
L_2A38: { ++fl.t; const v4u uv = vmaddn(nacc, n8, vsplat(n15[0])); { std::uint16_t v; std::memcpy(&v, qword(mem, r.vi[13] + 4294967295u) + 12, 2); set_vi(r, 2, v); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2A40: { ++fl.t; const v4u uv = vmaddn(nacc, n9, vsplat(n15[1])); { std::uint8_t *q = qword(mem, r.vi[6]); std::memcpy(q + 0, &r.vf[22].w[0], 4); std::memcpy(q + 4, &r.vf[22].w[1], 4); std::memcpy(q + 8, &r.vf[22].w[2], 4); set_vi(r, 6, r.vi[6] + 1u); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2A48: { ++fl.t; const v4u uv = vmaddn(nacc, n10, vsplat(n15[2])); pend = r.vi[0] != r.vi[1]; vstore(r.vf[16], uv); if (live_flags) { flags(r, r.vf[16], 15u); fl.set_mac(r.mac, r.status); } n16 = uv; }
L_2A50: { ++fl.t; const v4u uv = vftoi(vload(r.vf[17]), 4); vstore(r.vf[18], uv); }
    if (pend) { pend = false; goto L_2AD8; }
L_2A58: { ++fl.t; const v4u uv = vmuln(n4, vsplat(0x3F800000u)); { const std::uint8_t *q = qword(mem, r.vi[13] + 1u); std::memcpy(&r.vf[14], q, 16); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } n14 = vfix(vload(r.vf[14])); nacc = uv; }
L_2A60: { ++fl.t; const v4u uv = vmaddn(nacc, n1, vsplat(n15[0])); { const std::uint8_t *q = qword(mem, r.vi[13] + 0u); std::memcpy(&r.vf[13].w[0], q + 0, 4); std::memcpy(&r.vf[13].w[1], q + 4, 4); std::memcpy(&r.vf[13].w[3], q + 12, 4); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } n13 = vfix(vload(r.vf[13])); nacc = uv; }
L_2A68: { ++fl.t; const v4u uv = vftoi(vload(r.vf[20]), 0); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[16].w[3]); fl.end_q(r, qb, vu::continuation_q_delay(10856u, 7u)); } vstore(r.vf[20], uv); }
L_2A70: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n15[1])); set_vi(r, 1, r.vf[18].w[3]); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2A78: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n15[2])); set_vi(r, 1, r.vi[1] | r.vi[2]); vstore(r.vf[23], uv); if (live_flags) { flags(r, r.vf[23], 15u); fl.set_mac(r.mac, r.status); } n23 = uv; }
L_2A80: { ++fl.t; const v4u uv = vmuln(n11, vsplat(0x3F800000u)); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(r.vi[1]))); r.vf[18].w[3] = v; } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2A88: { ++fl.t; const v4u uv = vmin(vload(r.vf[14]), vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, r.vi[6]); std::memcpy(q, &r.vf[20], 16); set_vi(r, 6, r.vi[6] + 1u); } vstore(r.vf[14], uv); n14 = vfix(vload(r.vf[14])); }
L_2A90: { ++fl.t; const v4u uv = vmin(vload(r.vf[13]), vsplat(r.i)); { const std::uint8_t *q = qword(mem, r.vi[13] + 5u); std::memcpy(&r.vf[15].w[0], q + 0, 4); std::memcpy(&r.vf[15].w[1], q + 4, 4); std::memcpy(&r.vf[15].w[2], q + 8, 4); } vstore(r.vf[17], vsel(vload(r.vf[17]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n15 = vfix(vload(r.vf[15])); }
L_2A98: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[23], r.vf[23].w[3]); pend = r.vi[12] != r.vi[6]; r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2AA0: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 10912u, 29388188u); const v4u uv = vmuln(n13, vfix(vsplat(r.q))); { std::uint8_t *q = qword(mem, r.vi[6]); std::memcpy(q, &r.vf[18], 16); set_vi(r, 6, r.vi[6] + 1u); } vstore(r.vf[22], vsel(vload(r.vf[22]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[22], 14u); fl.set_mac(r.mac, r.status); } }
    if (pend) { pend = false; goto L_2A20; }
L_2AA8: { ++fl.t; set_vi(r, 1, vu::itop()); }
L_2AB0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, r.vi[1] + 0u) + 0, 2); set_vi(r, 11, v); } }
L_2AB8: { ++fl.t; set_vi(r, 11, r.vi[11] + r.vi[1]); }
L_2AC0: { ++fl.t; vu::kick(1, r.vi[11]); }
L_2AC8: { ++fl.t; ending = true; }
L_2AD0: { ++fl.t; }
    if (ending) { r.tpc = 10968u; fl.flush_q(r); return vu::kContinuationEnd; }
L_2AD8: { ++fl.t; const v4u uv = vaddn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); pend = r.vi[0] != r.vi[2]; vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[27], 2u); fl.set_mac(r.mac, r.status); } n27 = vsel(n27, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_2AE0: { ++fl.t; const v4u uv = vaddn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); { const std::uint8_t *q = qword(mem, r.vi[13] + 4294967289u); std::memcpy(&r.vf[25].w[0], q + 0, 4); std::memcpy(&r.vf[25].w[1], q + 4, 4); std::memcpy(&r.vf[25].w[2], q + 8, 4); } vstore(r.vf[28], vsel(vload(r.vf[28]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[28], 2u); fl.set_mac(r.mac, r.status); } n25 = vfix(vload(r.vf[25])); n28 = vsel(n28, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_2A58; }
L_2AE8: { ++fl.t; const v4u uv = vaddn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(r, 1, ((fl.clip() | 16710639u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); vstore(r.vf[30], vsel(vload(r.vf[30]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[30], 2u); fl.set_mac(r.mac, r.status); } n30 = vsel(n30, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_2AF0: { ++fl.t; pend = r.vi[0] != r.vi[1]; }
L_2AF8: { ++fl.t; const v4u uv = vmuln(n4, vsplat(0x3F800000u)); { const std::uint8_t *q = qword(mem, r.vi[13] + 4294967292u); std::memcpy(&r.vf[19].w[0], q + 0, 4); std::memcpy(&r.vf[19].w[1], q + 4, 4); std::memcpy(&r.vf[19].w[2], q + 8, 4); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } n19 = vfix(vload(r.vf[19])); nacc = uv; }
    if (pend) { pend = false; goto L_2F78; }
L_2B00: { ++fl.t; const v4u uv = vmaddn(nacc, n1, vsplat(n25[0])); set_vi(r, 1, ((fl.clip() | 16644063u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2B08: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n25[1])); pend = r.vi[0] != r.vi[1]; vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2B10: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n25[2])); { const std::uint8_t *q = qword(mem, r.vi[13] + 4294967288u); std::memcpy(&r.vf[26], q, 16); } vstore(r.vf[25], uv); if (live_flags) { flags(r, r.vf[25], 15u); fl.set_mac(r.mac, r.status); } n26 = vfix(vload(r.vf[26])); n25 = uv; }
    if (pend) { pend = false; goto L_2F78; }
L_2B18: { ++fl.t; const v4u uv = vmuln(n4, vsplat(0x3F800000u)); { const std::uint8_t *q = qword(mem, r.vi[13] + 4294967291u); std::memcpy(&r.vf[29], q, 16); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } n29 = vfix(vload(r.vf[29])); nacc = uv; }
L_2B20: { ++fl.t; const v4u uv = vmaddn(nacc, n1, vsplat(n19[0])); { const std::uint8_t *q = qword(mem, r.vi[13] + 4294967287u); std::memcpy(&r.vf[27].w[0], q + 0, 4); std::memcpy(&r.vf[27].w[1], q + 4, 4); std::memcpy(&r.vf[27].w[3], q + 12, 4); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } n27 = vfix(vload(r.vf[27])); nacc = uv; }
L_2B28: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n19[1])); { const std::uint8_t *q = qword(mem, r.vi[13] + 4294967290u); std::memcpy(&r.vf[28].w[0], q + 0, 4); std::memcpy(&r.vf[28].w[1], q + 4, 4); std::memcpy(&r.vf[28].w[3], q + 12, 4); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } n28 = vfix(vload(r.vf[28])); nacc = uv; }
L_2B30: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n19[2])); { const std::uint8_t *q = qword(mem, r.vi[13] + 4294967293u); std::memcpy(&r.vf[30].w[0], q + 0, 4); std::memcpy(&r.vf[30].w[1], q + 4, 4); std::memcpy(&r.vf[30].w[3], q + 12, 4); } vstore(r.vf[19], uv); if (live_flags) { flags(r, r.vf[19], 15u); fl.set_mac(r.mac, r.status); } n30 = vfix(vload(r.vf[30])); n19 = uv; }
L_2B38: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[25], r.vf[25].w[3]); set_vi(r, 11, fl.clip() & 0xFFFu); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2B40: { ++fl.t; const v4u uv = vmuln(n25, n24); { std::uint8_t *q = qword(mem, r.vi[4] + 3u); std::memcpy(q, &r.vf[26], 16); } vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[12], 14u); fl.set_mac(r.mac, r.status); } }
L_2B48: { ++fl.t; const v4u uv = vmuln(n23, n24); { std::uint8_t *q = qword(mem, r.vi[4] + 7u); std::memcpy(q, &r.vf[29], 16); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[6], 14u); fl.set_mac(r.mac, r.status); } n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2B50: { ++fl.t; const v4u uv = vmuln(n19, n24); { std::uint8_t *q = qword(mem, r.vi[4] + 4u); std::memcpy(q, &r.vf[25], 16); } vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[7], 14u); fl.set_mac(r.mac, r.status); } }
L_2B58: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[19], r.vf[19].w[3]); set_vi(r, 1, fl.clip() & 0xFFFu); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2B60: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[12], r.vf[25].w[3]); set_vi(r, 11, r.vi[11] | r.vi[1]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2B68: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[6], r.vf[23].w[3]); { const std::uint8_t *q = qword(mem, r.vi[13] + 4294967294u); std::memcpy(&r.vf[25], q, 16); } r.clip = uclip; fl.set_clip(uclip, fl.t); n25 = vfix(vload(r.vf[25])); }
L_2B70: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[7], r.vf[19].w[3]); { std::uint8_t *q = qword(mem, r.vi[4] + 12u); std::memcpy(q, &r.vf[23], 16); } r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2B78: { ++fl.t; set_vi(r, 1, fl.clip() & 0xFFFu); }
L_2B80: { ++fl.t; set_vi(r, 11, r.vi[11] | r.vi[1]); }
L_2B88: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[4] + 11u); std::memcpy(q, &r.vf[25], 16); } }
L_2B90: { ++fl.t; set_vi(r, 1, ((fl.clip() | 16773054u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
L_2B98: { ++fl.t; pend = r.vi[0] != r.vi[1]; }
L_2BA0: { ++fl.t; set_vi(r, 1, ((fl.clip() | 16768893u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
    if (pend) { pend = false; goto L_2F78; }
L_2BA8: { ++fl.t; pend = r.vi[0] != r.vi[1]; }
L_2BB0: { ++fl.t; set_vi(r, 1, ((fl.clip() | 16760571u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
    if (pend) { pend = false; goto L_2F78; }
L_2BB8: { ++fl.t; pend = r.vi[0] != r.vi[1]; }
L_2BC0: { ++fl.t; set_vi(r, 1, ((fl.clip() | 16743927u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
    if (pend) { pend = false; goto L_2F78; }
L_2BC8: { ++fl.t; pend = r.vi[0] != r.vi[1]; }
L_2BD0: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[4] + 8u); std::memcpy(q, &r.vf[19], 16); } }
    if (pend) { pend = false; goto L_2F78; }
L_2BD8: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[4] + 2u); std::memcpy(q, &r.vf[27], 16); } }
L_2BE0: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[4] + 6u); std::memcpy(q, &r.vf[28], 16); } }
L_2BE8: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[4] + 10u); std::memcpy(q, &r.vf[30], 16); } }
L_2BF0: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[4] + 1u); const std::uint32_t v = r.vi[0]; std::memcpy(q + 0, &v, 4); } }
L_2BF8: { ++fl.t; set_vi(r, 1, r.vi[0] + 3u); }
L_2C00: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[4] + 5u); const std::uint32_t v = r.vi[1]; std::memcpy(q + 0, &v, 4); } }
L_2C08: { ++fl.t; set_vi(r, 1, r.vi[0] + 6u); }
L_2C10: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[4] + 9u); const std::uint32_t v = r.vi[1]; std::memcpy(q + 0, &v, 4); } }
L_2C18: { ++fl.t; set_vi(r, 3, r.vi[0] + 12u); }
L_2C20: { ++fl.t; set_vi(r, 9, r.vi[0] + 74u); }
L_2C28: { ++fl.t; vu::kick(1, r.vi[9]); }
L_2C30: { ++fl.t; set_vi(r, 9, r.vi[0] + 16u); }
L_2C38: { ++fl.t; set_vi(r, 9, r.vi[9] & r.vi[11]); }
L_2C40: { ++fl.t; set_vi(r, 7, r.vi[0] + 1612u); }
L_2C48: { ++fl.t; pend = r.vi[0] == r.vi[9]; }
L_2C50: { ++fl.t; }
    if (pend) { pend = false; goto L_2CE8; }
L_2C58: { ++fl.t; set_vi(r, 8, 1421u); pend = true; }
L_2C60: { ++fl.t; }
    if (pend) { pend = false; goto L_2F98; }
L_2C68: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[4] + 4u); std::memcpy(&r.vf[25], q, 16); } n25 = vfix(vload(r.vf[25])); }
L_2C70: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[4] + 8u); std::memcpy(&r.vf[26], q, 16); } n26 = vfix(vload(r.vf[26])); }
L_2C78: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[4] + 12u); std::memcpy(&r.vf[27], q, 16); } n27 = vfix(vload(r.vf[27])); }
L_2C80: { ++fl.t; set_vi(r, 14, r.vi[0] + 12u); }
L_2C88: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[25], r.vf[25].w[3]); { const std::uint8_t *q = qword(mem, r.vi[4] + 16u); std::memcpy(&r.vf[28], q, 16); } r.clip = uclip; fl.set_clip(uclip, fl.t); n28 = vfix(vload(r.vf[28])); }
L_2C90: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[26], r.vf[26].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2C98: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[27], r.vf[27].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2CA0: { ++fl.t; }
L_2CA8: { ++fl.t; set_vi(r, 11, fl.clip() & 0xFFFu); }
L_2CB0: { ++fl.t; set_vi(r, 1, fl.clip() & 0xFFFu); }
L_2CB8: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[28], r.vf[28].w[3]); set_vi(r, 11, r.vi[11] | r.vi[1]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2CC0: { ++fl.t; set_vi(r, 1, fl.clip() & 0xFFFu); }
L_2CC8: { ++fl.t; pend = r.vi[14] == r.vi[3]; }
L_2CD0: { ++fl.t; set_vi(r, 11, r.vi[11] | r.vi[1]); }
    if (pend) { pend = false; goto L_2CE8; }
L_2CD8: { ++fl.t; set_vi(r, 1, fl.clip() & 0xFFFu); }
L_2CE0: { ++fl.t; set_vi(r, 11, r.vi[11] | r.vi[1]); }
L_2CE8: { ++fl.t; set_vi(r, 9, r.vi[0] + 1u); }
L_2CF0: { ++fl.t; set_vi(r, 9, r.vi[9] & r.vi[11]); }
L_2CF8: { ++fl.t; set_vi(r, 7, r.vi[0] + 1588u); }
L_2D00: { ++fl.t; pend = r.vi[0] == r.vi[9]; }
L_2D08: { ++fl.t; }
    if (pend) { pend = false; goto L_2D20; }
L_2D10: { ++fl.t; set_vi(r, 8, 1444u); pend = true; }
L_2D18: { ++fl.t; }
    if (pend) { pend = false; goto L_2F98; }
L_2D20: { ++fl.t; set_vi(r, 9, r.vi[0] + 2u); }
L_2D28: { ++fl.t; set_vi(r, 9, r.vi[9] & r.vi[11]); }
L_2D30: { ++fl.t; set_vi(r, 7, r.vi[0] + 1594u); }
L_2D38: { ++fl.t; pend = r.vi[0] == r.vi[9]; }
L_2D40: { ++fl.t; }
    if (pend) { pend = false; goto L_2D58; }
L_2D48: { ++fl.t; set_vi(r, 8, 1451u); pend = true; }
L_2D50: { ++fl.t; }
    if (pend) { pend = false; goto L_2F98; }
L_2D58: { ++fl.t; set_vi(r, 9, r.vi[0] + 4u); }
L_2D60: { ++fl.t; set_vi(r, 9, r.vi[9] & r.vi[11]); }
L_2D68: { ++fl.t; set_vi(r, 7, r.vi[0] + 1600u); }
L_2D70: { ++fl.t; pend = r.vi[0] == r.vi[9]; }
L_2D78: { ++fl.t; }
    if (pend) { pend = false; goto L_2D90; }
L_2D80: { ++fl.t; set_vi(r, 8, 1458u); pend = true; }
L_2D88: { ++fl.t; }
    if (pend) { pend = false; goto L_2F98; }
L_2D90: { ++fl.t; set_vi(r, 9, r.vi[0] + 8u); }
L_2D98: { ++fl.t; set_vi(r, 9, r.vi[9] & r.vi[11]); }
L_2DA0: { ++fl.t; set_vi(r, 7, r.vi[0] + 1606u); }
L_2DA8: { ++fl.t; pend = r.vi[0] == r.vi[9]; }
L_2DB0: { ++fl.t; }
    if (pend) { pend = false; goto L_2DC8; }
L_2DB8: { ++fl.t; set_vi(r, 8, 1465u); pend = true; }
L_2DC0: { ++fl.t; }
    if (pend) { pend = false; goto L_2F98; }
L_2DC8: { ++fl.t; set_vi(r, 9, r.vi[0] + 32u); }
L_2DD0: { ++fl.t; set_vi(r, 9, r.vi[9] & r.vi[11]); }
L_2DD8: { ++fl.t; set_vi(r, 7, r.vi[0] + 1618u); }
L_2DE0: { ++fl.t; pend = r.vi[0] == r.vi[9]; }
L_2DE8: { ++fl.t; }
    if (pend) { pend = false; goto L_2E00; }
L_2DF0: { ++fl.t; set_vi(r, 8, 1472u); pend = true; }
L_2DF8: { ++fl.t; }
    if (pend) { pend = false; goto L_2F98; }
L_2E00: { ++fl.t; set_vi(r, 3, r.vi[3] + r.vi[4]); }
L_2E08: { ++fl.t; set_vi(r, 14, r.vi[4] + r.vi[0]); }
L_2E10: { ++fl.t; set_vi(r, 15, r.vi[5] + 1u); }
L_2E18: { ++fl.t; set_vi(r, 10, r.vi[0] + 16384u); }
L_2E20: { ++fl.t; set_vi(r, 10, r.vi[10] + 16384u); }
L_2E28: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, r.vi[14] + 1u) + 0, 2); set_vi(r, 1, v); } }
L_2E30: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[14] + 4u); std::memcpy(&r.vf[25], q, 16); } n25 = vfix(vload(r.vf[25])); }
L_2E38: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[14] + 2u); std::memcpy(&r.vf[26], q, 16); } n26 = vfix(vload(r.vf[26])); }
L_2E40: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[14] + 3u); std::memcpy(&r.vf[27], q, 16); } n27 = vfix(vload(r.vf[27])); }
L_2E48: { ++fl.t; pend = static_cast<std::int16_t>(r.vi[1]) < 0; }
L_2E50: { ++fl.t; set_vi(r, 1, r.vi[13] + r.vi[1]); }
    if (pend) { pend = false; goto L_2EA0; }
L_2E58: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[1] + 4294967289u); std::memcpy(&r.vf[25].w[0], q + 0, 4); std::memcpy(&r.vf[25].w[1], q + 4, 4); std::memcpy(&r.vf[25].w[2], q + 8, 4); } n25 = vfix(vload(r.vf[25])); }
L_2E60: { ++fl.t; const v4u uv = vmin(vload(r.vf[27]), vsplat(0x3F800000u)); vstore(r.vf[27], uv); n27 = vfix(vload(r.vf[27])); }
L_2E68: { ++fl.t; const v4u uv = vmuln(n11, vsplat(0x3F800000u)); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2E70: { ++fl.t; const v4u uv = vmaddn(nacc, n8, vsplat(n25[0])); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2E78: { ++fl.t; const v4u uv = vmaddn(nacc, n9, vsplat(n25[1])); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2E80: { ++fl.t; const v4u uv = vmaddn(nacc, n10, vsplat(n25[2])); vstore(r.vf[25], uv); if (live_flags) { flags(r, r.vf[25], 15u); fl.set_mac(r.mac, r.status); } n25 = uv; }
L_2E88: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[25].w[3]); fl.end_q(r, qb, vu::continuation_q_delay(11912u, 7u)); } }
L_2E90: { ++fl.t; pend = true; }
L_2E98: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 11928u, 29412956u); const v4u uv = vmuln(n25, vfix(vsplat(r.q))); fl.flush_q(r); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[25], 14u); fl.set_mac(r.mac, r.status); } n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_2ED8; }
L_2EA0: { ++fl.t; const v4u uv = vsubn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(n25[3])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[25].w[3]); fl.end_q(r, qb, vu::continuation_q_delay(11936u, 7u)); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); if (live_flags) { flags(r, r.vf[6], 8u); fl.set_mac(r.mac, r.status); } n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2EA8: { ++fl.t; const v4u uv = vmin(vload(r.vf[25]), vsplat(r.vf[25].w[3])); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); n25 = vfix(vload(r.vf[25])); }
L_2EB0: { ++fl.t; const v4u uv = vmin(vload(r.vf[27]), vsplat(0x3F800000u)); vstore(r.vf[27], uv); n27 = vfix(vload(r.vf[27])); }
L_2EB8: { ++fl.t; const v4u uv = vmax(vload(r.vf[25]), vsplat(r.vf[6].w[0])); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); n25 = vfix(vload(r.vf[25])); }
L_2EC0: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 11968u, 29412956u); const v4u uv = vmuln(n25, vfix(vsplat(r.q))); fl.flush_q(r); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[25], 14u); fl.set_mac(r.mac, r.status); } n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2EC8: { ++fl.t; const v4u uv = vmuln(n25, n5); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[25], 14u); fl.set_mac(r.mac, r.status); } n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2ED0: { ++fl.t; const v4u uv = vaddn(n25, n31); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[25], 14u); fl.set_mac(r.mac, r.status); } n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2ED8: { ++fl.t; const v4u uv = vmin(vload(r.vf[26]), vsplat(r.i)); set_vi(r, 10, r.vi[10] + 1u); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n26 = vfix(vload(r.vf[26])); }
L_2EE0: { ++fl.t; const v4u uv = vmuln(n27, n21); set_vi(r, 14, r.vi[14] + 4u); vstore(r.vf[27], uv); if (live_flags) { flags(r, r.vf[27], 15u); fl.set_mac(r.mac, r.status); } n27 = uv; }
L_2EE8: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 12008u, 29415068u); const v4u uv = vmuln(n26, vfix(vsplat(r.q))); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[26], 14u); fl.set_mac(r.mac, r.status); } n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2EF0: { ++fl.t; }
L_2EF8: { ++fl.t; }
L_2F00: { ++fl.t; const v4u uv = vftoi(vload(r.vf[27]), 0); vstore(r.vf[27], uv); n27 = vfix(vload(r.vf[27])); }
L_2F08: { ++fl.t; const v4u uv = vmax(vload(r.vf[26]), vsplat(0u)); { std::uint8_t *q = qword(mem, r.vi[15]); std::memcpy(q + 0, &r.vf[26].w[0], 4); std::memcpy(q + 4, &r.vf[26].w[1], 4); std::memcpy(q + 8, &r.vf[26].w[2], 4); set_vi(r, 15, r.vi[15] + 1u); } vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n25 = vfix(vload(r.vf[25])); }
L_2F10: { ++fl.t; }
L_2F18: { ++fl.t; }
L_2F20: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15]); std::memcpy(q, &r.vf[27], 16); set_vi(r, 15, r.vi[15] + 1u); } }
L_2F28: { ++fl.t; const v4u uv = vftoi(vload(r.vf[25]), 4); vstore(r.vf[25], uv); n25 = vfix(vload(r.vf[25])); }
L_2F30: { ++fl.t; }
L_2F38: { ++fl.t; }
L_2F40: { ++fl.t; pend = r.vi[14] != r.vi[3]; }
L_2F48: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15]); std::memcpy(q, &r.vf[25], 16); set_vi(r, 15, r.vi[15] + 1u); } }
    if (pend) { pend = false; goto L_2E28; }
L_2F50: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[5] + 0u); const std::uint32_t v = r.vi[10]; std::memcpy(q + 0, &v, 4); } }
L_2F58: { ++fl.t; }
L_2F60: { ++fl.t; }
L_2F68: { ++fl.t; }
L_2F70: { ++fl.t; vu::kick(1, r.vi[5]); }
L_2F78: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[19], r.vf[19].w[3]); set_vi(r, 2, r.vi[0] + 16384u); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2F80: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[23], r.vf[23].w[3]); set_vi(r, 2, r.vi[2] + 16384u); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2F88: { ++fl.t; pend = true; }
L_2F90: { ++fl.t; }
    if (pend) { pend = false; goto L_2A58; }
L_2F98: { ++fl.t; set_vi(r, 3, r.vi[3] + r.vi[4]); }
L_2FA0: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[3] + 0u); std::memcpy(&r.vf[25], q, 16); } n25 = vfix(vload(r.vf[25])); }
L_2FA8: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[3] + 4294967295u); std::memcpy(&r.vf[26], q, 16); } n26 = vfix(vload(r.vf[26])); }
L_2FB0: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[3] + 4294967294u); std::memcpy(&r.vf[27], q, 16); } n27 = vfix(vload(r.vf[27])); }
L_2FB8: { ++fl.t; }
L_2FC0: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[25], r.vf[25].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2FC8: { ++fl.t; set_vi(r, 14, r.vi[4] + r.vi[0]); }
L_2FD0: { ++fl.t; set_vi(r, 15, r.vi[5] + r.vi[0]); }
L_2FD8: { ++fl.t; }
L_2FE0: { ++fl.t; set_vi(r, 10, fl.clip() & 0xFFFu); }
L_2FE8: { ++fl.t; set_vi(r, 10, r.vi[10] & r.vi[9]); }
L_2FF0: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[14] + 4u); std::memcpy(&r.vf[28], q, 16); } n28 = vfix(vload(r.vf[28])); }
L_2FF8: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[14] + 3u); std::memcpy(&r.vf[29], q, 16); } n29 = vfix(vload(r.vf[29])); }
L_3000: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[14] + 2u); std::memcpy(&r.vf[30], q, 16); } n30 = vfix(vload(r.vf[30])); }
L_3008: { ++fl.t; set_vi(r, 14, r.vi[14] + 4u); }
L_3010: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[28], r.vf[28].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_3018: { ++fl.t; }
L_3020: { ++fl.t; }
L_3028: { ++fl.t; }
L_3030: { ++fl.t; set_vi(r, 1, fl.clip() & 0xFFFu); }
L_3038: { ++fl.t; set_vi(r, 1, r.vi[1] & r.vi[9]); }
L_3040: { ++fl.t; }
L_3048: { ++fl.t; pend = r.vi[10] == r.vi[1]; }
L_3050: { ++fl.t; }
    if (pend) { pend = false; goto L_3110; }
L_3058: { ++fl.t; pend = r.vi[0] == r.vi[1]; }
L_3060: { ++fl.t; r.vf[12].w[0] = r.vf[28].w[0]; r.vf[12].w[1] = r.vf[28].w[1]; r.vf[12].w[2] = r.vf[28].w[2]; r.vf[12].w[3] = r.vf[28].w[3]; }
    if (pend) { pend = false; goto L_30B8; }
L_3068: { ++fl.t; r.vf[28].w[0] = r.vf[25].w[0]; r.vf[28].w[1] = r.vf[25].w[1]; r.vf[28].w[2] = r.vf[25].w[2]; r.vf[28].w[3] = r.vf[25].w[3]; n28 = vfix(vload(r.vf[28])); }
L_3070: { ++fl.t; r.vf[25].w[0] = r.vf[12].w[0]; r.vf[25].w[1] = r.vf[12].w[1]; r.vf[25].w[2] = r.vf[12].w[2]; r.vf[25].w[3] = r.vf[12].w[3]; n25 = vfix(vload(r.vf[25])); }
L_3078: { ++fl.t; jpc = (static_cast<std::uint32_t>(r.vi[7]) * 8u) & 16383u; set_vi(r, 10, 1553u); pendj = true; }
L_3080: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_3088: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 12424u, 31508988u); const v4u uv = vmuln(n25, vfix(vsplat(r.q))); set_vi(r, 10, r.vi[0] - 1u); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_3090: { ++fl.t; const v4u uv = vmaddn(nacc, n28, vsplat(n6[3])); { std::uint8_t *q = qword(mem, r.vi[15] + 1u); const std::uint32_t v = r.vi[10]; std::memcpy(q + 0, &v, 4); } vstore(r.vf[12], uv); if (live_flags) { flags(r, r.vf[12], 15u); fl.set_mac(r.mac, r.status); } }
L_3098: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 12440u, 31517180u); const v4u uv = vmuln(n29, vfix(vsplat(r.q))); r.vf[28].w[0] = r.vf[25].w[0]; r.vf[28].w[1] = r.vf[25].w[1]; r.vf[28].w[2] = r.vf[25].w[2]; r.vf[28].w[3] = r.vf[25].w[3]; vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } n28 = vfix(vload(r.vf[28])); nacc = uv; }
L_30A0: { ++fl.t; const v4u uv = vmaddn(nacc, n26, vsplat(n6[3])); set_vi(r, 15, r.vi[15] + 4u); vstore(r.vf[7], uv); if (live_flags) { flags(r, r.vf[7], 15u); fl.set_mac(r.mac, r.status); } }
L_30A8: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 12456u, 31519228u); const v4u uv = vmuln(n30, vfix(vsplat(r.q))); pend = true; vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_30B0: { ++fl.t; const v4u uv = vmaddn(nacc, n27, vsplat(n6[3])); vstore(r.vf[6], uv); if (live_flags) { flags(r, r.vf[6], 15u); fl.set_mac(r.mac, r.status); } n6 = uv; }
    if (pend) { pend = false; goto L_30F8; }
L_30B8: { ++fl.t; jpc = (static_cast<std::uint32_t>(r.vi[7]) * 8u) & 16383u; set_vi(r, 10, 1561u); pendj = true; }
L_30C0: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_30C8: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 12488u, 31508988u); const v4u uv = vmuln(n25, vfix(vsplat(r.q))); set_vi(r, 10, r.vi[0] - 1u); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_30D0: { ++fl.t; const v4u uv = vmaddn(nacc, n28, vsplat(n6[3])); { std::uint8_t *q = qword(mem, r.vi[15] + 1u); const std::uint32_t v = r.vi[10]; std::memcpy(q + 0, &v, 4); } vstore(r.vf[12], uv); if (live_flags) { flags(r, r.vf[12], 15u); fl.set_mac(r.mac, r.status); } }
L_30D8: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 12504u, 31511036u); const v4u uv = vmuln(n26, vfix(vsplat(r.q))); set_vi(r, 15, r.vi[15] + 4u); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_30E0: { ++fl.t; const v4u uv = vmaddn(nacc, n29, vsplat(n6[3])); vstore(r.vf[7], uv); if (live_flags) { flags(r, r.vf[7], 15u); fl.set_mac(r.mac, r.status); } }
L_30E8: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 12520u, 31513084u); const v4u uv = vmuln(n27, vfix(vsplat(r.q))); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_30F0: { ++fl.t; const v4u uv = vmaddn(nacc, n30, vsplat(n6[3])); vstore(r.vf[6], uv); if (live_flags) { flags(r, r.vf[6], 15u); fl.set_mac(r.mac, r.status); } n6 = uv; }
L_30F8: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15] + 0u); std::memcpy(q, &r.vf[12], 16); } }
L_3100: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15] + 4294967295u); std::memcpy(q, &r.vf[7], 16); } }
L_3108: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15] + 4294967294u); std::memcpy(q, &r.vf[6], 16); } }
L_3110: { ++fl.t; pend = r.vi[0] != r.vi[1]; }
L_3118: { ++fl.t; r.vf[25].w[0] = r.vf[28].w[0]; r.vf[25].w[1] = r.vf[28].w[1]; r.vf[25].w[2] = r.vf[28].w[2]; r.vf[25].w[3] = r.vf[28].w[3]; n25 = vfix(vload(r.vf[25])); }
    if (pend) { pend = false; goto L_3150; }
L_3120: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, r.vi[14] + 4294967293u) + 0, 2); set_vi(r, 10, v); } }
L_3128: { ++fl.t; set_vi(r, 15, r.vi[15] + 4u); }
L_3130: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15] + 0u); std::memcpy(q, &r.vf[28], 16); } }
L_3138: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15] + 4294967295u); std::memcpy(q, &r.vf[29], 16); } }
L_3140: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15] + 4294967294u); std::memcpy(q, &r.vf[30], 16); } }
L_3148: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15] + 4294967293u); const std::uint32_t v = r.vi[10]; std::memcpy(q + 0, &v, 4); } }
L_3150: { ++fl.t; r.vf[26].w[0] = r.vf[29].w[0]; r.vf[26].w[1] = r.vf[29].w[1]; r.vf[26].w[2] = r.vf[29].w[2]; r.vf[26].w[3] = r.vf[29].w[3]; n26 = vfix(vload(r.vf[26])); }
L_3158: { ++fl.t; r.vf[27].w[0] = r.vf[30].w[0]; r.vf[27].w[1] = r.vf[30].w[1]; r.vf[27].w[2] = r.vf[30].w[2]; r.vf[27].w[3] = r.vf[30].w[3]; n27 = vfix(vload(r.vf[27])); }
L_3160: { ++fl.t; pend = r.vi[3] != r.vi[14]; }
L_3168: { ++fl.t; set_vi(r, 10, r.vi[1] + r.vi[0]); }
    if (pend) { pend = false; goto L_2FF0; }
L_3170: { ++fl.t; pend = r.vi[5] == r.vi[15]; }
L_3178: { ++fl.t; set_vi(r, 3, r.vi[15] - r.vi[5]); }
    if (pend) { pend = false; goto L_2F78; }
L_3180: { ++fl.t; set_vi(r, 1, r.vi[5] + r.vi[0]); }
L_3188: { ++fl.t; set_vi(r, 5, r.vi[4] + r.vi[0]); }
L_3190: { ++fl.t; jpc = (static_cast<std::uint32_t>(r.vi[8]) * 8u) & 16383u; pendj = true; }
L_3198: { ++fl.t; set_vi(r, 4, r.vi[1] + r.vi[0]); }
    if (pendj) { pendj = false; goto dispatch; }
    return 12704u;
dispatch:
    return jpc;
}

std::uint32_t vu1_567C4DEC1AA63B38(Vu0Regs &PS2_VU_REGS_RESTRICT r, std::uint8_t *mem, FlagPipe &fl) {
    const bool live_flags = vu::continuation_flags_used();
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    v4u n1 = vfix(vload(r.vf[1]));
    v4u n2 = vfix(vload(r.vf[2]));
    v4u n3 = vfix(vload(r.vf[3]));
    v4u n4 = vfix(vload(r.vf[4]));
    v4u n5 = vfix(vload(r.vf[5]));
    v4u n6 = vfix(vload(r.vf[6]));
    v4u n8 = vfix(vload(r.vf[8]));
    v4u n9 = vfix(vload(r.vf[9]));
    v4u n10 = vfix(vload(r.vf[10]));
    v4u n11 = vfix(vload(r.vf[11]));
    v4u n13 = vfix(vload(r.vf[13]));
    v4u n14 = vfix(vload(r.vf[14]));
    v4u n15 = vfix(vload(r.vf[15]));
    v4u n16 = vfix(vload(r.vf[16]));
    v4u n19 = vfix(vload(r.vf[19]));
    v4u n21 = vfix(vload(r.vf[21]));
    v4u n23 = vfix(vload(r.vf[23]));
    v4u n24 = vfix(vload(r.vf[24]));
    v4u n25 = vfix(vload(r.vf[25]));
    v4u n26 = vfix(vload(r.vf[26]));
    v4u n27 = vfix(vload(r.vf[27]));
    v4u n28 = vfix(vload(r.vf[28]));
    v4u n29 = vfix(vload(r.vf[29]));
    v4u n30 = vfix(vload(r.vf[30]));
    v4u n31 = vfix(vload(r.vf[31]));
    v4u nacc = vfix(vload(r.acc));
    goto L_2D90;
L_2A20: { ++fl.t; const v4u uv = vmuln(n14, n21); set_vi(r, 13, r.vi[13] + 3u); vstore(r.vf[20], uv); if (live_flags) { flags(r, r.vf[20], 15u); fl.set_mac(r.mac, r.status); } }
L_2A28: { ++fl.t; const v4u uv = vmax(vload(r.vf[17]), vsplat(0u)); vstore(r.vf[17], vsel(vload(r.vf[17]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); }
L_2A30: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 10800u, 29394012u); const v4u uv = vmuln(n16, vfix(vsplat(r.q))); set_vi(r, 1, (fl.clip() & 262143u) ? 1u : 0u); vstore(r.vf[17], vsel(vload(r.vf[17]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[17], 14u); fl.set_mac(r.mac, r.status); } }
L_2A38: { ++fl.t; const v4u uv = vmaddn(nacc, n8, vsplat(n15[0])); { std::uint16_t v; std::memcpy(&v, qword(mem, r.vi[13] + 4294967295u) + 12, 2); set_vi(r, 2, v); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2A40: { ++fl.t; const v4u uv = vmaddn(nacc, n9, vsplat(n15[1])); { std::uint8_t *q = qword(mem, r.vi[6]); std::memcpy(q + 0, &r.vf[22].w[0], 4); std::memcpy(q + 4, &r.vf[22].w[1], 4); std::memcpy(q + 8, &r.vf[22].w[2], 4); set_vi(r, 6, r.vi[6] + 1u); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2A48: { ++fl.t; const v4u uv = vmaddn(nacc, n10, vsplat(n15[2])); pend = r.vi[0] != r.vi[1]; vstore(r.vf[16], uv); if (live_flags) { flags(r, r.vf[16], 15u); fl.set_mac(r.mac, r.status); } n16 = uv; }
L_2A50: { ++fl.t; const v4u uv = vftoi(vload(r.vf[17]), 4); vstore(r.vf[18], uv); }
    if (pend) { pend = false; goto L_2AD8; }
L_2A58: { ++fl.t; const v4u uv = vmuln(n4, vsplat(0x3F800000u)); { const std::uint8_t *q = qword(mem, r.vi[13] + 1u); std::memcpy(&r.vf[14], q, 16); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } n14 = vfix(vload(r.vf[14])); nacc = uv; }
L_2A60: { ++fl.t; const v4u uv = vmaddn(nacc, n1, vsplat(n15[0])); { const std::uint8_t *q = qword(mem, r.vi[13] + 0u); std::memcpy(&r.vf[13].w[0], q + 0, 4); std::memcpy(&r.vf[13].w[1], q + 4, 4); std::memcpy(&r.vf[13].w[3], q + 12, 4); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } n13 = vfix(vload(r.vf[13])); nacc = uv; }
L_2A68: { ++fl.t; const v4u uv = vftoi(vload(r.vf[20]), 0); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[16].w[3]); fl.end_q(r, qb, vu::continuation_q_delay(10856u, 7u)); } vstore(r.vf[20], uv); }
L_2A70: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n15[1])); set_vi(r, 1, r.vf[18].w[3]); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2A78: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n15[2])); set_vi(r, 1, r.vi[1] | r.vi[2]); vstore(r.vf[23], uv); if (live_flags) { flags(r, r.vf[23], 15u); fl.set_mac(r.mac, r.status); } n23 = uv; }
L_2A80: { ++fl.t; const v4u uv = vmuln(n11, vsplat(0x3F800000u)); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(r.vi[1]))); r.vf[18].w[3] = v; } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2A88: { ++fl.t; const v4u uv = vmin(vload(r.vf[14]), vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, r.vi[6]); std::memcpy(q, &r.vf[20], 16); set_vi(r, 6, r.vi[6] + 1u); } vstore(r.vf[14], uv); n14 = vfix(vload(r.vf[14])); }
L_2A90: { ++fl.t; const v4u uv = vmin(vload(r.vf[13]), vsplat(r.i)); { const std::uint8_t *q = qword(mem, r.vi[13] + 5u); std::memcpy(&r.vf[15].w[0], q + 0, 4); std::memcpy(&r.vf[15].w[1], q + 4, 4); std::memcpy(&r.vf[15].w[2], q + 8, 4); } vstore(r.vf[17], vsel(vload(r.vf[17]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n15 = vfix(vload(r.vf[15])); }
L_2A98: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[23], r.vf[23].w[3]); pend = r.vi[12] != r.vi[6]; r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2AA0: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 10912u, 29388188u); const v4u uv = vmuln(n13, vfix(vsplat(r.q))); { std::uint8_t *q = qword(mem, r.vi[6]); std::memcpy(q, &r.vf[18], 16); set_vi(r, 6, r.vi[6] + 1u); } vstore(r.vf[22], vsel(vload(r.vf[22]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[22], 14u); fl.set_mac(r.mac, r.status); } }
    if (pend) { pend = false; goto L_2A20; }
L_2AA8: { ++fl.t; set_vi(r, 1, vu::itop()); }
L_2AB0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, r.vi[1] + 0u) + 0, 2); set_vi(r, 11, v); } }
L_2AB8: { ++fl.t; set_vi(r, 11, r.vi[11] + r.vi[1]); }
L_2AC0: { ++fl.t; vu::kick(1, r.vi[11]); }
L_2AC8: { ++fl.t; ending = true; }
L_2AD0: { ++fl.t; }
    if (ending) { r.tpc = 10968u; fl.flush_q(r); return vu::kContinuationEnd; }
L_2AD8: { ++fl.t; const v4u uv = vaddn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); pend = r.vi[0] != r.vi[2]; vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[27], 2u); fl.set_mac(r.mac, r.status); } n27 = vsel(n27, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_2AE0: { ++fl.t; const v4u uv = vaddn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); { const std::uint8_t *q = qword(mem, r.vi[13] + 4294967289u); std::memcpy(&r.vf[25].w[0], q + 0, 4); std::memcpy(&r.vf[25].w[1], q + 4, 4); std::memcpy(&r.vf[25].w[2], q + 8, 4); } vstore(r.vf[28], vsel(vload(r.vf[28]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[28], 2u); fl.set_mac(r.mac, r.status); } n25 = vfix(vload(r.vf[25])); n28 = vsel(n28, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_2A58; }
L_2AE8: { ++fl.t; const v4u uv = vaddn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(r, 1, ((fl.clip() | 16710639u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); vstore(r.vf[30], vsel(vload(r.vf[30]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[30], 2u); fl.set_mac(r.mac, r.status); } n30 = vsel(n30, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_2AF0: { ++fl.t; pend = r.vi[0] != r.vi[1]; }
L_2AF8: { ++fl.t; const v4u uv = vmuln(n4, vsplat(0x3F800000u)); { const std::uint8_t *q = qword(mem, r.vi[13] + 4294967292u); std::memcpy(&r.vf[19].w[0], q + 0, 4); std::memcpy(&r.vf[19].w[1], q + 4, 4); std::memcpy(&r.vf[19].w[2], q + 8, 4); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } n19 = vfix(vload(r.vf[19])); nacc = uv; }
    if (pend) { pend = false; goto L_2F78; }
L_2B00: { ++fl.t; const v4u uv = vmaddn(nacc, n1, vsplat(n25[0])); set_vi(r, 1, ((fl.clip() | 16644063u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2B08: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n25[1])); pend = r.vi[0] != r.vi[1]; vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2B10: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n25[2])); { const std::uint8_t *q = qword(mem, r.vi[13] + 4294967288u); std::memcpy(&r.vf[26], q, 16); } vstore(r.vf[25], uv); if (live_flags) { flags(r, r.vf[25], 15u); fl.set_mac(r.mac, r.status); } n26 = vfix(vload(r.vf[26])); n25 = uv; }
    if (pend) { pend = false; goto L_2F78; }
L_2B18: { ++fl.t; const v4u uv = vmuln(n4, vsplat(0x3F800000u)); { const std::uint8_t *q = qword(mem, r.vi[13] + 4294967291u); std::memcpy(&r.vf[29], q, 16); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } n29 = vfix(vload(r.vf[29])); nacc = uv; }
L_2B20: { ++fl.t; const v4u uv = vmaddn(nacc, n1, vsplat(n19[0])); { const std::uint8_t *q = qword(mem, r.vi[13] + 4294967287u); std::memcpy(&r.vf[27].w[0], q + 0, 4); std::memcpy(&r.vf[27].w[1], q + 4, 4); std::memcpy(&r.vf[27].w[3], q + 12, 4); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } n27 = vfix(vload(r.vf[27])); nacc = uv; }
L_2B28: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n19[1])); { const std::uint8_t *q = qword(mem, r.vi[13] + 4294967290u); std::memcpy(&r.vf[28].w[0], q + 0, 4); std::memcpy(&r.vf[28].w[1], q + 4, 4); std::memcpy(&r.vf[28].w[3], q + 12, 4); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } n28 = vfix(vload(r.vf[28])); nacc = uv; }
L_2B30: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n19[2])); { const std::uint8_t *q = qword(mem, r.vi[13] + 4294967293u); std::memcpy(&r.vf[30].w[0], q + 0, 4); std::memcpy(&r.vf[30].w[1], q + 4, 4); std::memcpy(&r.vf[30].w[3], q + 12, 4); } vstore(r.vf[19], uv); if (live_flags) { flags(r, r.vf[19], 15u); fl.set_mac(r.mac, r.status); } n30 = vfix(vload(r.vf[30])); n19 = uv; }
L_2B38: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[25], r.vf[25].w[3]); set_vi(r, 11, fl.clip() & 0xFFFu); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2B40: { ++fl.t; const v4u uv = vmuln(n25, n24); { std::uint8_t *q = qword(mem, r.vi[4] + 3u); std::memcpy(q, &r.vf[26], 16); } vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[12], 14u); fl.set_mac(r.mac, r.status); } }
L_2B48: { ++fl.t; const v4u uv = vmuln(n23, n24); { std::uint8_t *q = qword(mem, r.vi[4] + 7u); std::memcpy(q, &r.vf[29], 16); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[6], 14u); fl.set_mac(r.mac, r.status); } n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2B50: { ++fl.t; const v4u uv = vmuln(n19, n24); { std::uint8_t *q = qword(mem, r.vi[4] + 4u); std::memcpy(q, &r.vf[25], 16); } vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[7], 14u); fl.set_mac(r.mac, r.status); } }
L_2B58: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[19], r.vf[19].w[3]); set_vi(r, 1, fl.clip() & 0xFFFu); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2B60: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[12], r.vf[25].w[3]); set_vi(r, 11, r.vi[11] | r.vi[1]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2B68: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[6], r.vf[23].w[3]); { const std::uint8_t *q = qword(mem, r.vi[13] + 4294967294u); std::memcpy(&r.vf[25], q, 16); } r.clip = uclip; fl.set_clip(uclip, fl.t); n25 = vfix(vload(r.vf[25])); }
L_2B70: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[7], r.vf[19].w[3]); { std::uint8_t *q = qword(mem, r.vi[4] + 12u); std::memcpy(q, &r.vf[23], 16); } r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2B78: { ++fl.t; set_vi(r, 1, fl.clip() & 0xFFFu); }
L_2B80: { ++fl.t; set_vi(r, 11, r.vi[11] | r.vi[1]); }
L_2B88: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[4] + 11u); std::memcpy(q, &r.vf[25], 16); } }
L_2B90: { ++fl.t; set_vi(r, 1, ((fl.clip() | 16773054u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
L_2B98: { ++fl.t; pend = r.vi[0] != r.vi[1]; }
L_2BA0: { ++fl.t; set_vi(r, 1, ((fl.clip() | 16768893u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
    if (pend) { pend = false; goto L_2F78; }
L_2BA8: { ++fl.t; pend = r.vi[0] != r.vi[1]; }
L_2BB0: { ++fl.t; set_vi(r, 1, ((fl.clip() | 16760571u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
    if (pend) { pend = false; goto L_2F78; }
L_2BB8: { ++fl.t; pend = r.vi[0] != r.vi[1]; }
L_2BC0: { ++fl.t; set_vi(r, 1, ((fl.clip() | 16743927u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
    if (pend) { pend = false; goto L_2F78; }
L_2BC8: { ++fl.t; pend = r.vi[0] != r.vi[1]; }
L_2BD0: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[4] + 8u); std::memcpy(q, &r.vf[19], 16); } }
    if (pend) { pend = false; goto L_2F78; }
L_2BD8: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[4] + 2u); std::memcpy(q, &r.vf[27], 16); } }
L_2BE0: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[4] + 6u); std::memcpy(q, &r.vf[28], 16); } }
L_2BE8: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[4] + 10u); std::memcpy(q, &r.vf[30], 16); } }
L_2BF0: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[4] + 1u); const std::uint32_t v = r.vi[0]; std::memcpy(q + 0, &v, 4); } }
L_2BF8: { ++fl.t; set_vi(r, 1, r.vi[0] + 3u); }
L_2C00: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[4] + 5u); const std::uint32_t v = r.vi[1]; std::memcpy(q + 0, &v, 4); } }
L_2C08: { ++fl.t; set_vi(r, 1, r.vi[0] + 6u); }
L_2C10: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[4] + 9u); const std::uint32_t v = r.vi[1]; std::memcpy(q + 0, &v, 4); } }
L_2C18: { ++fl.t; set_vi(r, 3, r.vi[0] + 12u); }
L_2C20: { ++fl.t; set_vi(r, 9, r.vi[0] + 74u); }
L_2C28: { ++fl.t; vu::kick(1, r.vi[9]); }
L_2C30: { ++fl.t; set_vi(r, 9, r.vi[0] + 16u); }
L_2C38: { ++fl.t; set_vi(r, 9, r.vi[9] & r.vi[11]); }
L_2C40: { ++fl.t; set_vi(r, 7, r.vi[0] + 1612u); }
L_2C48: { ++fl.t; pend = r.vi[0] == r.vi[9]; }
L_2C50: { ++fl.t; }
    if (pend) { pend = false; goto L_2CE8; }
L_2C58: { ++fl.t; set_vi(r, 8, 1421u); pend = true; }
L_2C60: { ++fl.t; }
    if (pend) { pend = false; goto L_2F98; }
L_2C68: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[4] + 4u); std::memcpy(&r.vf[25], q, 16); } n25 = vfix(vload(r.vf[25])); }
L_2C70: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[4] + 8u); std::memcpy(&r.vf[26], q, 16); } n26 = vfix(vload(r.vf[26])); }
L_2C78: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[4] + 12u); std::memcpy(&r.vf[27], q, 16); } n27 = vfix(vload(r.vf[27])); }
L_2C80: { ++fl.t; set_vi(r, 14, r.vi[0] + 12u); }
L_2C88: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[25], r.vf[25].w[3]); { const std::uint8_t *q = qword(mem, r.vi[4] + 16u); std::memcpy(&r.vf[28], q, 16); } r.clip = uclip; fl.set_clip(uclip, fl.t); n28 = vfix(vload(r.vf[28])); }
L_2C90: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[26], r.vf[26].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2C98: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[27], r.vf[27].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2CA0: { ++fl.t; }
L_2CA8: { ++fl.t; set_vi(r, 11, fl.clip() & 0xFFFu); }
L_2CB0: { ++fl.t; set_vi(r, 1, fl.clip() & 0xFFFu); }
L_2CB8: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[28], r.vf[28].w[3]); set_vi(r, 11, r.vi[11] | r.vi[1]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2CC0: { ++fl.t; set_vi(r, 1, fl.clip() & 0xFFFu); }
L_2CC8: { ++fl.t; pend = r.vi[14] == r.vi[3]; }
L_2CD0: { ++fl.t; set_vi(r, 11, r.vi[11] | r.vi[1]); }
    if (pend) { pend = false; goto L_2CE8; }
L_2CD8: { ++fl.t; set_vi(r, 1, fl.clip() & 0xFFFu); }
L_2CE0: { ++fl.t; set_vi(r, 11, r.vi[11] | r.vi[1]); }
L_2CE8: { ++fl.t; set_vi(r, 9, r.vi[0] + 1u); }
L_2CF0: { ++fl.t; set_vi(r, 9, r.vi[9] & r.vi[11]); }
L_2CF8: { ++fl.t; set_vi(r, 7, r.vi[0] + 1588u); }
L_2D00: { ++fl.t; pend = r.vi[0] == r.vi[9]; }
L_2D08: { ++fl.t; }
    if (pend) { pend = false; goto L_2D20; }
L_2D10: { ++fl.t; set_vi(r, 8, 1444u); pend = true; }
L_2D18: { ++fl.t; }
    if (pend) { pend = false; goto L_2F98; }
L_2D20: { ++fl.t; set_vi(r, 9, r.vi[0] + 2u); }
L_2D28: { ++fl.t; set_vi(r, 9, r.vi[9] & r.vi[11]); }
L_2D30: { ++fl.t; set_vi(r, 7, r.vi[0] + 1594u); }
L_2D38: { ++fl.t; pend = r.vi[0] == r.vi[9]; }
L_2D40: { ++fl.t; }
    if (pend) { pend = false; goto L_2D58; }
L_2D48: { ++fl.t; set_vi(r, 8, 1451u); pend = true; }
L_2D50: { ++fl.t; }
    if (pend) { pend = false; goto L_2F98; }
L_2D58: { ++fl.t; set_vi(r, 9, r.vi[0] + 4u); }
L_2D60: { ++fl.t; set_vi(r, 9, r.vi[9] & r.vi[11]); }
L_2D68: { ++fl.t; set_vi(r, 7, r.vi[0] + 1600u); }
L_2D70: { ++fl.t; pend = r.vi[0] == r.vi[9]; }
L_2D78: { ++fl.t; }
    if (pend) { pend = false; goto L_2D90; }
L_2D80: { ++fl.t; set_vi(r, 8, 1458u); pend = true; }
L_2D88: { ++fl.t; }
    if (pend) { pend = false; goto L_2F98; }
L_2D90: { ++fl.t; set_vi(r, 9, r.vi[0] + 8u); }
L_2D98: { ++fl.t; set_vi(r, 9, r.vi[9] & r.vi[11]); }
L_2DA0: { ++fl.t; set_vi(r, 7, r.vi[0] + 1606u); }
L_2DA8: { ++fl.t; pend = r.vi[0] == r.vi[9]; }
L_2DB0: { ++fl.t; }
    if (pend) { pend = false; goto L_2DC8; }
L_2DB8: { ++fl.t; set_vi(r, 8, 1465u); pend = true; }
L_2DC0: { ++fl.t; }
    if (pend) { pend = false; goto L_2F98; }
L_2DC8: { ++fl.t; set_vi(r, 9, r.vi[0] + 32u); }
L_2DD0: { ++fl.t; set_vi(r, 9, r.vi[9] & r.vi[11]); }
L_2DD8: { ++fl.t; set_vi(r, 7, r.vi[0] + 1618u); }
L_2DE0: { ++fl.t; pend = r.vi[0] == r.vi[9]; }
L_2DE8: { ++fl.t; }
    if (pend) { pend = false; goto L_2E00; }
L_2DF0: { ++fl.t; set_vi(r, 8, 1472u); pend = true; }
L_2DF8: { ++fl.t; }
    if (pend) { pend = false; goto L_2F98; }
L_2E00: { ++fl.t; set_vi(r, 3, r.vi[3] + r.vi[4]); }
L_2E08: { ++fl.t; set_vi(r, 14, r.vi[4] + r.vi[0]); }
L_2E10: { ++fl.t; set_vi(r, 15, r.vi[5] + 1u); }
L_2E18: { ++fl.t; set_vi(r, 10, r.vi[0] + 16384u); }
L_2E20: { ++fl.t; set_vi(r, 10, r.vi[10] + 16384u); }
L_2E28: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, r.vi[14] + 1u) + 0, 2); set_vi(r, 1, v); } }
L_2E30: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[14] + 4u); std::memcpy(&r.vf[25], q, 16); } n25 = vfix(vload(r.vf[25])); }
L_2E38: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[14] + 2u); std::memcpy(&r.vf[26], q, 16); } n26 = vfix(vload(r.vf[26])); }
L_2E40: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[14] + 3u); std::memcpy(&r.vf[27], q, 16); } n27 = vfix(vload(r.vf[27])); }
L_2E48: { ++fl.t; pend = static_cast<std::int16_t>(r.vi[1]) < 0; }
L_2E50: { ++fl.t; set_vi(r, 1, r.vi[13] + r.vi[1]); }
    if (pend) { pend = false; goto L_2EA0; }
L_2E58: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[1] + 4294967289u); std::memcpy(&r.vf[25].w[0], q + 0, 4); std::memcpy(&r.vf[25].w[1], q + 4, 4); std::memcpy(&r.vf[25].w[2], q + 8, 4); } n25 = vfix(vload(r.vf[25])); }
L_2E60: { ++fl.t; const v4u uv = vmin(vload(r.vf[27]), vsplat(0x3F800000u)); vstore(r.vf[27], uv); n27 = vfix(vload(r.vf[27])); }
L_2E68: { ++fl.t; const v4u uv = vmuln(n11, vsplat(0x3F800000u)); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2E70: { ++fl.t; const v4u uv = vmaddn(nacc, n8, vsplat(n25[0])); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2E78: { ++fl.t; const v4u uv = vmaddn(nacc, n9, vsplat(n25[1])); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2E80: { ++fl.t; const v4u uv = vmaddn(nacc, n10, vsplat(n25[2])); vstore(r.vf[25], uv); if (live_flags) { flags(r, r.vf[25], 15u); fl.set_mac(r.mac, r.status); } n25 = uv; }
L_2E88: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[25].w[3]); fl.end_q(r, qb, vu::continuation_q_delay(11912u, 7u)); } }
L_2E90: { ++fl.t; pend = true; }
L_2E98: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 11928u, 29412956u); const v4u uv = vmuln(n25, vfix(vsplat(r.q))); fl.flush_q(r); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[25], 14u); fl.set_mac(r.mac, r.status); } n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_2ED8; }
L_2EA0: { ++fl.t; const v4u uv = vsubn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(n25[3])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[25].w[3]); fl.end_q(r, qb, vu::continuation_q_delay(11936u, 7u)); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); if (live_flags) { flags(r, r.vf[6], 8u); fl.set_mac(r.mac, r.status); } n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2EA8: { ++fl.t; const v4u uv = vmin(vload(r.vf[25]), vsplat(r.vf[25].w[3])); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); n25 = vfix(vload(r.vf[25])); }
L_2EB0: { ++fl.t; const v4u uv = vmin(vload(r.vf[27]), vsplat(0x3F800000u)); vstore(r.vf[27], uv); n27 = vfix(vload(r.vf[27])); }
L_2EB8: { ++fl.t; const v4u uv = vmax(vload(r.vf[25]), vsplat(r.vf[6].w[0])); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); n25 = vfix(vload(r.vf[25])); }
L_2EC0: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 11968u, 29412956u); const v4u uv = vmuln(n25, vfix(vsplat(r.q))); fl.flush_q(r); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[25], 14u); fl.set_mac(r.mac, r.status); } n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2EC8: { ++fl.t; const v4u uv = vmuln(n25, n5); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[25], 14u); fl.set_mac(r.mac, r.status); } n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2ED0: { ++fl.t; const v4u uv = vaddn(n25, n31); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[25], 14u); fl.set_mac(r.mac, r.status); } n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2ED8: { ++fl.t; const v4u uv = vmin(vload(r.vf[26]), vsplat(r.i)); set_vi(r, 10, r.vi[10] + 1u); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n26 = vfix(vload(r.vf[26])); }
L_2EE0: { ++fl.t; const v4u uv = vmuln(n27, n21); set_vi(r, 14, r.vi[14] + 4u); vstore(r.vf[27], uv); if (live_flags) { flags(r, r.vf[27], 15u); fl.set_mac(r.mac, r.status); } n27 = uv; }
L_2EE8: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 12008u, 29415068u); const v4u uv = vmuln(n26, vfix(vsplat(r.q))); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[26], 14u); fl.set_mac(r.mac, r.status); } n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2EF0: { ++fl.t; }
L_2EF8: { ++fl.t; }
L_2F00: { ++fl.t; const v4u uv = vftoi(vload(r.vf[27]), 0); vstore(r.vf[27], uv); n27 = vfix(vload(r.vf[27])); }
L_2F08: { ++fl.t; const v4u uv = vmax(vload(r.vf[26]), vsplat(0u)); { std::uint8_t *q = qword(mem, r.vi[15]); std::memcpy(q + 0, &r.vf[26].w[0], 4); std::memcpy(q + 4, &r.vf[26].w[1], 4); std::memcpy(q + 8, &r.vf[26].w[2], 4); set_vi(r, 15, r.vi[15] + 1u); } vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n25 = vfix(vload(r.vf[25])); }
L_2F10: { ++fl.t; }
L_2F18: { ++fl.t; }
L_2F20: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15]); std::memcpy(q, &r.vf[27], 16); set_vi(r, 15, r.vi[15] + 1u); } }
L_2F28: { ++fl.t; const v4u uv = vftoi(vload(r.vf[25]), 4); vstore(r.vf[25], uv); n25 = vfix(vload(r.vf[25])); }
L_2F30: { ++fl.t; }
L_2F38: { ++fl.t; }
L_2F40: { ++fl.t; pend = r.vi[14] != r.vi[3]; }
L_2F48: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15]); std::memcpy(q, &r.vf[25], 16); set_vi(r, 15, r.vi[15] + 1u); } }
    if (pend) { pend = false; goto L_2E28; }
L_2F50: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[5] + 0u); const std::uint32_t v = r.vi[10]; std::memcpy(q + 0, &v, 4); } }
L_2F58: { ++fl.t; }
L_2F60: { ++fl.t; }
L_2F68: { ++fl.t; }
L_2F70: { ++fl.t; vu::kick(1, r.vi[5]); }
L_2F78: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[19], r.vf[19].w[3]); set_vi(r, 2, r.vi[0] + 16384u); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2F80: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[23], r.vf[23].w[3]); set_vi(r, 2, r.vi[2] + 16384u); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2F88: { ++fl.t; pend = true; }
L_2F90: { ++fl.t; }
    if (pend) { pend = false; goto L_2A58; }
L_2F98: { ++fl.t; set_vi(r, 3, r.vi[3] + r.vi[4]); }
L_2FA0: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[3] + 0u); std::memcpy(&r.vf[25], q, 16); } n25 = vfix(vload(r.vf[25])); }
L_2FA8: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[3] + 4294967295u); std::memcpy(&r.vf[26], q, 16); } n26 = vfix(vload(r.vf[26])); }
L_2FB0: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[3] + 4294967294u); std::memcpy(&r.vf[27], q, 16); } n27 = vfix(vload(r.vf[27])); }
L_2FB8: { ++fl.t; }
L_2FC0: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[25], r.vf[25].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2FC8: { ++fl.t; set_vi(r, 14, r.vi[4] + r.vi[0]); }
L_2FD0: { ++fl.t; set_vi(r, 15, r.vi[5] + r.vi[0]); }
L_2FD8: { ++fl.t; }
L_2FE0: { ++fl.t; set_vi(r, 10, fl.clip() & 0xFFFu); }
L_2FE8: { ++fl.t; set_vi(r, 10, r.vi[10] & r.vi[9]); }
L_2FF0: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[14] + 4u); std::memcpy(&r.vf[28], q, 16); } n28 = vfix(vload(r.vf[28])); }
L_2FF8: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[14] + 3u); std::memcpy(&r.vf[29], q, 16); } n29 = vfix(vload(r.vf[29])); }
L_3000: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[14] + 2u); std::memcpy(&r.vf[30], q, 16); } n30 = vfix(vload(r.vf[30])); }
L_3008: { ++fl.t; set_vi(r, 14, r.vi[14] + 4u); }
L_3010: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[28], r.vf[28].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_3018: { ++fl.t; }
L_3020: { ++fl.t; }
L_3028: { ++fl.t; }
L_3030: { ++fl.t; set_vi(r, 1, fl.clip() & 0xFFFu); }
L_3038: { ++fl.t; set_vi(r, 1, r.vi[1] & r.vi[9]); }
L_3040: { ++fl.t; }
L_3048: { ++fl.t; pend = r.vi[10] == r.vi[1]; }
L_3050: { ++fl.t; }
    if (pend) { pend = false; goto L_3110; }
L_3058: { ++fl.t; pend = r.vi[0] == r.vi[1]; }
L_3060: { ++fl.t; r.vf[12].w[0] = r.vf[28].w[0]; r.vf[12].w[1] = r.vf[28].w[1]; r.vf[12].w[2] = r.vf[28].w[2]; r.vf[12].w[3] = r.vf[28].w[3]; }
    if (pend) { pend = false; goto L_30B8; }
L_3068: { ++fl.t; r.vf[28].w[0] = r.vf[25].w[0]; r.vf[28].w[1] = r.vf[25].w[1]; r.vf[28].w[2] = r.vf[25].w[2]; r.vf[28].w[3] = r.vf[25].w[3]; n28 = vfix(vload(r.vf[28])); }
L_3070: { ++fl.t; r.vf[25].w[0] = r.vf[12].w[0]; r.vf[25].w[1] = r.vf[12].w[1]; r.vf[25].w[2] = r.vf[12].w[2]; r.vf[25].w[3] = r.vf[12].w[3]; n25 = vfix(vload(r.vf[25])); }
L_3078: { ++fl.t; jpc = (static_cast<std::uint32_t>(r.vi[7]) * 8u) & 16383u; set_vi(r, 10, 1553u); pendj = true; }
L_3080: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_3088: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 12424u, 31508988u); const v4u uv = vmuln(n25, vfix(vsplat(r.q))); set_vi(r, 10, r.vi[0] - 1u); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_3090: { ++fl.t; const v4u uv = vmaddn(nacc, n28, vsplat(n6[3])); { std::uint8_t *q = qword(mem, r.vi[15] + 1u); const std::uint32_t v = r.vi[10]; std::memcpy(q + 0, &v, 4); } vstore(r.vf[12], uv); if (live_flags) { flags(r, r.vf[12], 15u); fl.set_mac(r.mac, r.status); } }
L_3098: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 12440u, 31517180u); const v4u uv = vmuln(n29, vfix(vsplat(r.q))); r.vf[28].w[0] = r.vf[25].w[0]; r.vf[28].w[1] = r.vf[25].w[1]; r.vf[28].w[2] = r.vf[25].w[2]; r.vf[28].w[3] = r.vf[25].w[3]; vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } n28 = vfix(vload(r.vf[28])); nacc = uv; }
L_30A0: { ++fl.t; const v4u uv = vmaddn(nacc, n26, vsplat(n6[3])); set_vi(r, 15, r.vi[15] + 4u); vstore(r.vf[7], uv); if (live_flags) { flags(r, r.vf[7], 15u); fl.set_mac(r.mac, r.status); } }
L_30A8: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 12456u, 31519228u); const v4u uv = vmuln(n30, vfix(vsplat(r.q))); pend = true; vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_30B0: { ++fl.t; const v4u uv = vmaddn(nacc, n27, vsplat(n6[3])); vstore(r.vf[6], uv); if (live_flags) { flags(r, r.vf[6], 15u); fl.set_mac(r.mac, r.status); } n6 = uv; }
    if (pend) { pend = false; goto L_30F8; }
L_30B8: { ++fl.t; jpc = (static_cast<std::uint32_t>(r.vi[7]) * 8u) & 16383u; set_vi(r, 10, 1561u); pendj = true; }
L_30C0: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_30C8: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 12488u, 31508988u); const v4u uv = vmuln(n25, vfix(vsplat(r.q))); set_vi(r, 10, r.vi[0] - 1u); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_30D0: { ++fl.t; const v4u uv = vmaddn(nacc, n28, vsplat(n6[3])); { std::uint8_t *q = qword(mem, r.vi[15] + 1u); const std::uint32_t v = r.vi[10]; std::memcpy(q + 0, &v, 4); } vstore(r.vf[12], uv); if (live_flags) { flags(r, r.vf[12], 15u); fl.set_mac(r.mac, r.status); } }
L_30D8: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 12504u, 31511036u); const v4u uv = vmuln(n26, vfix(vsplat(r.q))); set_vi(r, 15, r.vi[15] + 4u); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_30E0: { ++fl.t; const v4u uv = vmaddn(nacc, n29, vsplat(n6[3])); vstore(r.vf[7], uv); if (live_flags) { flags(r, r.vf[7], 15u); fl.set_mac(r.mac, r.status); } }
L_30E8: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 12520u, 31513084u); const v4u uv = vmuln(n27, vfix(vsplat(r.q))); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_30F0: { ++fl.t; const v4u uv = vmaddn(nacc, n30, vsplat(n6[3])); vstore(r.vf[6], uv); if (live_flags) { flags(r, r.vf[6], 15u); fl.set_mac(r.mac, r.status); } n6 = uv; }
L_30F8: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15] + 0u); std::memcpy(q, &r.vf[12], 16); } }
L_3100: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15] + 4294967295u); std::memcpy(q, &r.vf[7], 16); } }
L_3108: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15] + 4294967294u); std::memcpy(q, &r.vf[6], 16); } }
L_3110: { ++fl.t; pend = r.vi[0] != r.vi[1]; }
L_3118: { ++fl.t; r.vf[25].w[0] = r.vf[28].w[0]; r.vf[25].w[1] = r.vf[28].w[1]; r.vf[25].w[2] = r.vf[28].w[2]; r.vf[25].w[3] = r.vf[28].w[3]; n25 = vfix(vload(r.vf[25])); }
    if (pend) { pend = false; goto L_3150; }
L_3120: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, r.vi[14] + 4294967293u) + 0, 2); set_vi(r, 10, v); } }
L_3128: { ++fl.t; set_vi(r, 15, r.vi[15] + 4u); }
L_3130: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15] + 0u); std::memcpy(q, &r.vf[28], 16); } }
L_3138: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15] + 4294967295u); std::memcpy(q, &r.vf[29], 16); } }
L_3140: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15] + 4294967294u); std::memcpy(q, &r.vf[30], 16); } }
L_3148: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15] + 4294967293u); const std::uint32_t v = r.vi[10]; std::memcpy(q + 0, &v, 4); } }
L_3150: { ++fl.t; r.vf[26].w[0] = r.vf[29].w[0]; r.vf[26].w[1] = r.vf[29].w[1]; r.vf[26].w[2] = r.vf[29].w[2]; r.vf[26].w[3] = r.vf[29].w[3]; n26 = vfix(vload(r.vf[26])); }
L_3158: { ++fl.t; r.vf[27].w[0] = r.vf[30].w[0]; r.vf[27].w[1] = r.vf[30].w[1]; r.vf[27].w[2] = r.vf[30].w[2]; r.vf[27].w[3] = r.vf[30].w[3]; n27 = vfix(vload(r.vf[27])); }
L_3160: { ++fl.t; pend = r.vi[3] != r.vi[14]; }
L_3168: { ++fl.t; set_vi(r, 10, r.vi[1] + r.vi[0]); }
    if (pend) { pend = false; goto L_2FF0; }
L_3170: { ++fl.t; pend = r.vi[5] == r.vi[15]; }
L_3178: { ++fl.t; set_vi(r, 3, r.vi[15] - r.vi[5]); }
    if (pend) { pend = false; goto L_2F78; }
L_3180: { ++fl.t; set_vi(r, 1, r.vi[5] + r.vi[0]); }
L_3188: { ++fl.t; set_vi(r, 5, r.vi[4] + r.vi[0]); }
L_3190: { ++fl.t; jpc = (static_cast<std::uint32_t>(r.vi[8]) * 8u) & 16383u; pendj = true; }
L_3198: { ++fl.t; set_vi(r, 4, r.vi[1] + r.vi[0]); }
    if (pendj) { pendj = false; goto dispatch; }
    return 12704u;
dispatch:
    return jpc;
}

std::uint32_t vu1_590549A66637C4DF(Vu0Regs &PS2_VU_REGS_RESTRICT r, std::uint8_t *mem, FlagPipe &fl) {
    const bool live_flags = vu::continuation_flags_used();
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    v4u n15 = vfix(vload(r.vf[15]));
    v4u n16 = vfix(vload(r.vf[16]));
    v4u n17 = vfix(vload(r.vf[17]));
    v4u n18 = vfix(vload(r.vf[18]));
    goto L_0008;
L_0008: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[12]); std::memcpy(&r.vf[18], q, 16); set_vi(r, 12, r.vi[12] + 1u); } n18 = vfix(vload(r.vf[18])); }
L_0010: { ++fl.t; set_vi(r, 10, r.vi[4] + r.vi[0]); }
L_0018: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[10] + 2u); std::memcpy(&r.vf[15], q, 16); } n15 = vfix(vload(r.vf[15])); }
L_0020: { ++fl.t; set_vi(r, 9, r.vi[4] + r.vi[2]); }
L_0028: { ++fl.t; set_vi(r, 9, r.vi[9] + r.vi[2]); }
L_0030: { ++fl.t; set_vi(r, 9, r.vi[9] + r.vi[2]); }
L_0038: { ++fl.t; const v4u uv = vaddn(n18, n15); { const std::uint8_t *q = qword(mem, r.vi[12]); std::memcpy(&r.vf[17], q, 16); set_vi(r, 12, r.vi[12] + 1u); } vstore(r.vf[18], vsel(vload(r.vf[18]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[18], 14u); fl.set_mac(r.mac, r.status); } n17 = vfix(vload(r.vf[17])); n18 = vsel(n18, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0040: { ++fl.t; set_vi(r, 10, r.vi[10] + 3u); }
L_0048: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[12]); std::memcpy(&r.vf[16], q, 16); set_vi(r, 12, r.vi[12] + 1u); } n16 = vfix(vload(r.vf[16])); }
L_0050: { ++fl.t; pend = r.vi[9] == r.vi[10]; }
L_0058: { ++fl.t; const v4u uv = vaddn(n17, n15); { std::uint8_t *q = qword(mem, r.vi[10] + 4294967295u); std::memcpy(q, &r.vf[18], 16); } vstore(r.vf[17], vsel(vload(r.vf[17]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[17], 14u); fl.set_mac(r.mac, r.status); } n17 = vsel(n17, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_00A0; }
L_0060: { ++fl.t; set_vi(r, 10, r.vi[10] + 3u); }
L_0068: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[12]); std::memcpy(&r.vf[18], q, 16); set_vi(r, 12, r.vi[12] + 1u); } n18 = vfix(vload(r.vf[18])); }
L_0070: { ++fl.t; pend = r.vi[9] == r.vi[10]; }
L_0078: { ++fl.t; const v4u uv = vaddn(n16, n15); { std::uint8_t *q = qword(mem, r.vi[10] + 4294967295u); std::memcpy(q, &r.vf[17], 16); } vstore(r.vf[16], vsel(vload(r.vf[16]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[16], 14u); fl.set_mac(r.mac, r.status); } n16 = vsel(n16, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_00A0; }
L_0080: { ++fl.t; set_vi(r, 10, r.vi[10] + 3u); }
L_0088: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[12]); std::memcpy(&r.vf[17], q, 16); set_vi(r, 12, r.vi[12] + 1u); } n17 = vfix(vload(r.vf[17])); }
L_0090: { ++fl.t; pend = r.vi[9] != r.vi[10]; }
L_0098: { ++fl.t; const v4u uv = vaddn(n18, n15); { std::uint8_t *q = qword(mem, r.vi[10] + 4294967295u); std::memcpy(q, &r.vf[16], 16); } vstore(r.vf[18], vsel(vload(r.vf[18]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[18], 14u); fl.set_mac(r.mac, r.status); } n18 = vsel(n18, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_0040; }
L_00A0: { ++fl.t; jpc = (static_cast<std::uint32_t>(r.vi[15]) * 8u) & 16383u; pendj = true; }
L_00A8: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    return 176u;
dispatch:
    return jpc;
}

std::uint32_t vu1_62102ABD534BF9C0(Vu0Regs &PS2_VU_REGS_RESTRICT r, std::uint8_t *mem, FlagPipe &fl) {
    const bool live_flags = vu::continuation_flags_used();
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    v4u n1 = vfix(vload(r.vf[1]));
    v4u n2 = vfix(vload(r.vf[2]));
    v4u n3 = vfix(vload(r.vf[3]));
    v4u n4 = vfix(vload(r.vf[4]));
    v4u n5 = vfix(vload(r.vf[5]));
    v4u n6 = vfix(vload(r.vf[6]));
    v4u n8 = vfix(vload(r.vf[8]));
    v4u n9 = vfix(vload(r.vf[9]));
    v4u n10 = vfix(vload(r.vf[10]));
    v4u n11 = vfix(vload(r.vf[11]));
    v4u n13 = vfix(vload(r.vf[13]));
    v4u n14 = vfix(vload(r.vf[14]));
    v4u n15 = vfix(vload(r.vf[15]));
    v4u n16 = vfix(vload(r.vf[16]));
    v4u n19 = vfix(vload(r.vf[19]));
    v4u n21 = vfix(vload(r.vf[21]));
    v4u n23 = vfix(vload(r.vf[23]));
    v4u n24 = vfix(vload(r.vf[24]));
    v4u n25 = vfix(vload(r.vf[25]));
    v4u n26 = vfix(vload(r.vf[26]));
    v4u n27 = vfix(vload(r.vf[27]));
    v4u n28 = vfix(vload(r.vf[28]));
    v4u n29 = vfix(vload(r.vf[29]));
    v4u n30 = vfix(vload(r.vf[30]));
    v4u n31 = vfix(vload(r.vf[31]));
    v4u nacc = vfix(vload(r.acc));
    goto L_2C68;
L_2A20: { ++fl.t; const v4u uv = vmuln(n14, n21); set_vi(r, 13, r.vi[13] + 3u); vstore(r.vf[20], uv); if (live_flags) { flags(r, r.vf[20], 15u); fl.set_mac(r.mac, r.status); } }
L_2A28: { ++fl.t; const v4u uv = vmax(vload(r.vf[17]), vsplat(0u)); vstore(r.vf[17], vsel(vload(r.vf[17]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); }
L_2A30: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 10800u, 29394012u); const v4u uv = vmuln(n16, vfix(vsplat(r.q))); set_vi(r, 1, (fl.clip() & 262143u) ? 1u : 0u); vstore(r.vf[17], vsel(vload(r.vf[17]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[17], 14u); fl.set_mac(r.mac, r.status); } }
L_2A38: { ++fl.t; const v4u uv = vmaddn(nacc, n8, vsplat(n15[0])); { std::uint16_t v; std::memcpy(&v, qword(mem, r.vi[13] + 4294967295u) + 12, 2); set_vi(r, 2, v); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2A40: { ++fl.t; const v4u uv = vmaddn(nacc, n9, vsplat(n15[1])); { std::uint8_t *q = qword(mem, r.vi[6]); std::memcpy(q + 0, &r.vf[22].w[0], 4); std::memcpy(q + 4, &r.vf[22].w[1], 4); std::memcpy(q + 8, &r.vf[22].w[2], 4); set_vi(r, 6, r.vi[6] + 1u); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2A48: { ++fl.t; const v4u uv = vmaddn(nacc, n10, vsplat(n15[2])); pend = r.vi[0] != r.vi[1]; vstore(r.vf[16], uv); if (live_flags) { flags(r, r.vf[16], 15u); fl.set_mac(r.mac, r.status); } n16 = uv; }
L_2A50: { ++fl.t; const v4u uv = vftoi(vload(r.vf[17]), 4); vstore(r.vf[18], uv); }
    if (pend) { pend = false; goto L_2AD8; }
L_2A58: { ++fl.t; const v4u uv = vmuln(n4, vsplat(0x3F800000u)); { const std::uint8_t *q = qword(mem, r.vi[13] + 1u); std::memcpy(&r.vf[14], q, 16); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } n14 = vfix(vload(r.vf[14])); nacc = uv; }
L_2A60: { ++fl.t; const v4u uv = vmaddn(nacc, n1, vsplat(n15[0])); { const std::uint8_t *q = qword(mem, r.vi[13] + 0u); std::memcpy(&r.vf[13].w[0], q + 0, 4); std::memcpy(&r.vf[13].w[1], q + 4, 4); std::memcpy(&r.vf[13].w[3], q + 12, 4); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } n13 = vfix(vload(r.vf[13])); nacc = uv; }
L_2A68: { ++fl.t; const v4u uv = vftoi(vload(r.vf[20]), 0); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[16].w[3]); fl.end_q(r, qb, vu::continuation_q_delay(10856u, 7u)); } vstore(r.vf[20], uv); }
L_2A70: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n15[1])); set_vi(r, 1, r.vf[18].w[3]); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2A78: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n15[2])); set_vi(r, 1, r.vi[1] | r.vi[2]); vstore(r.vf[23], uv); if (live_flags) { flags(r, r.vf[23], 15u); fl.set_mac(r.mac, r.status); } n23 = uv; }
L_2A80: { ++fl.t; const v4u uv = vmuln(n11, vsplat(0x3F800000u)); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(r.vi[1]))); r.vf[18].w[3] = v; } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2A88: { ++fl.t; const v4u uv = vmin(vload(r.vf[14]), vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, r.vi[6]); std::memcpy(q, &r.vf[20], 16); set_vi(r, 6, r.vi[6] + 1u); } vstore(r.vf[14], uv); n14 = vfix(vload(r.vf[14])); }
L_2A90: { ++fl.t; const v4u uv = vmin(vload(r.vf[13]), vsplat(r.i)); { const std::uint8_t *q = qword(mem, r.vi[13] + 5u); std::memcpy(&r.vf[15].w[0], q + 0, 4); std::memcpy(&r.vf[15].w[1], q + 4, 4); std::memcpy(&r.vf[15].w[2], q + 8, 4); } vstore(r.vf[17], vsel(vload(r.vf[17]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n15 = vfix(vload(r.vf[15])); }
L_2A98: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[23], r.vf[23].w[3]); pend = r.vi[12] != r.vi[6]; r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2AA0: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 10912u, 29388188u); const v4u uv = vmuln(n13, vfix(vsplat(r.q))); { std::uint8_t *q = qword(mem, r.vi[6]); std::memcpy(q, &r.vf[18], 16); set_vi(r, 6, r.vi[6] + 1u); } vstore(r.vf[22], vsel(vload(r.vf[22]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[22], 14u); fl.set_mac(r.mac, r.status); } }
    if (pend) { pend = false; goto L_2A20; }
L_2AA8: { ++fl.t; set_vi(r, 1, vu::itop()); }
L_2AB0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, r.vi[1] + 0u) + 0, 2); set_vi(r, 11, v); } }
L_2AB8: { ++fl.t; set_vi(r, 11, r.vi[11] + r.vi[1]); }
L_2AC0: { ++fl.t; vu::kick(1, r.vi[11]); }
L_2AC8: { ++fl.t; ending = true; }
L_2AD0: { ++fl.t; }
    if (ending) { r.tpc = 10968u; fl.flush_q(r); return vu::kContinuationEnd; }
L_2AD8: { ++fl.t; const v4u uv = vaddn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); pend = r.vi[0] != r.vi[2]; vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[27], 2u); fl.set_mac(r.mac, r.status); } n27 = vsel(n27, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_2AE0: { ++fl.t; const v4u uv = vaddn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); { const std::uint8_t *q = qword(mem, r.vi[13] + 4294967289u); std::memcpy(&r.vf[25].w[0], q + 0, 4); std::memcpy(&r.vf[25].w[1], q + 4, 4); std::memcpy(&r.vf[25].w[2], q + 8, 4); } vstore(r.vf[28], vsel(vload(r.vf[28]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[28], 2u); fl.set_mac(r.mac, r.status); } n25 = vfix(vload(r.vf[25])); n28 = vsel(n28, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_2A58; }
L_2AE8: { ++fl.t; const v4u uv = vaddn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(r, 1, ((fl.clip() | 16710639u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); vstore(r.vf[30], vsel(vload(r.vf[30]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[30], 2u); fl.set_mac(r.mac, r.status); } n30 = vsel(n30, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_2AF0: { ++fl.t; pend = r.vi[0] != r.vi[1]; }
L_2AF8: { ++fl.t; const v4u uv = vmuln(n4, vsplat(0x3F800000u)); { const std::uint8_t *q = qword(mem, r.vi[13] + 4294967292u); std::memcpy(&r.vf[19].w[0], q + 0, 4); std::memcpy(&r.vf[19].w[1], q + 4, 4); std::memcpy(&r.vf[19].w[2], q + 8, 4); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } n19 = vfix(vload(r.vf[19])); nacc = uv; }
    if (pend) { pend = false; goto L_2F78; }
L_2B00: { ++fl.t; const v4u uv = vmaddn(nacc, n1, vsplat(n25[0])); set_vi(r, 1, ((fl.clip() | 16644063u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2B08: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n25[1])); pend = r.vi[0] != r.vi[1]; vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2B10: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n25[2])); { const std::uint8_t *q = qword(mem, r.vi[13] + 4294967288u); std::memcpy(&r.vf[26], q, 16); } vstore(r.vf[25], uv); if (live_flags) { flags(r, r.vf[25], 15u); fl.set_mac(r.mac, r.status); } n26 = vfix(vload(r.vf[26])); n25 = uv; }
    if (pend) { pend = false; goto L_2F78; }
L_2B18: { ++fl.t; const v4u uv = vmuln(n4, vsplat(0x3F800000u)); { const std::uint8_t *q = qword(mem, r.vi[13] + 4294967291u); std::memcpy(&r.vf[29], q, 16); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } n29 = vfix(vload(r.vf[29])); nacc = uv; }
L_2B20: { ++fl.t; const v4u uv = vmaddn(nacc, n1, vsplat(n19[0])); { const std::uint8_t *q = qword(mem, r.vi[13] + 4294967287u); std::memcpy(&r.vf[27].w[0], q + 0, 4); std::memcpy(&r.vf[27].w[1], q + 4, 4); std::memcpy(&r.vf[27].w[3], q + 12, 4); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } n27 = vfix(vload(r.vf[27])); nacc = uv; }
L_2B28: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n19[1])); { const std::uint8_t *q = qword(mem, r.vi[13] + 4294967290u); std::memcpy(&r.vf[28].w[0], q + 0, 4); std::memcpy(&r.vf[28].w[1], q + 4, 4); std::memcpy(&r.vf[28].w[3], q + 12, 4); } vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } n28 = vfix(vload(r.vf[28])); nacc = uv; }
L_2B30: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n19[2])); { const std::uint8_t *q = qword(mem, r.vi[13] + 4294967293u); std::memcpy(&r.vf[30].w[0], q + 0, 4); std::memcpy(&r.vf[30].w[1], q + 4, 4); std::memcpy(&r.vf[30].w[3], q + 12, 4); } vstore(r.vf[19], uv); if (live_flags) { flags(r, r.vf[19], 15u); fl.set_mac(r.mac, r.status); } n30 = vfix(vload(r.vf[30])); n19 = uv; }
L_2B38: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[25], r.vf[25].w[3]); set_vi(r, 11, fl.clip() & 0xFFFu); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2B40: { ++fl.t; const v4u uv = vmuln(n25, n24); { std::uint8_t *q = qword(mem, r.vi[4] + 3u); std::memcpy(q, &r.vf[26], 16); } vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[12], 14u); fl.set_mac(r.mac, r.status); } }
L_2B48: { ++fl.t; const v4u uv = vmuln(n23, n24); { std::uint8_t *q = qword(mem, r.vi[4] + 7u); std::memcpy(q, &r.vf[29], 16); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[6], 14u); fl.set_mac(r.mac, r.status); } n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2B50: { ++fl.t; const v4u uv = vmuln(n19, n24); { std::uint8_t *q = qword(mem, r.vi[4] + 4u); std::memcpy(q, &r.vf[25], 16); } vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[7], 14u); fl.set_mac(r.mac, r.status); } }
L_2B58: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[19], r.vf[19].w[3]); set_vi(r, 1, fl.clip() & 0xFFFu); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2B60: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[12], r.vf[25].w[3]); set_vi(r, 11, r.vi[11] | r.vi[1]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2B68: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[6], r.vf[23].w[3]); { const std::uint8_t *q = qword(mem, r.vi[13] + 4294967294u); std::memcpy(&r.vf[25], q, 16); } r.clip = uclip; fl.set_clip(uclip, fl.t); n25 = vfix(vload(r.vf[25])); }
L_2B70: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[7], r.vf[19].w[3]); { std::uint8_t *q = qword(mem, r.vi[4] + 12u); std::memcpy(q, &r.vf[23], 16); } r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2B78: { ++fl.t; set_vi(r, 1, fl.clip() & 0xFFFu); }
L_2B80: { ++fl.t; set_vi(r, 11, r.vi[11] | r.vi[1]); }
L_2B88: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[4] + 11u); std::memcpy(q, &r.vf[25], 16); } }
L_2B90: { ++fl.t; set_vi(r, 1, ((fl.clip() | 16773054u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
L_2B98: { ++fl.t; pend = r.vi[0] != r.vi[1]; }
L_2BA0: { ++fl.t; set_vi(r, 1, ((fl.clip() | 16768893u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
    if (pend) { pend = false; goto L_2F78; }
L_2BA8: { ++fl.t; pend = r.vi[0] != r.vi[1]; }
L_2BB0: { ++fl.t; set_vi(r, 1, ((fl.clip() | 16760571u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
    if (pend) { pend = false; goto L_2F78; }
L_2BB8: { ++fl.t; pend = r.vi[0] != r.vi[1]; }
L_2BC0: { ++fl.t; set_vi(r, 1, ((fl.clip() | 16743927u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
    if (pend) { pend = false; goto L_2F78; }
L_2BC8: { ++fl.t; pend = r.vi[0] != r.vi[1]; }
L_2BD0: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[4] + 8u); std::memcpy(q, &r.vf[19], 16); } }
    if (pend) { pend = false; goto L_2F78; }
L_2BD8: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[4] + 2u); std::memcpy(q, &r.vf[27], 16); } }
L_2BE0: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[4] + 6u); std::memcpy(q, &r.vf[28], 16); } }
L_2BE8: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[4] + 10u); std::memcpy(q, &r.vf[30], 16); } }
L_2BF0: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[4] + 1u); const std::uint32_t v = r.vi[0]; std::memcpy(q + 0, &v, 4); } }
L_2BF8: { ++fl.t; set_vi(r, 1, r.vi[0] + 3u); }
L_2C00: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[4] + 5u); const std::uint32_t v = r.vi[1]; std::memcpy(q + 0, &v, 4); } }
L_2C08: { ++fl.t; set_vi(r, 1, r.vi[0] + 6u); }
L_2C10: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[4] + 9u); const std::uint32_t v = r.vi[1]; std::memcpy(q + 0, &v, 4); } }
L_2C18: { ++fl.t; set_vi(r, 3, r.vi[0] + 12u); }
L_2C20: { ++fl.t; set_vi(r, 9, r.vi[0] + 74u); }
L_2C28: { ++fl.t; vu::kick(1, r.vi[9]); }
L_2C30: { ++fl.t; set_vi(r, 9, r.vi[0] + 16u); }
L_2C38: { ++fl.t; set_vi(r, 9, r.vi[9] & r.vi[11]); }
L_2C40: { ++fl.t; set_vi(r, 7, r.vi[0] + 1612u); }
L_2C48: { ++fl.t; pend = r.vi[0] == r.vi[9]; }
L_2C50: { ++fl.t; }
    if (pend) { pend = false; goto L_2CE8; }
L_2C58: { ++fl.t; set_vi(r, 8, 1421u); pend = true; }
L_2C60: { ++fl.t; }
    if (pend) { pend = false; goto L_2F98; }
L_2C68: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[4] + 4u); std::memcpy(&r.vf[25], q, 16); } n25 = vfix(vload(r.vf[25])); }
L_2C70: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[4] + 8u); std::memcpy(&r.vf[26], q, 16); } n26 = vfix(vload(r.vf[26])); }
L_2C78: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[4] + 12u); std::memcpy(&r.vf[27], q, 16); } n27 = vfix(vload(r.vf[27])); }
L_2C80: { ++fl.t; set_vi(r, 14, r.vi[0] + 12u); }
L_2C88: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[25], r.vf[25].w[3]); { const std::uint8_t *q = qword(mem, r.vi[4] + 16u); std::memcpy(&r.vf[28], q, 16); } r.clip = uclip; fl.set_clip(uclip, fl.t); n28 = vfix(vload(r.vf[28])); }
L_2C90: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[26], r.vf[26].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2C98: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[27], r.vf[27].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2CA0: { ++fl.t; }
L_2CA8: { ++fl.t; set_vi(r, 11, fl.clip() & 0xFFFu); }
L_2CB0: { ++fl.t; set_vi(r, 1, fl.clip() & 0xFFFu); }
L_2CB8: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[28], r.vf[28].w[3]); set_vi(r, 11, r.vi[11] | r.vi[1]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2CC0: { ++fl.t; set_vi(r, 1, fl.clip() & 0xFFFu); }
L_2CC8: { ++fl.t; pend = r.vi[14] == r.vi[3]; }
L_2CD0: { ++fl.t; set_vi(r, 11, r.vi[11] | r.vi[1]); }
    if (pend) { pend = false; goto L_2CE8; }
L_2CD8: { ++fl.t; set_vi(r, 1, fl.clip() & 0xFFFu); }
L_2CE0: { ++fl.t; set_vi(r, 11, r.vi[11] | r.vi[1]); }
L_2CE8: { ++fl.t; set_vi(r, 9, r.vi[0] + 1u); }
L_2CF0: { ++fl.t; set_vi(r, 9, r.vi[9] & r.vi[11]); }
L_2CF8: { ++fl.t; set_vi(r, 7, r.vi[0] + 1588u); }
L_2D00: { ++fl.t; pend = r.vi[0] == r.vi[9]; }
L_2D08: { ++fl.t; }
    if (pend) { pend = false; goto L_2D20; }
L_2D10: { ++fl.t; set_vi(r, 8, 1444u); pend = true; }
L_2D18: { ++fl.t; }
    if (pend) { pend = false; goto L_2F98; }
L_2D20: { ++fl.t; set_vi(r, 9, r.vi[0] + 2u); }
L_2D28: { ++fl.t; set_vi(r, 9, r.vi[9] & r.vi[11]); }
L_2D30: { ++fl.t; set_vi(r, 7, r.vi[0] + 1594u); }
L_2D38: { ++fl.t; pend = r.vi[0] == r.vi[9]; }
L_2D40: { ++fl.t; }
    if (pend) { pend = false; goto L_2D58; }
L_2D48: { ++fl.t; set_vi(r, 8, 1451u); pend = true; }
L_2D50: { ++fl.t; }
    if (pend) { pend = false; goto L_2F98; }
L_2D58: { ++fl.t; set_vi(r, 9, r.vi[0] + 4u); }
L_2D60: { ++fl.t; set_vi(r, 9, r.vi[9] & r.vi[11]); }
L_2D68: { ++fl.t; set_vi(r, 7, r.vi[0] + 1600u); }
L_2D70: { ++fl.t; pend = r.vi[0] == r.vi[9]; }
L_2D78: { ++fl.t; }
    if (pend) { pend = false; goto L_2D90; }
L_2D80: { ++fl.t; set_vi(r, 8, 1458u); pend = true; }
L_2D88: { ++fl.t; }
    if (pend) { pend = false; goto L_2F98; }
L_2D90: { ++fl.t; set_vi(r, 9, r.vi[0] + 8u); }
L_2D98: { ++fl.t; set_vi(r, 9, r.vi[9] & r.vi[11]); }
L_2DA0: { ++fl.t; set_vi(r, 7, r.vi[0] + 1606u); }
L_2DA8: { ++fl.t; pend = r.vi[0] == r.vi[9]; }
L_2DB0: { ++fl.t; }
    if (pend) { pend = false; goto L_2DC8; }
L_2DB8: { ++fl.t; set_vi(r, 8, 1465u); pend = true; }
L_2DC0: { ++fl.t; }
    if (pend) { pend = false; goto L_2F98; }
L_2DC8: { ++fl.t; set_vi(r, 9, r.vi[0] + 32u); }
L_2DD0: { ++fl.t; set_vi(r, 9, r.vi[9] & r.vi[11]); }
L_2DD8: { ++fl.t; set_vi(r, 7, r.vi[0] + 1618u); }
L_2DE0: { ++fl.t; pend = r.vi[0] == r.vi[9]; }
L_2DE8: { ++fl.t; }
    if (pend) { pend = false; goto L_2E00; }
L_2DF0: { ++fl.t; set_vi(r, 8, 1472u); pend = true; }
L_2DF8: { ++fl.t; }
    if (pend) { pend = false; goto L_2F98; }
L_2E00: { ++fl.t; set_vi(r, 3, r.vi[3] + r.vi[4]); }
L_2E08: { ++fl.t; set_vi(r, 14, r.vi[4] + r.vi[0]); }
L_2E10: { ++fl.t; set_vi(r, 15, r.vi[5] + 1u); }
L_2E18: { ++fl.t; set_vi(r, 10, r.vi[0] + 16384u); }
L_2E20: { ++fl.t; set_vi(r, 10, r.vi[10] + 16384u); }
L_2E28: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, r.vi[14] + 1u) + 0, 2); set_vi(r, 1, v); } }
L_2E30: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[14] + 4u); std::memcpy(&r.vf[25], q, 16); } n25 = vfix(vload(r.vf[25])); }
L_2E38: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[14] + 2u); std::memcpy(&r.vf[26], q, 16); } n26 = vfix(vload(r.vf[26])); }
L_2E40: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[14] + 3u); std::memcpy(&r.vf[27], q, 16); } n27 = vfix(vload(r.vf[27])); }
L_2E48: { ++fl.t; pend = static_cast<std::int16_t>(r.vi[1]) < 0; }
L_2E50: { ++fl.t; set_vi(r, 1, r.vi[13] + r.vi[1]); }
    if (pend) { pend = false; goto L_2EA0; }
L_2E58: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[1] + 4294967289u); std::memcpy(&r.vf[25].w[0], q + 0, 4); std::memcpy(&r.vf[25].w[1], q + 4, 4); std::memcpy(&r.vf[25].w[2], q + 8, 4); } n25 = vfix(vload(r.vf[25])); }
L_2E60: { ++fl.t; const v4u uv = vmin(vload(r.vf[27]), vsplat(0x3F800000u)); vstore(r.vf[27], uv); n27 = vfix(vload(r.vf[27])); }
L_2E68: { ++fl.t; const v4u uv = vmuln(n11, vsplat(0x3F800000u)); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2E70: { ++fl.t; const v4u uv = vmaddn(nacc, n8, vsplat(n25[0])); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2E78: { ++fl.t; const v4u uv = vmaddn(nacc, n9, vsplat(n25[1])); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_2E80: { ++fl.t; const v4u uv = vmaddn(nacc, n10, vsplat(n25[2])); vstore(r.vf[25], uv); if (live_flags) { flags(r, r.vf[25], 15u); fl.set_mac(r.mac, r.status); } n25 = uv; }
L_2E88: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[25].w[3]); fl.end_q(r, qb, vu::continuation_q_delay(11912u, 7u)); } }
L_2E90: { ++fl.t; pend = true; }
L_2E98: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 11928u, 29412956u); const v4u uv = vmuln(n25, vfix(vsplat(r.q))); fl.flush_q(r); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[25], 14u); fl.set_mac(r.mac, r.status); } n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_2ED8; }
L_2EA0: { ++fl.t; const v4u uv = vsubn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(n25[3])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[25].w[3]); fl.end_q(r, qb, vu::continuation_q_delay(11936u, 7u)); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); if (live_flags) { flags(r, r.vf[6], 8u); fl.set_mac(r.mac, r.status); } n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2EA8: { ++fl.t; const v4u uv = vmin(vload(r.vf[25]), vsplat(r.vf[25].w[3])); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); n25 = vfix(vload(r.vf[25])); }
L_2EB0: { ++fl.t; const v4u uv = vmin(vload(r.vf[27]), vsplat(0x3F800000u)); vstore(r.vf[27], uv); n27 = vfix(vload(r.vf[27])); }
L_2EB8: { ++fl.t; const v4u uv = vmax(vload(r.vf[25]), vsplat(r.vf[6].w[0])); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); n25 = vfix(vload(r.vf[25])); }
L_2EC0: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 11968u, 29412956u); const v4u uv = vmuln(n25, vfix(vsplat(r.q))); fl.flush_q(r); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[25], 14u); fl.set_mac(r.mac, r.status); } n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2EC8: { ++fl.t; const v4u uv = vmuln(n25, n5); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[25], 14u); fl.set_mac(r.mac, r.status); } n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2ED0: { ++fl.t; const v4u uv = vaddn(n25, n31); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[25], 14u); fl.set_mac(r.mac, r.status); } n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2ED8: { ++fl.t; const v4u uv = vmin(vload(r.vf[26]), vsplat(r.i)); set_vi(r, 10, r.vi[10] + 1u); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n26 = vfix(vload(r.vf[26])); }
L_2EE0: { ++fl.t; const v4u uv = vmuln(n27, n21); set_vi(r, 14, r.vi[14] + 4u); vstore(r.vf[27], uv); if (live_flags) { flags(r, r.vf[27], 15u); fl.set_mac(r.mac, r.status); } n27 = uv; }
L_2EE8: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 12008u, 29415068u); const v4u uv = vmuln(n26, vfix(vsplat(r.q))); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); if (live_flags) { flags(r, r.vf[26], 14u); fl.set_mac(r.mac, r.status); } n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2EF0: { ++fl.t; }
L_2EF8: { ++fl.t; }
L_2F00: { ++fl.t; const v4u uv = vftoi(vload(r.vf[27]), 0); vstore(r.vf[27], uv); n27 = vfix(vload(r.vf[27])); }
L_2F08: { ++fl.t; const v4u uv = vmax(vload(r.vf[26]), vsplat(0u)); { std::uint8_t *q = qword(mem, r.vi[15]); std::memcpy(q + 0, &r.vf[26].w[0], 4); std::memcpy(q + 4, &r.vf[26].w[1], 4); std::memcpy(q + 8, &r.vf[26].w[2], 4); set_vi(r, 15, r.vi[15] + 1u); } vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n25 = vfix(vload(r.vf[25])); }
L_2F10: { ++fl.t; }
L_2F18: { ++fl.t; }
L_2F20: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15]); std::memcpy(q, &r.vf[27], 16); set_vi(r, 15, r.vi[15] + 1u); } }
L_2F28: { ++fl.t; const v4u uv = vftoi(vload(r.vf[25]), 4); vstore(r.vf[25], uv); n25 = vfix(vload(r.vf[25])); }
L_2F30: { ++fl.t; }
L_2F38: { ++fl.t; }
L_2F40: { ++fl.t; pend = r.vi[14] != r.vi[3]; }
L_2F48: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15]); std::memcpy(q, &r.vf[25], 16); set_vi(r, 15, r.vi[15] + 1u); } }
    if (pend) { pend = false; goto L_2E28; }
L_2F50: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[5] + 0u); const std::uint32_t v = r.vi[10]; std::memcpy(q + 0, &v, 4); } }
L_2F58: { ++fl.t; }
L_2F60: { ++fl.t; }
L_2F68: { ++fl.t; }
L_2F70: { ++fl.t; vu::kick(1, r.vi[5]); }
L_2F78: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[19], r.vf[19].w[3]); set_vi(r, 2, r.vi[0] + 16384u); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2F80: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[23], r.vf[23].w[3]); set_vi(r, 2, r.vi[2] + 16384u); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2F88: { ++fl.t; pend = true; }
L_2F90: { ++fl.t; }
    if (pend) { pend = false; goto L_2A58; }
L_2F98: { ++fl.t; set_vi(r, 3, r.vi[3] + r.vi[4]); }
L_2FA0: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[3] + 0u); std::memcpy(&r.vf[25], q, 16); } n25 = vfix(vload(r.vf[25])); }
L_2FA8: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[3] + 4294967295u); std::memcpy(&r.vf[26], q, 16); } n26 = vfix(vload(r.vf[26])); }
L_2FB0: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[3] + 4294967294u); std::memcpy(&r.vf[27], q, 16); } n27 = vfix(vload(r.vf[27])); }
L_2FB8: { ++fl.t; }
L_2FC0: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[25], r.vf[25].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2FC8: { ++fl.t; set_vi(r, 14, r.vi[4] + r.vi[0]); }
L_2FD0: { ++fl.t; set_vi(r, 15, r.vi[5] + r.vi[0]); }
L_2FD8: { ++fl.t; }
L_2FE0: { ++fl.t; set_vi(r, 10, fl.clip() & 0xFFFu); }
L_2FE8: { ++fl.t; set_vi(r, 10, r.vi[10] & r.vi[9]); }
L_2FF0: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[14] + 4u); std::memcpy(&r.vf[28], q, 16); } n28 = vfix(vload(r.vf[28])); }
L_2FF8: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[14] + 3u); std::memcpy(&r.vf[29], q, 16); } n29 = vfix(vload(r.vf[29])); }
L_3000: { ++fl.t; { const std::uint8_t *q = qword(mem, r.vi[14] + 2u); std::memcpy(&r.vf[30], q, 16); } n30 = vfix(vload(r.vf[30])); }
L_3008: { ++fl.t; set_vi(r, 14, r.vi[14] + 4u); }
L_3010: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[28], r.vf[28].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_3018: { ++fl.t; }
L_3020: { ++fl.t; }
L_3028: { ++fl.t; }
L_3030: { ++fl.t; set_vi(r, 1, fl.clip() & 0xFFFu); }
L_3038: { ++fl.t; set_vi(r, 1, r.vi[1] & r.vi[9]); }
L_3040: { ++fl.t; }
L_3048: { ++fl.t; pend = r.vi[10] == r.vi[1]; }
L_3050: { ++fl.t; }
    if (pend) { pend = false; goto L_3110; }
L_3058: { ++fl.t; pend = r.vi[0] == r.vi[1]; }
L_3060: { ++fl.t; r.vf[12].w[0] = r.vf[28].w[0]; r.vf[12].w[1] = r.vf[28].w[1]; r.vf[12].w[2] = r.vf[28].w[2]; r.vf[12].w[3] = r.vf[28].w[3]; }
    if (pend) { pend = false; goto L_30B8; }
L_3068: { ++fl.t; r.vf[28].w[0] = r.vf[25].w[0]; r.vf[28].w[1] = r.vf[25].w[1]; r.vf[28].w[2] = r.vf[25].w[2]; r.vf[28].w[3] = r.vf[25].w[3]; n28 = vfix(vload(r.vf[28])); }
L_3070: { ++fl.t; r.vf[25].w[0] = r.vf[12].w[0]; r.vf[25].w[1] = r.vf[12].w[1]; r.vf[25].w[2] = r.vf[12].w[2]; r.vf[25].w[3] = r.vf[12].w[3]; n25 = vfix(vload(r.vf[25])); }
L_3078: { ++fl.t; jpc = (static_cast<std::uint32_t>(r.vi[7]) * 8u) & 16383u; set_vi(r, 10, 1553u); pendj = true; }
L_3080: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_3088: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 12424u, 31508988u); const v4u uv = vmuln(n25, vfix(vsplat(r.q))); set_vi(r, 10, r.vi[0] - 1u); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_3090: { ++fl.t; const v4u uv = vmaddn(nacc, n28, vsplat(n6[3])); { std::uint8_t *q = qword(mem, r.vi[15] + 1u); const std::uint32_t v = r.vi[10]; std::memcpy(q + 0, &v, 4); } vstore(r.vf[12], uv); if (live_flags) { flags(r, r.vf[12], 15u); fl.set_mac(r.mac, r.status); } }
L_3098: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 12440u, 31517180u); const v4u uv = vmuln(n29, vfix(vsplat(r.q))); r.vf[28].w[0] = r.vf[25].w[0]; r.vf[28].w[1] = r.vf[25].w[1]; r.vf[28].w[2] = r.vf[25].w[2]; r.vf[28].w[3] = r.vf[25].w[3]; vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } n28 = vfix(vload(r.vf[28])); nacc = uv; }
L_30A0: { ++fl.t; const v4u uv = vmaddn(nacc, n26, vsplat(n6[3])); set_vi(r, 15, r.vi[15] + 4u); vstore(r.vf[7], uv); if (live_flags) { flags(r, r.vf[7], 15u); fl.set_mac(r.mac, r.status); } }
L_30A8: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 12456u, 31519228u); const v4u uv = vmuln(n30, vfix(vsplat(r.q))); pend = true; vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_30B0: { ++fl.t; const v4u uv = vmaddn(nacc, n27, vsplat(n6[3])); vstore(r.vf[6], uv); if (live_flags) { flags(r, r.vf[6], 15u); fl.set_mac(r.mac, r.status); } n6 = uv; }
    if (pend) { pend = false; goto L_30F8; }
L_30B8: { ++fl.t; jpc = (static_cast<std::uint32_t>(r.vi[7]) * 8u) & 16383u; set_vi(r, 10, 1561u); pendj = true; }
L_30C0: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_30C8: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 12488u, 31508988u); const v4u uv = vmuln(n25, vfix(vsplat(r.q))); set_vi(r, 10, r.vi[0] - 1u); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_30D0: { ++fl.t; const v4u uv = vmaddn(nacc, n28, vsplat(n6[3])); { std::uint8_t *q = qword(mem, r.vi[15] + 1u); const std::uint32_t v = r.vi[10]; std::memcpy(q + 0, &v, 4); } vstore(r.vf[12], uv); if (live_flags) { flags(r, r.vf[12], 15u); fl.set_mac(r.mac, r.status); } }
L_30D8: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 12504u, 31511036u); const v4u uv = vmuln(n26, vfix(vsplat(r.q))); set_vi(r, 15, r.vi[15] + 4u); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_30E0: { ++fl.t; const v4u uv = vmaddn(nacc, n29, vsplat(n6[3])); vstore(r.vf[7], uv); if (live_flags) { flags(r, r.vf[7], 15u); fl.set_mac(r.mac, r.status); } }
L_30E8: { ++fl.t; if (fl.q_pending) vu::continuation_q_read(r, fl, 12520u, 31513084u); const v4u uv = vmuln(n27, vfix(vsplat(r.q))); vstore(r.acc, uv); if (live_flags) { flags(r, r.acc, 15u); fl.set_mac(r.mac, r.status); } nacc = uv; }
L_30F0: { ++fl.t; const v4u uv = vmaddn(nacc, n30, vsplat(n6[3])); vstore(r.vf[6], uv); if (live_flags) { flags(r, r.vf[6], 15u); fl.set_mac(r.mac, r.status); } n6 = uv; }
L_30F8: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15] + 0u); std::memcpy(q, &r.vf[12], 16); } }
L_3100: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15] + 4294967295u); std::memcpy(q, &r.vf[7], 16); } }
L_3108: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15] + 4294967294u); std::memcpy(q, &r.vf[6], 16); } }
L_3110: { ++fl.t; pend = r.vi[0] != r.vi[1]; }
L_3118: { ++fl.t; r.vf[25].w[0] = r.vf[28].w[0]; r.vf[25].w[1] = r.vf[28].w[1]; r.vf[25].w[2] = r.vf[28].w[2]; r.vf[25].w[3] = r.vf[28].w[3]; n25 = vfix(vload(r.vf[25])); }
    if (pend) { pend = false; goto L_3150; }
L_3120: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, r.vi[14] + 4294967293u) + 0, 2); set_vi(r, 10, v); } }
L_3128: { ++fl.t; set_vi(r, 15, r.vi[15] + 4u); }
L_3130: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15] + 0u); std::memcpy(q, &r.vf[28], 16); } }
L_3138: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15] + 4294967295u); std::memcpy(q, &r.vf[29], 16); } }
L_3140: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15] + 4294967294u); std::memcpy(q, &r.vf[30], 16); } }
L_3148: { ++fl.t; { std::uint8_t *q = qword(mem, r.vi[15] + 4294967293u); const std::uint32_t v = r.vi[10]; std::memcpy(q + 0, &v, 4); } }
L_3150: { ++fl.t; r.vf[26].w[0] = r.vf[29].w[0]; r.vf[26].w[1] = r.vf[29].w[1]; r.vf[26].w[2] = r.vf[29].w[2]; r.vf[26].w[3] = r.vf[29].w[3]; n26 = vfix(vload(r.vf[26])); }
L_3158: { ++fl.t; r.vf[27].w[0] = r.vf[30].w[0]; r.vf[27].w[1] = r.vf[30].w[1]; r.vf[27].w[2] = r.vf[30].w[2]; r.vf[27].w[3] = r.vf[30].w[3]; n27 = vfix(vload(r.vf[27])); }
L_3160: { ++fl.t; pend = r.vi[3] != r.vi[14]; }
L_3168: { ++fl.t; set_vi(r, 10, r.vi[1] + r.vi[0]); }
    if (pend) { pend = false; goto L_2FF0; }
L_3170: { ++fl.t; pend = r.vi[5] == r.vi[15]; }
L_3178: { ++fl.t; set_vi(r, 3, r.vi[15] - r.vi[5]); }
    if (pend) { pend = false; goto L_2F78; }
L_3180: { ++fl.t; set_vi(r, 1, r.vi[5] + r.vi[0]); }
L_3188: { ++fl.t; set_vi(r, 5, r.vi[4] + r.vi[0]); }
L_3190: { ++fl.t; jpc = (static_cast<std::uint32_t>(r.vi[8]) * 8u) & 16383u; pendj = true; }
L_3198: { ++fl.t; set_vi(r, 4, r.vi[1] + r.vi[0]); }
    if (pendj) { pendj = false; goto dispatch; }
    return 12704u;
dispatch:
    return jpc;
}

}
