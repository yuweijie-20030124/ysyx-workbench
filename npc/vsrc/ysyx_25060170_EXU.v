/*

regS-写回数据的选择信号，0-来源于ALU，1-来源于DataMem，2-来源于PC+4；
ALUsrc-操作数选择信号，0-选择寄存器，1-选择立即数；
*/
module ysyx_25060170_EXU(  

    //from IDU
    input [31:0] op_1,             //exu执行的第一个数
    input [31:0] op_2,             //exu执行的第二个数
    input is_jalr,

    input ready_i,
    
    //to WBU
    output reg [31:0] res1, //ALU运算结果
    output ready_o
);

    assign ready_o = ready_i;

    assign res1 = is_jalr ? ((op_1 + op_2) & ~1) : op_1 + op_2 ;

endmodule


