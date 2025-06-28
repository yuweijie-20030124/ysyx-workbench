// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMux__Syms.h"


VL_ATTR_COLD void VMux___024root__trace_init_sub__TOP__0(VMux___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux___024root__trace_init_sub__TOP__0\n"); );
    VMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+190,0,"MuxKey.out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+191,0,"MuxKey.key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+192,0,"MuxKey.lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+193,0,"MuxKeyWithDefault.out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+194,0,"MuxKeyWithDefault.key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+195,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+196,0,"MuxKeyWithDefault.lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+197,0,"ysyx_25060170_IDU.clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"ysyx_25060170_IDU.rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+199,0,"inst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+200,0,"reg_write_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+201,0,"reg_write_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+202,0,"reg_write_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+203,0,"rs1_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+204,0,"rs2_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+205,0,"opcode_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+206,0,"funct3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+207,0,"funct7_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+208,0,"rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+209,0,"ysyx_25060170_top.clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"ysyx_25060170_top.rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+211,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+212,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("MuxKey", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+246,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+247,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+247,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+191,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+192,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+246,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+247,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+247,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+191,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+249,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+192,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+246,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+3+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+5+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+7,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+8,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+250,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("MuxKeyWithDefault", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+246,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+247,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+247,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+193,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+194,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+195,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+196,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+246,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+247,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+247,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+247,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+193,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+194,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+195,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+196,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+246,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+9+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+11+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+13+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+15,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+16,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+250,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ysyx_25060170_IDU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+197,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+199,0,"inst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+200,0,"reg_write_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+201,0,"reg_write_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+202,0,"reg_write_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+203,0,"rs1_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+204,0,"rs2_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+205,0,"opcode_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+206,0,"funct3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+207,0,"funct7_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+208,0,"rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("reg_file", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+127+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+213,0,"rs1_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+214,0,"rs2_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("reg_gen[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+197,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+202,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+159,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+215,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+197,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+202,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+160,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+216,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+197,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+202,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+161,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+217,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+197,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+202,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+162,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+218,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+197,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+202,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+219,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+197,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+202,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+164,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+220,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[16]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+197,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+202,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+165,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+221,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[17]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+197,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+202,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+166,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+222,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[18]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+197,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+202,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+167,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+223,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[19]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+197,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+202,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+168,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+224,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+197,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+202,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+169,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+225,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[20]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+197,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+202,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+170,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+226,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[21]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+197,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+202,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+171,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+227,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[22]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+197,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+202,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+172,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+228,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[23]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+197,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+202,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+229,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[24]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+197,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+202,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+174,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+230,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[25]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+197,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+202,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+175,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+231,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[26]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+197,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+202,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+232,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[27]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+197,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+202,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+177,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+233,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[28]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+197,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+202,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+178,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+234,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[29]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+197,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+202,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+179,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+235,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+197,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+202,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+180,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+236,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[30]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+197,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+202,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+181,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+237,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[31]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+197,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+202,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+182,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+238,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+197,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+202,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+183,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+239,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+197,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+202,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+184,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+240,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+197,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+202,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+185,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+241,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+197,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+202,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+186,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+242,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+197,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+202,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+187,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+243,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+197,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+202,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+188,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+244,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+197,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+202,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+189,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+245,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ysyx_25060170_top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+211,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+212,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+211,0,"ifu_ready_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+211,0,"mem_ready_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"gpr_rdata1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"gpr_rdata2_unused",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+211,0,"gpr_ready_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,0,"rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+23,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+24,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+25,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"exu_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+211,0,"exu_ready_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"wbu_reg_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"wbu_reg_write_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+26,0,"wbu_reg_write_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+211,0,"wbu_ready_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_exu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,0,"reg1_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"imm_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+23,0,"funct3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+24,0,"rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+211,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+211,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"alu_result_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+27,0,"is_addi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("alu_result_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+211,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_gpr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+26,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"raddr1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+30,0,"raddr2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+20,0,"rdata1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"rdata2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+211,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+211,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("rf", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+31+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+64,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+66,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+68,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+70,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+71,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+72,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+74,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[16]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+76,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[17]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+78,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[18]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+80,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[19]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+82,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+84,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[20]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+86,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[21]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+88,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[22]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+90,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[23]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+92,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[24]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+94,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[25]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+95,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+96,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[26]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+97,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+98,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[27]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+100,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[28]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+102,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[29]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+104,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+106,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[30]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+107,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+108,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[31]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+110,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+112,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+114,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+115,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+116,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+118,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+120,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+122,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_gen[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+124,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_ifu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+211,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+211,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+125,0,"pc_plus_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pc_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+252,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+125,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+211,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_mem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+211,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+211,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mem_data_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+253,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+126,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+211,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_wbu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+25,0,"alu_result_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+211,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+211,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"reg_write_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"reg_write_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+26,0,"reg_write_en_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VMux___024root__trace_init_top(VMux___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux___024root__trace_init_top\n"); );
    VMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VMux___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VMux___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VMux___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VMux___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VMux___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VMux___024root__trace_register(VMux___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux___024root__trace_register\n"); );
    VMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VMux___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VMux___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VMux___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VMux___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VMux___024root__trace_const_0_sub_0(VMux___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VMux___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux___024root__trace_const_0\n"); );
    // Init
    VMux___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMux___024root*>(voidSelf);
    VMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VMux___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VMux___024root__trace_const_0_sub_0(VMux___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux___024root__trace_const_0_sub_0\n"); );
    VMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+246,(2U),32);
    bufp->fullIData(oldp+247,(1U),32);
    bufp->fullIData(oldp+248,(0U),32);
    bufp->fullBit(oldp+249,(0U));
    bufp->fullIData(oldp+250,(2U),32);
    bufp->fullIData(oldp+251,(0x20U),32);
    bufp->fullIData(oldp+252,(0x80000000U),32);
    bufp->fullIData(oldp+253,(0U),32);
}

VL_ATTR_COLD void VMux___024root__trace_full_0_sub_0(VMux___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VMux___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux___024root__trace_full_0\n"); );
    // Init
    VMux___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMux___024root*>(voidSelf);
    VMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VMux___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VMux___024root__trace_full_0_sub_0(VMux___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux___024root__trace_full_0_sub_0\n"); );
    VMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelfRef.MuxKey__DOT__i0__DOT__pair_list[0]),2);
    bufp->fullCData(oldp+2,(vlSelfRef.MuxKey__DOT__i0__DOT__pair_list[1]),2);
    bufp->fullBit(oldp+3,(vlSelfRef.MuxKey__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+4,(vlSelfRef.MuxKey__DOT__i0__DOT__key_list[1]));
    bufp->fullBit(oldp+5,(vlSelfRef.MuxKey__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+6,(vlSelfRef.MuxKey__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+7,(vlSelfRef.MuxKey__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+8,(vlSelfRef.MuxKey__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+9,(vlSelfRef.MuxKeyWithDefault__DOT__i0__DOT__pair_list[0]),2);
    bufp->fullCData(oldp+10,(vlSelfRef.MuxKeyWithDefault__DOT__i0__DOT__pair_list[1]),2);
    bufp->fullBit(oldp+11,(vlSelfRef.MuxKeyWithDefault__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+12,(vlSelfRef.MuxKeyWithDefault__DOT__i0__DOT__key_list[1]));
    bufp->fullBit(oldp+13,(vlSelfRef.MuxKeyWithDefault__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+14,(vlSelfRef.MuxKeyWithDefault__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+15,(vlSelfRef.MuxKeyWithDefault__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+16,(vlSelfRef.MuxKeyWithDefault__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+17,(vlSelfRef.ysyx_25060170_top__DOT__pc),32);
    bufp->fullIData(oldp+18,(vlSelfRef.ysyx_25060170_top__DOT__inst),32);
    bufp->fullIData(oldp+19,((((- (IData)((vlSelfRef.ysyx_25060170_top__DOT__inst 
                                           >> 0x1fU))) 
                               << 0xcU) | (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                           >> 0x14U))),32);
    bufp->fullIData(oldp+20,(((0U == (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                               >> 0xfU)))
                               ? 0U : (((0U != (0x1fU 
                                                & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                   >> 7U))) 
                                        & ((0x1fU & 
                                            (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                             >> 0xfU)) 
                                           == (0x1fU 
                                               & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                  >> 7U))))
                                        ? vlSelfRef.ysyx_25060170_top__DOT__alu_result
                                        : vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf
                                       [(0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                  >> 0xfU))]))),32);
    bufp->fullIData(oldp+21,(((0U == (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                               >> 0x14U)))
                               ? 0U : (((0U != (0x1fU 
                                                & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                   >> 7U))) 
                                        & ((0x1fU & 
                                            (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                             >> 0x14U)) 
                                           == (0x1fU 
                                               & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                  >> 7U))))
                                        ? vlSelfRef.ysyx_25060170_top__DOT__alu_result
                                        : vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf
                                       [(0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                  >> 0x14U))]))),32);
    bufp->fullCData(oldp+22,((0x7fU & vlSelfRef.ysyx_25060170_top__DOT__inst)),7);
    bufp->fullCData(oldp+23,((7U & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+24,((0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                       >> 7U))),5);
    bufp->fullIData(oldp+25,(vlSelfRef.ysyx_25060170_top__DOT__alu_result),32);
    bufp->fullBit(oldp+26,((0U != (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                            >> 7U)))));
    bufp->fullBit(oldp+27,((IData)((0x13U == (0x707fU 
                                              & vlSelfRef.ysyx_25060170_top__DOT__inst)))));
    bufp->fullIData(oldp+28,(((IData)((0x13U == (0x707fU 
                                                 & vlSelfRef.ysyx_25060170_top__DOT__inst)))
                               ? ((((- (IData)((vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                >> 0x1fU))) 
                                    << 0xcU) | (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                >> 0x14U)) 
                                  + ((0U == (0x1fU 
                                             & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                >> 0xfU)))
                                      ? 0U : (((0U 
                                                != 
                                                (0x1fU 
                                                 & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                    >> 7U))) 
                                               & ((0x1fU 
                                                   & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                      >> 0xfU)) 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                      >> 7U))))
                                               ? vlSelfRef.ysyx_25060170_top__DOT__alu_result
                                               : vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf
                                              [(0x1fU 
                                                & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                   >> 0xfU))])))
                               : 0U)),32);
    bufp->fullCData(oldp+29,((0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+30,((0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                       >> 0x14U))),5);
    bufp->fullIData(oldp+31,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[0]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[1]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[2]),32);
    bufp->fullIData(oldp+34,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[3]),32);
    bufp->fullIData(oldp+35,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[4]),32);
    bufp->fullIData(oldp+36,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[5]),32);
    bufp->fullIData(oldp+37,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[6]),32);
    bufp->fullIData(oldp+38,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[7]),32);
    bufp->fullIData(oldp+39,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[8]),32);
    bufp->fullIData(oldp+40,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[9]),32);
    bufp->fullIData(oldp+41,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[10]),32);
    bufp->fullIData(oldp+42,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[11]),32);
    bufp->fullIData(oldp+43,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[12]),32);
    bufp->fullIData(oldp+44,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[13]),32);
    bufp->fullIData(oldp+45,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[14]),32);
    bufp->fullIData(oldp+46,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[15]),32);
    bufp->fullIData(oldp+47,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[16]),32);
    bufp->fullIData(oldp+48,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[17]),32);
    bufp->fullIData(oldp+49,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[18]),32);
    bufp->fullIData(oldp+50,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[19]),32);
    bufp->fullIData(oldp+51,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[20]),32);
    bufp->fullIData(oldp+52,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[21]),32);
    bufp->fullIData(oldp+53,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[22]),32);
    bufp->fullIData(oldp+54,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[23]),32);
    bufp->fullIData(oldp+55,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[24]),32);
    bufp->fullIData(oldp+56,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[25]),32);
    bufp->fullIData(oldp+57,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[26]),32);
    bufp->fullIData(oldp+58,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[27]),32);
    bufp->fullIData(oldp+59,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[28]),32);
    bufp->fullIData(oldp+60,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[29]),32);
    bufp->fullIData(oldp+61,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[30]),32);
    bufp->fullIData(oldp+62,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[31]),32);
    bufp->fullIData(oldp+63,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__10__KET____DOT__reg_x__dout),32);
    bufp->fullBit(oldp+64,((IData)(((0x500U == (0xf80U 
                                                & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                    & (0U != (0x1fU 
                                              & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                 >> 7U)))))));
    bufp->fullIData(oldp+65,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__11__KET____DOT__reg_x__dout),32);
    bufp->fullBit(oldp+66,((IData)(((0x580U == (0xf80U 
                                                & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                    & (0U != (0x1fU 
                                              & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                 >> 7U)))))));
    bufp->fullIData(oldp+67,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__12__KET____DOT__reg_x__dout),32);
    bufp->fullBit(oldp+68,((IData)(((0x600U == (0xf80U 
                                                & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                    & (0U != (0x1fU 
                                              & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                 >> 7U)))))));
    bufp->fullIData(oldp+69,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__13__KET____DOT__reg_x__dout),32);
    bufp->fullBit(oldp+70,((IData)(((0x680U == (0xf80U 
                                                & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                    & (0U != (0x1fU 
                                              & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                 >> 7U)))))));
    bufp->fullIData(oldp+71,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__14__KET____DOT__reg_x__dout),32);
    bufp->fullBit(oldp+72,((IData)(((0x700U == (0xf80U 
                                                & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                    & (0U != (0x1fU 
                                              & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                 >> 7U)))))));
    bufp->fullIData(oldp+73,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__15__KET____DOT__reg_x__dout),32);
    bufp->fullBit(oldp+74,((IData)(((0x780U == (0xf80U 
                                                & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                    & (0U != (0x1fU 
                                              & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                 >> 7U)))))));
    bufp->fullIData(oldp+75,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__16__KET____DOT__reg_x__dout),32);
    bufp->fullBit(oldp+76,((IData)(((0x800U == (0xf80U 
                                                & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                    & (0U != (0x1fU 
                                              & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                 >> 7U)))))));
    bufp->fullIData(oldp+77,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__17__KET____DOT__reg_x__dout),32);
    bufp->fullBit(oldp+78,((IData)(((0x880U == (0xf80U 
                                                & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                    & (0U != (0x1fU 
                                              & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                 >> 7U)))))));
    bufp->fullIData(oldp+79,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__18__KET____DOT__reg_x__dout),32);
    bufp->fullBit(oldp+80,((IData)(((0x900U == (0xf80U 
                                                & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                    & (0U != (0x1fU 
                                              & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                 >> 7U)))))));
    bufp->fullIData(oldp+81,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__19__KET____DOT__reg_x__dout),32);
    bufp->fullBit(oldp+82,((IData)(((0x980U == (0xf80U 
                                                & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                    & (0U != (0x1fU 
                                              & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                 >> 7U)))))));
    bufp->fullIData(oldp+83,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__1__KET____DOT__reg_x__dout),32);
    bufp->fullBit(oldp+84,((IData)(((0x80U == (0xf80U 
                                               & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                    & (0U != (0x1fU 
                                              & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                 >> 7U)))))));
    bufp->fullIData(oldp+85,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__20__KET____DOT__reg_x__dout),32);
    bufp->fullBit(oldp+86,((IData)(((0xa00U == (0xf80U 
                                                & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                    & (0U != (0x1fU 
                                              & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                 >> 7U)))))));
    bufp->fullIData(oldp+87,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__21__KET____DOT__reg_x__dout),32);
    bufp->fullBit(oldp+88,((IData)(((0xa80U == (0xf80U 
                                                & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                    & (0U != (0x1fU 
                                              & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                 >> 7U)))))));
    bufp->fullIData(oldp+89,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__22__KET____DOT__reg_x__dout),32);
    bufp->fullBit(oldp+90,((IData)(((0xb00U == (0xf80U 
                                                & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                    & (0U != (0x1fU 
                                              & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                 >> 7U)))))));
    bufp->fullIData(oldp+91,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__23__KET____DOT__reg_x__dout),32);
    bufp->fullBit(oldp+92,((IData)(((0xb80U == (0xf80U 
                                                & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                    & (0U != (0x1fU 
                                              & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                 >> 7U)))))));
    bufp->fullIData(oldp+93,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__24__KET____DOT__reg_x__dout),32);
    bufp->fullBit(oldp+94,((IData)(((0xc00U == (0xf80U 
                                                & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                    & (0U != (0x1fU 
                                              & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                 >> 7U)))))));
    bufp->fullIData(oldp+95,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__25__KET____DOT__reg_x__dout),32);
    bufp->fullBit(oldp+96,((IData)(((0xc80U == (0xf80U 
                                                & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                    & (0U != (0x1fU 
                                              & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                 >> 7U)))))));
    bufp->fullIData(oldp+97,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__26__KET____DOT__reg_x__dout),32);
    bufp->fullBit(oldp+98,((IData)(((0xd00U == (0xf80U 
                                                & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                    & (0U != (0x1fU 
                                              & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                 >> 7U)))))));
    bufp->fullIData(oldp+99,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__27__KET____DOT__reg_x__dout),32);
    bufp->fullBit(oldp+100,((IData)(((0xd80U == (0xf80U 
                                                 & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                     & (0U != (0x1fU 
                                               & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                  >> 7U)))))));
    bufp->fullIData(oldp+101,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__28__KET____DOT__reg_x__dout),32);
    bufp->fullBit(oldp+102,((IData)(((0xe00U == (0xf80U 
                                                 & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                     & (0U != (0x1fU 
                                               & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                  >> 7U)))))));
    bufp->fullIData(oldp+103,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__29__KET____DOT__reg_x__dout),32);
    bufp->fullBit(oldp+104,((IData)(((0xe80U == (0xf80U 
                                                 & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                     & (0U != (0x1fU 
                                               & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                  >> 7U)))))));
    bufp->fullIData(oldp+105,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__2__KET____DOT__reg_x__dout),32);
    bufp->fullBit(oldp+106,((IData)(((0x100U == (0xf80U 
                                                 & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                     & (0U != (0x1fU 
                                               & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                  >> 7U)))))));
    bufp->fullIData(oldp+107,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__30__KET____DOT__reg_x__dout),32);
    bufp->fullBit(oldp+108,((IData)(((0xf00U == (0xf80U 
                                                 & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                     & (0U != (0x1fU 
                                               & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                  >> 7U)))))));
    bufp->fullIData(oldp+109,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__31__KET____DOT__reg_x__dout),32);
    bufp->fullBit(oldp+110,((IData)(((0xf80U == (0xf80U 
                                                 & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                     & (0U != (0x1fU 
                                               & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                  >> 7U)))))));
    bufp->fullIData(oldp+111,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__3__KET____DOT__reg_x__dout),32);
    bufp->fullBit(oldp+112,((IData)(((0x180U == (0xf80U 
                                                 & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                     & (0U != (0x1fU 
                                               & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                  >> 7U)))))));
    bufp->fullIData(oldp+113,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__4__KET____DOT__reg_x__dout),32);
    bufp->fullBit(oldp+114,((IData)(((0x200U == (0xf80U 
                                                 & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                     & (0U != (0x1fU 
                                               & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                  >> 7U)))))));
    bufp->fullIData(oldp+115,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__5__KET____DOT__reg_x__dout),32);
    bufp->fullBit(oldp+116,((IData)(((0x280U == (0xf80U 
                                                 & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                     & (0U != (0x1fU 
                                               & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                  >> 7U)))))));
    bufp->fullIData(oldp+117,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__6__KET____DOT__reg_x__dout),32);
    bufp->fullBit(oldp+118,((IData)(((0x300U == (0xf80U 
                                                 & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                     & (0U != (0x1fU 
                                               & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                  >> 7U)))))));
    bufp->fullIData(oldp+119,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__7__KET____DOT__reg_x__dout),32);
    bufp->fullBit(oldp+120,((IData)(((0x380U == (0xf80U 
                                                 & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                     & (0U != (0x1fU 
                                               & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                  >> 7U)))))));
    bufp->fullIData(oldp+121,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__8__KET____DOT__reg_x__dout),32);
    bufp->fullBit(oldp+122,((IData)(((0x400U == (0xf80U 
                                                 & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                     & (0U != (0x1fU 
                                               & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                  >> 7U)))))));
    bufp->fullIData(oldp+123,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__9__KET____DOT__reg_x__dout),32);
    bufp->fullBit(oldp+124,((IData)(((0x480U == (0xf80U 
                                                 & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                     & (0U != (0x1fU 
                                               & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                  >> 7U)))))));
    bufp->fullIData(oldp+125,(((IData)(4U) + vlSelfRef.ysyx_25060170_top__DOT__pc)),32);
    bufp->fullIData(oldp+126,(vlSelfRef.ysyx_25060170_top__DOT__u_mem__DOT____Vcellinp__mem_data_reg__din),32);
    bufp->fullIData(oldp+127,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[0]),32);
    bufp->fullIData(oldp+128,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[1]),32);
    bufp->fullIData(oldp+129,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[2]),32);
    bufp->fullIData(oldp+130,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[3]),32);
    bufp->fullIData(oldp+131,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[4]),32);
    bufp->fullIData(oldp+132,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[5]),32);
    bufp->fullIData(oldp+133,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[6]),32);
    bufp->fullIData(oldp+134,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[7]),32);
    bufp->fullIData(oldp+135,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[8]),32);
    bufp->fullIData(oldp+136,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[9]),32);
    bufp->fullIData(oldp+137,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[10]),32);
    bufp->fullIData(oldp+138,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[11]),32);
    bufp->fullIData(oldp+139,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[12]),32);
    bufp->fullIData(oldp+140,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[13]),32);
    bufp->fullIData(oldp+141,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[14]),32);
    bufp->fullIData(oldp+142,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[15]),32);
    bufp->fullIData(oldp+143,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[16]),32);
    bufp->fullIData(oldp+144,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[17]),32);
    bufp->fullIData(oldp+145,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[18]),32);
    bufp->fullIData(oldp+146,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[19]),32);
    bufp->fullIData(oldp+147,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[20]),32);
    bufp->fullIData(oldp+148,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[21]),32);
    bufp->fullIData(oldp+149,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[22]),32);
    bufp->fullIData(oldp+150,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[23]),32);
    bufp->fullIData(oldp+151,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[24]),32);
    bufp->fullIData(oldp+152,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[25]),32);
    bufp->fullIData(oldp+153,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[26]),32);
    bufp->fullIData(oldp+154,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[27]),32);
    bufp->fullIData(oldp+155,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[28]),32);
    bufp->fullIData(oldp+156,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[29]),32);
    bufp->fullIData(oldp+157,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[30]),32);
    bufp->fullIData(oldp+158,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[31]),32);
    bufp->fullIData(oldp+159,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__10__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+160,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__11__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+161,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__12__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+162,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__13__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+163,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__14__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+164,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__15__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+165,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__16__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+166,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__17__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+167,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__18__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+168,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__19__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+169,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__1__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+170,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__20__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+171,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__21__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+172,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__22__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+173,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__23__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+174,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__24__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+175,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__25__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+176,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__26__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+177,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__27__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+178,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__28__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+179,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__29__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+180,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__2__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+181,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__30__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+182,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__31__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+183,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__3__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+184,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__4__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+185,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__5__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+186,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__6__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+187,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__7__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+188,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__8__KET____DOT__reg_x__dout),32);
    bufp->fullIData(oldp+189,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__9__KET____DOT__reg_x__dout),32);
    bufp->fullBit(oldp+190,(vlSelfRef.MuxKey__02Eout));
    bufp->fullBit(oldp+191,(vlSelfRef.MuxKey__02Ekey));
    bufp->fullCData(oldp+192,(vlSelfRef.MuxKey__02Elut),4);
    bufp->fullBit(oldp+193,(vlSelfRef.MuxKeyWithDefault__02Eout));
    bufp->fullBit(oldp+194,(vlSelfRef.MuxKeyWithDefault__02Ekey));
    bufp->fullBit(oldp+195,(vlSelfRef.default_out));
    bufp->fullCData(oldp+196,(vlSelfRef.MuxKeyWithDefault__02Elut),4);
    bufp->fullBit(oldp+197,(vlSelfRef.ysyx_25060170_IDU__02Eclk));
    bufp->fullBit(oldp+198,(vlSelfRef.ysyx_25060170_IDU__02Erst));
    bufp->fullIData(oldp+199,(vlSelfRef.inst_i),32);
    bufp->fullBit(oldp+200,(vlSelfRef.reg_write_en_i));
    bufp->fullCData(oldp+201,(vlSelfRef.reg_write_addr_i),5);
    bufp->fullIData(oldp+202,(vlSelfRef.reg_write_data_i),32);
    bufp->fullIData(oldp+203,(vlSelfRef.rs1_data_o),32);
    bufp->fullIData(oldp+204,(vlSelfRef.rs2_data_o),32);
    bufp->fullCData(oldp+205,(vlSelfRef.opcode_o),7);
    bufp->fullCData(oldp+206,(vlSelfRef.funct3_o),3);
    bufp->fullCData(oldp+207,(vlSelfRef.funct7_o),7);
    bufp->fullCData(oldp+208,(vlSelfRef.rd_o),5);
    bufp->fullBit(oldp+209,(vlSelfRef.ysyx_25060170_top__02Eclk));
    bufp->fullBit(oldp+210,(vlSelfRef.ysyx_25060170_top__02Erst));
    bufp->fullBit(oldp+211,(vlSelfRef.ready_i));
    bufp->fullBit(oldp+212,(vlSelfRef.ready_o));
    bufp->fullCData(oldp+213,((0x1fU & (vlSelfRef.inst_i 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+214,((0x1fU & (vlSelfRef.inst_i 
                                        >> 0x14U))),5);
    bufp->fullBit(oldp+215,(((IData)(vlSelfRef.reg_write_en_i) 
                             & (0xaU == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->fullBit(oldp+216,(((IData)(vlSelfRef.reg_write_en_i) 
                             & (0xbU == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->fullBit(oldp+217,(((IData)(vlSelfRef.reg_write_en_i) 
                             & (0xcU == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->fullBit(oldp+218,(((IData)(vlSelfRef.reg_write_en_i) 
                             & (0xdU == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->fullBit(oldp+219,(((IData)(vlSelfRef.reg_write_en_i) 
                             & (0xeU == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->fullBit(oldp+220,(((IData)(vlSelfRef.reg_write_en_i) 
                             & (0xfU == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->fullBit(oldp+221,(((IData)(vlSelfRef.reg_write_en_i) 
                             & (0x10U == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->fullBit(oldp+222,(((IData)(vlSelfRef.reg_write_en_i) 
                             & (0x11U == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->fullBit(oldp+223,(((IData)(vlSelfRef.reg_write_en_i) 
                             & (0x12U == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->fullBit(oldp+224,(((IData)(vlSelfRef.reg_write_en_i) 
                             & (0x13U == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->fullBit(oldp+225,(((IData)(vlSelfRef.reg_write_en_i) 
                             & (1U == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->fullBit(oldp+226,(((IData)(vlSelfRef.reg_write_en_i) 
                             & (0x14U == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->fullBit(oldp+227,(((IData)(vlSelfRef.reg_write_en_i) 
                             & (0x15U == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->fullBit(oldp+228,(((IData)(vlSelfRef.reg_write_en_i) 
                             & (0x16U == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->fullBit(oldp+229,(((IData)(vlSelfRef.reg_write_en_i) 
                             & (0x17U == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->fullBit(oldp+230,(((IData)(vlSelfRef.reg_write_en_i) 
                             & (0x18U == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->fullBit(oldp+231,(((IData)(vlSelfRef.reg_write_en_i) 
                             & (0x19U == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->fullBit(oldp+232,(((IData)(vlSelfRef.reg_write_en_i) 
                             & (0x1aU == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->fullBit(oldp+233,(((IData)(vlSelfRef.reg_write_en_i) 
                             & (0x1bU == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->fullBit(oldp+234,(((IData)(vlSelfRef.reg_write_en_i) 
                             & (0x1cU == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->fullBit(oldp+235,(((IData)(vlSelfRef.reg_write_en_i) 
                             & (0x1dU == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->fullBit(oldp+236,(((IData)(vlSelfRef.reg_write_en_i) 
                             & (2U == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->fullBit(oldp+237,(((IData)(vlSelfRef.reg_write_en_i) 
                             & (0x1eU == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->fullBit(oldp+238,(((IData)(vlSelfRef.reg_write_en_i) 
                             & (0x1fU == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->fullBit(oldp+239,(((IData)(vlSelfRef.reg_write_en_i) 
                             & (3U == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->fullBit(oldp+240,(((IData)(vlSelfRef.reg_write_en_i) 
                             & (4U == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->fullBit(oldp+241,(((IData)(vlSelfRef.reg_write_en_i) 
                             & (5U == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->fullBit(oldp+242,(((IData)(vlSelfRef.reg_write_en_i) 
                             & (6U == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->fullBit(oldp+243,(((IData)(vlSelfRef.reg_write_en_i) 
                             & (7U == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->fullBit(oldp+244,(((IData)(vlSelfRef.reg_write_en_i) 
                             & (8U == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->fullBit(oldp+245,(((IData)(vlSelfRef.reg_write_en_i) 
                             & (9U == (IData)(vlSelfRef.reg_write_addr_i)))));
}
