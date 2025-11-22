`include "define.v"
module ysyx_25060170_ex_lsu_reg(
    //system signals
    input   wire                           clk              ,
    input   wire                           rst              ,
    //signals for pipeline
    input   wire                           valid            ,
    output  wire                           ready            ,
    output   reg                           valid_o          ,
    input    reg                           next_ready       ,
    //signals from exu
    input   wire [`ysyx_25060170_REG]      store_data_i     ,
    input   wire                           ex_pcsrc_i       ,
    input   wire [`ysyx_25060170_DATA]     exu_res_i        ,
    input   wire [`ysyx_25060170_DATA]     write_csr_data_i ,
    input   wire                           rd_ena_i         ,
    input   wire [`ysyx_25060170_REGADDR]  rd_addr_i        ,
    input   wire [`ysyx_25060170_REG]      mcause_value_i   ,
    input   wire [3:0]                     ls_ctl_i         ,
    input   wire [1:0]                     wbctl_i          ,
    input   wire [2:0]                     csr_ctl_i        ,
    output   reg [`ysyx_25060170_REG]      store_data_o     ,
    output   reg [`ysyx_25060170_DATA]     exu_res_o        ,
    output   reg [`ysyx_25060170_DATA]     write_csr_data_o ,
    output   reg                           rd_ena_o         ,
    output   reg [`ysyx_25060170_REGADDR]  rd_addr_o        ,
    output   reg [`ysyx_25060170_REG]      mcause_value_o   ,
    output   reg [3:0]                     ls_ctl_o         ,
    output   reg [1:0]                     wbctl_o          ,
    output   reg [2:0]                     csr_ctl_o        ,
    //signals to ifu
    output   reg                           ex_pcsrc_o       
    
);

    assign ready = !valid_o || next_ready;

    always@(posedge clk) begin
        if(rst) begin
                store_data_o         <= `ysyx_25060170_ZERO32;
                ex_pcsrc_o           <= 0;
                exu_res_o            <= `ysyx_25060170_ZERO32;
                write_csr_data_o     <= `ysyx_25060170_ZERO32;
                rd_ena_o             <= 1'b0;
                rd_addr_o            <= 5'b00000;
                mcause_value_o       <= `ysyx_25060170_ZERO32;
                ls_ctl_o             <= 4'b0000;
                wbctl_o              <= 2'b00;
                csr_ctl_o            <= 3'b000;
        end
        else begin
            if(ready && valid) begin
                valid_o              <= 1'b1;
                store_data_o         <= store_data_i     ;
                ex_pcsrc_o           <= ex_pcsrc_i       ;
                exu_res_o            <= exu_res_i        ;
                write_csr_data_o     <= write_csr_data_i ;
                rd_ena_o             <= rd_ena_i         ;
                rd_addr_o            <= rd_addr_i        ;
                mcause_value_o       <= mcause_value_i   ;
                ls_ctl_o             <= ls_ctl_i         ;
                wbctl_o              <= wbctl_i          ;
                csr_ctl_o            <= csr_ctl_i        ;
            end
            else if(next_ready && valid_o) begin
                valid_o         <= 1'b0;
            end
        end
    end



endmodule

