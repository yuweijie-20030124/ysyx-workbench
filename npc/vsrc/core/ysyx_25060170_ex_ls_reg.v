`include "define.v"
module ysyx_25060170_ex_ls_reg(
    //system signals
     input   wire                           clk              
    ,input   wire                           rst                   
    //signals from exu
    ,input   wire [`ysyx_25060170_INST]     inst_i     
    ,input   wire [`ysyx_25060170_PC]       pc_i       
    ,input   wire [`ysyx_25060170_REG]      store_data_i
    ,input   wire [`ysyx_25060170_DATA]     exu_res_i
    ,input   wire [3:0]                     ls_ctl_i
    ,input   wire [1:0]                     wb_ctl_i
    ,input   wire [6:0]                     csr_ctl_i
    ,input   wire                           rd_ena_i
    ,input   wire [`ysyx_25060170_REGADDR]  rd_addr_i
    ,input	 wire					        ex_csr_ena_i	
    ,input   wire [11:0]                    csr_addr_i
    //控制信号
    ,input	 wire				        	ex_valid_i		
	,input	 wire				        	ls_ready_i	
	,input	 wire				        	ls_flush_i	
    //output to lsu
    ,output  reg  [`ysyx_25060170_INST]     inst_o     
    ,output  reg  [`ysyx_25060170_PC]       pc_o       
    ,output  reg  [`ysyx_25060170_REG]      store_data_o
    ,output  reg  [`ysyx_25060170_DATA]     exu_res_o
    ,output  reg  [3:0]                     ls_ctl_o
    ,output  reg  [1:0]                     wb_ctl_o
    ,output  reg  [6:0]                     csr_ctl_o
    ,output  reg                            rd_ena_o
    ,output  reg  [`ysyx_25060170_REGADDR]  rd_addr_o
    ,output  reg  [11:0]                    csr_addr_o
    //csr forward to idu
    ,output  reg                            ls_csr_ena_o
    //ex forward to idu
	,output	wire  [`ysyx_25060170_REGADDR]	ex_rd_addr_forward_o
	,output	wire  				            ex_csr_o		
	,output	wire  [`ysyx_25060170_DATA]		ex_rd_data_forward_o	

);
    wire flush = ls_flush_i;
    wire stall = ex_valid_i | ~ls_ready_i;
    
    assign ex_rd_addr_forward_o = rd_addr_i	;
    assign ex_rd_data_forward_o = exu_res_i	;
    assign ex_csr_o             = ex_csr_ena_i;

    always@(posedge clk) begin
        if(rst | flush) begin
            inst_o          <=  `ysyx_25060170_ZERO32    ;
            pc_o            <=  `ysyx_25060170_ZERO32    ;
            store_data_o    <=  `ysyx_25060170_ZERO32    ;
            exu_res_o       <=  `ysyx_25060170_ZERO32    ;
            ls_ctl_o        <=  4'b0                     ;
            wb_ctl_o        <=  2'b0                     ;
            csr_ctl_o       <=  7'b0                     ;
            rd_ena_o        <=  0                        ;
            rd_addr_o       <=  5'b0                     ;
            ls_csr_ena_o    <=  0                        ;    
            csr_addr_o      <=  12'b0                    ;    
        end
        else if(stall) begin
            inst_o          <=  inst_o                   ;
            pc_o            <=  pc_o                     ;
            store_data_o    <=  store_data_o             ;
            exu_res_o       <=  exu_res_o                ;
            ls_ctl_o        <=  ls_ctl_o                 ;
            wb_ctl_o        <=  wb_ctl_o                 ;
            csr_ctl_o       <=  csr_ctl_o                ;
            rd_ena_o        <=  rd_ena_o                 ;
            rd_addr_o       <=  rd_addr_o                ;
            ls_csr_ena_o    <=  ls_csr_ena_o             ;    
            csr_addr_o      <=  csr_addr_o               ;
        end
        else begin
            inst_o          <=  inst_i                   ;
            pc_o            <=  pc_i                     ;
            store_data_o    <=  store_data_i             ;
            exu_res_o       <=  exu_res_i                ;
            ls_ctl_o        <=  ls_ctl_i                 ;
            wb_ctl_o        <=  wb_ctl_i                 ;
            csr_ctl_o       <=  csr_ctl_i                ;
            rd_ena_o        <=  rd_ena_i                 ;
            rd_addr_o       <=  rd_addr_i                ;
            ls_csr_ena_o    <=  ex_csr_ena_i             ;    
            csr_addr_o      <=  csr_addr_i               ;
        end
    end
    


endmodule
