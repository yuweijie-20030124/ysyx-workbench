/*
jal-判断该指令是否为jal；
branch-判断指令是否为beq；
brlt-判断指令是否为blt；
regS-写回数据的选择信号，0-来源于ALU，1-来源于DataMem，2-来源于PC+4；
ALUop-ALU控制信号，0对应+，1对应-,2对应*，3对应÷；
MemWr-DataMem写使能；
RegW-寄存器堆写使能；
jalr处理信号，若为jalr则将x1+offset的值写入PC；
*/

module ysyx_25060170_IDU(
    //from IFU
    input [31:0] pc_i,

    //from MEM
    input [31:0] inst_i,            // 指令输入

    //from GPR
    input [31:0] reg1_rdata_i,      // 通用寄存器1输入数据
    input [31:0] reg2_rdata_i,      // 通用寄存器2输入数据 暂时还没得用

    //to GPR 
    output [4:0] rs1_raddr_o,     //读通用寄存器1地址
    output [4:0] rs2_raddr_o,     //读通用寄存器2地址

    //to EXU
    output reg [3:0] ALUop,
    output [4:0] rd_addr,           //目标寄存器rd索引    
    output [31:0] op_1,             //exu执行的第一个数
    output [31:0] op_2,             //exu执行的第二个数
    output [31:0] imm_o,            // 立即数
    output reg is_beq,              //是否为beq
    output reg is_blt,              //是否为blt
    output reg is_bne,              //是否为bne
    output reg is_bge,              //是否为bge
    output reg is_bltu,             //是否为bltu
    output reg is_bgeu,             //是否为bgeu
    output reg is_sltiu,            //是否为sltiu
    output reg is_sltu,             //是否为sltu
    
    //to WBU
    output reg [31:0] reg1_rdata_o,
    output reg [31:0] reg2_rdata_o,
    output reg [31:0] memory_lenth,
    output reg [1:0] need_sign_ext,
    output reg MemWr,
    output reg is_jal,
    output reg is_jalr,    
    output reg [1:0] regS,
    output reg RegW
);
/********************************DPI-C START****************************************/
import "DPI-C" function void set_npc_exit(int pc, int halt_ret);
/********************************DPI-C END  ****************************************/
    wire [6:0] opcode;
    wire [6:0] func7;
    wire [2:0] func3;
    wire [31:0] imm;   
    assign rs1_raddr_o = inst_i[19:15];  // 源寄存器1地址
    assign rs2_raddr_o = inst_i[24:20];  // 源寄存器2地址
    assign reg1_rdata_o = reg1_rdata_i;
    assign reg2_rdata_o = reg2_rdata_i;
    assign opcode = inst_i[6:0];         // 操作码
    assign func3 = inst_i[14:12];      
    assign func7 = inst_i[31:25];
    assign rd_addr = inst_i[11:7];

/********************************识别是哪一条指令****************************/
//U type
wire auipc;
wire lui;
wire is_Utype;

//I type
wire srli;
wire slli;
wire srai;
wire lbu;
wire addi;
wire sltiu;
wire lb;
wire lh;
wire lhu;
wire lw;
wire andi;
wire xori;
wire ori;
wire jalr;
wire is_Itype;

//S type
wire sw;
wire sh;
wire sb;
wire sd;
wire is_Stype;

//R type
wire srl ;
wire add ;
wire sll ;
wire slt ;
wire sltu;
wire npcxor ;
wire npcor  ;
wire npcand ;
wire sra ;
wire sub ;
wire mul ;
wire mulh  ;
wire mulhsu;
wire mulhu ;
wire div   ;
wire divu  ;
wire rem   ;
wire remu  ;
wire is_Rtype;

//B type
wire beq ;
wire bne ;
wire blt ;
wire bge ;
wire bltu;
wire bgeu;
wire is_Btype;

//J type
wire jal;
wire is_Jtype;

//U type
assign auipc    =   1'b0 | opcode == 7'b0010111;
assign lui      =   1'b0 | opcode == 7'b0110111;
assign is_Utype =   auipc | lui;

