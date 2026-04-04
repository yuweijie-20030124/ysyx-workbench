/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include "local-include/reg.h"
#include <cpu/cpu.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>
#include <cpu/ftrace.h>
#define R(i) gpr(i)
#define Mr vaddr_read
#define Mw vaddr_write

enum {
  TYPE_I, TYPE_U, TYPE_S, TYPE_J, TYPE_B, TYPE_R, TYPE_CR, TYPE_CI, TYPE_CSS, TYPE_CIW, TYPE_CL, TYPE_CS, TYPE_CB,TYPE_CA,
  TYPE_N, // none 
};

static void etrace() {
  IFDEF(CONFIG_ETRACE, {
      printf(ANSI_FMT("[ETRACE]", ANSI_FG_BLUE)"ecall in mepc = " FMT_WORD ", mcause = " FMT_WORD "\n",cpu.mepc, cpu.mcause);});
}

#define src1R() do { *src1 = R(rs1); } while (0)
#define src2R() do { *src2 = R(rs2); } while (0)
#define immI() do { *imm = SEXT(BITS(i, 31, 20), 12); } while(0)
#define immU() do { *imm = SEXT(BITS(i, 31, 12), 20) << 12; } while(0)
#define immS() do { *imm = (SEXT(BITS(i, 31, 25), 7) << 5) | BITS(i, 11, 7); } while(0)
#define immJ() do { *imm = SEXT(((BITS(i, 31, 31) << 19) | BITS(i, 30, 21) | (BITS(i, 20, 20) << 10) | (BITS(i, 19, 12) << 11)) << 1, 21);} while(0)
#define immB() do { *imm = (SEXT(BITS(i, 31, 31), 1) << 12) | (BITS(i, 7, 7) << 11) | (BITS(i, 30, 25) << 5) | (BITS(i, 11, 8) << 1); } while(0)
#define c_addi4spn_imm ((BITS(c_inst, 12, 11) << 4) | (BITS(c_inst, 10, 7) << 6) | (BITS(c_inst, 6, 6) << 2) | (BITS(c_inst, 5, 5) << 3))
#define c_lsw_imm ((BITS(c_inst, 12, 10) << 3) | (BITS(c_inst, 6, 6) << 2) | (BITS(c_inst, 5, 5) << 6))
#define c_lsd_imm ((BITS(c_inst, 12, 10) << 3) | (BITS(c_inst, 6, 5) << 6))
#define c_addi_addiw_andi_li_imm (SEXT(((BITS(c_inst, 12, 12) << 5) | (BITS(c_inst, 6, 2))), 6))
#define c_addi16sp_imm (SEXT(((BITS(c_inst, 12, 12) << 9) | (BITS(c_inst, 6, 6) << 4) | (BITS(c_inst, 5, 5) << 6) | (BITS(c_inst, 4, 3) << 7) | (BITS(c_inst, 2, 2) << 5)), 10))
#define c_lui_imm (SEXT(((BITS(c_inst, 12, 12) << 17) | (BITS(c_inst, 6, 2) << 12)), 18))
#define c_j_jal_imm (SEXT(((BITS(c_inst, 12, 12) << 11) | (BITS(c_inst, 11, 11) << 4) | (BITS(c_inst, 10, 9) << 8) | (BITS(c_inst, 8, 8) << 10) | (BITS(c_inst, 7, 7) << 6) | (BITS(c_inst, 6, 6) << 7) | (BITS(c_inst, 5, 3) << 1) | (BITS(c_inst, 2, 2) << 5)), 12))
#define c_b_imm (SEXT(((BITS(c_inst, 12, 12) << 8) | (BITS(c_inst, 11, 10) << 3) | (BITS(c_inst, 6, 5) << 6) | (BITS(c_inst, 4, 3) << 1) | (BITS(c_inst, 2, 2) << 5)), 9))
#define c_srli_srai_slli_imm ((BITS(c_inst, 12, 12) << 5) | (BITS(c_inst, 6, 2)))
#define c_lwsp_imm ((BITS(c_inst, 12, 12) << 5) | (BITS(c_inst, 6, 4) << 2) | (BITS(c_inst, 3, 2) << 6))
#define c_swsp_imm ((BITS(c_inst, 12, 9) << 2) | (BITS(c_inst, 8, 7) << 6))
#define c_ldsp_imm ((BITS(c_inst, 12, 12) << 5) | (BITS(c_inst, 6, 5) << 3) | (BITS(c_inst, 4, 2) << 6))
#define c_sdsp_imm ((BITS(c_inst, 12, 10) << 3) | (BITS(c_inst, 9, 7) << 6))

#define srcCR_CI_CSS()            \
    do                        \
    {                         \
        rs1 = BITS(i, 11, 7); \
        rs2 = BITS(i, 6, 2);  \
    } while (0)
#define srcCIW_CL_CS_CB()       \
    do                             \
    {                              \
        rs1 = (BITS(i, 9, 7) + 8); \
        rs2 = (BITS(i, 4, 2) + 8); \
        *rd = rs2;                 \
    } while (0)
#define srcCA()       \
    do                             \
    {                              \
        rs1 = (BITS(i, 9, 7) + 8); \
        rs2 = (BITS(i, 4, 2) + 8); \
        *rd = rs1;                 \
    } while (0)

static bool can_not_diasssemble;
bool isa_can_not_disassemble(){
    return can_not_diasssemble;
}

static void decode_operand(Decode *s, int *rd, word_t *src1, word_t *src2, word_t *imm, int type) {
  uint32_t i = s->isa.inst.val;
  int rs1 = BITS(i, 19, 15);
  int rs2 = BITS(i, 24, 20);
  *rd     = BITS(i, 11, 7);
  switch (type) {
    case TYPE_I: src1R();          immI(); break;
    case TYPE_U:                   immU(); break;
    case TYPE_S: src1R(); src2R(); immS(); break;
		case TYPE_J:									 immJ(); break;
		case TYPE_B: src1R(); src2R(); immB(); break;
    case TYPE_R: src1R(); src2R();         break;
    case TYPE_CR: srcCR_CI_CSS();    src1R(); src2R(); break;
    case TYPE_CI: srcCR_CI_CSS();    src1R();          break;
    case TYPE_CSS:srcCR_CI_CSS();             src2R(); break;
    case TYPE_CIW:srcCIW_CL_CS_CB();                   break;
    case TYPE_CL: srcCIW_CL_CS_CB(); src1R();          break;
    case TYPE_CS: srcCIW_CL_CS_CB(); src1R(); src2R(); break;
    case TYPE_CB: srcCIW_CL_CS_CB(); src1R();          break;
    case TYPE_CA: srcCA();           src1R(); src2R(); break;
		
 }
}

