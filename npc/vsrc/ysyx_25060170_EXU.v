`include "Reg.v"
import "DPI-C" function void npc_trap();

module ysyx_25060170_EXU(

    input rst,
    input [31:0] reg1_rdata_i,     // rs1数据
    input [31:0] imm_i,            // 立即数（建议用32位，便于符号扩展）
    input [6:0] opcode_i,
    input [2:0] funct3_i,
    input [6:0] funct7_i,			//目前只要addi，先注释掉，后面再来改
    input [4:0] rd_i,              // 目的寄存器号
    input ready_i,
    output ready_o,
    output [31:0] alu_result_o,    // ALU结果输出
    output [4:0] rd_o              // 目的寄存器号输出
);

    // 只实现addi指令
    wire is_addi = (opcode_i == 7'b0010011) && (funct3_i == 3'b000);

    wire [31:0] alu_result;
    assign alu_result = is_addi ? (reg1_rdata_i + imm_i) : 32'b0;

    // 用Reg模板寄存ALU结果
    Reg #(32, 0) alu_result_reg (
        .clk(clk),
        .rst(rst),
        .din(alu_result),
        .dout(alu_result_o),
        .wen(ready_i)
    );

	always @(*) begin
    if (opcode_i == 7'b1110011 && funct3_i == 3'b000 && imm_i[11:0] == 12'b1) begin // ebreak
        npc_trap();
    end
end

    // 传递rd号
    assign rd_o = rd_i;

    assign ready_o = ready_i;

endmodule


