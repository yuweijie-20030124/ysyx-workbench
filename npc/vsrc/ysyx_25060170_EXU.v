/*

regS-写回数据的选择信号，0-来源于ALU，1-来源于DataMem，2-来源于PC+4；
ALUsrc-操作数选择信号，0-选择寄存器，1-选择立即数；
*/
module ysyx_25060170_EXU(  

    //from IDU
    input [31:0] exu_op_1,             //exu执行的第一个数
    input [31:0] exu_op_2,             //exu执行的第二个数
    input exu_is_jalr,

    input exu_ready_i,
    
    //to WBU
    output reg [31:0] exu_res1, //ALU运算结果
    output exu_ready_o
);

    wire [31:0] temp;

    assign temp = exu_op_1 + exu_op_2;

    assign exu_ready_o = exu_ready_i;

    assign exu_res1 = exu_is_jalr ? {temp[31:1],1'b0} : temp ;

endmodule