enum {
  RV32_OPCODE_LOAD   = 0x03,
  RV32_OPCODE_OP_IMM = 0x13,
  RV32_OPCODE_AUIPC  = 0x17,
  RV32_OPCODE_STORE  = 0x23,
  RV32_OPCODE_OP     = 0x33,
  RV32_OPCODE_LUI    = 0x37,
  RV32_OPCODE_BRANCH = 0x63,
  RV32_OPCODE_JALR   = 0x67,
  RV32_OPCODE_JAL    = 0x6f,
  RV32_OPCODE_SYSTEM = 0x73,
};

enum {
  RV32_INST_ECALL     = 0x00000073u,
  RV32_INST_EBREAK    = 0x00100073u,
  RV32_INST_MRET      = 0x30200073u,
  RV32_INST_MAGIC_SUB = 0x40000033u,
};

#define RV32_F3F7_KEY(funct3, funct7) ((((uint32_t)(funct7)) << 3) | (uint32_t)(funct3))

static inline uint32_t rv32_funct3_key(uint32_t inst) {
  return BITS(inst, 14, 12);
}

static inline uint32_t rv32_funct3_funct7_key(uint32_t inst) {
  return RV32_F3F7_KEY(rv32_funct3_key(inst), BITS(inst, 31, 25));
}

// 用 X-macro 集中声明可访问 CSR，后续增删 CSR 时只需要维护这一处表项。
#define RV32_CSR_TABLE(_) \
  _(0x300, mstatus) \
  _(0x305, mtvec) \
  _(0x341, mepc) \
  _(0x342, mcause)

static bool rv32_read_csr(word_t csr, word_t *value) {
  switch (csr) {
#define RV32_CSR_READ_CASE(addr, field) case (addr): *value = cpu.field; return true;
    RV32_CSR_TABLE(RV32_CSR_READ_CASE)
#undef RV32_CSR_READ_CASE
    default: return false;
  }
}

static bool rv32_write_csr(word_t csr, word_t value) {
  switch (csr) {
#define RV32_CSR_WRITE_CASE(addr, field) case (addr): cpu.field = value; return true;
    RV32_CSR_TABLE(RV32_CSR_WRITE_CASE)
#undef RV32_CSR_WRITE_CASE
    default: return false;
  }
}

static bool rv32_or_csr(word_t csr, word_t value) {
  switch (csr) {
#define RV32_CSR_OR_CASE(addr, field) case (addr): cpu.field |= value; return true;
    RV32_CSR_TABLE(RV32_CSR_OR_CASE)
#undef RV32_CSR_OR_CASE
    default: return false;
  }
}

// 这组表项对应 opcode 类内的二级分发，按 funct3 或 funct3/funct7 组合 key 展开 case。
#define RV32_LOAD_TABLE(_) \
  _(0x0, lb,  I, R(rd) = SEXT(Mr(src1 + imm, 1), 8)) \
  _(0x1, lh,  I, R(rd) = SEXT(Mr(src1 + imm, 2), 16)) \
  _(0x2, lw,  I, R(rd) = Mr(src1 + imm, 4)) \
  _(0x4, lbu, I, R(rd) = Mr(src1 + imm, 1)) \
  _(0x5, lhu, I, R(rd) = Mr(src1 + imm, 2))

#define RV32_STORE_TABLE(_) \
  _(0x0, sb, S, Mw(src1 + imm, 1, src2)) \
  _(0x1, sh, S, Mw(src1 + imm, 2, src2)) \
  _(0x2, sw, S, Mw(src1 + imm, 4, src2)) \
  _(0x3, sd, S, Mw(src1 + imm, 8, src2))

#define RV32_BRANCH_TABLE(_) \
  _(0x0, beq,  B, if (src1 == src2) s->dnpc = s->pc + imm) \
  _(0x1, bne,  B, if (src1 != src2) s->dnpc = s->pc + imm) \
  _(0x4, blt,  B, s->dnpc = ((int32_t)src1 <  (int32_t)src2) ? s->pc + imm : s->dnpc) \
  _(0x5, bge,  B, s->dnpc = ((int32_t)src1 >= (int32_t)src2) ? s->pc + imm : s->dnpc) \
  _(0x6, bltu, B, s->dnpc = (src1 <  src2) ? s->pc + imm : s->dnpc) \
  _(0x7, bgeu, B, s->dnpc = (src1 >= src2) ? s->pc + imm : s->dnpc)

#define RV32_OP_IMM_TABLE(_) \
  _(0x0, addi,  I, R(rd) = src1 + imm) \
  _(0x2, slti,  I, R(rd) = ((int32_t)src1 < (int32_t)imm) ? 1 : 0) \
  _(0x3, sltiu, I, R(rd) = (src1 < imm) ? 1 : 0) \
  _(0x4, xori,  I, R(rd) = src1 ^ imm) \
  _(0x6, ori,   I, R(rd) = src1 | imm) \
  _(0x7, andi,  I, R(rd) = src1 & imm)

#define RV32_OP_IMM_SHIFT_TABLE(_) \
  _(RV32_F3F7_KEY(0x1, 0x00), slli, I, R(rd) = src1 << BITS(imm, 5, 0)) \
  _(RV32_F3F7_KEY(0x5, 0x00), srli, I, R(rd) = src1 >> BITS(imm, 5, 0)) \
  _(RV32_F3F7_KEY(0x5, 0x20), srai, I, R(rd) = (int32_t)src1 >> BITS(imm, 4, 0))

