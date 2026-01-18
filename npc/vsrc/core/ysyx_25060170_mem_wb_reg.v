 `include "define.v"

//流水线干级间流水 & forwarding的活

module ysyx_25060170_mem_wb_reg(
     input   wire                           clk                 //<<i<<
    ,input   wire                           rst                 //<<i<<
    //input
    ,input   wire [`ysyx_25060170_INST]     inst_i              //<<i<<
    ,input   wire [`ysyx_25060170_PC]       pc_i                //<<i<<
    ,input   wire [`ysyx_25060170_PC]       next_pc_i           //<<i<<
    ,input   wire [1:0]                     wb_ctl_i            //<<i<<
    ,input   wire [`ysyx_25060170_DATA]     mem_data_i       //<<i<<    
    ,input   wire [`ysyx_25060170_DATA]     alu_res_i           //<<i<<
    ,input   wire                           rd_ena_i            //<<i<<
    ,input   wire [`ysyx_25060170_REGADDR]  rd_addr_i           //<<i<<
    ,input   wire [6:0]                     csr_ctl_i           //<<i<<
    ,input   wire [11:0]                    csr_addr_i          //<<i<<
    // ,input   wire [`ysyx_25060170_DATA]     wb_data_i           //<<i<<
    //pipeline
    ,input   wire                           mem_valid_i          //<<i<<
    ,input   wire                           wb_ready_i         //<<i<<
    ,output  reg                            mem_valid_o          //<<i<<
    //output
    ,output  wire [`ysyx_25060170_INST]     inst_o              //>>o>>
    ,output  wire [`ysyx_25060170_PC]       pc_o                //>>o>>
    ,output  wire [`ysyx_25060170_PC]       next_pc_o           //>>o>>
    ,output  wire [`ysyx_25060170_DATA]     alu_res_o           //>>o>>
    ,output  wire [`ysyx_25060170_DATA]     mem_data_o       //>>o>>
    ,output  wire [1:0]                     wb_ctl_o            //>>o>>
    ,output  wire                           rd_ena_o            //>>o>>
    ,output  wire [`ysyx_25060170_REGADDR]  rd_addr_o           //>>o>>
    ,output  wire [6:0]                     csr_ctl_o           //>>o>>
    ,output  wire [11:0]                    csr_addr_o          //>>o>>
    // ,output  wire [`ysyx_25060170_DATA]     wb_data_o           //>>o>>
);

    wire flush = 1'b0                       ;
    wire stall = mem_valid_i | ~wb_ready_i   ;

    always@(posedge clk) begin
        if(rst|flush) begin
            inst_o          <= `ysyx_25060170_ZERO32    ;
            pc_o            <= `ysyx_25060170_ZERO32    ;
            next_pc_o       <= `ysyx_25060170_ZERO32    ;
            alu_res_o       <= `ysyx_25060170_ZERO32    ;
            mem_data_o      <= `ysyx_25060170_ZERO32    ;
            wb_ctl_o        <= 2'b0                     ;
            rd_ena_o        <= 1'b0                     ;
            rd_addr_o       <= 5'b0                     ;
            csr_ctl_o       <= 7'b0                     ;
            csr_addr_o      <= 12'b0                    ;
            // wb_data_o       <= `ysyx_25060170_ZERO32    ;
            mem_valid_o     <= 1'b1                     ;
    end
        else if(stall) begin
            inst_o          <= inst_o                   ;
            pc_o            <= pc_o                     ;
            next_pc_o       <= next_pc_o                ;
            alu_res_o       <= alu_res_o                ;
            mem_data_o      <= mem_data_o               ;
            wb_ctl_o        <= wb_ctl_o                 ;
            rd_ena_o        <= rd_ena_o                 ;
            rd_addr_o       <= rd_addr_o                ;
            csr_ctl_o       <= csr_ctl_o                ;
            csr_addr_o      <= csr_addr_o               ;
            // wb_data_o       <= wb_data_o                ;
            mem_valid_o     <= 1'b0                     ;
    end    
        else begin
            inst_o          <= inst_i                   ;
            pc_o            <= pc_i                     ;
            next_pc_o       <= next_pc_i                ;
            alu_res_o       <= alu_res_i             ;
            mem_data_o      <= mem_data_i            ;
            wb_ctl_o        <= wb_ctl_i                 ;
            rd_ena_o        <= rd_ena_i                 ;
            rd_addr_o       <= rd_addr_i                ;
            csr_ctl_o       <= csr_ctl_i                ;
            csr_addr_o      <= csr_addr_i               ;
            // wb_data_o       <= wb_data_i                ;
            mem_valid_o     <= 1'b0                     ;     
    end
end

endmodule