//I type
assign srli     =   1'b0 | (opcode == 7'b0010011) & (func3 == 3'b101) & (func7 == 7'b0000000);
assign slli     =   1'b0 | (opcode == 7'b0010011) & (func3 == 3'b001) & (func7 == 7'b0000000);
assign srai     =   1'b0 | (opcode == 7'b0010011) & (func3 == 3'b101) & (func7 == 7'b0100000);
assign lbu      =   1'b0 | (opcode == 7'b0000011) & (func3 == 3'b100);
assign addi     =   1'b0 | (opcode == 7'b0010011) & (func3 == 3'b000);
assign sltiu    =   1'b0 | (opcode == 7'b0010011) & (func3 == 3'b011);
assign lb       =   1'b0 | (opcode == 7'b0000011) & (func3 == 3'b000);
assign lh       =   1'b0 | (opcode == 7'b0000011) & (func3 == 3'b001);
assign lhu      =   1'b0 | (opcode == 7'b0000011) & (func3 == 3'b101);
assign lw       =   1'b0 | (opcode == 7'b0000011) & (func3 == 3'b010);
assign andi     =   1'b0 | (opcode == 7'b0010011) & (func3 == 3'b111);
assign xori     =   1'b0 | (opcode == 7'b0010011) & (func3 == 3'b100);
assign ori      =   1'b0 | (opcode == 7'b0010011) & (func3 == 3'b010);
assign jalr     =   1'b0 | (opcode == 7'b1100111) & (func3 == 3'b000);
assign is_Itype =   srli | slli | srai | lbu | addi | sltiu | lb | lh | lhu | lw | andi | xori | ori | jalr;

//S type
assign sw       =   1'b0 | (opcode == 7'b0100011) & (func3 == 3'b010);
assign sh       =   1'b0 | (opcode == 7'b0100011) & (func3 == 3'b001);
assign sb       =   1'b0 | (opcode == 7'b0100011) & (func3 == 3'b000);
assign sd       =   1'b0 | (opcode == 7'b0100011) & (func3 == 3'b011);
assign is_Stype =   sw | sh | sb | sd;

//R type
assign srl      =   1'b0 | (opcode == 7'b0110011) & (func3 == 3'b101) & (func7 == 7'b0000000);
assign add      =   1'b0 | (opcode == 7'b0110011) & (func3 == 3'b000) & (func7 == 7'b0000000);
assign sll      =   1'b0 | (opcode == 7'b0110011) & (func3 == 3'b001) & (func7 == 7'b0000000);
assign slt      =   1'b0 | (opcode == 7'b0110011) & (func3 == 3'b010) & (func7 == 7'b0000000);
assign sltu     =   1'b0 | (opcode == 7'b0110011) & (func3 == 3'b011) & (func7 == 7'b0000000);
assign npcxor   =   1'b0 | (opcode == 7'b0110011) & (func3 == 3'b100) & (func7 == 7'b0000000);
assign npcor    =   1'b0 | (opcode == 7'b0110011) & (func3 == 3'b110) & (func7 == 7'b0000000);
assign npcand   =   1'b0 | (opcode == 7'b0110011) & (func3 == 3'b111) & (func7 == 7'b0000000);
assign sra      =   1'b0 | (opcode == 7'b0110011) & (func3 == 3'b101) & (func7 == 7'b0100000);
assign sub      =   1'b0 | (opcode == 7'b0110011) & (func3 == 3'b000) & (func7 == 7'b0100000);
assign mul      =   1'b0 | (opcode == 7'b0110011) & (func3 == 3'b000) & (func7 == 7'b0000001);
assign mulh     =   1'b0 | (opcode == 7'b0110011) & (func3 == 3'b001) & (func7 == 7'b0000001);
assign mulhsu   =   1'b0 | (opcode == 7'b0110011) & (func3 == 3'b010) & (func7 == 7'b0000001);
assign mulhu    =   1'b0 | (opcode == 7'b0110011) & (func3 == 3'b011) & (func7 == 7'b0000001);
assign div      =   1'b0 | (opcode == 7'b0110011) & (func3 == 3'b100) & (func7 == 7'b0000001);
assign divu     =   1'b0 | (opcode == 7'b0110011) & (func3 == 3'b101) & (func7 == 7'b0000001);
assign rem      =   1'b0 | (opcode == 7'b0110011) & (func3 == 3'b110) & (func7 == 7'b0000001);
assign remu     =   1'b0 | (opcode == 7'b0110011) & (func3 == 3'b111) & (func7 == 7'b0000001);
assign is_Rtype =   srli | srl | add | sll | slt | sltu | npcxor | npcor | npcand | sra | sub | mul | mulh | mulhsu | mulhu | div | divu | rem | remu;

