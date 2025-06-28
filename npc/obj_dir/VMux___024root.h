// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMux.h for the primary calling header

#ifndef VERILATED_VMUX___024ROOT_H_
#define VERILATED_VMUX___024ROOT_H_  // guard

#include "verilated.h"
class VMux___024unit;


class VMux__Syms;

class alignas(VL_CACHE_LINE_BYTES) VMux___024root final : public VerilatedModule {
  public:
    // CELLS
    VMux___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(ysyx_25060170_IDU__02Eclk,0,0);
        VL_IN8(ysyx_25060170_top__02Eclk,0,0);
        VL_OUT8(MuxKey__02Eout,0,0);
        VL_IN8(MuxKey__02Ekey,0,0);
        VL_IN8(MuxKey__02Elut,3,0);
        VL_OUT8(MuxKeyWithDefault__02Eout,0,0);
        VL_IN8(MuxKeyWithDefault__02Ekey,0,0);
        VL_IN8(default_out,0,0);
        VL_IN8(MuxKeyWithDefault__02Elut,3,0);
        VL_IN8(ysyx_25060170_IDU__02Erst,0,0);
        VL_IN8(reg_write_en_i,0,0);
        VL_IN8(reg_write_addr_i,4,0);
        VL_OUT8(opcode_o,6,0);
        VL_OUT8(funct3_o,2,0);
        VL_OUT8(funct7_o,6,0);
        VL_OUT8(rd_o,4,0);
        VL_IN8(ysyx_25060170_top__02Erst,0,0);
        VL_IN8(ready_i,0,0);
        VL_OUT8(ready_o,0,0);
        CData/*0:0*/ MuxKey__DOT__i0__DOT__lut_out;
        CData/*0:0*/ MuxKey__DOT__i0__DOT__hit;
        CData/*0:0*/ MuxKeyWithDefault__DOT__i0__DOT__lut_out;
        CData/*0:0*/ MuxKeyWithDefault__DOT__i0__DOT__hit;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ysyx_25060170_IDU__02Eclk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ysyx_25060170_top__02Eclk__0;
        CData/*0:0*/ __VactContinue;
        VL_IN(inst_i,31,0);
        VL_IN(reg_write_data_i,31,0);
        VL_OUT(rs1_data_o,31,0);
        VL_OUT(rs2_data_o,31,0);
        IData/*31:0*/ ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__1__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__2__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__3__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__4__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__5__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__6__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__7__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__8__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__9__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__10__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__11__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__12__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__13__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__14__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__15__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__16__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__17__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__18__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__19__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__20__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__21__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__22__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__23__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__24__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__25__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__26__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__27__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__28__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__29__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__30__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__31__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__pc;
    };
    struct {
        IData/*31:0*/ ysyx_25060170_top__DOT__inst;
        IData/*31:0*/ ysyx_25060170_top__DOT__alu_result;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_ifu__DOT__pc_plus_4;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_mem__DOT____Vcellinp__mem_data_reg__din;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__1__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__2__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__3__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__4__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__5__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__6__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__7__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__8__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__9__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__10__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__11__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__12__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__13__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__14__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__15__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__16__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__17__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__18__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__19__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__20__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__21__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__22__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__23__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__24__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__25__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__26__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__27__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__28__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__29__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__30__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__31__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_exu__DOT__alu_result;
        IData/*31:0*/ __Vfunc_addr_to_instruction__0__Vfuncout;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*1:0*/, 2> MuxKey__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*0:0*/, 2> MuxKey__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 2> MuxKey__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*1:0*/, 2> MuxKeyWithDefault__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*0:0*/, 2> MuxKeyWithDefault__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 2> MuxKeyWithDefault__DOT__i0__DOT__data_list;
        VlUnpacked<IData/*31:0*/, 32> ysyx_25060170_IDU__DOT__reg_file;
        VlUnpacked<IData/*31:0*/, 32> ysyx_25060170_top__DOT__u_gpr__DOT__rf;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VMux__Syms* const vlSymsp;

    // CONSTRUCTORS
    VMux___024root(VMux__Syms* symsp, const char* v__name);
    ~VMux___024root();
    VL_UNCOPYABLE(VMux___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
