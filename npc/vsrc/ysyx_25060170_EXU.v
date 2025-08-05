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
    output reg sltiu_flag,      //sltiu前置条件生效
    output reg sltu_flag,
    output reg [31:0] exu_res1, //ALU运算结果
    //to IFU
    output [31:0] jump_Addr
);
    wire [31:0] jumpaddr;

wire [31:0] reg1_sub_reg2 = reg1_rdata_i - reg2_rdata_i;
wire sub_sign = reg1_sub_reg2[31];  // 减法结果的符号位
wire sub_zero = (reg1_sub_reg2 == 0); // 结果是否为0

// 有符号比较
assign beq_flag = is_beq & sub_zero;          // ==
assign blt_flag = is_blt & ~sub_zero & sub_sign; // < (结果负且非零)
assign bge_flag = is_bge & (sub_zero | ~sub_sign); // >= (结果正或零)
assign bne_flag = is_bne & ~sub_zero;         // !=

// 无符号比较（需额外处理）
wire [32:0] reg1_ext = {1'b0, reg1_rdata_i};  // 扩展1位防止溢出
wire [32:0] reg2_ext = {1'b0, reg2_rdata_i};

//用这个方法可以取消 对未用信号的报警
/* verilator lint_off UNUSEDSIGNAL */
wire [32:0] sub_unsigned = reg1_ext - reg2_ext;
/* verilator lint_on UNUSEDSIGNAL */

wire subu_carry = sub_unsigned[32];  // 借位标志（1表示 reg1 < reg2）

assign bltu_flag = is_bltu & subu_carry;      // 无符号 <
assign bgeu_flag = is_bgeu & ~subu_carry;     // 无符号 >=  
assign sltiu_flag = is_sltiu & subu_carry;    // 无符号 <  < (结果负且非零)
assign sltu_flag  = is_sltu  & subu_carry;    // 无符号 <  < (结果负且非零)

always @(posedge is_sltu) begin
        $display("is_sltu       = %d", is_sltu); 
        $display("sltu_flag     = %d", sltu_flag);       
    end
    //+0 -1 *2 /3 &4 |5 ^6 单目7 左移8 右移9 %余10
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
                    ({32{ALUop == 4'd15}} & {32{sltiu_flag == 1}} & { 32'b1 }) |
                    ({32{ALUop == 4'd15}} & {32{sltu_flag == 1}}  & { 32'b1 }) ;



    assign jumpaddr = imm + exu_op_1;

    assign jump_Addr = exu_is_jalr ? {jumpaddr[31:1],1'b0} :
                       exu_is_jal  ?  jumpaddr : 
                       bne_flag    ?  exu_res1 : 32'b0;
    
    // always @(posedge exu_is_jalr) begin
    //     $display("jump_Addr   = 0x%08x", jump_Addr); 
    //     $display("exu_is_jalr   = %d", exu_is_jalr);       
    // end

    always @(*) begin
        //$display("jump_Addr   = 0x%08x", jump_Addr);
        //$display("exu_is_jalr   = %d", exu_is_jalr);
        //$display("exu_is_jal   = %d", exu_is_jal);
        
    end

endmodule


