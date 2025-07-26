module ysyx_25060170_top (
    input clk,
    input rst,
    input ready_i,
    output ready_o
);

    ysyx_25060170_IFU ifu(
        .clk(clk),
        .rst(rst),
        .PCin(),
        .imm(),
        .res(),
        .br(),
        .isx(),
        .ready_i(ready_i),
        .ready_o(ready_o),
        .PCout(PC)
    );

    ysyx_25060170_IDU idu(
        .pc_i(),
        .inst_i(),
        .reg1_rdata_i(),
        .reg2_rdata_i(),
        .rs1_raddr_o(),
        .rs2_raddr_o(),
        .ALUop(),
        .MemWr(),
        .ALUsrc(),
        .rd_addr(),
        .pc_o(),
        .op_1(),
        .op_2(),
        .imm_o(),
        .rs1_data_o(),
        .rs2_data_o(),
        .jal(),
        .branch(),
        .brlt(),
        .regS(),
        .RegW(),
        .PCx1(),
        .ready_i(),
        .ready_o()
    );

    ysyx_25060170_GPR gpr(
        .clk(),
        .rst(),
        .r1(),
        .r2(),
        .r3(),
        .we(),
        .writer(),
        .wd(),
        .ready_i(),
        .ready_o(),
        .rd1(),
        .rd2(),
        .rd3()
    );

    ysyx_25060170_MEM mem(
        .addr_i(),
        .inst_o(),
        .ready_i(),
        .ready_o()
    );

    ysyx_25060170_EXU exu(
        .op_1(),
        .op_2(),
        .is_jalr(),
        .ready_i(),
        .res1(),
        .ready_o()
    );

endmodule