#define RV32_OP_TABLE(_) \
  _(RV32_F3F7_KEY(0x0, 0x00), add,    R, R(rd) = src1 + src2) \
  _(RV32_F3F7_KEY(0x0, 0x20), sub,    R, if (i == RV32_INST_MAGIC_SUB) magic_instruction(); else R(rd) = src1 - src2) \
  _(RV32_F3F7_KEY(0x1, 0x00), sll,    R, R(rd) = src1 << BITS(src2, 4, 0)) \
  _(RV32_F3F7_KEY(0x2, 0x00), slt,    R, R(rd) = ((int32_t)src1 < (int32_t)src2) ? 1 : 0) \
  _(RV32_F3F7_KEY(0x3, 0x00), sltu,   R, R(rd) = src1 < src2 ? 1 : 0) \
  _(RV32_F3F7_KEY(0x4, 0x00), xor,    R, R(rd) = src1 ^ src2) \
  _(RV32_F3F7_KEY(0x5, 0x00), srl,    R, R(rd) = src1 >> BITS(src2, 4, 0)) \
  _(RV32_F3F7_KEY(0x5, 0x20), sra,    R, R(rd) = (int32_t)src1 >> BITS(src2, 4, 0)) \
  _(RV32_F3F7_KEY(0x6, 0x00), or,     R, R(rd) = src1 | src2) \
  _(RV32_F3F7_KEY(0x7, 0x00), and,    R, R(rd) = src1 & src2) \
  _(RV32_F3F7_KEY(0x0, 0x01), mul,    R, R(rd) = (unsigned)src1 * (unsigned)src2) \
  _(RV32_F3F7_KEY(0x1, 0x01), mulh,   R, R(rd) = ((int64_t)(int32_t)src1 * (int64_t)(int32_t)src2) >> 32) \
  _(RV32_F3F7_KEY(0x2, 0x01), mulhsu, R, R(rd) = ((int64_t)(int32_t)src1 * (int64_t)(uint32_t)src2) >> 32) \
  _(RV32_F3F7_KEY(0x3, 0x01), mulhu,  R, R(rd) = ((int64_t)(uint32_t)src1 * (int64_t)(uint32_t)src2) >> 32) \
  _(RV32_F3F7_KEY(0x4, 0x01), div,    R, if (src2 == 0) R(rd) = -1; else if ((int32_t)src1 == INT32_MIN && (int32_t)src2 == -1) R(rd) = INT32_MIN; else R(rd) = (int32_t)src1 / (int32_t)src2) \
  _(RV32_F3F7_KEY(0x5, 0x01), divu,   R, if (src2 == 0) R(rd) = 0xFFFFFFFF; else R(rd) = (uint32_t)src1 / (uint32_t)src2) \
  _(RV32_F3F7_KEY(0x6, 0x01), rem,    R, if (src2 == 0) R(rd) = (int32_t)src1; else if ((int32_t)src1 == INT32_MIN && (int32_t)src2 == -1) R(rd) = 0; else R(rd) = (int32_t)src1 % (int32_t)src2) \
  _(RV32_F3F7_KEY(0x7, 0x01), remu,   R, if (src2 == 0) R(rd) = (uint32_t)src1; else R(rd) = (uint32_t)src1 % (uint32_t)src2)

#define RV32_SYSTEM_TABLE(_) \
  _(0x1, csrrw, I, do { word_t old = 0; if (rv32_read_csr(imm, &old)) { R(rd) = old; rv32_write_csr(imm, src1); } } while (0)) \
  _(0x2, csrrs, I, do { word_t old = 0; if (rv32_read_csr(imm, &old)) { R(rd) = old; rv32_or_csr(imm, src1); } } while (0))

#define RV32_SYSTEM_ZERO_TABLE(_) \
  _(RV32_INST_ECALL,  ecall,  s->dnpc = isa_raise_intr(11, s->pc); etrace()) \
  _(RV32_INST_EBREAK, ebreak, NEMUTRAP(s->pc, R(10))) \
  _(RV32_INST_MRET,   mret,   s->dnpc = cpu.mepc)

enum {
  RV32C_QUADRANT_0 = 0x0,
  RV32C_QUADRANT_1 = 0x1,
  RV32C_QUADRANT_2 = 0x2,
};

enum {
  RV32C_Q1_MISC_SRLI  = 0x0,
  RV32C_Q1_MISC_SRAI  = 0x1,
  RV32C_Q1_MISC_ANDI  = 0x2,
  RV32C_Q1_MISC_ARITH = 0x3,
};

static inline uint32_t rv32c_quadrant_key(uint16_t inst) {
  return BITS(inst, 1, 0);
}

static inline uint32_t rv32c_funct3_key(uint16_t inst) {
  return BITS(inst, 15, 13);
}

static inline uint32_t rv32c_q1_misc_key(uint16_t inst) {
  return BITS(inst, 11, 10);
}

static inline uint32_t rv32c_q1_alu_key(uint16_t inst) {
  return BITS(inst, 6, 5);
}

static inline uint32_t rv32c_q2_jump_move_key(uint16_t inst) {
  return (BITS(inst, 12, 12) << 1) | (BITS(inst, 6, 2) != 0);
}

enum {
  RV32_OPCODE_TABLE_SIZE = 128,
  RV32_FUNCT3_TABLE_SIZE = 8,
  RV32_F3F7_TABLE_LAST = RV32_F3F7_KEY(0x7, 0x20),
  RV32_F3F7_TABLE_SIZE = RV32_F3F7_TABLE_LAST + 1,
  RV32C_SUBKEY_TABLE_SIZE = 4,
};

// 压缩指令同样按表驱动整理，名称统一成可拼接标识符，方便后面生成 GCC 标签表。
#define RV32C_Q0_TABLE(_) \
  _(0x2, c_lw,       CL,  R(rd) = SEXT(Mr(src1 + c_lsw_imm, 4), 32)) \
  _(0x6, c_sw,       CS,  Mw(src1 + c_lsw_imm, 4, src2)) \
  _(0x0, c_addi4spn, CIW, R(rd) = R(2) + c_addi4spn_imm)

#define RV32C_Q1_TABLE(_) \
  _(0x2, c_li,   CI, R(rd) = c_addi_addiw_andi_li_imm) \
  _(0x5, c_j,    N,  s->dnpc = s->pc + c_j_jal_imm) \
  _(0x6, c_beqz, CB, if (src1 == 0) s->dnpc = s->pc + c_b_imm) \
  _(0x7, c_bnez, CB, if (src1 != 0) s->dnpc = s->pc + c_b_imm) \
  _(0x1, c_jal,  N,  R(1) = s->dnpc; s->dnpc = s->pc + c_j_jal_imm)

