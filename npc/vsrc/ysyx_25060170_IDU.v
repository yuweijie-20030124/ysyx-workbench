/*
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

module ysyx_25060170_IDU(
    //from IFU
    input [31:0] pc_i,

    //from MEM
    input [31:0] inst_i,            // 指令输入

    //from GPR
    input [31:0] reg1_rdata_i,      // 通用寄存器1输入数据
    //input [31:0] reg2_rdata_i,      // 通用寄存器2输入数据 暂时还没得用

    //to GPR 
    output [4:0] rs1_raddr_o,     //读通用寄存器1地址
    //output [4:0] rs2_raddr_o,     //读通用寄存器2地址

    //to EXU
    output reg [3:0] ALUop,
    //output reg MemWr,
    output [4:0] rd_addr,           //目标寄存器rd索引    
    output [31:0] op_1,             //exu执行的第一个数
    output [31:0] op_2,             //exu执行的第二个数
    output [31:0] imm_o,             // 立即数
    
    //to WBU
    output reg jal,
    //output reg branch,
    //output reg brlt,    
    output reg [1:0] regS,
    output reg RegW,
    output reg PCx1,
    output jump_en

);

import "DPI-C" function void set_npc_exit(int pc, int halt_ret);
import "DPI-C" function int paddr_read(int addr, int len);
import "DPI-C" function void paddr_write(int addr, int len, int data);


    //wire is_jump = (opcode == 7'b1100111 || opcode == 7'b1101111);
    //localparam PC_INCR = 32'd4;  // 添加在模块开头
    assign jump_en = PCx1 | jal;
    wire [6:0] opcode;
    wire [6:0] func7;
    //wire [2:0] func3;
    wire [31:0] imm;

    
    // 寄存器文件声明 现在就只有i和u
    assign rs1_raddr_o = inst_i[19:15];  // 源寄存器1地址
    //assign rs2_raddr_o = inst_i[24:20];  // 源寄存器2地址
    assign opcode = inst_i[6:0];         // 操作码
    //assign func3 = inst_i[14:12];      
    /* lint_off */
    assign func7 = inst_i[31:25];
    /* lint_on */
    assign rd_addr = inst_i[11:7];





    //assign inst_o = inst_i;

    

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

    assign imm_o = imm;

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
                    ({32{opcode == 7'b1100111}} & {pc_i}) |
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
                    ({32{opcode == 7'b1100111}} & {32'd4}) |
                    //jal j-type 4
                    //({32{opcode == 7'b1101111}} & {imm[31:1], 1'b0});
                    ({32{opcode == 7'b1101111}} & {32'd4});

    always @(*) begin
        // 默认值
        jal = 0;
        //branch = 0;
        //brlt = 0;
        regS = 0;
        ALUop = 0;
        //MemWr = 0;
        RegW = 0;
        PCx1 = 0;

        case(opcode)
            7'b0110011: begin // add/sub
           if   (func7 == 7'b0000000) ALUop = 0;
           else if(func7 == 7'b0100000) ALUop = 1;
                RegW = 1;
            end
    
            7'b0010011: begin // addi
                RegW = 1;
            end
    
            7'b0010111: begin // auipc
                regS = 0;
                RegW = 1;
            end
    
            7'b0000011: begin // lw
                regS = 1;
                RegW = 1;
            end
    
            7'b0100011: begin // sw
                //MemWr = 1;
            end
    /*
            7'b1100011: begin // beq/blt
                ALUop = 1;
                regS = 2;
                if (func3 == 3'b000) branch = 1;
                else if (func3 == 3'b100) brlt = 1;
            end
    */
            7'b1100111: begin // jalr
                regS = 2;
                RegW = 1;
                PCx1 = 1;
            end
    
            7'b1101111: begin // jal
                jal = 1;
                regS = 2;
                RegW = 1;
            end

            default: begin   
                //todo
            end
        endcase
        //$display("opcode = %7b", opcode);
    end
    

/***************************************DPI-C*******************************************/


    always @(*) begin
    //$display("PC = 0x%08x", pc_i);
    //$display("inst = 0x%08x", inst_i);
    if(inst_i == 32'b0000_0000_0001_0000_0000_0000_0111_0011) begin
        set_npc_exit(pc_i,0);
    end
end

export "DPI-C" task IDU_SEND_INST;

task IDU_SEND_INST(
    output int c_inst
);

    c_inst = inst_i;

endtask    

/********************************FTRACE****************************************/

export "DPI-C" task IDU_SEND_CALL_FLAG;

task IDU_SEND_CALL_FLAG(
    output int call_flag,
    output int pc,
    output int dnpc
);

    call_flag = ((rd_addr == 1 && jump_en == 1) || (rd_addr == 0 && imm == 0 && PCx1 == 1)) ? 1 : 0;
    // $display("rd_addr = 0x%08x", rd_addr);
    // $display("jump_en = %d", jump_en);
    // $display("jalr = %d", PCx1);
    // $display("jal = %d", jal);
    // $display("imm = 0x%08x", imm);
    // $display("PCx1 = %d", PCx1);
    dnpc =  pc_i + imm;

endtask

export "DPI-C" task IDU_SEND_RET_FLAG;

task IDU_SEND_RET_FLAG(
    output int ret_flag,
    output int pc
);

    ret_flag = inst_i == 32'h00008067 ? 1 : 0;
    //pc  = pc_i;
    pc = PCx1 ? {pc_i[31:1],1'b0} : pc_i ;

endtask





    endmodule
