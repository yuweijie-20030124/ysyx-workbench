module ysyx_25060170_top (
    input clk,
    input rst,
    input ready_i,
    output ready_o
);

    // ready信号直通
    assign ready_o = wbu_ready_o;

    

endmodule

