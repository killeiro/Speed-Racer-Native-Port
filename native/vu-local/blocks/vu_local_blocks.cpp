#include "ps2/vu_continuation.hpp"
namespace gen_local {
using namespace ps2; using namespace ps2::vuops;
static const std::uint8_t code_000[] = {0xBD,0x06,0x0A,0x80,0xFF,0x02,0x00,0x00,0x01,0x50,0x02,0x09,0xFF,0x02,0x00,0x00,0x00,0x50,0x47,0x08,0xFF,0x02,0x00,0x00,0x00,0x50,0x26,0x08,0xFF,0x02,0x00,0x00,0x01,0x50,0x04,0x10,0xFF,0x02,0x00,0x00,0x00,0x00,0x05,0x10,0xFF,0x02,0x00,0x00,0xF0,0x39,0x0A,0x80,0xFF,0x02,0x00,0x00,0xB0,0x31,0x0A,0x80,0xFF,0x02,0x00,0x00,0x3B,0x05,0x0F,0x42,0xFF,0x02,0x00,0x00,0x3C,0x03,0x00,0x80,0xFF,0x02,0x00,0x00,};
static std::uint32_t local_block_000(Vu0Regs &PS2_VU_REGS_RESTRICT r, std::uint8_t *mem, FlagPipe &fl) {
    (void)mem; bool pend=false;
    { ++fl.t; set_vi(r, 10, vu::itop());  }
    { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, r.vi[10] + 1u) + 0, 2); set_vi(r, 2, v); }  }
    { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, r.vi[10] + 0u) + 8, 2); set_vi(r, 7, v); }  }
    { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, r.vi[10] + 0u) + 12, 2); set_vi(r, 6, v); }  }
    { ++fl.t; set_vi(r, 4, r.vi[10] + 1u);  }
    { ++fl.t; set_vi(r, 5, r.vi[0] + 0u);  }
    { ++fl.t; set_vi(r, 7, r.vi[7] + r.vi[10]);  }
    { ++fl.t; set_vi(r, 6, r.vi[6] + r.vi[10]);  }
    { ++fl.t; set_vi(r, 15, 1692u); pend = true;  }
    { ++fl.t;  }
    (void)pend; return 7856u;
}
static const std::uint8_t code_001[] = {0xBD,0x06,0x0A,0x80,0xFF,0x02,0x00,0x00,0x01,0x50,0x02,0x09,0xFF,0x02,0x00,0x00,0x00,0x50,0x47,0x08,0xFF,0x02,0x00,0x00,0x00,0x50,0x26,0x08,0xFF,0x02,0x00,0x00,0x01,0x50,0x04,0x10,0xFF,0x02,0x00,0x00,0x00,0x00,0x05,0x10,0xFF,0x02,0x00,0x00,0xF0,0x39,0x0A,0x80,0xFF,0x02,0x00,0x00,0xB0,0x31,0x0A,0x80,0xFF,0x02,0x00,0x00,0x4F,0x05,0x0F,0x42,0xFF,0x02,0x00,0x00,0x3C,0x03,0x00,0x80,0xFF,0x02,0x00,0x00,};
static std::uint32_t local_block_001(Vu0Regs &PS2_VU_REGS_RESTRICT r, std::uint8_t *mem, FlagPipe &fl) {
    (void)mem; bool pend=false;
    { ++fl.t; set_vi(r, 10, vu::itop());  }
    { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, r.vi[10] + 1u) + 0, 2); set_vi(r, 2, v); }  }
    { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, r.vi[10] + 0u) + 8, 2); set_vi(r, 7, v); }  }
    { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, r.vi[10] + 0u) + 12, 2); set_vi(r, 6, v); }  }
    { ++fl.t; set_vi(r, 4, r.vi[10] + 1u);  }
    { ++fl.t; set_vi(r, 5, r.vi[0] + 0u);  }
    { ++fl.t; set_vi(r, 7, r.vi[7] + r.vi[10]);  }
    { ++fl.t; set_vi(r, 6, r.vi[6] + r.vi[10]);  }
    { ++fl.t; set_vi(r, 15, 1692u); pend = true;  }
    { ++fl.t;  }
    (void)pend; return 8016u;
}
static const std::uint8_t code_002[] = {0xBD,0x06,0x0A,0x80,0xFF,0x02,0x00,0x00,0x01,0x50,0x02,0x09,0xFF,0x02,0x00,0x00,0x00,0x50,0x47,0x08,0xFF,0x02,0x00,0x00,0x00,0x50,0x26,0x08,0xFF,0x02,0x00,0x00,0x01,0x50,0x04,0x10,0xFF,0x02,0x00,0x00,0x00,0x00,0x05,0x10,0xFF,0x02,0x00,0x00,0xF0,0x39,0x0A,0x80,0xFF,0x02,0x00,0x00,0xB0,0x31,0x0A,0x80,0xFF,0x02,0x00,0x00,0x63,0x05,0x0F,0x42,0xFF,0x02,0x00,0x00,0x3C,0x03,0x00,0x80,0xFF,0x02,0x00,0x00,};
static std::uint32_t local_block_002(Vu0Regs &PS2_VU_REGS_RESTRICT r, std::uint8_t *mem, FlagPipe &fl) {
    (void)mem; bool pend=false;
    { ++fl.t; set_vi(r, 10, vu::itop());  }
    { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, r.vi[10] + 1u) + 0, 2); set_vi(r, 2, v); }  }
    { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, r.vi[10] + 0u) + 8, 2); set_vi(r, 7, v); }  }
    { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, r.vi[10] + 0u) + 12, 2); set_vi(r, 6, v); }  }
    { ++fl.t; set_vi(r, 4, r.vi[10] + 1u);  }
    { ++fl.t; set_vi(r, 5, r.vi[0] + 0u);  }
    { ++fl.t; set_vi(r, 7, r.vi[7] + r.vi[10]);  }
    { ++fl.t; set_vi(r, 6, r.vi[6] + r.vi[10]);  }
    { ++fl.t; set_vi(r, 15, 1692u); pend = true;  }
    { ++fl.t;  }
    (void)pend; return 8176u;
}
static const std::uint8_t code_003[] = {0xBD,0x06,0x0A,0x80,0xFF,0x02,0x00,0x00,0x01,0x50,0x02,0x09,0xFF,0x02,0x00,0x00,0x00,0x50,0x47,0x08,0xFF,0x02,0x00,0x00,0x00,0x50,0x26,0x08,0xFF,0x02,0x00,0x00,0x01,0x50,0x04,0x10,0xFF,0x02,0x00,0x00,0x00,0x00,0x05,0x10,0xFF,0x02,0x00,0x00,0xF0,0x39,0x0A,0x80,0xFF,0x02,0x00,0x00,0xB0,0x31,0x0A,0x80,0xFF,0x02,0x00,0x00,0x65,0x01,0x0F,0x42,0xFF,0x02,0x00,0x00,0x3C,0x03,0x00,0x80,0xFF,0x02,0x00,0x00,};
static std::uint32_t local_block_003(Vu0Regs &PS2_VU_REGS_RESTRICT r, std::uint8_t *mem, FlagPipe &fl) {
    (void)mem; bool pend=false;
    { ++fl.t; set_vi(r, 10, vu::itop());  }
    { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, r.vi[10] + 1u) + 0, 2); set_vi(r, 2, v); }  }
    { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, r.vi[10] + 0u) + 8, 2); set_vi(r, 7, v); }  }
    { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, r.vi[10] + 0u) + 12, 2); set_vi(r, 6, v); }  }
    { ++fl.t; set_vi(r, 4, r.vi[10] + 1u);  }
    { ++fl.t; set_vi(r, 5, r.vi[0] + 0u);  }
    { ++fl.t; set_vi(r, 7, r.vi[7] + r.vi[10]);  }
    { ++fl.t; set_vi(r, 6, r.vi[6] + r.vi[10]);  }
    { ++fl.t; set_vi(r, 15, 1692u); pend = true;  }
    { ++fl.t;  }
    (void)pend; return 0u;
}
static const std::uint8_t code_004[] = {0xBD,0x06,0x0A,0x80,0xFF,0x02,0x00,0x00,0x01,0x50,0x02,0x09,0xFF,0x02,0x00,0x00,0x00,0x50,0x47,0x08,0xFF,0x02,0x00,0x00,0x00,0x50,0x26,0x08,0xFF,0x02,0x00,0x00,0x01,0x50,0x04,0x10,0xFF,0x02,0x00,0x00,0x00,0x00,0x05,0x10,0xFF,0x02,0x00,0x00,0xF0,0x39,0x0A,0x80,0xFF,0x02,0x00,0x00,0xB0,0x31,0x0A,0x80,0xFF,0x02,0x00,0x00,0x7E,0x03,0x0F,0x42,0xFF,0x02,0x00,0x00,0x3C,0x03,0x00,0x80,0xFF,0x02,0x00,0x00,};
static std::uint32_t local_block_004(Vu0Regs &PS2_VU_REGS_RESTRICT r, std::uint8_t *mem, FlagPipe &fl) {
    (void)mem; bool pend=false;
    { ++fl.t; set_vi(r, 10, vu::itop());  }
    { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, r.vi[10] + 1u) + 0, 2); set_vi(r, 2, v); }  }
    { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, r.vi[10] + 0u) + 8, 2); set_vi(r, 7, v); }  }
    { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, r.vi[10] + 0u) + 12, 2); set_vi(r, 6, v); }  }
    { ++fl.t; set_vi(r, 4, r.vi[10] + 1u);  }
    { ++fl.t; set_vi(r, 5, r.vi[0] + 0u);  }
    { ++fl.t; set_vi(r, 7, r.vi[7] + r.vi[10]);  }
    { ++fl.t; set_vi(r, 6, r.vi[6] + r.vi[10]);  }
    { ++fl.t; set_vi(r, 15, 1692u); pend = true;  }
    { ++fl.t;  }
    (void)pend; return 4296u;
}
static const std::uint8_t code_005[] = {0xBD,0x06,0x0A,0x80,0xFF,0x02,0x00,0x00,0x01,0x50,0x02,0x09,0xFF,0x02,0x00,0x00,0x00,0x50,0x47,0x08,0xFF,0x02,0x00,0x00,0x00,0x50,0x26,0x08,0xFF,0x02,0x00,0x00,0x01,0x50,0x04,0x10,0xFF,0x02,0x00,0x00,0x00,0x00,0x05,0x10,0xFF,0x02,0x00,0x00,0xF0,0x39,0x0A,0x80,0xFF,0x02,0x00,0x00,0xB0,0x31,0x0A,0x80,0xFF,0x02,0x00,0x00,0x8B,0x05,0x0F,0x42,0xFF,0x02,0x00,0x00,0x3C,0x03,0x00,0x80,0xFF,0x02,0x00,0x00,};
static std::uint32_t local_block_005(Vu0Regs &PS2_VU_REGS_RESTRICT r, std::uint8_t *mem, FlagPipe &fl) {
    (void)mem; bool pend=false;
    { ++fl.t; set_vi(r, 10, vu::itop());  }
    { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, r.vi[10] + 1u) + 0, 2); set_vi(r, 2, v); }  }
    { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, r.vi[10] + 0u) + 8, 2); set_vi(r, 7, v); }  }
    { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, r.vi[10] + 0u) + 12, 2); set_vi(r, 6, v); }  }
    { ++fl.t; set_vi(r, 4, r.vi[10] + 1u);  }
    { ++fl.t; set_vi(r, 5, r.vi[0] + 0u);  }
    { ++fl.t; set_vi(r, 7, r.vi[7] + r.vi[10]);  }
    { ++fl.t; set_vi(r, 6, r.vi[6] + r.vi[10]);  }
    { ++fl.t; set_vi(r, 15, 1692u); pend = true;  }
    { ++fl.t;  }
    (void)pend; return 8496u;
}
static const std::uint8_t code_006[] = {0xBD,0x06,0x0A,0x80,0xFF,0x02,0x00,0x00,0x01,0x50,0x02,0x09,0xFF,0x02,0x00,0x00,0x00,0x50,0x47,0x08,0xFF,0x02,0x00,0x00,0x00,0x50,0x26,0x08,0xFF,0x02,0x00,0x00,0x01,0x50,0x04,0x10,0xFF,0x02,0x00,0x00,0x4B,0x00,0x05,0x10,0xFF,0x02,0x00,0x00,0xF0,0x39,0x0A,0x80,0xFF,0x02,0x00,0x00,0xB0,0x31,0x0A,0x80,0xFF,0x02,0x00,0x00,0x3B,0x05,0x0F,0x42,0xFF,0x02,0x00,0x00,0x3C,0x03,0x00,0x80,0xFF,0x02,0x00,0x00,};
static std::uint32_t local_block_006(Vu0Regs &PS2_VU_REGS_RESTRICT r, std::uint8_t *mem, FlagPipe &fl) {
    (void)mem; bool pend=false;
    { ++fl.t; set_vi(r, 10, vu::itop());  }
    { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, r.vi[10] + 1u) + 0, 2); set_vi(r, 2, v); }  }
    { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, r.vi[10] + 0u) + 8, 2); set_vi(r, 7, v); }  }
    { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, r.vi[10] + 0u) + 12, 2); set_vi(r, 6, v); }  }
    { ++fl.t; set_vi(r, 4, r.vi[10] + 1u);  }
    { ++fl.t; set_vi(r, 5, r.vi[0] + 75u);  }
    { ++fl.t; set_vi(r, 7, r.vi[7] + r.vi[10]);  }
    { ++fl.t; set_vi(r, 6, r.vi[6] + r.vi[10]);  }
    { ++fl.t; set_vi(r, 15, 1692u); pend = true;  }
    { ++fl.t;  }
    (void)pend; return 7856u;
}
static const std::uint8_t code_007[] = {0xBD,0x06,0x0A,0x80,0xFF,0x02,0x00,0x00,0x01,0x50,0x02,0x09,0xFF,0x02,0x00,0x00,0x00,0x50,0x47,0x08,0xFF,0x02,0x00,0x00,0x00,0x50,0x26,0x08,0xFF,0x02,0x00,0x00,0x01,0x50,0x04,0x10,0xFF,0x02,0x00,0x00,0x4B,0x00,0x05,0x10,0xFF,0x02,0x00,0x00,0xF0,0x39,0x0A,0x80,0xFF,0x02,0x00,0x00,0xB0,0x31,0x0A,0x80,0xFF,0x02,0x00,0x00,0x65,0x01,0x0F,0x42,0xFF,0x02,0x00,0x00,0x3C,0x03,0x00,0x80,0xFF,0x02,0x00,0x00,};
static std::uint32_t local_block_007(Vu0Regs &PS2_VU_REGS_RESTRICT r, std::uint8_t *mem, FlagPipe &fl) {
    (void)mem; bool pend=false;
    { ++fl.t; set_vi(r, 10, vu::itop());  }
    { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, r.vi[10] + 1u) + 0, 2); set_vi(r, 2, v); }  }
    { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, r.vi[10] + 0u) + 8, 2); set_vi(r, 7, v); }  }
    { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, r.vi[10] + 0u) + 12, 2); set_vi(r, 6, v); }  }
    { ++fl.t; set_vi(r, 4, r.vi[10] + 1u);  }
    { ++fl.t; set_vi(r, 5, r.vi[0] + 75u);  }
    { ++fl.t; set_vi(r, 7, r.vi[7] + r.vi[10]);  }
    { ++fl.t; set_vi(r, 6, r.vi[6] + r.vi[10]);  }
    { ++fl.t; set_vi(r, 15, 1692u); pend = true;  }
    { ++fl.t;  }
    (void)pend; return 0u;
}
static const std::uint8_t code_008[] = {0x4D,0x05,0x0F,0x42,0xFF,0x02,0x00,0x00,0x3C,0x03,0x00,0x80,0xFF,0x02,0x00,0x00,};
static std::uint32_t local_block_008(Vu0Regs &PS2_VU_REGS_RESTRICT r, std::uint8_t *mem, FlagPipe &fl) {
    (void)mem; bool pend=false;
    { ++fl.t; set_vi(r, 15, 1694u); pend = true;  }
    { ++fl.t;  }
    (void)pend; return 8016u;
}
static const std::uint8_t code_009[] = {0x61,0x05,0x0F,0x42,0xFF,0x02,0x00,0x00,0x3C,0x03,0x00,0x80,0xFF,0x02,0x00,0x00,};
static std::uint32_t local_block_009(Vu0Regs &PS2_VU_REGS_RESTRICT r, std::uint8_t *mem, FlagPipe &fl) {
    (void)mem; bool pend=false;
    { ++fl.t; set_vi(r, 15, 1694u); pend = true;  }
    { ++fl.t;  }
    (void)pend; return 8176u;
}
static const std::uint8_t code_010[] = {0x63,0x01,0x0F,0x42,0xFF,0x02,0x00,0x00,0x3C,0x03,0x00,0x80,0xFF,0x02,0x00,0x00,};
static std::uint32_t local_block_010(Vu0Regs &PS2_VU_REGS_RESTRICT r, std::uint8_t *mem, FlagPipe &fl) {
    (void)mem; bool pend=false;
    { ++fl.t; set_vi(r, 15, 1694u); pend = true;  }
    { ++fl.t;  }
    (void)pend; return 0u;
}
static const std::uint8_t code_011[] = {0x65,0x06,0x0F,0x42,0xFF,0x02,0x00,0x00,0x3C,0x03,0x00,0x80,0xFF,0x02,0x00,0x00,};
static std::uint32_t local_block_011(Vu0Regs &PS2_VU_REGS_RESTRICT r, std::uint8_t *mem, FlagPipe &fl) {
    (void)mem; bool pend=false;
    { ++fl.t; set_vi(r, 15, 1694u); pend = true;  }
    { ++fl.t;  }
    (void)pend; return 10256u;
}
static const std::uint8_t code_012[] = {0x7C,0x03,0x0F,0x42,0xFF,0x02,0x00,0x00,0x3C,0x03,0x00,0x80,0xFF,0x02,0x00,0x00,};
static std::uint32_t local_block_012(Vu0Regs &PS2_VU_REGS_RESTRICT r, std::uint8_t *mem, FlagPipe &fl) {
    (void)mem; bool pend=false;
    { ++fl.t; set_vi(r, 15, 1694u); pend = true;  }
    { ++fl.t;  }
    (void)pend; return 4296u;
}
static const std::uint8_t code_013[] = {0xD0,0x04,0x0F,0x42,0xFF,0x02,0x00,0x00,0x3C,0x03,0x00,0x80,0xFF,0x02,0x00,0x00,};
static std::uint32_t local_block_013(Vu0Regs &PS2_VU_REGS_RESTRICT r, std::uint8_t *mem, FlagPipe &fl) {
    (void)mem; bool pend=false;
    { ++fl.t; set_vi(r, 15, 1694u); pend = true;  }
    { ++fl.t;  }
    (void)pend; return 7016u;
}
static const std::uint8_t code_014[] = {0x29,0x04,0x0F,0x42,0xFF,0x02,0x00,0x00,0x3C,0x03,0x00,0x80,0xFF,0x02,0x00,0x00,};
static std::uint32_t local_block_014(Vu0Regs &PS2_VU_REGS_RESTRICT r, std::uint8_t *mem, FlagPipe &fl) {
    (void)mem; bool pend=false;
    { ++fl.t; set_vi(r, 15, 1696u); pend = true;  }
    { ++fl.t;  }
    (void)pend; return 5696u;
}
static const std::uint8_t code_015[] = {0x5F,0x05,0x0F,0x42,0xFF,0x02,0x00,0x00,0x3C,0x03,0x00,0x80,0xFF,0x02,0x00,0x00,};
static std::uint32_t local_block_015(Vu0Regs &PS2_VU_REGS_RESTRICT r, std::uint8_t *mem, FlagPipe &fl) {
    (void)mem; bool pend=false;
    { ++fl.t; set_vi(r, 15, 1696u); pend = true;  }
    { ++fl.t;  }
    (void)pend; return 8176u;
}
static const std::uint8_t code_016[] = {0x61,0x01,0x0F,0x42,0xFF,0x02,0x00,0x00,0x3C,0x03,0x00,0x80,0xFF,0x02,0x00,0x00,};
static std::uint32_t local_block_016(Vu0Regs &PS2_VU_REGS_RESTRICT r, std::uint8_t *mem, FlagPipe &fl) {
    (void)mem; bool pend=false;
    { ++fl.t; set_vi(r, 15, 1696u); pend = true;  }
    { ++fl.t;  }
    (void)pend; return 0u;
}
static const std::uint8_t code_017[] = {0x63,0x06,0x0F,0x42,0xFF,0x02,0x00,0x00,0x3C,0x03,0x00,0x80,0xFF,0x02,0x00,0x00,};
static std::uint32_t local_block_017(Vu0Regs &PS2_VU_REGS_RESTRICT r, std::uint8_t *mem, FlagPipe &fl) {
    (void)mem; bool pend=false;
    { ++fl.t; set_vi(r, 15, 1696u); pend = true;  }
    { ++fl.t;  }
    (void)pend; return 10256u;
}
static const std::uint8_t code_018[] = {0x7A,0x03,0x0F,0x42,0xFF,0x02,0x00,0x00,0x3C,0x03,0x00,0x80,0xFF,0x02,0x00,0x00,};
static std::uint32_t local_block_018(Vu0Regs &PS2_VU_REGS_RESTRICT r, std::uint8_t *mem, FlagPipe &fl) {
    (void)mem; bool pend=false;
    { ++fl.t; set_vi(r, 15, 1696u); pend = true;  }
    { ++fl.t;  }
    (void)pend; return 4296u;
}
static const std::uint8_t code_019[] = {0x9F,0x01,0x0F,0x42,0xFF,0x02,0x00,0x00,0x3C,0x03,0x00,0x80,0xFF,0x02,0x00,0x00,};
static std::uint32_t local_block_019(Vu0Regs &PS2_VU_REGS_RESTRICT r, std::uint8_t *mem, FlagPipe &fl) {
    (void)mem; bool pend=false;
    { ++fl.t; set_vi(r, 15, 1696u); pend = true;  }
    { ++fl.t;  }
    (void)pend; return 496u;
}
static const std::uint8_t code_020[] = {0xA2,0x03,0x0F,0x42,0xFF,0x02,0x00,0x00,0x3C,0x03,0x00,0x80,0xFF,0x02,0x00,0x00,};
static std::uint32_t local_block_020(Vu0Regs &PS2_VU_REGS_RESTRICT r, std::uint8_t *mem, FlagPipe &fl) {
    (void)mem; bool pend=false;
    { ++fl.t; set_vi(r, 15, 1696u); pend = true;  }
    { ++fl.t;  }
    (void)pend; return 4616u;
}
static const std::uint8_t code_021[] = {0xCE,0x04,0x0F,0x42,0xFF,0x02,0x00,0x00,0x3C,0x03,0x00,0x80,0xFF,0x02,0x00,0x00,};
static std::uint32_t local_block_021(Vu0Regs &PS2_VU_REGS_RESTRICT r, std::uint8_t *mem, FlagPipe &fl) {
    (void)mem; bool pend=false;
    { ++fl.t; set_vi(r, 15, 1696u); pend = true;  }
    { ++fl.t;  }
    (void)pend; return 7016u;
}
static const std::uint8_t code_022[] = {0xE5,0x01,0x0F,0x42,0xFF,0x02,0x00,0x00,0x3C,0x03,0x00,0x80,0xFF,0x02,0x00,0x00,};
static std::uint32_t local_block_022(Vu0Regs &PS2_VU_REGS_RESTRICT r, std::uint8_t *mem, FlagPipe &fl) {
    (void)mem; bool pend=false;
    { ++fl.t; set_vi(r, 15, 1696u); pend = true;  }
    { ++fl.t;  }
    (void)pend; return 1056u;
}
static const std::uint8_t code_023[] = {0xE7,0x04,0x0F,0x42,0xFF,0x02,0x00,0x00,0x3C,0x03,0x00,0x80,0xFF,0x02,0x00,0x00,};
static std::uint32_t local_block_023(Vu0Regs &PS2_VU_REGS_RESTRICT r, std::uint8_t *mem, FlagPipe &fl) {
    (void)mem; bool pend=false;
    { ++fl.t; set_vi(r, 15, 1696u); pend = true;  }
    { ++fl.t;  }
    (void)pend; return 7216u;
}
static const std::uint8_t code_024[] = {0x27,0x04,0x0F,0x42,0xFF,0x02,0x00,0x00,0x3C,0x03,0x00,0x80,0xFF,0x02,0x00,0x00,};
static std::uint32_t local_block_024(Vu0Regs &PS2_VU_REGS_RESTRICT r, std::uint8_t *mem, FlagPipe &fl) {
    (void)mem; bool pend=false;
    { ++fl.t; set_vi(r, 15, 1698u); pend = true;  }
    { ++fl.t;  }
    (void)pend; return 5696u;
}
static const std::uint8_t code_025[] = {0x5F,0x01,0x0F,0x42,0xFF,0x02,0x00,0x00,0x3C,0x03,0x00,0x80,0xFF,0x02,0x00,0x00,};
static std::uint32_t local_block_025(Vu0Regs &PS2_VU_REGS_RESTRICT r, std::uint8_t *mem, FlagPipe &fl) {
    (void)mem; bool pend=false;
    { ++fl.t; set_vi(r, 15, 1698u); pend = true;  }
    { ++fl.t;  }
    (void)pend; return 0u;
}
static const std::uint8_t code_026[] = {0x61,0x06,0x0F,0x42,0xFF,0x02,0x00,0x00,0x3C,0x03,0x00,0x80,0xFF,0x02,0x00,0x00,};
static std::uint32_t local_block_026(Vu0Regs &PS2_VU_REGS_RESTRICT r, std::uint8_t *mem, FlagPipe &fl) {
    (void)mem; bool pend=false;
    { ++fl.t; set_vi(r, 15, 1698u); pend = true;  }
    { ++fl.t;  }
    (void)pend; return 10256u;
}
static const std::uint8_t code_027[] = {0x78,0x03,0x0F,0x42,0xFF,0x02,0x00,0x00,0x3C,0x03,0x00,0x80,0xFF,0x02,0x00,0x00,};
static std::uint32_t local_block_027(Vu0Regs &PS2_VU_REGS_RESTRICT r, std::uint8_t *mem, FlagPipe &fl) {
    (void)mem; bool pend=false;
    { ++fl.t; set_vi(r, 15, 1698u); pend = true;  }
    { ++fl.t;  }
    (void)pend; return 4296u;
}
static const std::uint8_t code_028[] = {0x9D,0x01,0x0F,0x42,0xFF,0x02,0x00,0x00,0x3C,0x03,0x00,0x80,0xFF,0x02,0x00,0x00,};
static std::uint32_t local_block_028(Vu0Regs &PS2_VU_REGS_RESTRICT r, std::uint8_t *mem, FlagPipe &fl) {
    (void)mem; bool pend=false;
    { ++fl.t; set_vi(r, 15, 1698u); pend = true;  }
    { ++fl.t;  }
    (void)pend; return 496u;
}
static const std::uint8_t code_029[] = {0xCC,0x04,0x0F,0x42,0xFF,0x02,0x00,0x00,0x3C,0x03,0x00,0x80,0xFF,0x02,0x00,0x00,};
static std::uint32_t local_block_029(Vu0Regs &PS2_VU_REGS_RESTRICT r, std::uint8_t *mem, FlagPipe &fl) {
    (void)mem; bool pend=false;
    { ++fl.t; set_vi(r, 15, 1698u); pend = true;  }
    { ++fl.t;  }
    (void)pend; return 7016u;
}
static const std::uint8_t code_030[] = {0xE3,0x01,0x0F,0x42,0xFF,0x02,0x00,0x00,0x3C,0x03,0x00,0x80,0xFF,0x02,0x00,0x00,};
static std::uint32_t local_block_030(Vu0Regs &PS2_VU_REGS_RESTRICT r, std::uint8_t *mem, FlagPipe &fl) {
    (void)mem; bool pend=false;
    { ++fl.t; set_vi(r, 15, 1698u); pend = true;  }
    { ++fl.t;  }
    (void)pend; return 1056u;
}
static const std::uint8_t code_031[] = {0xE5,0x04,0x0F,0x42,0xFF,0x02,0x00,0x00,0x3C,0x03,0x00,0x80,0xFF,0x02,0x00,0x00,};
static std::uint32_t local_block_031(Vu0Regs &PS2_VU_REGS_RESTRICT r, std::uint8_t *mem, FlagPipe &fl) {
    (void)mem; bool pend=false;
    { ++fl.t; set_vi(r, 15, 1698u); pend = true;  }
    { ++fl.t;  }
    (void)pend; return 7216u;
}
static const std::uint8_t code_032[] = {0x25,0x04,0x0F,0x42,0xFF,0x02,0x00,0x00,0x3C,0x03,0x00,0x80,0xFF,0x02,0x00,0x00,};
static std::uint32_t local_block_032(Vu0Regs &PS2_VU_REGS_RESTRICT r, std::uint8_t *mem, FlagPipe &fl) {
    (void)mem; bool pend=false;
    { ++fl.t; set_vi(r, 15, 1700u); pend = true;  }
    { ++fl.t;  }
    (void)pend; return 5696u;
}
static const std::uint8_t code_033[] = {0x5D,0x01,0x0F,0x42,0xFF,0x02,0x00,0x00,0x3C,0x03,0x00,0x80,0xFF,0x02,0x00,0x00,};
static std::uint32_t local_block_033(Vu0Regs &PS2_VU_REGS_RESTRICT r, std::uint8_t *mem, FlagPipe &fl) {
    (void)mem; bool pend=false;
    { ++fl.t; set_vi(r, 15, 1700u); pend = true;  }
    { ++fl.t;  }
    (void)pend; return 0u;
}
static const std::uint8_t code_034[] = {0x5F,0x06,0x0F,0x42,0xFF,0x02,0x00,0x00,0x3C,0x03,0x00,0x80,0xFF,0x02,0x00,0x00,};
static std::uint32_t local_block_034(Vu0Regs &PS2_VU_REGS_RESTRICT r, std::uint8_t *mem, FlagPipe &fl) {
    (void)mem; bool pend=false;
    { ++fl.t; set_vi(r, 15, 1700u); pend = true;  }
    { ++fl.t;  }
    (void)pend; return 10256u;
}
static const std::uint8_t code_035[] = {0x76,0x03,0x0F,0x42,0xFF,0x02,0x00,0x00,0x3C,0x03,0x00,0x80,0xFF,0x02,0x00,0x00,};
static std::uint32_t local_block_035(Vu0Regs &PS2_VU_REGS_RESTRICT r, std::uint8_t *mem, FlagPipe &fl) {
    (void)mem; bool pend=false;
    { ++fl.t; set_vi(r, 15, 1700u); pend = true;  }
    { ++fl.t;  }
    (void)pend; return 4296u;
}
static const std::uint8_t code_036[] = {0xE1,0x01,0x0F,0x42,0xFF,0x02,0x00,0x00,0x3C,0x03,0x00,0x80,0xFF,0x02,0x00,0x00,};
static std::uint32_t local_block_036(Vu0Regs &PS2_VU_REGS_RESTRICT r, std::uint8_t *mem, FlagPipe &fl) {
    (void)mem; bool pend=false;
    { ++fl.t; set_vi(r, 15, 1700u); pend = true;  }
    { ++fl.t;  }
    (void)pend; return 1056u;
}
static const std::uint8_t code_037[] = {0x5D,0x06,0x0F,0x42,0xFF,0x02,0x00,0x00,0x3C,0x03,0x00,0x80,0xFF,0x02,0x00,0x00,};
static std::uint32_t local_block_037(Vu0Regs &PS2_VU_REGS_RESTRICT r, std::uint8_t *mem, FlagPipe &fl) {
    (void)mem; bool pend=false;
    { ++fl.t; set_vi(r, 15, 1702u); pend = true;  }
    { ++fl.t;  }
    (void)pend; return 10256u;
}
static const std::uint8_t code_038[] = {0x74,0x03,0x0F,0x42,0xFF,0x02,0x00,0x00,0x3C,0x03,0x00,0x80,0xFF,0x02,0x00,0x00,};
static std::uint32_t local_block_038(Vu0Regs &PS2_VU_REGS_RESTRICT r, std::uint8_t *mem, FlagPipe &fl) {
    (void)mem; bool pend=false;
    { ++fl.t; set_vi(r, 15, 1702u); pend = true;  }
    { ++fl.t;  }
    (void)pend; return 4296u;
}
static const std::uint8_t code_039[] = {0xDF,0x01,0x0F,0x42,0xFF,0x02,0x00,0x00,0x3C,0x03,0x00,0x80,0xFF,0x02,0x00,0x00,};
static std::uint32_t local_block_039(Vu0Regs &PS2_VU_REGS_RESTRICT r, std::uint8_t *mem, FlagPipe &fl) {
    (void)mem; bool pend=false;
    { ++fl.t; set_vi(r, 15, 1702u); pend = true;  }
    { ++fl.t;  }
    (void)pend; return 1056u;
}
static const ps2::vu::LocalContinuation blocks[] = {
    {13456u,80u,code_000,local_block_000},
    {13456u,80u,code_001,local_block_001},
    {13456u,80u,code_002,local_block_002},
    {13456u,80u,code_003,local_block_003},
    {13456u,80u,code_004,local_block_004},
    {13456u,80u,code_005,local_block_005},
    {13456u,80u,code_006,local_block_006},
    {13456u,80u,code_007,local_block_007},
    {13536u,16u,code_008,local_block_008},
    {13536u,16u,code_009,local_block_009},
    {13536u,16u,code_010,local_block_010},
    {13536u,16u,code_011,local_block_011},
    {13536u,16u,code_012,local_block_012},
    {13536u,16u,code_013,local_block_013},
    {13552u,16u,code_014,local_block_014},
    {13552u,16u,code_015,local_block_015},
    {13552u,16u,code_016,local_block_016},
    {13552u,16u,code_017,local_block_017},
    {13552u,16u,code_018,local_block_018},
    {13552u,16u,code_019,local_block_019},
    {13552u,16u,code_020,local_block_020},
    {13552u,16u,code_021,local_block_021},
    {13552u,16u,code_022,local_block_022},
    {13552u,16u,code_023,local_block_023},
    {13568u,16u,code_024,local_block_024},
    {13568u,16u,code_025,local_block_025},
    {13568u,16u,code_026,local_block_026},
    {13568u,16u,code_027,local_block_027},
    {13568u,16u,code_028,local_block_028},
    {13568u,16u,code_029,local_block_029},
    {13568u,16u,code_030,local_block_030},
    {13568u,16u,code_031,local_block_031},
    {13584u,16u,code_032,local_block_032},
    {13584u,16u,code_033,local_block_033},
    {13584u,16u,code_034,local_block_034},
    {13584u,16u,code_035,local_block_035},
    {13584u,16u,code_036,local_block_036},
    {13600u,16u,code_037,local_block_037},
    {13600u,16u,code_038,local_block_038},
    {13600u,16u,code_039,local_block_039},
};
}
void register_generated_vu_local_blocks() { ps2::vu::register_local_continuations(gen_local::blocks, 40u); }
