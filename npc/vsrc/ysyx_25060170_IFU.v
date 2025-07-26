module ysyx_25060170_IFU (
    input  clk,
    input  rst,
    
    input  [31:0] PCin,
    input  [31:0] imm,
    input  [31:0] res,      //执行单元结果，（用于JALR等指令时更新PC）。
    input  br, isx,         //跳转或分支的标志位
    input  IFU_ready_i,

    //to IDU
    output IFU_ready_o,
    output reg [31:0] PCout

);
    parameter RESET_PC = 32'h8000_0000;

    assign IFU_ready_o = IFU_ready_i;

    wire [31:0] PC_temp;

    // PC寄存器
    Reg #(32, RESET_PC) pc_reg (
        .clk(clk),
        .rst(rst),
        .din(PC_temp),
        .dout(PCout),
        .wen(IFU_ready_i)
    );

    assign PC_temp = (isx) ?     res      :  
                     (br)  ? (PCin + imm) : 
                                 PCin + 4 ;

/*
    always @(posedge clk) begin
        if (Jump_en && ready_i) 
            $display("IFU: Jump to 0x%h at cycle %t", PCout, $time);
    end
*/  

endmodule

