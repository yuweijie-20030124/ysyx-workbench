// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_25060170_top__Syms.h"


VL_ATTR_COLD void Vysyx_25060170_top___024root__trace_init_sub__TOP__0(Vysyx_25060170_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root__trace_init_sub__TOP__0\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+188,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ysyx_25060170_top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+188,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"PCout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"rs1_raddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+35,0,"rs2_raddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+36,0,"ALUop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+37,0,"MemWr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"memory_lenth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+40,0,"op_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"op_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"imm_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+43,0,"jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"reg1_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"reg2_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+46,0,"is_beq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"is_blt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"is_bne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"is_bge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"is_bltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"is_bgeu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"is_sltiu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"beq_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"blt_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"bne_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"bge_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"bltu_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"bgeu_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"sltiu_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"regS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+61,0,"RegW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"exu_res1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"MEM_inst_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,0,"GPR_rd1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"GPR_rd2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"reg_write_data_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"reg_write_addr_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+1,0,"reg_write_en_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+66,0,"EXU_PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+67,0,"jump_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_ysyx_25060170_EXU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+36,0,"ALUop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+40,0,"exu_op_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"exu_op_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,0,"reg1_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"reg2_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+62,0,"exu_is_jalr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"exu_is_jal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"is_beq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"is_blt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"is_bne",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"is_bge",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"is_bltu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"is_bgeu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"is_sltiu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+42,0,"imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+53,0,"beq_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"blt_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"bne_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"bge_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"bltu_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"bgeu_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"sltiu_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"exu_res1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"jump_Addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"jumpaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"reg1_sub_reg2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+70,0,"sub_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"sub_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+72,0,"reg1_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+74,0,"reg2_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+76,0,"sub_unsigned",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+78,0,"subu_carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_ysyx_25060170_GPR", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+188,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"GPR_r1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+35,0,"GPR_r2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+1,0,"GPR_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"GPR_writer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+65,0,"GPR_wd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,0,"GPR_rd1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"GPR_rd2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("rf", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+79+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+190,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+190,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+3,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+190,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+190,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+5,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+190,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+115,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+6,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+190,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+7,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[16]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+190,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+8,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[17]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+190,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+9,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[18]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+190,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+10,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[19]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+190,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+11,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+190,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+12,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[20]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+190,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+122,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+13,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[21]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+190,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+14,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[22]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+190,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+15,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[23]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+190,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+16,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[24]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+190,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[25]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+190,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+127,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+18,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[26]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+190,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+19,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[27]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+190,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+129,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+20,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[28]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+190,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+130,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+21,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[29]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+190,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+22,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+190,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+132,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+23,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[30]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+190,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+24,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[31]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+190,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+134,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+25,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+190,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+26,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+190,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+136,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+27,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+190,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+28,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+190,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+138,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+29,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+190,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+139,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+30,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+190,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+140,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+31,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+190,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+141,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+32,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_ysyx_25060170_IDU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+33,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"inst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,0,"reg1_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"reg2_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"rs1_raddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+35,0,"rs2_raddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+36,0,"ALUop",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+39,0,"rd_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+40,0,"op_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"op_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"imm_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+46,0,"is_beq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"is_blt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"is_bne",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"is_bge",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"is_bltu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"is_bgeu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"is_sltiu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"reg1_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"reg2_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"memory_lenth",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+37,0,"MemWr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"is_jal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"is_jalr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"regS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+61,0,"RegW",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+142,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+143,0,"func7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+144,0,"func3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+42,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+145,0,"auipc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"lui",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"is_Utype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"srli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"slli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"srai",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"lbu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"addi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"sltiu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"lb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"lh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"lhu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"lw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"andi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"xori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"ori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"is_Itype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"sw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"sh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"sb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"sd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"is_Stype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"srl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"sll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"slt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"sltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"npcxor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"npcor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"npcand",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"sra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"mulh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"mulhsu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"mulhu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"divu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"rem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+182,0,"remu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"is_Rtype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"beq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"bne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"blt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"bge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"bltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"bgeu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"is_Btype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"is_Jtype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_ysyx_25060170_IFU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+188,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+66,0,"jump_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+67,0,"jump_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"PCout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+192,0,"RESET_PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+185,0,"PC_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pc_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+190,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+192,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+185,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+193,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_ysyx_25060170_MEM", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+33,0,"addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"inst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+194,0,"rlen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_ysyx_25060170_WBU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+189,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"beq_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"blt_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"bne_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"bge_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"bltu_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"bgeu_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"sltiu_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"exu_result_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"PC_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+46,0,"is_beq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"is_blt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"is_bne",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"is_bge",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"is_bltu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"is_bgeu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"is_sltiu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+60,0,"regS",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+61,0,"RegW",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"MemWr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"reg2_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"memory_lenth",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"reg_write_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"reg_write_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+1,0,"reg_write_en_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"tiaojian",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+187,0,"l_memdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vysyx_25060170_top___024root__trace_init_top(Vysyx_25060170_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root__trace_init_top\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vysyx_25060170_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vysyx_25060170_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vysyx_25060170_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_25060170_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_25060170_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vysyx_25060170_top___024root__trace_register(Vysyx_25060170_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root__trace_register\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vysyx_25060170_top___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vysyx_25060170_top___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vysyx_25060170_top___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vysyx_25060170_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vysyx_25060170_top___024root__trace_const_0_sub_0(Vysyx_25060170_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vysyx_25060170_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root__trace_const_0\n"); );
    // Init
    Vysyx_25060170_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25060170_top___024root*>(voidSelf);
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_25060170_top___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_25060170_top___024root__trace_const_0_sub_0(Vysyx_25060170_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root__trace_const_0_sub_0\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+190,(0x20U),32);
    bufp->fullIData(oldp+191,(0U),32);
    bufp->fullIData(oldp+192,(0x80000000U),32);
    bufp->fullBit(oldp+193,(1U));
    bufp->fullCData(oldp+194,(4U),8);
}