#define RV32C_Q1_MISC_TABLE(_) \
  _(RV32C_Q1_MISC_ANDI, c_andi, CA, R(rd) = src1 & c_addi_addiw_andi_li_imm) \
  _(RV32C_Q1_MISC_SRLI, c_srli, CA, R(rd) = src1 >> c_srli_srai_slli_imm) \
  _(RV32C_Q1_MISC_SRAI, c_srai, CA, R(rd) = (sword_t)src1 >> c_srli_srai_slli_imm)

#define RV32C_Q1_ARITH_TABLE(_) \
  _(0x0, c_sub, CA, R(rd) = src1 - src2) \
  _(0x1, c_xor, CA, R(rd) = src1 ^ src2) \
  _(0x2, c_or,  CA, R(rd) = src1 | src2) \
  _(0x3, c_and, CA, R(rd) = src1 & src2)

#define RV32C_Q2_TABLE(_) \
  _(0x2, c_lwsp, CI,  R(rd) = SEXT(Mr(R(2) + c_lwsp_imm, 4), 32)) \
  _(0x6, c_swsp, CSS, Mw(R(2) + c_swsp_imm, 4, src2)) \
  _(0x0, c_slli, CI,  R(rd) = src1 << c_srli_srai_slli_imm)

#define RV32C_Q2_MOVE_TABLE(_) \
  _(0x3, c_add,  CR, R(rd) = src1 + src2) \
  _(0x1, c_mv,   CR, R(rd) = src2) \
  _(0x2, c_jalr, CR, R(1) = s->dnpc; s->dnpc = src1; s->dnpc &= ((word_t)-2)) \
  _(0x0, c_jr,   CI, s->dnpc = src1; s->dnpc &= ((word_t)-2))

// 热路径直接展开高频操作数提取，避免每次都走 decode_operand 的类型 switch。
#define RV32_FAST_I_OPERANDS(inst) \
  do { \
    rd = BITS((inst), 11, 7); \
    src1 = R(BITS((inst), 19, 15)); \
    imm = SEXT(BITS((inst), 31, 20), 12); \
  } while (0)

#define RV32_FAST_S_OPERANDS(inst) \
  do { \
    src1 = R(BITS((inst), 19, 15)); \
    src2 = R(BITS((inst), 24, 20)); \
    imm = (SEXT(BITS((inst), 31, 25), 7) << 5) | BITS((inst), 11, 7); \
  } while (0)

#define RV32_FAST_B_OPERANDS(inst) \
  do { \
    src1 = R(BITS((inst), 19, 15)); \
    src2 = R(BITS((inst), 24, 20)); \
    imm = (SEXT(BITS((inst), 31, 31), 1) << 12) | (BITS((inst), 7, 7) << 11) | (BITS((inst), 30, 25) << 5) | (BITS((inst), 11, 8) << 1); \
  } while (0)

#define RV32_FAST_R_OPERANDS(inst) \
  do { \
    rd = BITS((inst), 11, 7); \
    src1 = R(BITS((inst), 19, 15)); \
    src2 = R(BITS((inst), 24, 20)); \
  } while (0)

#define RV32_FAST_J_OPERANDS(inst) \
  do { \
    rd = BITS((inst), 11, 7); \
    imm = SEXT(((BITS((inst), 31, 31) << 19) | BITS((inst), 30, 21) | (BITS((inst), 20, 20) << 10) | (BITS((inst), 19, 12) << 11)) << 1, 21); \
  } while (0)

#define RV32_FAST_U_OPERANDS(inst) \
  do { \
    rd = BITS((inst), 11, 7); \
    imm = SEXT(BITS((inst), 31, 12), 20) << 12; \
  } while (0)

#define RV32C_FAST_CIW_OPERANDS(inst) \
  do { \
    rd = BITS((inst), 4, 2) + 8; \
  } while (0)

#define RV32C_FAST_CI_OPERANDS(inst) \
  do { \
    rd = BITS((inst), 11, 7); \
    src1 = R(rd); \
  } while (0)

#define RV32C_FAST_CI_RD(inst) \
  do { \
    rd = BITS((inst), 11, 7); \
  } while (0)

#define RV32C_FAST_CL_OPERANDS(inst) \
  do { \
    rd = BITS((inst), 4, 2) + 8; \
    src1 = R(BITS((inst), 9, 7) + 8); \
  } while (0)

#define RV32C_FAST_CS_OPERANDS(inst) \
  do { \
    src1 = R(BITS((inst), 9, 7) + 8); \
    src2 = R(BITS((inst), 4, 2) + 8); \
  } while (0)

#define RV32C_FAST_CB_OPERANDS(inst) \
  do { \
    src1 = R(BITS((inst), 9, 7) + 8); \
  } while (0)

#define RV32C_FAST_CA_OPERANDS(inst) \
  do { \
    rd = BITS((inst), 9, 7) + 8; \
    src1 = R(rd); \
    src2 = R(BITS((inst), 4, 2) + 8); \
  } while (0)

#define RV32C_FAST_CR_OPERANDS(inst) \
  do { \
    rd = BITS((inst), 11, 7); \
    src1 = R(rd); \
    src2 = R(BITS((inst), 6, 2)); \
  } while (0)

#define RV32C_FAST_CSS_OPERANDS(inst) \
  do { \
    src2 = R(BITS((inst), 6, 2)); \
  } while (0)

#define RV32_EXEC(type, body) \
  do { \
    decode_operand(s, &rd, &src1, &src2, &imm, concat(TYPE_, type)); \
    body; \
  } while (0)

#define RV32_LABEL_ENTRY(key, name, type, body) [key] = &&concat(rv32_lbl_, name),
#define RV32_LABEL_BODY(key, name, type, body) concat(rv32_lbl_, name): RV32_EXEC(type, body); goto exec_finish;
#define RV32_LABEL_BODY_I(key, name, type, body) concat(rv32_lbl_, name): RV32_FAST_I_OPERANDS(i); body; goto exec_finish;
#define RV32_LABEL_BODY_S(key, name, type, body) concat(rv32_lbl_, name): RV32_FAST_S_OPERANDS(i); body; goto exec_finish;
#define RV32_LABEL_BODY_B(key, name, type, body) concat(rv32_lbl_, name): RV32_FAST_B_OPERANDS(i); body; goto exec_finish;
#define RV32_LABEL_BODY_R(key, name, type, body) concat(rv32_lbl_, name): RV32_FAST_R_OPERANDS(i); body; goto exec_finish;

