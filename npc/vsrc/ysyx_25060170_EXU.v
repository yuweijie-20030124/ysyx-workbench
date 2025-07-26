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

    input exu_ready_i,
    
    //to WBU
    output reg [31:0] exu_res1, //ALU运算结果
    output exu_ready_o
);

    wire [31:0] temp;

    assign temp = ALUop ? exu_op_1 - exu_op_2 : exu_op_1 + exu_op_2;

    assign exu_ready_o = exu_ready_i;

    assign exu_res1 = exu_is_jalr ? {temp[31:1],1'b0} : temp ;

endmodule


