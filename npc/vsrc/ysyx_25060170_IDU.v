`include "Reg.v"

module ysyx_25060170_IDU(

    input rst,                      // 复位信号

    //from MEM
    input [31:0] inst_i,            // 指令输入

    //from regs
    input [31:0] reg1_rdata_i,      // 通用寄存器1输入数据
    input [31:0] reg2_rdata_i,      // 通用寄存器2输入数据

    //to regs 
    output [31:0] reg1_raddr_o,     //读通用寄存器1地址
    output [31:0] reg2_raddr_o,     //读通用寄存器2地址

    //to exu
    output [31:0] inst_o,           // 指令内容
    output reg [31:0] imm_o,            // 立即数
    output [31:0] inst_addr_o,      // 指令地址
    output [31:0] rs1_data_o,       // 源寄存器1数据
    output [31:0] rs2_data_o,       // 源寄存器2数据
    output reg_we_o,                // 写通用寄存器标志
    output [31:0] reg_waddr_o,      // 写通用寄存器地址
    output add_en                   
);
    // 寄存器文件声明 现在就只有i和u
    wire [4:0] rs1_addr = inst_i[19:15];  // 源寄存器1地址
    wire [4:0] rs2_addr = inst_i[24:20];  // 源寄存器2地址
    wire [6:0] opcode = inst_i[6:0];      // 操作码
    wire [2:0] funct3 = inst_i[14:12];      
    wire [6:0] funct7 = inst_i[31:25];
    wire [4:0] rd = inst_i[11:7];

    assign inst_o = inst_i;
    assign inst_add_o = inst_addr_i;
    assign reg1_rdata_o = reg1_rdata_i;
    assign reg2_rdata_o = reg2_rdata_i;
    
    //高级写法 立即数处理
    assign imm_o = 32'h0 | 
                    //addi  i-type
                   ({32{opcode == 7'b0010011}} & {{20{inst_i[31]}},inst_i[31:20]}) |
                    //auipc u-type
                   ({32{opcode == 7'b0010111}} & {ins[31:12],12'b0}) |
                    //lw i-type
                   ({32{opcode == 7'b0000011}} & {{20{inst_i[31]}},inst_i[31:20]}) |
                   
                   ;

	endmodule
