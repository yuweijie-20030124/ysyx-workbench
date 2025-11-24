`include "define.v"
module ysyx_25060170_ls_wb_reg(
     input   wire                           clk                 //<<i<<    
    ,input   wire                           rst                 //<<i<<    
    //signals form lsu  //<<i<<
    ,input   wire [`ysyx_25060170_INST]     inst_i              //<<i<<
    ,input   wire [`ysyx_25060170_PC]       pc_i                //<<i<<
    ,input   wire [1:0]                     wb_ctl_i            //<<i<<
    ,input   wire [`ysyx_25060170_DATA]     lsu_res_i           //<<i<<
    ,input   wire [`ysyx_25060170_DATA]     lsu_wb_data_i       //<<i<<
    ,input   wire                           rd_ena_i            //<<i<<
    ,input   wire [`ysyx_25060170_REGADDR]  rd_addr_i           //<<i<<
    ,input   wire [6:0]                     csr_ctl_i           //<<i<<
    ,input   wire [11:0]                    csr_addr_i          //<<i<<
    ,input   wire [`ysyx_25060170_DATA]     ls_data_forward_i   //<<i<<
    //pipeline control
    ,input   wire                           ls_valid_i          //<<i<<
    ,input   wire                           wb_ready_i          //<<i<<
    ,input   wire                           ex_flush_i          //<<i<<
    //output to wbu
    ,output  reg  [`ysyx_25060170_INST]     inst_o              //>>o>>
    ,output  reg  [`ysyx_25060170_PC]       pc_o                //>>o>>
    ,output  reg  [1:0]                     wb_ctl_o            //>>o>>
    ,output  reg  [`ysyx_25060170_DATA]     lsu_res_o           //>>o>>
    ,output  reg  [`ysyx_25060170_DATA]     lsu_wb_data_o       //>>o>>
    ,output  reg                            rd_ena_o            //>>o>>
    ,output  reg  [`ysyx_25060170_REGADDR]  rd_addr_o           //>>o>>
    ,output  reg  [6:0]                     csr_ctl_o           //>>o>>
    ,output  reg  [11:0]                    csr_addr_o          //>>o>>
    //lsu forward to idu
    ,output  wire  [`ysyx_25060170_REGADDR]	ls_rd_addr_forward  //>>o>>
    ,output  wire  [`ysyx_25060170_DATA]	ls_rd_data_forward  //>>o>>
);

wire flush = ex_flush_i;
wire stall = ls_valid_i | wb_ready_i;

always@(posedge clk) begin
    if(rst | flush) begin
        inst_o              <=   `ysyx_25060170_ZERO32  ;
        pc_o                <=   `ysyx_25060170_ZERO32  ;
        wb_ctl_o            <=   2'b0                   ;
        lsu_res_o           <=   `ysyx_25060170_ZERO32  ;
        lsu_wb_data_o       <=   `ysyx_25060170_ZERO32  ;
        rd_ena_o            <=   1'b0  ;
        rd_addr_o           <=   5'b0                   ;
        csr_ctl_o           <=   7'b0                   ;
        csr_addr_o          <=   12'b0                  ;
    end
    else if(stall) begin
        inst_o              <=   inst_o                 ;
        pc_o                <=   pc_o                   ;
        wb_ctl_o            <=   wb_ctl_o               ;
        lsu_res_o           <=   lsu_res_o              ;
        lsu_wb_data_o       <=   lsu_wb_data_o          ;
        rd_ena_o            <=   rd_ena_o               ;
        rd_addr_o           <=   rd_addr_o              ;
        csr_ctl_o           <=   csr_ctl_o              ;
        csr_addr_o          <=   csr_addr_o             ;        
    end
    else begin
        inst_o              <=   inst_i                 ;
        pc_o                <=   pc_i                   ;
        wb_ctl_o            <=   wb_ctl_i               ;
        lsu_res_o           <=   lsu_res_i              ;
        lsu_wb_data_o       <=   lsu_wb_data_i          ;
        rd_ena_o            <=   rd_ena_i               ;
        rd_addr_o           <=   rd_addr_i              ;
        csr_ctl_o           <=   csr_ctl_i              ;
        csr_addr_o          <=   csr_addr_i             ;
    end
end

assign ls_rd_addr_forward = rd_addr_i	;
assign ls_rd_data_forward = ls_data_forward_i	;

endmodule

