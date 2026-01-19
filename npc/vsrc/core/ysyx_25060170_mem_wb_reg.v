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
    ,input   wire [`ysyx_25060170_DATA]     mem_data_i          //<<i<<
    ,input   wire                           load_flag_i         //<<i<<    
    ,input   wire [`ysyx_25060170_DATA]     alu_res_i           //<<i<<
    ,input   wire                           rd_ena_i            //<<i<<
    ,input   wire [`ysyx_25060170_REGADDR]  rd_addr_i           //<<i<<
    ,input   wire [6:0]                     csr_ctl_i           //<<i<<
    ,input   wire [11:0]                    csr_addr_i          //<<i<<
    // ,input   wire [`ysyx_25060170_DATA]     wb_data_i           //<<i<<
    //pipeline
    ,input   wire                           mem_valid_i         //<<i<<
    ,input   wire                           wb_ready_i          //<<i<<
    ,output  reg                            mem_valid_o         //<<i<<
    //output
    ,output  reg  [`ysyx_25060170_INST]     inst_o              //>>o>>
    ,output  reg  [`ysyx_25060170_PC]       pc_o                //>>o>>
    ,output  reg  [`ysyx_25060170_PC]       next_pc_o           //>>o>>
    ,output  reg  [`ysyx_25060170_DATA]     alu_res_o           //>>o>>
    ,output  reg  [`ysyx_25060170_DATA]     mem_data_o          //>>o>>
    ,output  reg                            load_flag_o         //>>o>>
    ,output  reg  [1:0]                     wb_ctl_o            //>>o>>
    ,output  reg                            rd_ena_o            //>>o>>
    ,output  reg  [`ysyx_25060170_REGADDR]  rd_addr_o           //>>o>>
    ,output  reg  [6:0]                     csr_ctl_o           //>>o>>
    ,output  reg  [11:0]                    csr_addr_o          //>>o>>
    // ,output  wire [`ysyx_25060170_DATA]     wb_data_o           //>>o>>
    //forwarding
    ,output wire  [`ysyx_25060170_REGADDR]  mem_rd_addr_forward_o//>>o>>   
    ,output wire  [`ysyx_25060170_DATA]     mem_rd_data_forward_o//>>o>>
);
    //harzard
    wire flush = 1'b0                        ;
    wire stall = mem_valid_i | ~wb_ready_i   ;
    //forwarding
    assign mem_rd_addr_forward_o = rd_addr_i ;
    //TODO：根据wb_ctl判断要前递的是内存数据mem_data_i还是alu运算结果alu_res_i 
    //wb_ctl=01 表示用load的mem_data
    //wb_ctl=10 表示用alu_res_i
    assign mem_rd_data_forward_o = `ysyx_25060170_ZERO32                 |
                                    {32{wb_ctl_i == 2'b01}} & mem_data_i |
                                    {32{wb_ctl_i == 2'b10}} & alu_res_i  ;
    always@(posedge clk) begin
        if(rst | flush) begin
            inst_o          <= `ysyx_25060170_ZERO32    ;
            pc_o            <= `ysyx_25060170_ZERO32    ;
            next_pc_o       <= `ysyx_25060170_ZERO32    ;
            alu_res_o       <= `ysyx_25060170_ZERO32    ;
            mem_data_o      <= `ysyx_25060170_ZERO32    ;
            load_flag_o     <= 1'b0                     ;
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
            load_flag_o     <= load_flag_o              ;
            wb_ctl_o        <= wb_ctl_o                 ;
            rd_ena_o        <= rd_ena_o                 ;
            rd_addr_o       <= rd_addr_o                ;
            csr_ctl_o       <= csr_ctl_o                ;
            csr_addr_o      <= csr_addr_o               ;
            // wb_data_o       <= wb_data_o                ;
            mem_valid_o     <= 1'b1                     ;
    end    
        else begin
            inst_o          <= inst_i                   ;
            pc_o            <= pc_i                     ;
            next_pc_o       <= next_pc_i                ;
            alu_res_o       <= alu_res_i                ;
            mem_data_o      <= mem_data_i               ;
            load_flag_o     <= load_flag_i              ;
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

