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

module ysyx_25060170_EXU(  

    //from IDU
    input [3:0] ALUop,
    input [31:0] exu_op_1,             //exu执行的第一个数
    input [31:0] exu_op_2,             //exu执行的第二个数
    input [31:0] reg1_rdata_i,
    input [31:0] reg2_rdata_i,
    input exu_is_jalr,
    input exu_is_jal,
    input is_beq,
    input is_blt,
    input is_bne,
    input is_bge,
    input is_bltu,
    input is_bgeu,

    input is_sltiu,
    input is_sltu,
    input [31:0] imm,

    //to WBU
    output reg beq_flag,        //beq前置条件生效
    output reg blt_flag,        //blt前置条件生效
    output reg bne_flag,        //bne前置条件生效
    output reg bge_flag,        //bge前置条件生效
    output reg bltu_flag,       //bltu前置条件生效
    output reg bgeu_flag,       //bgeu前置条件生效
    output reg [31:0] exu_res1, //ALU运算结果
    //to IFU
    output [31:0] jump_Addr
);
    wire [31:0] jumpaddr;

wire [31:0] sub_op_1;
wire [31:0] sub_op_2;
assign sub_op_1 = reg1_rdata_i;
assign sub_op_2 = is_sltiu ? imm : reg2_rdata_i;

wire [31:0] reg1_sub_reg2 = sub_op_1 - sub_op_2;
wire sub_sign = (sub_op_1[31] ^ sub_op_2[31]) ?  // 符号位不同
               (sub_op_1[31] & ~sub_op_2[31]) : // rs1负且rs2正时，rs1 < rs2
               (reg1_sub_reg2[31]);             // 符号位相同时，看减法结果符号

wire sub_zero = (reg1_sub_reg2 == 0); // 结果是否为0 

 //(reg1_sub_reg2[31] | ((sub_op_1[31] == 1) & (sub_op_2[31] == 0))) & ((sub_op_1[31] != 0) & (sub_op_2[31] != 1));  // 减法结果的符号位

wire sltiu_flag;
wire sltu_flag;

// 有符号比较
assign beq_flag = is_beq & sub_zero;          // rs1 == rs2
assign blt_flag = is_blt & ~sub_zero & sub_sign; // rs1 < rs2（结果负且非零）
assign bge_flag = is_bge & (sub_zero | ~sub_sign); // rs1 >= rs2（结果正或零）
assign bne_flag = is_bne & ~sub_zero;         // rs1 != rs2


// 无符号比较（需额外处理）
wire [32:0] reg1_ext = {1'b0, sub_op_1};  // 扩展1位防止溢出
wire [32:0] reg2_ext = {1'b0, sub_op_2};

//用这个方法可以取消 对未用信号的报警
/* verilator lint_off UNUSEDSIGNAL */
wire [32:0] sub_unsigned = reg1_ext - reg2_ext;
/* verilator lint_on UNUSEDSIGNAL */

wire subu_carry = sub_unsigned[32];  // 借位标志（1表示 reg1 < reg2）

assign bltu_flag = is_bltu & subu_carry;      // 无符号 <
assign bgeu_flag = is_bgeu & ~subu_carry;     // 无符号 >=  
assign sltiu_flag = is_sltiu & subu_carry;    // 无符号 <  < (结果负且非零)
assign sltu_flag  = is_sltu  & subu_carry;    // 无符号 <  < (结果负且非零)

// always @(posedge is_sltiu) begin
//         $display("is_sltiu       = %d", is_sltiu); 
//         $display("sltiu_flag     = %d", sltiu_flag);
//         $display("sub_op_1  = 0x%08x", sub_op_1);
//         $display("sub_op_2  = 0x%08x", sub_op_2);
//         $display("sub_op_2  = 0x%08x", sub_op_2);
//         $display("ALUop         = %d", ALUop); 
//         $display("exu_res1      = 0x%08x", exu_res1);       
//     end

    // always@(*)begin
    //     if(ALUop == 7)begin
    //                  $display("exu_res1  = 0x%08x",exu_res1 );
    //     end
    // end

    //+0 -1 *2 /3 &4 |5 ^6 单目7 左移8 右移9 %余10 补符号位左移11，补符号位右移12  none 15
    assign exu_res1 = 32'h0 | 
                    //addi  i-type
                    ({32{ALUop == 4'd0}}  & { exu_op_1 + exu_op_2  }) |
                    ({32{ALUop == 4'd1}}  & { exu_op_1 - exu_op_2  }) |
                    ({32{ALUop == 4'd2}}  & { exu_op_1 * exu_op_2  }) |
                    ({32{ALUop == 4'd3}}  & { exu_op_1 / exu_op_2  }) |
                    ({32{ALUop == 4'd4}}  & { exu_op_1 & exu_op_2  }) |
                    ({32{ALUop == 4'd5}}  & { exu_op_1 | exu_op_2  }) |
                    ({32{ALUop == 4'd6}}  & { exu_op_1 ^ exu_op_2  }) |
                    ({32{ALUop == 4'd7}}  & { exu_op_1             }) |
                    ({32{ALUop == 4'd8}}  & { exu_op_1 << exu_op_2 }) |
                    ({32{ALUop == 4'd9}}  & { exu_op_1 >> exu_op_2 }) |
                    ({32{ALUop == 4'd10}} & { exu_op_1 %  exu_op_2 }) |
                    ({32{ALUop == 4'd11}} & { exu_op_1 <<< exu_op_2 }) |
                    ({32{ALUop == 4'd12}} & { $signed(exu_op_1) >>> exu_op_2 }) |
                    ({32{ALUop == 4'd15}} & {32{sltiu_flag == 1}} & { 32'b1 }) |
                    ({32{ALUop == 4'd15}} & {32{sltu_flag == 1}}  & { 32'b1 }) |
                    ({32{ALUop == 4'd15}} & {32{sltu_flag == 0}}  & { 32'b0 }) ;



    assign jumpaddr = imm + exu_op_1;

    assign jump_Addr = exu_is_jalr ? {jumpaddr[31:1],1'b0} :
                       exu_is_jal  ?  jumpaddr : 
                       bne_flag    ?  exu_res1 : 
                       bge_flag    ?  exu_res1 : 
                       blt_flag    ?  exu_res1 :
                       bltu_flag   ?  exu_res1 :
                       beq_flag    ?  exu_res1 :
                       bgeu_flag   ?  exu_res1 : 32'b0;
                       
    
    // always @(posedge exu_is_jalr) begin
    //     $display("jump_Addr   = 0x%08x", jump_Addr); 
    //     $display("exu_is_jalr   = %d", exu_is_jalr);       
    // end

    // always @(*) begin
    //     //$display("jump_Addr   = 0x%08x", jump_Addr);
    //     //$display("exu_is_jalr   = %d", exu_is_jalr);
    //     //$display("exu_is_jal   = %d", exu_is_jal);
        
    // end

endmodule


