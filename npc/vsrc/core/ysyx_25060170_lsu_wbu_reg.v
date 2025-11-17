`include "define.v"
module ysyx_25060170_lsu_wbu_reg(
    input   wire                           clk        ,
    input   wire                           rst        ,
    
    //signals from lsu
    input   wire  [`ysyx_25060170_DATA]    ls_data_i  ,
    input   wire  [1:0]                    wbctl_i    ,
    input   wire  [`ysyx_25060170_DATA]    exu_res_i  ,
    input   wire                           rd_ena_i   ,
    input   wire  [`ysyx_25060170_REGADDR] rd_addr_i  ,
    input   wire  [`ysyx_25060170_DATA]    write_csr_data_i ,
    input   wire                           valid      ,
    output  wire                           ready      ,
    //outputs to wbu
    output  reg [`ysyx_25060170_DATA]      ls_data_o  ,
    output  reg  [1:0]                     wbctl_o    ,
    output  reg  [`ysyx_25060170_DATA]     exu_res_o  ,
    output  reg                            rd_ena_o   ,
    output  reg  [`ysyx_25060170_REGADDR]  rd_addr_o  ,
    output  reg  [`ysyx_25060170_DATA]     write_csr_data_o ,
    output  reg                            valid_o    ,
    input   reg                            next_ready  
    
);

    assign ready = !valid_o || next_ready;

    always@(posedge clk) begin
        if(rst) begin
                valid_o          <= 1'b0;
                ls_data_o        <= `ysyx_25060170_ZERO32;
                wbctl_o          <= 2'b00;
                exu_res_o        <= `ysyx_25060170_ZERO32;
                rd_ena_o         <= 1'b0;
                rd_addr_o        <= 5'b00000;
                write_csr_data_o <= `ysyx_25060170_ZERO32;
        end
        else begin
            if(ready && valid) begin
                valid_o          <= 1'b1;
                ls_data_o        <= ls_data_i;
                wbctl_o          <= wbctl_i;
                exu_res_o        <= exu_res_i;
                rd_ena_o         <= rd_ena_i;
                rd_addr_o        <= rd_addr_i;
                write_csr_data_o <= write_csr_data_i;
            end
            else if(next_ready && valid_o) begin
                valid_o          <= 1'b0;
            end
            else if (next_ready && !valid && valid_o) begin
                valid_o          <= 1'b0;
            end
        end
    end



endmodule

