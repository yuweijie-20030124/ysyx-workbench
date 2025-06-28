module ysyx_25060170_top (
    input clk,
    input rst,
    input ready_i,
    output ready_o
);

    // IFU
    wire [31:0] pc;
    wire        ifu_ready_o;
    ysyx_25060170_IFU u_ifu (
        .clk(clk),
        .rst(rst),
        .pc(pc),
        .ready_i(ready_i),
        .ready_o(ifu_ready_o)
    );

    // MEM
    wire [31:0] inst;
    wire        mem_ready_o;
    ysyx_25060170_MEM u_mem (
        .clk(clk),
        .rst(rst),
        .addr(pc),
        .data_out(inst),
        .ready_i(ifu_ready_o),
        .ready_o(mem_ready_o)
    );

    // 立即数提取（只支持addi）
    wire [31:0] imm = {{20{inst[31]}}, inst[31:20]};

    // GPR
    wire [31:0] gpr_rdata1;
    wire [31:0] gpr_rdata2_unused; // 用于消除未连接警告
    wire        gpr_ready_o;
    ysyx_25060170_GPR u_gpr (
        .clk(clk),
        .rst(rst),
        .wdata(wbu_reg_write_data),
        .waddr(wbu_reg_write_addr),
        .wen(wbu_reg_write_en),
        .raddr1(inst[19:15]),
        .raddr2(inst[24:20]),
        .rdata1(gpr_rdata1),
        .rdata2(gpr_rdata2_unused), // 用未用信号连接
        .ready_i(mem_ready_o),
        .ready_o(gpr_ready_o)
    );

    // 译码信号
    wire [31:0] rs1_data = gpr_rdata1;
    wire [6:0]  opcode   = inst[6:0];
    wire [2:0]  funct3   = inst[14:12];
    wire [4:0]  rd       = inst[11:7];

    // EXU
    wire [31:0] alu_result;
    wire [4:0]  exu_rd;
    wire        exu_ready_o;
    ysyx_25060170_EXU u_exu (
        .clk(clk),
        .rst(rst),
        .reg1_rdata_i(rs1_data),
        .imm_i(imm),
        .opcode_i(opcode),
        .funct3_i(funct3),
        .rd_i(rd),
        .ready_i(gpr_ready_o),
        .ready_o(exu_ready_o),
        .alu_result_o(alu_result),
        .rd_o(exu_rd)
    );

    // WBU
    wire [31:0] wbu_reg_write_data;
    wire [4:0]  wbu_reg_write_addr;
    wire        wbu_reg_write_en;
    wire        wbu_ready_o;
    ysyx_25060170_WBU u_wbu (
        .alu_result_i(alu_result),
        .rd_i(exu_rd),
        .ready_i(exu_ready_o),
        .ready_o(wbu_ready_o),
        .reg_write_data_o(wbu_reg_write_data),
        .reg_write_addr_o(wbu_reg_write_addr),
        .reg_write_en_o(wbu_reg_write_en)
    );

    // ready信号直通
    assign ready_o = wbu_ready_o;

endmodule

