`include "Reg.v"

module ysyx_25060170_IDU(
    input clk,                      // 时钟信号
    input rst,                      // 复位信号
    input [31:0] inst_i,            // 指令输入
    input reg_write_en_i,           // 寄存器写使能
    input [4:0] reg_write_addr_i,   // 寄存器写地址
    input [31:0] reg_write_data_i,  // 寄存器写数据
    output [31:0] rs1_data_o,       // 源寄存器1数据输出
    output [31:0] rs2_data_o,       // 源寄存器2数据输出
    output [6:0] opcode_o,          // 操作码输出
    output [2:0] funct3_o,          // funct3字段输出
    output [6:0] funct7_o,          // funct7字段输出
    output [4:0] rd_o               // 目的寄存器地址输出
);
    // 寄存器文件声明
    wire [31:0] reg_file [0:31];    // 32个32位寄存器
    wire [4:0] rs1_addr = inst_i[19:15];  // 源寄存器1地址
    wire [4:0] rs2_addr = inst_i[24:20];  // 源寄存器2地址

    // 寄存器实例化（x1-x31）
    genvar i;
    generate
        for (i = 1; i < 32; i = i + 1) begin : reg_gen
            Reg #(32, 0) reg_x (
                .clk(clk),
                .rst(rst),
                .din(reg_write_data_i),  // 直接使用输入数据
                .dout(reg_file[i]),
                .wen(reg_write_en_i & (reg_write_addr_i == i))
            );
        end
    endgenerate
    
    // x0寄存器硬连线为0
    assign reg_file[0] = 32'b0;

    // 寄存器读取逻辑
    assign rs1_data_o = (rs1_addr == 5'b0) ? 32'b0 : reg_file[rs1_addr];
    assign rs2_data_o = (rs2_addr == 5'b0) ? 32'b0 : reg_file[rs2_addr];

    // 指令解码输出
    assign opcode_o = inst_i[6:0];     // 操作码（指令[6:0]）
    assign funct3_o = inst_i[14:12];   // funct3字段（指令[14:12]）
    assign funct7_o = inst_i[31:25];   // funct7字段（指令[31:25]）
    assign rd_o     = inst_i[11:7];    // 新增：rd字段输出
	endmodule
