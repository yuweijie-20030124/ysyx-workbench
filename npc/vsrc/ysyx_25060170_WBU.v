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


module ysyx_25060170_WBU(
    input rst,

    //from MEM
    //input [31:0] mem_data_i,    //IFU出来的rs1和offset经过EXU计算之后的DataMem读取的数据 

    //from exu
    input [31:0] exu_result_i,   // EXU计算结果

    //from IDU
    input [4:0]  rd_i,           // 目的寄存器号
    input [1:0] regS,
    input RegW,                     //寄存器堆写使能信号

    //from IFU
    input [31:0] pc_i,

    output [31:0] reg_write_data_o, // 写回寄存器的数据
    output [4:0]  reg_write_addr_o, // 写回寄存器的地址
    output        reg_write_en_o    // 写回使能
);

    
    //assign reg_write_data_o = exu_result_i;
    assign reg_write_data_o = (regS == 0) ? exu_result_i :  //0-来源于ALU
                              //(regS == 1) ? mem_data_i :    //1-来源于DataMem 感觉可以在exu和他搞成一样的
                              (regS == 2) ? pc_i + 4 :      //2-来源于PC+4；
                              32'b0;

    assign reg_write_addr_o = rd_i;
    assign reg_write_en_o = !rst && RegW && (rd_i != 0); // x0不写

    /*
    always @(*) begin
        if (regS == 2'b11) $display("Warning: Invalid regS value!");
    end
    */
 

endmodule