#define RV32C_LABEL_BODY(key, name, type, body) concat(RV32C_LABEL_BODY_, type)(name, body)
#define RV32C_LABEL_BODY_N(name, body) concat(rv32_lbl_, name): body; goto exec_finish;
#define RV32C_LABEL_BODY_CIW(name, body) concat(rv32_lbl_, name): RV32C_FAST_CIW_OPERANDS(c_inst); body; goto exec_finish;
#define RV32C_LABEL_BODY_CI(name, body) concat(rv32_lbl_, name): RV32C_FAST_CI_OPERANDS(c_inst); body; goto exec_finish;
#define RV32C_LABEL_BODY_CSS(name, body) concat(rv32_lbl_, name): RV32C_FAST_CSS_OPERANDS(c_inst); body; goto exec_finish;
#define RV32C_LABEL_BODY_CL(name, body) concat(rv32_lbl_, name): RV32C_FAST_CL_OPERANDS(c_inst); body; goto exec_finish;
#define RV32C_LABEL_BODY_CS(name, body) concat(rv32_lbl_, name): RV32C_FAST_CS_OPERANDS(c_inst); body; goto exec_finish;
#define RV32C_LABEL_BODY_CB(name, body) concat(rv32_lbl_, name): RV32C_FAST_CB_OPERANDS(c_inst); body; goto exec_finish;
#define RV32C_LABEL_BODY_CA(name, body) concat(rv32_lbl_, name): RV32C_FAST_CA_OPERANDS(c_inst); body; goto exec_finish;
#define RV32C_LABEL_BODY_CR(name, body) concat(rv32_lbl_, name): RV32C_FAST_CR_OPERANDS(c_inst); body; goto exec_finish;

