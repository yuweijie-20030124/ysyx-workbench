`include "define.v"

//流水线干级间流水 & forwarding的活

module ysyx_25060170_ex_ls_reg(
    //system signals
     input   wire                           clk                     //<<i<<
    ,input   wire                           rst                     //<<i<<
    //signals from exu  
    ,input   wire [`ysyx_25060170_INST]     inst_i                  //<<i<<
    ,input   wire [`ysyx_25060170_PC]       pc_i                    //<<i<<
    ,input   wire [`ysyx_25060170_PC]       next_pc_i               //<<i<<
    ,input   wire [`ysyx_25060170_REG]      store_data_i            //<<i<<
    ,input   wire [`ysyx_25060170_DATA]     exu_res_i               //<<i<<
    ,input   wire                           load_flag_i             //<<i<<
    ,input   wire [3:0]                     ls_ctl_i                //<<i<<
    ,input   wire [1:0]                     wb_ctl_i                //<<i<<
    ,input   wire [6:0]                     csr_ctl_i               //<<i<<
    ,input   wire                           rd_ena_i                //<<i<<
    ,input   wire [`ysyx_25060170_REGADDR]  rd_addr_i               //<<i<<
    ,input	 wire					        ex_csr_ena_i	        //<<i<<
    ,input   wire [11:0]                    csr_addr_i              //<<i<<
    ,input   wire [`ysyx_25060170_DATA]     csr_data_i              //<<i<<
    // ,input   wire [`ysyx_25060170_REGADDR]  store_addr_i              //<<i<<
    //靠这个rs2addr作为sw要往地址存的那个值，往这个寄存器地址中取值就是sw要存的值
    //控制信号  
    ,input	 wire				        	ex_valid_i              //<<i<<		
	,input	 wire				        	ls_ready_i	            //<<i<<
	,input	 wire				        	ls_flush_i              //<<i<<
    // ,input   wire                           pipeline_id_stall_i	    //<<i<<
    ,output  reg                            ex_valid_o              //>>o>>
    // ,input   wire                           id_flush_i   
    //output to lsu 
    ,output  reg  [`ysyx_25060170_INST]     inst_o                  //>>o>>
    ,output  reg  [`ysyx_25060170_PC]       pc_o                    //>>o>>
    ,output  reg  [`ysyx_25060170_PC]       next_pc_o               //>>o>>
    ,output  reg  [`ysyx_25060170_REG]      store_data_o            //>>o>>
    ,output  reg  [`ysyx_25060170_DATA]     exu_res_o               //>>o>>
    ,output  reg                            load_flag_o             //>>o>>
    ,output  reg  [3:0]                     ls_ctl_o                //>>o>>
    ,output  reg  [1:0]                     wb_ctl_o                //>>o>>
    ,output  reg  [6:0]                     csr_ctl_o               //>>o>>
    ,output  reg                            rd_ena_o                //>>o>>
    ,output  reg  [`ysyx_25060170_REGADDR]  rd_addr_o               //>>o>>
    ,output  reg  [11:0]                    csr_addr_o              //>>o>>
    ,output  reg  [`ysyx_25060170_DATA]     csr_data_o              //>>o>>
    //csr forward to idu    
    ,output  reg                            ls_csr_ena_o            //>>o>>    
    //ex forward to idu
	,output	wire  [`ysyx_25060170_REGADDR]	ex_rd_addr_forward_o    //>>o>>    
	,output	wire  				            ex_csr_o		        //>>o>>    
	,output	wire  [`ysyx_25060170_DATA]		ex_rd_data_forward_o    //>>o>>
    // ,output wire  [`ysyx_25060170_DATA]     ex_op2_data_forward_o   //>>o>> 
    // ,output wire  [`ysyx_25060170_REGADDR]  ex_op2_addr_forward_o   //>>o>>
    // 这个op2前递是为了不仅仅计算结果需要前递，有可能前一条load进了某寄存器，
    //下一条sw将该寄存器存到某地址，后面在lw访问地址中取值会导致difftest错误
    // ,output wire                            pipeline_id_stall_o	    //>>o>>    

);
    wire flush = ls_flush_i;
    wire stall = ex_valid_i | ~ls_ready_i;
    //forwarding
    assign ex_rd_addr_forward_o  = rd_addr_i	;
    assign ex_rd_data_forward_o  = exu_res_i	;
    assign ex_csr_o              = ex_csr_ena_i ;
    // assign ex_op2_addr_forward_o = store_addr_i ;
    // assign ex_op2_data_forward_o = store_data_i ;

    always@(posedge clk) begin
        if(rst | flush) begin
            inst_o              <=  `ysyx_25060170_ZERO32   ;
            pc_o                <=  `ysyx_25060170_ZERO32   ;
            next_pc_o           <=  `ysyx_25060170_ZERO32   ;
            store_data_o        <=  `ysyx_25060170_ZERO32   ;
            exu_res_o           <=  `ysyx_25060170_ZERO32   ;
            load_flag_o         <=  1'b0                    ;
            ls_ctl_o            <=  4'b0                    ;
            wb_ctl_o            <=  2'b0                    ;
            csr_ctl_o           <=  7'b0                    ;
            rd_ena_o            <=  1'b0                    ;
            rd_addr_o           <=  5'b0                    ;
            ls_csr_ena_o        <=  1'b0                    ;    
            csr_addr_o          <=  12'b0                   ;
            csr_data_o          <=  `ysyx_25060170_ZERO32   ;
            ex_valid_o          <=  1'b1                    ;
            // pipeline_id_stall_o <=  1'b0                    ;
        end
        else if (ls_ready_i & ex_valid_i) begin
            ex_valid_o <= 1'b1;
        end
        else if(stall) begin
            inst_o              <=  inst_o                  ;
            pc_o                <=  pc_o                    ;
            next_pc_o           <=  next_pc_o               ;
            store_data_o        <=  store_data_o            ;
            exu_res_o           <=  exu_res_o               ;
            load_flag_o         <=  load_flag_o             ;
            ls_ctl_o            <=  ls_ctl_o                ;
            wb_ctl_o            <=  wb_ctl_o                ;
            csr_ctl_o           <=  csr_ctl_o               ;
            rd_ena_o            <=  rd_ena_o                ;
            rd_addr_o           <=  rd_addr_o               ;
            ls_csr_ena_o        <=  ls_csr_ena_o            ;
            csr_data_o          <=  csr_data_o              ;
            csr_addr_o          <=  csr_addr_o              ;
            ex_valid_o          <=  ex_valid_o              ;
            // pipeline_id_stall_o <=  pipeline_id_stall_o     ;
        end
        else begin  
            inst_o              <=  inst_i                  ;
            pc_o                <=  pc_i                    ;
            next_pc_o           <=  next_pc_i               ;
            store_data_o        <=  store_data_i            ;
            exu_res_o           <=  exu_res_i               ;
            load_flag_o         <=  load_flag_i             ;
            ls_ctl_o            <=  ls_ctl_i                ;
            wb_ctl_o            <=  wb_ctl_i                ;
            csr_ctl_o           <=  csr_ctl_i               ;
            rd_ena_o            <=  rd_ena_i                ;
            rd_addr_o           <=  rd_addr_i               ;
            csr_data_o          <=  csr_data_i              ;
            ls_csr_ena_o        <=  ex_csr_ena_i            ;    
            csr_addr_o          <=  csr_addr_i              ;
            ex_valid_o          <=  1'b0                    ;
            // pipeline_id_stall_o <=  pipeline_id_stall_i     ;
        end 
    end 



endmodule
