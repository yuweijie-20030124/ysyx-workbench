 `include "define.v"

module ysyx_25060170_mem(
     input   wire [`ysyx_25060170_INST]     inst_i              //<<i<<
    ,input   wire [`ysyx_25060170_PC]       pc_i                //<<i<<
    ,input   wire [`ysyx_25060170_PC]       next_pc_i           //<<i<<
    ,input   wire [1:0]                     wb_ctl_i            //<<i<<
    ,input   wire [`ysyx_25060170_DATA]     lsu_res_i           //<<i<<
    ,input   wire [`ysyx_25060170_DATA]     lsu_wb_data_i       //<<i<<
    ,input   wire                           rd_ena_i            //<<i<<
    ,input   wire [`ysyx_25060170_REGADDR]  rd_addr_i           //<<i<<
    ,input   wire [6:0]                     csr_ctl_i           //<<i<<
    ,input   wire [11:0]                    csr_addr_i          //<<i<<
    ,input   wire [`ysyx_25060170_DATA]     mem_data_i          //<<i<<
    //harzard
    ,input   wire                           ls_valid_i          //<<i<<
    ,input   wire                           wb_ready_i          //<<i<<
    ,output  wire                           mem_valid_o         //>>o>>
    ,output  wire [`ysyx_25060170_INST]     inst_o              //>>o>>
    ,output  wire [`ysyx_25060170_PC]       pc_o                //>>o>>
    ,output  wire [`ysyx_25060170_PC]       next_pc_o           //>>o>>
    ,output  wire [1:0]                     wb_ctl_o            //>>o>>
    ,output  wire [`ysyx_25060170_DATA]     lsu_res_o           //>>o>>
    ,output  wire [`ysyx_25060170_DATA]     lsu_wb_data_o       //>>o>>
    ,output  wire                           rd_ena_o            //>>o>>
    ,output  wire [`ysyx_25060170_REGADDR]  rd_addr_o           //>>o>>
    ,output  wire [6:0]                     csr_ctl_o           //>>o>>
    ,output  wire [11:0]                    csr_addr_o          //>>o>>
    ,output  wire [`ysyx_25060170_DATA]     mem_data_o          //>>o>>
);

    assign inst_o        = inst_i        ;
    assign pc_o          = pc_i          ;
    assign next_pc_o     = next_pc_i     ;
    assign wb_ctl_o      = wb_ctl_i      ;
    assign lsu_res_o     = lsu_res_i     ;
    assign lsu_wb_data_o = lsu_wb_data_i ;
    assign rd_ena_o      = rd_ena_i      ;
    assign rd_addr_o     = rd_addr_i     ;
    assign csr_ctl_o     = csr_ctl_i     ;
    assign csr_addr_o    = csr_addr_i    ;
    assign mem_data_o     = mem_data_i   ;
    
endmodule