// GCC 标签表要求 label 地址稳定，禁止 clone/inlining 避免地址表失效。
static int decode_exec(Decode *s) __attribute__((noinline, noclone));
static int decode_exec(Decode *s) {
  int rd = 0;
  uint16_t c_inst = 0;
  uint32_t i = s->isa.inst.val;
  uint32_t opcode = 0;
  uint32_t funct3_key = 0;
  uint32_t funct3_funct7_key = 0;
  uint32_t quadrant_key = 0;
  uint32_t c_funct3_key = 0;
  word_t src1 = 0, src2 = 0, imm = 0;

  static void *const rv32_opcode_table[RV32_OPCODE_TABLE_SIZE] = {
    [0 ... RV32_OPCODE_TABLE_SIZE - 1] = &&rv32_lbl_inv,
    [RV32_OPCODE_LOAD] = &&rv32_lbl_load_dispatch,
    [RV32_OPCODE_OP_IMM] = &&rv32_lbl_op_imm_dispatch,
    [RV32_OPCODE_AUIPC] = &&rv32_lbl_auipc,
    [RV32_OPCODE_STORE] = &&rv32_lbl_store_dispatch,
    [RV32_OPCODE_OP] = &&rv32_lbl_op_dispatch,
    [RV32_OPCODE_LUI] = &&rv32_lbl_lui,
    [RV32_OPCODE_BRANCH] = &&rv32_lbl_branch_dispatch,
    [RV32_OPCODE_JALR] = &&rv32_lbl_jalr,
    [RV32_OPCODE_JAL] = &&rv32_lbl_jal,
    [RV32_OPCODE_SYSTEM] = &&rv32_lbl_system_dispatch,
  };
  static void *const rv32_load_table[RV32_FUNCT3_TABLE_SIZE] = {
    [0 ... RV32_FUNCT3_TABLE_SIZE - 1] = &&rv32_lbl_inv,
    RV32_LOAD_TABLE(RV32_LABEL_ENTRY)
  };
  static void *const rv32_store_table[RV32_FUNCT3_TABLE_SIZE] = {
    [0 ... RV32_FUNCT3_TABLE_SIZE - 1] = &&rv32_lbl_inv,
    RV32_STORE_TABLE(RV32_LABEL_ENTRY)
  };
  static void *const rv32_branch_table[RV32_FUNCT3_TABLE_SIZE] = {
    [0 ... RV32_FUNCT3_TABLE_SIZE - 1] = &&rv32_lbl_inv,
    RV32_BRANCH_TABLE(RV32_LABEL_ENTRY)
  };
  static void *const rv32_op_imm_table[RV32_FUNCT3_TABLE_SIZE] = {
    [0 ... RV32_FUNCT3_TABLE_SIZE - 1] = &&rv32_lbl_inv,
    RV32_OP_IMM_TABLE(RV32_LABEL_ENTRY)
  };
  static void *const rv32_op_imm_shift_table[RV32_F3F7_TABLE_SIZE] = {
    [0 ... RV32_F3F7_TABLE_LAST] = &&rv32_lbl_inv,
    RV32_OP_IMM_SHIFT_TABLE(RV32_LABEL_ENTRY)
  };
  static void *const rv32_op_table[RV32_F3F7_TABLE_SIZE] = {
    [0 ... RV32_F3F7_TABLE_LAST] = &&rv32_lbl_inv,
    RV32_OP_TABLE(RV32_LABEL_ENTRY)
  };
  static void *const rv32_system_table[RV32_FUNCT3_TABLE_SIZE] = {
    [0 ... RV32_FUNCT3_TABLE_SIZE - 1] = &&rv32_lbl_inv,
    RV32_SYSTEM_TABLE(RV32_LABEL_ENTRY)
  };
  static void *const rv32c_quadrant_table[RV32C_SUBKEY_TABLE_SIZE] = {
    [0 ... RV32C_SUBKEY_TABLE_SIZE - 1] = &&rv32_lbl_inv,
    [RV32C_QUADRANT_0] = &&rv32_lbl_c_q0_dispatch,
    [RV32C_QUADRANT_1] = &&rv32_lbl_c_q1_dispatch,
    [RV32C_QUADRANT_2] = &&rv32_lbl_c_q2_dispatch,
  };
  static void *const rv32c_q0_table[RV32_FUNCT3_TABLE_SIZE] = {
    [0 ... RV32_FUNCT3_TABLE_SIZE - 1] = &&rv32_lbl_inv,
    RV32C_Q0_TABLE(RV32_LABEL_ENTRY)
  };
  static void *const rv32c_q1_table[RV32_FUNCT3_TABLE_SIZE] = {
    [0 ... RV32_FUNCT3_TABLE_SIZE - 1] = &&rv32_lbl_inv,
    RV32C_Q1_TABLE(RV32_LABEL_ENTRY)
  };
  static void *const rv32c_q1_misc_table[RV32C_SUBKEY_TABLE_SIZE] = {
    [0 ... RV32C_SUBKEY_TABLE_SIZE - 1] = &&rv32_lbl_inv,
    RV32C_Q1_MISC_TABLE(RV32_LABEL_ENTRY)
  };
  static void *const rv32c_q1_arith_table[RV32C_SUBKEY_TABLE_SIZE] = {
    [0 ... RV32C_SUBKEY_TABLE_SIZE - 1] = &&rv32_lbl_inv,
    RV32C_Q1_ARITH_TABLE(RV32_LABEL_ENTRY)
  };
  static void *const rv32c_q2_table[RV32_FUNCT3_TABLE_SIZE] = {
    [0 ... RV32_FUNCT3_TABLE_SIZE - 1] = &&rv32_lbl_inv,
    RV32C_Q2_TABLE(RV32_LABEL_ENTRY)
  };
  static void *const rv32c_q2_move_table[RV32C_SUBKEY_TABLE_SIZE] = {
    [0 ... RV32C_SUBKEY_TABLE_SIZE - 1] = &&rv32_lbl_inv,
    RV32C_Q2_MOVE_TABLE(RV32_LABEL_ENTRY)
  };

  can_not_diasssemble = false;
  s->dnpc = s->snpc;

  if (likely((i & 0x3) == 0x3)) {
    opcode = BITS(i, 6, 0);
    funct3_key = rv32_funct3_key(i);
    funct3_funct7_key = rv32_funct3_funct7_key(i);

    // 高频 32 位指令先走快路径，只有冷门子类才落到标签表，减少解释器热路径上的二次分发。
    if (opcode == RV32_OPCODE_LOAD) {
      if (funct3_key == 0x1 || funct3_key == 0x2 || funct3_key == 0x4) {
        RV32_FAST_I_OPERANDS(i);
        if (funct3_key == 0x1) R(rd) = SEXT(Mr(src1 + imm, 2), 16);
        else if (funct3_key == 0x4) R(rd) = Mr(src1 + imm, 1);
        else R(rd) = Mr(src1 + imm, 4);
        goto exec_finish;
      }
      goto *rv32_opcode_table[opcode];
    }
    if (opcode == RV32_OPCODE_STORE) {
      if (funct3_key == 0x1 || funct3_key == 0x2) {
        RV32_FAST_S_OPERANDS(i);
        if (funct3_key == 0x2) Mw(src1 + imm, 4, src2);
        else Mw(src1 + imm, 2, src2);
        goto exec_finish;
      }
      goto *rv32_opcode_table[opcode];
    }
    if (opcode == RV32_OPCODE_OP_IMM) {
      if (funct3_key == 0x0 || funct3_key == 0x7) {
        RV32_FAST_I_OPERANDS(i);
        if (funct3_key == 0x0) R(rd) = src1 + imm;
        else R(rd) = src1 & imm;
        goto exec_finish;
      }
      if (funct3_funct7_key == RV32_F3F7_KEY(0x1, 0x00) || funct3_funct7_key == RV32_F3F7_KEY(0x5, 0x20)) {
        RV32_FAST_I_OPERANDS(i);
        if (funct3_funct7_key == RV32_F3F7_KEY(0x1, 0x00)) R(rd) = src1 << BITS(imm, 5, 0);
        else R(rd) = (int32_t)src1 >> BITS(imm, 4, 0);
        goto exec_finish;
      }
      goto *rv32_opcode_table[opcode];
    }
    if (opcode == RV32_OPCODE_OP) {
      // 把第二梯队热点一并提到快路径，避免它们频繁回落到冷标签表。
      if (funct3_funct7_key == RV32_F3F7_KEY(0x0, 0x01) || funct3_funct7_key == RV32_F3F7_KEY(0x0, 0x20) ||
            funct3_funct7_key == RV32_F3F7_KEY(0x4, 0x00) || funct3_funct7_key == RV32_F3F7_KEY(0x7, 0x00) ||
            funct3_funct7_key == RV32_F3F7_KEY(0x2, 0x00) || funct3_funct7_key == RV32_F3F7_KEY(0x0, 0x00)) {
        RV32_FAST_R_OPERANDS(i);
        if (funct3_funct7_key == RV32_F3F7_KEY(0x0, 0x01)) R(rd) = (unsigned)src1 * (unsigned)src2;
        else if (funct3_funct7_key == RV32_F3F7_KEY(0x0, 0x20)) {
          if (i == RV32_INST_MAGIC_SUB) magic_instruction(); else R(rd) = src1 - src2;
        }
        else if (funct3_funct7_key == RV32_F3F7_KEY(0x4, 0x00)) R(rd) = src1 ^ src2;
        else if (funct3_funct7_key == RV32_F3F7_KEY(0x7, 0x00)) R(rd) = src1 & src2;
        else if (funct3_funct7_key == RV32_F3F7_KEY(0x2, 0x00)) R(rd) = ((int32_t)src1 < (int32_t)src2) ? 1 : 0;
        else R(rd) = src1 + src2;
        goto exec_finish;
      }
      goto *rv32_opcode_table[opcode];
    }
    if (opcode == RV32_OPCODE_BRANCH) {
      if (likely(funct3_key == 0x0)) {
        RV32_FAST_B_OPERANDS(i);
        if (src1 == src2) s->dnpc = s->pc + imm;
        goto exec_finish;
      }
      if (likely(funct3_key == 0x1)) {
        RV32_FAST_B_OPERANDS(i);
        if (src1 != src2) s->dnpc = s->pc + imm;
        goto exec_finish;
      }
      goto *rv32_opcode_table[opcode];
    }
    if (opcode == RV32_OPCODE_JAL) {
      RV32_FAST_J_OPERANDS(i);
      R(rd) = s->pc + 4;
      s->dnpc = s->pc + imm;
      IFDEF(CONFIG_FTRACE, {
        if (rd == 1) {
          call_trace(s->pc, s->dnpc);
        }
      })
      goto exec_finish;
    }
    if (opcode == RV32_OPCODE_JALR && funct3_key == 0x0) {
      RV32_FAST_I_OPERANDS(i);
      R(rd) = s->pc + 4;
      s->dnpc = (src1 + imm) & (~1);
      IFDEF(CONFIG_FTRACE, {
        if (s->isa.inst.val == 0x00008067) {
          ret_trace(s->pc);
        }
        else if (rd == 1) {
          call_trace(s->pc, s->dnpc);
        }
        else if (rd == 0 && imm == 0) {
          call_trace(s->pc, s->dnpc);
        }
      })
      goto exec_finish;
    }
    goto *rv32_opcode_table[opcode];
  }

  s->dnpc -= 2;
  i &= 0xffffu;
  s->isa.inst.val = i;
  c_inst = i;

  {
    quadrant_key = rv32c_quadrant_key(c_inst);
    c_funct3_key = rv32c_funct3_key(c_inst);

    // 高频压缩指令同样先直达，剩余低频路径才落到 quadrant 内的标签表。
    if (quadrant_key == RV32C_QUADRANT_0) {
      if (likely(c_funct3_key == 0x2)) {
        RV32C_FAST_CL_OPERANDS(c_inst);
        R(rd) = SEXT(Mr(src1 + c_lsw_imm, 4), 32);
        goto exec_finish;
      }
      if (likely(c_funct3_key == 0x6)) {
        RV32C_FAST_CS_OPERANDS(c_inst);
        Mw(src1 + c_lsw_imm, 4, src2);
        goto exec_finish;
      }
      if (likely(c_funct3_key == 0x0)) {
        RV32C_FAST_CIW_OPERANDS(c_inst);
        R(rd) = R(2) + c_addi4spn_imm;
        goto exec_finish;
      }
      goto *rv32c_quadrant_table[quadrant_key];
    }
    if (quadrant_key == RV32C_QUADRANT_1) {
      if (likely(c_funct3_key == 0x0 && BITS(c_inst, 11, 7) != 0)) {
        RV32C_FAST_CI_OPERANDS(c_inst);
        R(rd) = src1 + c_addi_addiw_andi_li_imm;
        goto exec_finish;
      }
      if (likely(c_funct3_key == 0x2)) {
        RV32C_FAST_CI_RD(c_inst);
        R(rd) = c_addi_addiw_andi_li_imm;
        goto exec_finish;
      }
      if (likely(c_funct3_key == 0x6)) {
        RV32C_FAST_CB_OPERANDS(c_inst);
        if (src1 == 0) s->dnpc = s->pc + c_b_imm;
        goto exec_finish;
      }
      if (likely(c_funct3_key == 0x7)) {
        RV32C_FAST_CB_OPERANDS(c_inst);
        if (src1 != 0) s->dnpc = s->pc + c_b_imm;
        goto exec_finish;
      }
      if (likely(c_funct3_key == 0x5)) {
        s->dnpc = s->pc + c_j_jal_imm;
        goto exec_finish;
      }
      if (c_funct3_key == 0x4) {
        uint32_t misc_key = rv32c_q1_misc_key(c_inst);
        if (misc_key == RV32C_Q1_MISC_SRLI || misc_key == RV32C_Q1_MISC_ANDI || misc_key == RV32C_Q1_MISC_SRAI) {
          RV32C_FAST_CA_OPERANDS(c_inst);
          if (misc_key == RV32C_Q1_MISC_SRLI) R(rd) = src1 >> c_srli_srai_slli_imm;
          else if (misc_key == RV32C_Q1_MISC_ANDI) R(rd) = src1 & c_addi_addiw_andi_li_imm;
          else R(rd) = (sword_t)src1 >> c_srli_srai_slli_imm;
          goto exec_finish;
        }
        // Q1 算术组里的 xor/and/sub 也很常见，直接在这里专用化，少走一层标签分发。
        if (misc_key == RV32C_Q1_MISC_ARITH) {
          uint32_t alu_key = rv32c_q1_alu_key(c_inst);
          if (alu_key == 0x0 || alu_key == 0x1 || alu_key == 0x3) {
            RV32C_FAST_CA_OPERANDS(c_inst);
            if (alu_key == 0x0) R(rd) = src1 - src2;
            else if (alu_key == 0x1) R(rd) = src1 ^ src2;
            else R(rd) = src1 & src2;
            goto exec_finish;
          }
        }
      }
      goto *rv32c_quadrant_table[quadrant_key];
    }
    if (quadrant_key == RV32C_QUADRANT_2) {
      if (likely(c_funct3_key == 0x2)) {
        RV32C_FAST_CI_RD(c_inst);
        R(rd) = SEXT(Mr(R(2) + c_lwsp_imm, 4), 32);
        goto exec_finish;
      }
      if (likely(c_funct3_key == 0x6)) {
        RV32C_FAST_CSS_OPERANDS(c_inst);
        Mw(R(2) + c_swsp_imm, 4, src2);
        goto exec_finish;
      }
      if (likely(c_funct3_key == 0x0)) {
        RV32C_FAST_CI_OPERANDS(c_inst);
        R(rd) = src1 << c_srli_srai_slli_imm;
        goto exec_finish;
      }
      if (c_funct3_key == 0x4) {
        uint32_t move_key = rv32c_q2_jump_move_key(c_inst);
        if (move_key == 0x1 || move_key == 0x3) {
          RV32C_FAST_CR_OPERANDS(c_inst);
          if (move_key == 0x1) R(rd) = src2;
          else R(rd) = src1 + src2;
          goto exec_finish;
        }
        if (move_key == 0x0) {
          RV32C_FAST_CI_OPERANDS(c_inst);
          s->dnpc = src1;
          s->dnpc &= ((word_t)-2);
          goto exec_finish;
        }
      }
      goto *rv32c_quadrant_table[quadrant_key];
    }
    goto *rv32c_quadrant_table[quadrant_key];
  }

rv32_lbl_load_dispatch:
  goto *rv32_load_table[funct3_key];

rv32_lbl_store_dispatch:
  goto *rv32_store_table[funct3_key];

rv32_lbl_branch_dispatch:
  goto *rv32_branch_table[funct3_key];

rv32_lbl_op_imm_dispatch:
  if (funct3_key == 0x1 || funct3_key == 0x5) {
    goto *rv32_op_imm_shift_table[funct3_funct7_key];
  }
  goto *rv32_op_imm_table[funct3_key];

rv32_lbl_op_dispatch:
  goto *rv32_op_table[funct3_funct7_key];

rv32_lbl_system_dispatch:
  if (funct3_key == 0x0) {
    if (i == RV32_INST_ECALL) goto rv32_lbl_ecall;
    if (i == RV32_INST_EBREAK) goto rv32_lbl_ebreak;
    if (i == RV32_INST_MRET) goto rv32_lbl_mret;
    goto rv32_lbl_inv;
  }
  goto *rv32_system_table[funct3_key];

rv32_lbl_auipc:
  RV32_FAST_U_OPERANDS(i);
  R(rd) = s->pc + imm;
  goto exec_finish;

rv32_lbl_lui:
  RV32_FAST_U_OPERANDS(i);
  R(rd) = imm;
  goto exec_finish;

rv32_lbl_jal:
  RV32_FAST_J_OPERANDS(i);
  R(rd) = s->pc + 4;
  s->dnpc = s->pc + imm;
  IFDEF(CONFIG_FTRACE, {
    if (rd == 1) {
      call_trace(s->pc, s->dnpc);
    }
  })
  goto exec_finish;

rv32_lbl_jalr:
  RV32_FAST_I_OPERANDS(i);
  R(rd) = s->pc + 4;
  s->dnpc = (src1 + imm) & (~1);
  IFDEF(CONFIG_FTRACE, {
    if (s->isa.inst.val == 0x00008067) {
      ret_trace(s->pc);
    }
    else if (rd == 1) {
      call_trace(s->pc, s->dnpc);
    }
    else if (rd == 0 && imm == 0) {
      call_trace(s->pc, s->dnpc);
    }
  })
  goto exec_finish;

  // 冷路径继续按类型专用展开，减少标签体里再次进入 decode_operand 的额外开销。
  RV32_LOAD_TABLE(RV32_LABEL_BODY_I)
  RV32_STORE_TABLE(RV32_LABEL_BODY_S)
  RV32_BRANCH_TABLE(RV32_LABEL_BODY_B)
  RV32_OP_IMM_TABLE(RV32_LABEL_BODY_I)
  RV32_OP_IMM_SHIFT_TABLE(RV32_LABEL_BODY_I)
  RV32_OP_TABLE(RV32_LABEL_BODY_R)
  RV32_SYSTEM_TABLE(RV32_LABEL_BODY)

rv32_lbl_ecall:
  s->dnpc = isa_raise_intr(11, s->pc);
  etrace();
  goto exec_finish;

rv32_lbl_ebreak:
  NEMUTRAP(s->pc, R(10));
  goto exec_finish;

rv32_lbl_mret:
  s->dnpc = cpu.mepc;
  goto exec_finish;

rv32_lbl_c_q0_dispatch:
  goto *rv32c_q0_table[c_funct3_key];

rv32_lbl_c_q1_dispatch:
  if (c_funct3_key == 0x0) {
    if (BITS(c_inst, 11, 7) == 0) goto rv32_lbl_c_nop;
    goto rv32_lbl_c_addi;
  }
  if (c_funct3_key == 0x3) {
    if (BITS(c_inst, 11, 7) == 2) goto rv32_lbl_c_addi16sp;
    goto rv32_lbl_c_lui;
  }
  if (c_funct3_key == 0x4) {
    if (rv32c_q1_misc_key(c_inst) == RV32C_Q1_MISC_ARITH) {
      goto *rv32c_q1_arith_table[rv32c_q1_alu_key(c_inst)];
    }
    goto *rv32c_q1_misc_table[rv32c_q1_misc_key(c_inst)];
  }
  goto *rv32c_q1_table[c_funct3_key];

rv32_lbl_c_q2_dispatch:
  if (c_funct3_key == 0x4) {
    goto *rv32c_q2_move_table[rv32c_q2_jump_move_key(c_inst)];
  }
  goto *rv32c_q2_table[c_funct3_key];

rv32_lbl_c_nop:
  goto exec_finish;

rv32_lbl_c_addi:
  RV32C_FAST_CI_OPERANDS(c_inst);
  R(rd) = src1 + c_addi_addiw_andi_li_imm;
  goto exec_finish;

rv32_lbl_c_addi16sp:
  RV32C_FAST_CI_OPERANDS(c_inst);
  R(rd) = src1 + c_addi16sp_imm;
  goto exec_finish;

rv32_lbl_c_lui:
  RV32C_FAST_CI_OPERANDS(c_inst);
  R(rd) = c_lui_imm;
  goto exec_finish;

  // 压缩指令冷标签也统一改成专用取数，避免回退到 decode_operand 的通用分支。
  RV32C_Q0_TABLE(RV32C_LABEL_BODY)
  RV32C_Q1_TABLE(RV32C_LABEL_BODY)
  RV32C_Q1_MISC_TABLE(RV32C_LABEL_BODY)
  RV32C_Q1_ARITH_TABLE(RV32C_LABEL_BODY)
  RV32C_Q2_TABLE(RV32C_LABEL_BODY)
  RV32C_Q2_MOVE_TABLE(RV32C_LABEL_BODY)

rv32_lbl_inv:
  INV(s->pc);
  goto exec_finish;

exec_finish:
  R(0) = 0; // reset $zero to 0
  return 0;
}

int isa_exec_once(Decode *s) {
  s->isa.inst.val = inst_fetch(&s->snpc, 4);
  //return一个0回去，但是现在并没有使用这个返回值，可以忽略他。
  return decode_exec(s);
}


/*
7'b0000011: begin // lw
                regS = 1;
                RegW = 1;
            end
    
            7'b0100011: begin // sw
                MemWr = 1;
                ALUop = 0;
            end

jal-判断该指令是否为jal；
branch-判断指令是否为beq；
brlt-判断指令是否为blt；
regS-写回数据的选择信号，0-来源于ALU，1-来源于DataMem，2-来源于PC+4；
ALUop-ALU控制信号，0对应+，1对应-；
MemWr-DataMem写使能；
ALUsrc-操作数选择信号，0-选择寄存器，1-选择立即数；
RegW-寄存器堆写使能；
PCx1-jalr处理信号，若为jalr则将x1+offset的值写入PC；

*/