VL_ATTR_COLD void Vysyx_25060170_top___024root__trace_full_0_sub_0(Vysyx_25060170_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vysyx_25060170_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root__trace_full_0\n"); );
    // Init
    Vysyx_25060170_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25060170_top___024root*>(voidSelf);
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_25060170_top___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_25060170_top___024root__trace_full_0_sub_0(Vysyx_25060170_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root__trace_full_0_sub_0\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o));
    bufp->fullBit(oldp+2,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                           & (0x500U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
    bufp->fullBit(oldp+3,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                           & (0x580U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
    bufp->fullBit(oldp+4,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                           & (0x600U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
    bufp->fullBit(oldp+5,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                           & (0x680U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
    bufp->fullBit(oldp+6,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                           & (0x700U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
    bufp->fullBit(oldp+7,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                           & (0x780U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
    bufp->fullBit(oldp+8,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                           & (0x800U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
    bufp->fullBit(oldp+9,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                           & (0x880U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
    bufp->fullBit(oldp+10,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                            & (0x900U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
    bufp->fullBit(oldp+11,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                            & (0x980U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
    bufp->fullBit(oldp+12,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                            & (0x80U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
    bufp->fullBit(oldp+13,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                            & (0xa00U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
    bufp->fullBit(oldp+14,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                            & (0xa80U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
    bufp->fullBit(oldp+15,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                            & (0xb00U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
    bufp->fullBit(oldp+16,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                            & (0xb80U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
    bufp->fullBit(oldp+17,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                            & (0xc00U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
    bufp->fullBit(oldp+18,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                            & (0xc80U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
    bufp->fullBit(oldp+19,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                            & (0xd00U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
    bufp->fullBit(oldp+20,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                            & (0xd80U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
    bufp->fullBit(oldp+21,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                            & (0xe00U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
    bufp->fullBit(oldp+22,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                            & (0xe80U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
    bufp->fullBit(oldp+23,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                            & (0x100U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
    bufp->fullBit(oldp+24,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                            & (0xf00U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
    bufp->fullBit(oldp+25,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                            & (0xf80U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
    bufp->fullBit(oldp+26,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                            & (0x180U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
    bufp->fullBit(oldp+27,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                            & (0x200U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
    bufp->fullBit(oldp+28,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                            & (0x280U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
    bufp->fullBit(oldp+29,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                            & (0x300U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
    bufp->fullBit(oldp+30,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                            & (0x380U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
    bufp->fullBit(oldp+31,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                            & (0x400U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
    bufp->fullBit(oldp+32,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                            & (0x480U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
    bufp->fullIData(oldp+33,(vlSelfRef.ysyx_25060170_top__DOT__PCout),32);
    bufp->fullCData(oldp+34,((0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+35,((0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+36,(vlSelfRef.ysyx_25060170_top__DOT__ALUop),4);
    bufp->fullBit(oldp+37,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sw) 
                            | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sh) 
                               | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sb) 
                                  | (IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sd))))));
    bufp->fullIData(oldp+38,(((4U & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lw)))) 
                              | ((2U & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lh)))) 
                                 | ((1U & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lb)))) 
                                    | ((8U & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sd)))) 
                                       | ((4U & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sw)))) 
                                          | ((2U & 
                                              (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sh)))) 
                                             | (1U 
                                                & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sb))))))))))),32);
    bufp->fullCData(oldp+39,((0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                       >> 7U))),5);
    bufp->fullIData(oldp+40,(vlSelfRef.ysyx_25060170_top__DOT__op_1),32);
    bufp->fullIData(oldp+41,(vlSelfRef.ysyx_25060170_top__DOT__op_2),32);
    bufp->fullIData(oldp+42,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__imm),32);
    bufp->fullBit(oldp+43,((0x6fU == (0x7fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o))));
    bufp->fullIData(oldp+44,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                             [(0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                        >> 0xfU))]),32);
    bufp->fullIData(oldp+45,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                             [(0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                        >> 0x14U))]),32);
    bufp->fullBit(oldp+46,(vlSelfRef.ysyx_25060170_top__DOT__is_beq));
    bufp->fullBit(oldp+47,(vlSelfRef.ysyx_25060170_top__DOT__is_blt));
    bufp->fullBit(oldp+48,(vlSelfRef.ysyx_25060170_top__DOT__is_bne));
    bufp->fullBit(oldp+49,(vlSelfRef.ysyx_25060170_top__DOT__is_bge));
    bufp->fullBit(oldp+50,(vlSelfRef.ysyx_25060170_top__DOT__is_bltu));
    bufp->fullBit(oldp+51,(vlSelfRef.ysyx_25060170_top__DOT__is_bgeu));
    bufp->fullBit(oldp+52,(vlSelfRef.ysyx_25060170_top__DOT__is_sltiu));
    bufp->fullBit(oldp+53,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_beq) 
                            & (0U == vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__reg1_sub_reg2))));
    bufp->fullBit(oldp+54,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_blt) 
                            & ((0U != vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__reg1_sub_reg2) 
                               & (vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__reg1_sub_reg2 
                                  >> 0x1fU)))));
    bufp->fullBit(oldp+55,(((0U != vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__reg1_sub_reg2) 
                            & (IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bne))));
    bufp->fullBit(oldp+56,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bge) 
                            & ((~ (vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__reg1_sub_reg2 
                                   >> 0x1fU)) | (0U 
                                                 == vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__reg1_sub_reg2)))));
    bufp->fullBit(oldp+57,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bltu) 
                            & (IData)((vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__sub_unsigned 
                                       >> 0x20U)))));
    bufp->fullBit(oldp+58,(((~ (IData)((vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__sub_unsigned 
                                        >> 0x20U))) 
                            & (IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bgeu))));
    bufp->fullBit(oldp+59,(vlSelfRef.ysyx_25060170_top__DOT__sltiu_flag));
    bufp->fullCData(oldp+60,(vlSelfRef.ysyx_25060170_top__DOT__regS),2);
    bufp->fullBit(oldp+61,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__is_Utype) 
                            | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__is_Itype) 
                               | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__srli) 
                                   | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__srl) 
                                      | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__add) 
                                         | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sll) 
                                            | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__slt) 
                                               | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sltu) 
                                                  | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__npcxor) 
                                                     | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__npcor) 
                                                        | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__npcand) 
                                                           | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sra) 
                                                              | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sub) 
                                                                 | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__mul) 
                                                                    | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__mulh) 
                                                                       | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__mulhsu) 
                                                                          | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__mulhu) 
                                                                             | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__div) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__divu) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__rem) 
                                                                                | (IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__remu))))))))))))))))))) 
                                  | (0x6fU == (0x7fU 
                                               & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))))));
    bufp->fullBit(oldp+62,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__jalr));
    bufp->fullIData(oldp+63,(vlSelfRef.ysyx_25060170_top__DOT__exu_res1),32);
    bufp->fullIData(oldp+64,(vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o),32);
    bufp->fullIData(oldp+65,(vlSelfRef.ysyx_25060170_top__DOT__reg_write_data_o),32);
    bufp->fullIData(oldp+66,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__jalr)
                               ? (0xfffffffeU & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__jumpaddr)
                               : ((0x6fU == (0x7fU 
                                             & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o))
                                   ? vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__jumpaddr
                                   : 0U))),32);
    bufp->fullBit(oldp+67,(((0x6fU == (0x7fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)) 
                            | (IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__jalr))));
    bufp->fullIData(oldp+68,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__jumpaddr),32);
    bufp->fullIData(oldp+69,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__reg1_sub_reg2),32);
    bufp->fullBit(oldp+70,((vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__reg1_sub_reg2 
                            >> 0x1fU)));
    bufp->fullBit(oldp+71,((0U == vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__reg1_sub_reg2)));
    bufp->fullQData(oldp+72,((QData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                             [(0x1fU 
                                               & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                  >> 0xfU))]))),33);
    bufp->fullQData(oldp+74,((QData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                             [(0x1fU 
                                               & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                  >> 0x14U))]))),33);
    bufp->fullQData(oldp+76,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__sub_unsigned),33);
    bufp->fullBit(oldp+78,((1U & (IData)((vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__sub_unsigned 
                                          >> 0x20U)))));
    bufp->fullIData(oldp+79,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[0]),32);
    bufp->fullIData(oldp+80,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[1]),32);
    bufp->fullIData(oldp+81,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[2]),32);
    bufp->fullIData(oldp+82,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[3]),32);
    bufp->fullIData(oldp+83,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[4]),32);
    bufp->fullIData(oldp+84,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[5]),32);
    bufp->fullIData(oldp+85,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[6]),32);
    bufp->fullIData(oldp+86,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[7]),32);
    bufp->fullIData(oldp+87,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[8]),32);
    bufp->fullIData(oldp+88,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[9]),32);
    bufp->fullIData(oldp+89,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[10]),32);
    bufp->fullIData(oldp+90,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[11]),32);
    bufp->fullIData(oldp+91,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[12]),32);
    bufp->fullIData(oldp+92,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[13]),32);
    bufp->fullIData(oldp+93,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[14]),32);
    bufp->fullIData(oldp+94,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[15]),32);
    bufp->fullIData(oldp+95,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[16]),32);
    bufp->fullIData(oldp+96,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[17]),32);
    bufp->fullIData(oldp+97,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[18]),32);
    bufp->fullIData(oldp+98,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[19]),32);
    bufp->fullIData(oldp+99,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[20]),32);
    bufp->fullIData(oldp+100,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[21]),32);
    bufp->fullIData(oldp+101,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[22]),32);
    bufp->fullIData(oldp+102,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[23]),32);
    bufp->fullIData(oldp+103,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[24]),32);
    bufp->fullIData(oldp+104,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[25]),32);
    bufp->fullIData(oldp+105,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[26]),32);
    bufp->fullIData(oldp+106,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[27]),32);
    bufp->fullIData(oldp+107,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[28]),32);
    bufp->fullIData(oldp+108,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[29]),32);
    bufp->fullIData(oldp+109,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[30]),32);
    bufp->fullIData(oldp+110,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[31]),32);
    bufp->fullIData(oldp+111,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__10__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+112,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__11__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+113,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__12__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+114,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__13__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+115,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__14__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+116,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__15__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+117,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__16__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+118,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__17__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+119,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__18__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+120,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__19__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+121,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__1__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+122,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__20__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+123,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__21__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+124,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__22__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+125,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__23__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+126,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__24__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+127,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__25__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+128,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__26__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+129,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__27__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+130,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__28__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+131,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__29__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+132,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__2__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+133,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__30__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+134,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__31__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+135,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__3__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+136,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__4__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+137,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__5__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+138,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__6__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+139,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__7__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+140,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__8__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+141,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__9__KET____DOT__reg_x__dout),32);
    bufp->fullCData(oldp+142,((0x7fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)),7);
    bufp->fullCData(oldp+143,((vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                               >> 0x19U)),7);
    bufp->fullCData(oldp+144,((7U & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                     >> 0xcU))),3);
    bufp->fullBit(oldp+145,((0x17U == (0x7fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o))));
    bufp->fullBit(oldp+146,((0x37U == (0x7fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o))));
    bufp->fullBit(oldp+147,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__is_Utype));
    bufp->fullBit(oldp+148,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__srli));
    bufp->fullBit(oldp+149,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__slli));
    bufp->fullBit(oldp+150,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__srai));
    bufp->fullBit(oldp+151,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lbu));
    bufp->fullBit(oldp+152,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__addi));
    bufp->fullBit(oldp+153,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lb));
    bufp->fullBit(oldp+154,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lh));
    bufp->fullBit(oldp+155,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lhu));
    bufp->fullBit(oldp+156,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lw));
    bufp->fullBit(oldp+157,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__andi));
    bufp->fullBit(oldp+158,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__xori));
    bufp->fullBit(oldp+159,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__ori));
    bufp->fullBit(oldp+160,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__is_Itype));
    bufp->fullBit(oldp+161,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sw));
    bufp->fullBit(oldp+162,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sh));
    bufp->fullBit(oldp+163,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sb));
    bufp->fullBit(oldp+164,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sd));
    bufp->fullBit(oldp+165,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__srl));
    bufp->fullBit(oldp+166,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__add));
    bufp->fullBit(oldp+167,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sll));
    bufp->fullBit(oldp+168,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__slt));
    bufp->fullBit(oldp+169,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sltu));
    bufp->fullBit(oldp+170,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__npcxor));
    bufp->fullBit(oldp+171,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__npcor));
    bufp->fullBit(oldp+172,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__npcand));
    bufp->fullBit(oldp+173,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sra));
    bufp->fullBit(oldp+174,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sub));
    bufp->fullBit(oldp+175,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__mul));
    bufp->fullBit(oldp+176,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__mulh));
    bufp->fullBit(oldp+177,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__mulhsu));
    bufp->fullBit(oldp+178,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__mulhu));
    bufp->fullBit(oldp+179,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__div));
    bufp->fullBit(oldp+180,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__divu));
    bufp->fullBit(oldp+181,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__rem));
    bufp->fullBit(oldp+182,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__remu));
    bufp->fullBit(oldp+183,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__srli) 
                             | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__srl) 
                                | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__add) 
                                   | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sll) 
                                      | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__slt) 
                                         | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sltu) 
                                            | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__npcxor) 
                                               | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__npcor) 
                                                  | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__npcand) 
                                                     | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sra) 
                                                        | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sub) 
                                                           | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__mul) 
                                                              | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__mulh) 
                                                                 | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__mulhsu) 
                                                                    | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__mulhu) 
                                                                       | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__div) 
                                                                          | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__divu) 
                                                                             | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__rem) 
                                                                                | (IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__remu)))))))))))))))))))));
    bufp->fullBit(oldp+184,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_beq) 
                             | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bne) 
                                | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_blt) 
                                   | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bge) 
                                      | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bltu) 
                                         | (IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bgeu))))))));
    bufp->fullIData(oldp+185,((((0x6fU == (0x7fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)) 
                                | (IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__jalr))
                                ? ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__jalr)
                                    ? (0xfffffffeU 
                                       & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__jumpaddr)
                                    : ((0x6fU == (0x7fU 
                                                  & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o))
                                        ? vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__jumpaddr
                                        : 0U)) : ((IData)(4U) 
                                                  + vlSelfRef.ysyx_25060170_top__DOT__PCout))),32);
    bufp->fullBit(oldp+186,((((~ ((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_beq) 
                                  & (0U == vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__reg1_sub_reg2))) 
                              & (IData)(vlSelfRef.ysyx_25060170_top__DOT__is_beq)) 
                             | (((~ ((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_blt) 
                                     & ((0U != vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__reg1_sub_reg2) 
                                        & (vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__reg1_sub_reg2 
                                           >> 0x1fU)))) 
                                 & (IData)(vlSelfRef.ysyx_25060170_top__DOT__is_blt)) 
                                | (((~ ((0U != vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__reg1_sub_reg2) 
                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bne))) 
                                    & (IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bne)) 
                                   | (((~ ((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bge) 
                                           & ((~ (vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__reg1_sub_reg2 
                                                  >> 0x1fU)) 
                                              | (0U 
                                                 == vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__reg1_sub_reg2)))) 
                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bge)) 
                                      | (((~ ((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bltu) 
                                              & (IData)(
                                                        (vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__sub_unsigned 
                                                         >> 0x20U)))) 
                                          & (IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bltu)) 
                                         | (((~ ((~ (IData)(
                                                            (vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__sub_unsigned 
                                                             >> 0x20U))) 
                                                 & (IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bgeu))) 
                                             & (IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bgeu)) 
                                            | ((~ (IData)(vlSelfRef.ysyx_25060170_top__DOT__sltiu_flag)) 
                                               & (IData)(vlSelfRef.ysyx_25060170_top__DOT__is_sltiu))))))))));
    bufp->fullIData(oldp+187,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_WBU__DOT__l_memdata),32);
    bufp->fullBit(oldp+188,(vlSelfRef.clk));
    bufp->fullBit(oldp+189,(vlSelfRef.rst));
}
