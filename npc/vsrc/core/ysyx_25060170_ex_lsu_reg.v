`include "define.v"
module ysyx_25060170_ex_lsu_reg(
    //system signals
    input   wire                           clk        ,
    input   wire                           rst        ,
    
    //signals about exu
    input   wire [`ysyx_25060170_REG]      store_data_i     ,
    input   wire [`ysyx_25060170_PC]       jump_pc_i        ,
    input   wire                           ex_pcsrc_i       ,
    input   wire [`ysyx_25060170_DATA]     exu_res_i        ,
    input   wire [11:0]                    csr_addr_i       ,
    input   wire [`ysyx_25060170_DATA]     write_csr_data_i ,
    input   wire [`ysyx_25060170_REG]      mcause_value_i   ,
    input   wire                           valid            ,
    output  wire                           ready            ,

    //outputs about exu
    output   reg [`ysyx_25060170_REG]      store_data_o     ,
    output   reg [`ysyx_25060170_PC]       jump_pc_o        ,
    output   reg                           ex_pcsrc_o       ,
    output   reg [`ysyx_25060170_DATA]     exu_res_o        ,
    output   reg [11:0]                    csr_addr_o       ,
    output   reg [`ysyx_25060170_DATA]     write_csr_data_o ,
    output   reg [`ysyx_25060170_REG]      mcause_value_o   ,
    output   reg                            valid_o          ,
    input    reg                            next_ready  
    
);

    assign ready = !valid_o || next_ready;

    always@(posedge clk) begin
        if(rst) begin
                store_data_o         <= `ysyx_25060170_ZERO32;
                jump_pc_o            <= `ysyx_25060170_ZERO32;
                ex_pcsrc_o           <= 0;
                exu_res_o            <= `ysyx_25060170_ZERO32;
                csr_addr_o           <= 12'b0;;
                write_csr_data_o     <= `ysyx_25060170_ZERO32;
                mcause_value_o       <= `ysyx_25060170_ZERO32;
        end
        else begin
            if(ready && valid) begin
                valid_o              <= 1'b1;
                store_data_o         <= store_data_i     ;
                jump_pc_o            <= jump_pc_i        ;
                ex_pcsrc_o           <= ex_pcsrc_i       ;
                exu_res_o            <= exu_res_i        ;
                csr_addr_o           <= csr_addr_i       ;
                write_csr_data_o     <= write_csr_data_i ;
                mcause_value_o       <= mcause_value_i   ;
            end
            else if(next_ready && valid_o) begin
                valid_o         <= 1'b0;
            end
            else if (next_ready && !valid && valid_o) begin
                valid_o         <= 1'b0;
            end
        end
    end



endmodule

