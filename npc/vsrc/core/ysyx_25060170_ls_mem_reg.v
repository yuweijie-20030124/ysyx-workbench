`include "define.v"

//流水线干级间流水 & forwarding的活
module ysyx_25060170_ls_mem_reg(
     input   wire                           clk                 //<<i<<    
    ,input   wire                           rst                 //<<i<<    
    //signals form lsu  //<<i<<
    ,input   wire [`ysyx_25060170_INST]     inst_i              //<<i<<
    ,input   wire [`ysyx_25060170_PC]       pc_i                //<<i<<
    ,input   wire [`ysyx_25060170_PC]       next_pc_i           //<<i<<
    ,input   wire [3:0]                     ls_ctl_i            //<<i<<
    ,input   wire [1:0]                     wb_ctl_i            //<<i<<
    // ,input   wire [`ysyx_25060170_DATA]     lsu_res_i           //<<i<<
    ,input   wire [`ysyx_25060170_DATA]     alu_res_i           //<<i<<
    ,input   wire                           load_flag_i         //<<i<<
    // ,input   wire [`ysyx_25060170_DATA]     lsu_wb_data_i       //<<i<<
    ,input   wire                           re_i                //<<i<<
    ,input   wire                           rd_ena_i            //<<i<<
    ,input   wire [`ysyx_25060170_REGADDR]  rd_addr_i           //<<i<<
    ,input   wire [6:0]                     csr_ctl_i           //<<i<<
    ,input   wire [11:0]                    csr_addr_i          //<<i<<
    ,input   wire [`ysyx_25060170_DATA]     csr_data_i          //<<i<<
    // ,input   wire                           pipeline_id_stall_i //<<i<<
    //forwarding
    // ,input   wire [`ysyx_25060170_DATA]     ls_data_forward_i   //<<i<<
    //pipeline control
    ,input   wire                           ls_valid_i          //<<i<<
    ,input   wire                           mem_ready_i          //<<i<<
    ,output  reg                            ls_valid_o          //>>o>>
    // ,input   wire                           ex_flush_i          //<<i<<
    // ,input   wire                           id_flush_i          //<<i<<
    //output to wbu
    ,output  reg  [`ysyx_25060170_INST]     inst_o              //>>o>>
    ,output  reg  [`ysyx_25060170_PC]       pc_o                //>>o>>
    ,output  reg  [`ysyx_25060170_PC]       next_pc_o           //>>o>>
    ,output  reg  [3:0]                     ls_ctl_o            //>>o>>
    ,output  reg  [1:0]                     wb_ctl_o            //>>o>>
    ,output  reg  [`ysyx_25060170_DATA]     alu_res_o           //>>o>>
    ,output  reg                            load_flag_o         //>>o>>
    // ,output  reg  [`ysyx_25060170_DATA]     lsu_res_o           //>>o>>
    // ,output  reg  [`ysyx_25060170_DATA]     lsu_wb_data_o       //>>o>>
    ,output  reg                            re_o                //>>o>>
    ,output  reg                            rd_ena_o            //>>o>>
    ,output  reg  [`ysyx_25060170_REGADDR]  rd_addr_o           //>>o>>
    ,output  reg  [6:0]                     csr_ctl_o           //>>o>>
    ,output  reg  [11:0]                    csr_addr_o          //>>o>>
    ,output  reg  [`ysyx_25060170_DATA]     csr_data_o          //>>o>>
    // ,output  reg                            pipeline_id_stall_o //>>o>>
    //lsu forward to idu
    ,output  wire  [`ysyx_25060170_REGADDR]	ls_rd_addr_forward  //>>o>>
    ,output  wire  [`ysyx_25060170_DATA]	ls_rd_data_forward  //>>o>>
);

// wire flush = ex_flush_i;
wire flush = 1'b0;
wire stall = ls_valid_i | ~mem_ready_i;

always@(posedge clk) begin
    if(rst | flush) begin
        inst_o              <=   `ysyx_25060170_ZERO32  ;
        pc_o                <=   `ysyx_25060170_ZERO32  ;
        next_pc_o           <=   `ysyx_25060170_ZERO32  ;
        ls_ctl_o            <=   4'b0                   ;
        wb_ctl_o            <=   2'b0                   ;
        alu_res_o           <=   `ysyx_25060170_ZERO32  ;
        load_flag_o         <=   1'b0                   ;
        // lsu_res_o           <=   `ysyx_25060170_ZERO32  ;
        // lsu_wb_data_o       <=   `ysyx_25060170_ZERO32  ;
        re_o                <=   1'b0                   ;
        rd_ena_o            <=   1'b0                   ;
        rd_addr_o           <=   5'b0                   ;
        csr_ctl_o           <=   7'b0                   ;
        csr_addr_o          <=   12'b0                  ;
        csr_data_o          <=   `ysyx_25060170_ZERO32  ;
        ls_valid_o          <=   1'b1                   ;
        // pipeline_id_stall_o <=   1'b0                   ;
    end
    else if (mem_ready_i & ls_valid_i) begin
            ls_valid_o <= 1'b1;
        end
    else if(stall) begin
        inst_o              <=   inst_o                 ;
        pc_o                <=   pc_o                   ;
        next_pc_o           <=   next_pc_o              ;
        ls_ctl_o            <=   ls_ctl_o               ;
        wb_ctl_o            <=   wb_ctl_o               ;
        alu_res_o           <=   alu_res_o              ;
        load_flag_o         <=   load_flag_o            ;
        // lsu_res_o           <=   lsu_res_o              ;
        // lsu_wb_data_o       <=   lsu_wb_data_o          ;
        re_o                <=   re_o                   ;
        rd_ena_o            <=   rd_ena_o               ;
        rd_addr_o           <=   rd_addr_o              ;
        csr_ctl_o           <=   csr_ctl_o              ;
        csr_addr_o          <=   csr_addr_o             ;
        csr_data_o          <=   csr_data_o  ;
        ls_valid_o          <=   ls_valid_o             ;
        // pipeline_id_stall_o <=   pipeline_id_stall_o    ;        
    end
    else begin
        inst_o              <=   inst_i                 ;
        pc_o                <=   pc_i                   ;
        next_pc_o           <=   next_pc_i              ;
        ls_ctl_o            <=   ls_ctl_i               ;
        wb_ctl_o            <=   wb_ctl_i               ;
        alu_res_o           <=   alu_res_i              ;
        load_flag_o         <=  load_flag_i             ;
        // lsu_res_o           <=   lsu_res_i              ;
        // lsu_wb_data_o       <=   lsu_wb_data_i          ;
        re_o                <=   re_i                   ;
        rd_ena_o            <=   rd_ena_i               ;
        rd_addr_o           <=   rd_addr_i              ;
        csr_ctl_o           <=   csr_ctl_i              ;
        csr_addr_o          <=   csr_addr_i             ;
        csr_data_o          <=   csr_data_i             ;
        ls_valid_o          <=   1'b0                   ;
        // pipeline_id_stall_o <=   pipeline_id_stall_i    ;
    end
end

assign ls_rd_addr_forward = rd_addr_i	                    ;
assign ls_rd_data_forward = alu_res_i                       ;
// assign lsu_wb_data_o      = flush ? 0 : lsu_wb_data_i       ;


endmodule

