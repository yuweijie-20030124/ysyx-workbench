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
    input exu_is_jalr,
    input exu_is_jal,
    input [31:0] imm,
    
    //to WBU
    output reg [31:0] exu_res1, //ALU运算结果


    //to IFU
    output [31:0] jump_Addr
);
    wire [31:0] jumpaddr;
    
    assign exu_res1 = 32'h0 | 
                    //addi  i-type
                    ({32{ALUop == 4'd0}} & { exu_op_1 - exu_op_2 }) |
                    ({32{ALUop == 4'd1}} & { exu_op_1 - exu_op_2 }) ;

    assign jumpaddr = imm + exu_op_1;

    assign jump_Addr = exu_is_jalr ? {jumpaddr[31:1],1'b0} :
                       exu_is_jal  ?  jumpaddr : 32'b0;
    
    always @(*) begin
        //$display("jump_Addr   = 0x%08x", jump_Addr);
        //$display("exu_is_jalr   = %d", exu_is_jalr);
        //$display("exu_is_jal   = %d", exu_is_jal);
        
    end

endmodule


