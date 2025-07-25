`include "Reg.v"

module ysyx_25060170_IDU(

    //input rst,                      // 复位信号

    //from IFU
    input [31:0] pc_i,

    //from MEM
    input [31:0] inst_i,            // 指令输入

    //from regs
    input [31:0] reg1_rdata_i,      // 通用寄存器1输入数据
    input [31:0] reg2_rdata_i,      // 通用寄存器2输入数据

    //to regs 
    output [4:0] rs1_raddr_o,     //读通用寄存器1地址
    output [4:0] rs2_raddr_o,     //读通用寄存器2地址


    //to exu
    output [4:0] rd_addr,           //目标寄存器rd索引
    output [31:0] pc_o,
    output [31:0] op_1,             //exu执行的第一个数
    output [31:0] op_2,             //exu执行的第二个数
    output [31:0] op_3,             //exu执行的第三个数
    output [31:0] op_4,             //exu执行的第四个数
// op_1: ALU 操作数1 (RS1 或 PC)
// op_2: ALU 操作数2 (立即数或偏移量)
// op_3: JAL/JALR 的返回地址 (PC)
// op_4: JAL/JALR 的固定增量 (4)

    //output reg_we_o,                // 写通用寄存器标志
    output [31:0] imm_o,            // 立即数
    output [31:0] rs1_data_o,       // 源寄存器1数据
    output [31:0] rs2_data_o,       // 源寄存器2数据


    //to ControlUnit
    output [6:0] opcode,
    output [6:0] funct7,
    output [2:0] funct3
);

    localparam PC_INCR = 32'd4;  // 添加在模块开头

    // 寄存器文件声明 现在就只有i和u
    assign rs1_raddr_o = inst_i[19:15];  // 源寄存器1地址
    assign rs2_raddr_o = inst_i[24:20];  // 源寄存器2地址
    assign opcode = inst_i[6:0];      // 操作码
    assign funct3 = inst_i[14:12];      
    assign funct7 = inst_i[31:25];
    assign rd_addr = inst_i[11:7];

    wire [31:0] imm;
    assign imm_o = imm;

    //assign inst_o = inst_i;

    assign pc_o = pc_i;

    assign rs1_data_o = reg1_rdata_i;
    assign rs2_data_o = reg2_rdata_i;

    wire is_jump = (opcode == 7'b1100111 || opcode == 7'b1101111);

    //高级写法 立即数处理
    assign imm = 32'h0 | 
                    //addi  i-type
                    ({32{opcode == 7'b0010011}} & {{20{inst_i[31]}},inst_i[31:20]}) |
                    //auipc u-type
                    ({32{opcode == 7'b0010111}} & {inst_i[31:12],12'b0}) |
                    //lw i-type
                    ({32{opcode == 7'b0000011}} & {{20{inst_i[31]}},inst_i[31:20]}) |
                    //sw s-type
                    ({32{opcode == 7'b0100011}} & {{20{inst_i[31]}},inst_i[31:25],inst_i[11:7]}) |
                    //beq blt b-type
                    ({32{opcode == 7'b1100011}} & {{20{inst_i[31]}},inst_i[7],inst_i[30:25],inst_i[11:8],1'b0}) |
                    //jalr i-type
                    ({32{opcode == 7'b1100111}} & {{20{inst_i[31]}}, inst_i[30:20],1'b0}) |
                    //jal j-type
                    ({32{opcode == 7'b1101111}} & {{12{inst_i[31]}}, inst_i[19:12], inst_i[20], inst_i[30:21], 1'b0});

    assign op_1 = 32'h0 |
                    //addi  i-type
                    ({32{opcode == 7'b0010011}} & {reg1_rdata_i}) |
                    //auipc u-type
                    ({32{opcode == 7'b0010111}} & {pc_i}) |
                    //lw i-type
                    ({32{opcode == 7'b0000011}} & {reg1_rdata_i}) |
                    //sw s-type
                    ({32{opcode == 7'b0100011}} & {reg1_rdata_i}) |
                    //beq blt b-type
                    ({32{opcode == 7'b1100011}} & {pc_i}) |
                    //jalr i-type 4
                    ({32{opcode == 7'b1100111}} & {reg1_rdata_i}) |
                    //jal j-type 4
                    ({32{opcode == 7'b1101111}} & {pc_i}) ;
	
    assign op_2 = 32'h0 |
                    //addi  i-type
                    ({32{opcode == 7'b0010011}} & {imm}) |
                    //auipc u-type
                    ({32{opcode == 7'b0010111}} & {imm}) |
                    //lw i-type
                    ({32{opcode == 7'b0000011}} & {imm}) |
                    //sw s-type
                    ({32{opcode == 7'b0100011}} & {imm}) |
                    //beq blt b-type
                    ({32{opcode == 7'b1100011}} & {imm}) |
                    //jalr i-type 4
                    ({32{opcode == 7'b1100111}} & {imm[31:1], 1'b0}) |
                    //jal j-type 4
                    ({32{opcode == 7'b1101111}} & {imm[31:1], 1'b0});

    /*
    assign op_3 = 32'h0 |
                    //jalr i-type 4
                    ({32{opcode == 7'b1100111}} & { pc_i }) |
                    //jal j-type 4
                    ({32{opcode == 7'b1101111}} & { pc_i });

    assign op_4 = 32'h0 |
                    //jalr i-type 4
                    ({32{opcode == 7'b1100111}} & {32'd4}) |
                    //jal j-type 4
                    ({32{opcode == 7'b1101111}} & {32'd4});
    */

    // op_3: JAL/JALR 的返回地址 (PC)
    // op_4: JAL/JALR 的固定增量 (4)
    assign op_3 = ({32{is_jump}} & pc_i);
    assign op_4 = ({32{is_jump}} & PC_INCR);
    
    endmodule