//B type
assign beq      =   1'b0 | (opcode == 7'b1100011) & (func3 == 3'b000);
assign bne      =   1'b0 | (opcode == 7'b1100011) & (func3 == 3'b001);
assign blt      =   1'b0 | (opcode == 7'b1100011) & (func3 == 3'b100);
assign bge      =   1'b0 | (opcode == 7'b1100011) & (func3 == 3'b101);
assign bltu     =   1'b0 | (opcode == 7'b1100011) & (func3 == 3'b110);
assign bgeu     =   1'b0 | (opcode == 7'b1100011) & (func3 == 3'b111);
assign is_Btype =   beq | bne | blt | bge | bltu | bgeu;

//J type
assign jal      =   1'b0 | opcode == 7'b1101111;
assign is_Jtype = jal;

// always@(posedge sltu)begin
//     $display("sltu = %d", sltu);
// end

//选择器模板 立即数处理 R-type并不需要立即数处理
assign imm = 32'h0 |    
                    //U type
                    ({32{is_Utype == 1'b1}} & {inst_i[31:12],12'b0}) |
                    //I type
                    ({32{is_Itype == 1'b1}} & {{20{inst_i[31]}},inst_i[31:20]}) |
                    //S type
                    ({32{is_Stype == 1'b1}} & {{20{inst_i[31]}},inst_i[31:25],inst_i[11:7]}) |
                    //B type
                    ({32{is_Btype == 1'b1}} & {{20{inst_i[31]}},inst_i[7],inst_i[30:25],inst_i[11:8],1'b0}) |
                    //J type
                    ({32{is_Jtype == 1'b1}} & {{12{inst_i[31]}}, inst_i[19:12], inst_i[20], inst_i[30:21], 1'b0});

assign imm_o = imm;

/*************************************2025 . 8 . 03 (todo)*************************************************/
    assign op_1 = 32'h0 |
                    //auipc U-type      rd寄存器 = pc寄存器的值 + imm的值 
                    ({32{auipc == 1'b1}} & {pc_i}) |
                    //lui   U-type      rd寄存器 = imm的值
                    ({32{lui == 1'b1}} & {imm}) |
                    //srli  I-type      rd寄存器 = rs1寄存器的值 无符号>> rs2寄存器地址的值
                    ({32{srli == 1'b1}} & {reg1_rdata_i}) |
                    //slli  I-type      rd寄存器 = rs1寄存器的值 左移<<   rs2寄存器地址的值
                    ({32{slli == 1'b1}} & {reg1_rdata_i}) |
                    //srai  I-type      rd寄存器 = rs1寄存器的值 有符号>> rs2寄存器地址的值
                    ({32{srai == 1'b1}} & {reg1_rdata_i}) |
                    //lbu   I-type      rd寄存器 = 从地址（rs1寄存器的值 + imm的值）中读取一个字节，0扩展后写入rd寄存器
                    ({32{lbu == 1'b1}} & {reg1_rdata_i}) |
                    //addi   I-type     rd寄存器 = rs1寄存器的值 + imm的值 
                    ({32{addi == 1'b1}} & {reg1_rdata_i}) |
                    //sltiu   I-type    比较rs1寄存器的值和立即数的值，如果rs1寄存器的值更小，rd写入1，否则写入0
                    ({32{sltiu == 1'b1}} & {reg1_rdata_i}) |
                    //lb   I-type       向地址（rs1 + 立即数的值）读取一个字节，经过符号拓展后写入寄存器rd
                    ({32{lb == 1'b1}} & {reg1_rdata_i}) |
                    //lh   I-type       向地址（rs1 + 立即数的值）读取两个字节，经过符号拓展后写入寄存器rd
                    ({32{lh == 1'b1}} & {reg1_rdata_i}) |
                    //lhu   I-type      rd寄存器 = 从地址（rs1寄存器的值 + imm的值）中读取两个字节，0扩展后写入rd寄存器
                    ({32{lhu == 1'b1}} & {reg1_rdata_i}) |
                    //lw   I-type       向地址（rs1 + 立即数的值）读取四个字节，经过符号拓展后写入寄存器rd
                    ({32{lw == 1'b1}} & {reg1_rdata_i}) |
                    //andi   I-type     rd寄存器 = rs1寄存器的值 & imm的值 
                    ({32{andi == 1'b1}} & {reg1_rdata_i}) |
                    //xori   I-type     rd寄存器 = rs1寄存器的值 按位异或 立即数
                    ({32{xori == 1'b1}} & {reg1_rdata_i}) |
                    //ori   I-type      rd寄存器 = rs1寄存器的值 按位或 立即数
                    ({32{ori == 1'b1}} & {reg1_rdata_i}) |
                    //jalr   I-type     原pc + 4 写入rd寄存器中，并将pc设置为rs1寄存器的值 + 立即数
                    ({32{jalr == 1'b1}} & {reg1_rdata_i}) |
                    //sw   S-type       将rs2寄存器的低四位的值存入地址（rs1寄存器的值 + 立即数）
                    ({32{sw == 1'b1}} & {reg1_rdata_i}) |
                    //sh   S-type       将rs2寄存器的低两位的值存入地址（rs1寄存器的值 + 立即数）
                    ({32{sh == 1'b1}} & {reg1_rdata_i}) |
                    //sb   S-type       将rs2寄存器的低一位的值存入地址（rs1寄存器的值 + 立即数）
                    ({32{sb == 1'b1}} & {reg1_rdata_i}) |
                    //sd   S-type       将rs2寄存器的八个字节的值存入地址（rs1寄存器的值 + 立即数）
                    ({32{sd == 1'b1}} & {reg1_rdata_i}) |
                    //srl   R-type      把rs1寄存器的值右移rs2寄存器的值的位数，并将空的位数写入0，并将结果写入rd中
                    ({32{srl == 1'b1}} & {reg1_rdata_i}) |
                    //add   R-type      rd寄存器 = rs1寄存器的值 + rs2寄存器的值 
                    ({32{add == 1'b1}} & {reg1_rdata_i}) |
                    //sll   R-type      把rs1寄存器的值左移rs2寄存器的值的位数，并将空的位数写入0，并将结果写入rd中
                    ({32{sll == 1'b1}} & {reg1_rdata_i}) |
                    //slt   R-type      比较rs1寄存器的值和rs2寄存器的值，如果rs1寄存器的值更小，则rd写入1，否则写入0
                    ({32{slt == 1'b1}} & {reg1_rdata_i}) |
                    //sltu   R-type     无符号比较rs1寄存器的值和rs2寄存器的值，如果rs1寄存器的值更小，则rd写入1，否则写入0
                    ({32{sltu == 1'b1}} & {reg1_rdata_i}) |
                    //xor   R-type      rs1寄存器的值和rs2寄存器的值按位异或并将结果写入rd
                    ({32{npcxor == 1'b1}} & {reg1_rdata_i}) |
                    //or   R-type       rs1寄存器的值和rs2寄存器的值按位或并将结果写入rd
                    ({32{npcor == 1'b1}} & {reg1_rdata_i}) |
                    //and   R-type      rs1寄存器的值和rs2寄存器的值按位与并将结果写入rd 
                    ({32{npcand == 1'b1}} & {reg1_rdata_i}) |
                    //sra   R-type      把rs1寄存器的值右移rs2寄存器的值的位数，并将空的位数写入rs1寄存器的最高位，并将结果写入rd中
                    ({32{sra == 1'b1}} & {reg1_rdata_i}) |
                    //sub   R-type      rs1寄存器的值减去rs2寄存器的值，结果写入rd中，忽略算术溢出
                    ({32{sub == 1'b1}} & {reg1_rdata_i}) |
                    //mul   R-type      rs1寄存器的值 * rs2寄存器的值，写入rd寄存器中
                    ({32{mul == 1'b1}} & {reg1_rdata_i}) |
                    //mulh   R-type     rs1寄存器的值 * rs2寄存器的值，有符号形式，并将高位写入rd寄存器中
                    ({32{mulh == 1'b1}} & {reg1_rdata_i}) |
                    //mulhsu   R-type   rs1寄存器的值 * rs2寄存器的值，rs1寄存器为2的补码，rs2寄存器为无符号数，将乘积的高位写入rd中
                    ({32{mulhsu == 1'b1}} & {reg1_rdata_i}) |
                    //mulhu   R-type    rs1寄存器的值 * rs2寄存器的值，rs1寄存器、rs2寄存器都为无符号数，将乘积的高位写入rd中
                    ({32{mulhu == 1'b1}} & {reg1_rdata_i}) |
                    //div   R-type      rs1寄存器的值 / rs2寄存器的值，向0摄入，将这些数是为有符号数并将商写入rd寄存器中。
                    ({32{div == 1'b1}} & {reg1_rdata_i}) |
                    //divu   R-type     rs1寄存器的值 / rs2寄存器的值，向0摄入，将这些数是为无符号数并将商写入rd寄存器中。
                    ({32{divu == 1'b1}} & {reg1_rdata_i}) |
                    //rem   R-type      rs1寄存器的值 余 rs2寄存器的值，是为有符号数，余数写入rd寄存器中
                    ({32{rem == 1'b1}} & {reg1_rdata_i}) |
                    //remu   R-type     rs1寄存器的值 余 rs2寄存器的值，是为无符号数，余数写入rd寄存器中
                    ({32{remu == 1'b1}} & {reg1_rdata_i}) |
                    //beq   B-type      如果rs1 == rs2 => pc寄存器 = pc寄存器的值 + imm的值 
                    ({32{beq == 1'b1}} & {pc_i}) |
                    //bne   B-type      如果rs1 != rs2 => pc寄存器 = pc寄存器的值 + imm的值
                    ({32{bne == 1'b1}} & {pc_i}) |
                    //blt   B-type      如果有符号rs1 <  有符号rs2 => pc寄存器 = pc寄存器的值 + imm的值 
                    ({32{blt == 1'b1}} & {pc_i}) |
                    //bge   B-type      如果有符号rs1 >= 有符号rs2 => pc寄存器 = pc寄存器的值 + imm的值 
                    ({32{bge == 1'b1}} & {pc_i}) |
                    //bltu   B-type     如果无符号rs1 <  无符号rs2 => pc寄存器 = pc寄存器的值 + imm的值
                    ({32{bltu == 1'b1}} & {pc_i}) |
                    //bgeu   B-type     如果无符号rs1 >= 无符号rs2 => pc寄存器 = pc寄存器的值 + imm的值
                    ({32{bgeu == 1'b1}} & {pc_i}) |
                    //jal   J-type      下一条指令pc+4存入rd寄存器中，并且让pc = pc + imm
                    ({32{jal == 1'b1}} & {pc_i}) ;
                    
	
    assign op_2 = 32'h0 |
                    //auipc u-type
                    ({32{auipc == 1'b1}} & {imm}) |
                    //lui   u-type
                    ({32{lui == 1'b1}} & {32'b0}) |
                    //srli  I-type
                    ({32{srli == 1'b1}} & {27'b0,rs2_raddr_o}) |
                    //slli  I-type
                    ({32{slli == 1'b1}} & {27'b0,rs2_raddr_o}) |
                    //srai  I-type
                    ({32{srai == 1'b1}} & {27'b0,rs2_raddr_o}) |
                    //lbu   I-type
                    ({32{lbu == 1'b1}} & {imm}) |
                    //addi   I-type
                    ({32{addi == 1'b1}} & {imm}) |
                    //sltiu   I-type
                    ({32{sltiu == 1'b1}} & {imm}) |
                    //lb   I-type
                    ({32{lb == 1'b1}} & {imm}) |
                    //lh   I-type
                    ({32{lh == 1'b1}} & {imm}) |
                    //lhu   I-type
                    ({32{lhu == 1'b1}} & {imm}) |
                    //lw   I-type
                    ({32{lw == 1'b1}} & {imm}) |
                    //andi   I-type     
                    ({32{andi == 1'b1}} & {imm}) |
                    //xori   I-type
                    ({32{xori == 1'b1}} & {imm}) |
                    //ori   I-type
                    ({32{ori == 1'b1}} & {imm}) |
                    //jalr   I-type
                    ({32{jalr == 1'b1}} & {imm}) |
                    //sw   S-type
                    ({32{sw == 1'b1}} & {imm}) |
                    //sh   S-type
                    ({32{sh == 1'b1}} & {imm}) |
                    //sb   S-type
                    ({32{sb == 1'b1}} & {imm}) |
                    //sd   S-type
                    ({32{sd == 1'b1}} & {imm}) |
                    //srl   R-type
                    ({32{srl == 1'b1}} & {reg2_rdata_i}) |
                    //add   R-type
                    ({32{add == 1'b1}} & {reg2_rdata_i}) |
                    //sll   R-type
                    ({32{sll == 1'b1}} & {reg2_rdata_i}) |
                    //slt   R-type
                    ({32{slt == 1'b1}} & {reg2_rdata_i}) |
                    //sltu   R-type
                    ({32{sltu == 1'b1}} & {reg2_rdata_i}) |
                    //xor   R-type
                    ({32{npcxor == 1'b1}} & {reg2_rdata_i}) |
                    //or   R-type
                    ({32{npcor == 1'b1}} & {reg2_rdata_i}) |
                    //and   R-type
                    ({32{npcand == 1'b1}} & {reg2_rdata_i}) |
                    //sra   R-type
                    ({32{sra == 1'b1}} & {reg2_rdata_i}) |
                    //sub   R-type
                    ({32{sub == 1'b1}} & {reg2_rdata_i}) |
                     //mul   R-type
                    ({32{mul == 1'b1}} & {reg2_rdata_i}) |
                    //mulh   R-type
                    ({32{mulh == 1'b1}} & {reg2_rdata_i}) |
                    //mulhsu   R-type
                    ({32{mulhsu == 1'b1}} & {reg2_rdata_i}) |
                    //mulhu   R-type
                    ({32{mulhu == 1'b1}} & {reg2_rdata_i}) |
                    //div   R-type
                    ({32{div == 1'b1}} & {reg2_rdata_i}) |
                    //divu   R-type
                    ({32{divu == 1'b1}} & {reg2_rdata_i}) |
                    //rem   R-type
                    ({32{rem == 1'b1}} & {reg2_rdata_i}) |
                    //remu   R-type
                    ({32{remu == 1'b1}} & {reg2_rdata_i}) |
                    //beq   B-type
                    ({32{beq == 1'b1}} & {imm}) |
                    //bne   B-type
                    ({32{bne == 1'b1}} & {imm}) |
                    //blt   B-type
                    ({32{blt == 1'b1}} & {imm}) |
                    //bge   B-type
                    ({32{bge == 1'b1}} & {imm}) |
                    //bltu   B-type
                    ({32{bltu == 1'b1}} & {imm}) |
                    //bgeu   B-type
                    ({32{bgeu == 1'b1}} & {imm}) |
                    //jal   J-type
                    ({32{jal == 1'b1}} & {imm}) ;

// always @(posedge jalr)begin
//         $display("op1   = 0x%08x", op_1); 
//         $display("op2   = 0x%08x", op_2);  
// end                  
/***********************************************ALU控制信号************************************************/
    
    // always@(posedge lui)begin
    //      $display("imm  = 0x%08x",imm );
    // end

    //ALUop是决定要 +0 -1 *2 /3 &4 |5 ^6 单目7 补0左移8 补0右移9 %余10 补符号位左移11，补符号位右移12       none 15
    assign ALUop = 4'b0 |   //auipc 
                    ({4{lui == 1'b1}} & {4'd7}) |
                    ({4{srli == 1'b1}} & {4'd9}) |
                    ({4{srl == 1'b1}} & {4'd9}) |
                    ({4{slli == 1'b1}} & {4'd8}) |
                    ({4{sltiu == 1'b1}} & {4'd15}) |
                    ({4{sltu == 1'b1}} & {4'd15}) |
                    ({4{andi == 1'b1}} & {4'd4}) |
                    ({4{xori == 1'b1}} & {4'd6}) |
                    ({4{ori == 1'b1}} & {4'd5}) |
                    ({4{sll == 1'b1}} & {4'd8}) |
                    ({4{slt == 1'b1}} & {4'd1}) |   
                    ({4{npcxor == 1'b1}} & {4'd6}) |
                    ({4{npcor == 1'b1}} & {4'd5}) |
                    ({4{npcand == 1'b1}} & {4'd4}) |
                    ({4{sra == 1'b1}} & {4'd12}) |
                    ({4{sub == 1'b1}} & {4'd1}) |
                    ({4{mul == 1'b1}} & {4'd2}) |
                    ({4{mulh == 1'b1}} & {4'd2}) |
                    ({4{mulhsu == 1'b1}} & {4'd2}) |
                    ({4{mulhu == 1'b1}} & {4'd2}) |
                    ({4{div == 1'b1}} & {4'd3}) |
                    ({4{divu == 1'b1}} & {4'd3}) |
                    ({4{rem == 1'b1}} & {4'd10}) |
                    ({4{remu == 1'b1}} & {4'd10}) |
                    ({4{srai == 1'b1}} & {4'd12}) ;

    //regS-写回数据的选择信号，0-来源于ALU，1-来源于DataMem，2-来源于PC+4；
    assign regS = 2'b0 |
                     ({2{lb == 1'b1}} & {2'd1}) |
                     ({2{lh == 1'b1}} & {2'd1}) |
                     ({2{lw == 1'b1}} & {2'd1}) |
                     ({2{lbu == 1'b1}} & {2'd1}) |
                     ({2{lhu == 1'b1}} & {2'd1}) |
                     ({2{jal == 1'b1}} & {2'd2}) |
                     ({2{jalr == 1'b1}} & {2'd2}) ;

    // always @(*)begin
    // $display("lb  = %d",lb );
    // $display("lh  = %d",lh );
    // $display("lw  = %d",lw );
    // $display("lbu = %d",lbu);
    // $display("lhu = %d",lhu);
    // end

    //MemWr-DataMem写使能；
    assign MemWr = 1'b0 |
                    ({{is_Stype == 1'b1}} & {1'b1});
    //RegW-寄存器堆写使能；
    assign RegW = is_Utype | is_Itype | is_Rtype | is_Jtype;  // 所有需要写寄存器的指令类型
    
    //给DPI-C write 和 read
    assign memory_lenth = 32'b0 |
                        //lw
                        ({32{lw == 1'b1}} & { 32'd4 }) |
                        //lh
                        ({32{lh == 1'b1}} & { 32'd2 }) |
                        //lhu
                        ({32{lhu == 1'b1}} & { 32'd2 }) |
                        //lb
                        ({32{lb == 1'b1}} & { 32'd1 }) |
                        //lbu
                        ({32{lbu == 1'b1}} & { 32'd1 }) |
                        //sd
                        ({32{sd == 1'b1}} & { 32'd8 }) |
                        //sw
                        ({32{sw == 1'b1}} & { 32'd4 }) |
                        //sh
                        ({32{sh == 1'b1}} & { 32'd2 }) |
                        //sb
                        ({32{sb== 1'b1}}  & { 32'd1 }) ;

//需不需要符号位扩展，不需要00 ，取一个字节要扩展01；取两个字节要扩展10；取四个字节要扩展11。
    assign need_sign_ext = 2'b0 |
                        //lh
                        ({2{lh == 1'b1}} & { 2'd2 }) |
                        //lb
                        ({2{lb == 1'b1}} & { 2'd1 }) |
                        //lw
                        ({2{lw == 1'b1}} & { 2'd3 });

    //判断指令是否为jal
    assign is_jal = jal;
    //判断指令是否为jalr
    assign is_jalr = jalr;
    //判断指令是否为beq
    assign is_beq = beq;
    //判断指令是否为blt
    assign is_blt = blt;
    //判断指令是否为bne
    assign is_bne = bne;
    //判断指令是否为bge
    assign is_bge = bge;
    //判断指令是否为bltu
    assign is_bltu = bltu;
    //判断指令是否为bgeu
    assign is_bgeu = bgeu;
    //判断指令是否为sltiu
    assign is_sltiu = sltiu;
    //判断指令是否为sltu
    assign is_sltu = sltu;


/***************************************DPI-C*******************************************/
    always @(*) begin
    // $display("verilog PC   = 0x%08x", pc_i);
    // $display("verilog inst = 0x%08x", inst_i);
    if(inst_i == 32'b0000_0000_0001_0000_0000_0000_0111_0011) begin
        //$display("我进来了，应该ebreak了\n");
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

    call_flag = ((rd_addr == 1 && jal == 1 | jalr == 1 ) || (rd_addr == 0 && imm == 0 && jalr == 1)) ? 1 : 0;
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
    pc = jalr ? {pc_i[31:1],1'b0} : pc_i ;

endtask

    endmodule
