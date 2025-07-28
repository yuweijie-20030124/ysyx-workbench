module ysyx_25060170_IFU (
    input  clk,
    input  rst,
    input  [31:0] jump_addr,      //执行单元结果，（用于JALR等指令时更新PC）。
    input  jump_en,         //跳转或分支的标志位
    //to IDU
    output reg [31:0] PCout

);
    parameter RESET_PC = 32'h8000_0000;

    wire [31:0] PC_temp;

    // PC寄存器
    Reg #(32, RESET_PC) pc_reg (
        .clk(clk),
        .rst(rst),
        .din(PC_temp),
        .dout(PCout),
        .wen(1'b1)
    );

    assign PC_temp = jump_en ? jump_addr : PCout + 4;


/*
    always @(posedge clk) begin
        if (Jump_en && ready_i) 
            $display("IFU: Jump to 0x%h at cycle %t", PCout, $time);
    end
*/  

always @(*) begin
    //$display("PC* = 0x%08x", PCout);
end


endmodule

