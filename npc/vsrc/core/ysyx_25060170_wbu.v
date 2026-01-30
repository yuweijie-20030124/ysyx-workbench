 `include "define.v"

 module ysyx_25060170_wbu(
 	//   input  wire                              clk                        //<<i<<  
   //  ,input	wire            		            rst                        //<<i<<
     input	wire  [`ysyx_25060170_DATA]      ls_rd_data_i               //<<i<<
    ,input  wire  [1:0]      		             wb_ctl_i                   //<<i<<
    ,input  wire  [`ysyx_25060170_DATA]      exu_res_i                  //<<i<<
    ,input  wire  [`ysyx_25060170_PC]        pc_i                       //<<i<<
    ,input  wire  [`ysyx_25060170_PC]        next_pc_i                  //<<i<<
    ,input  wire  [`ysyx_25060170_INST]      inst_i                     //<<i<<
    ,input  wire  [`ysyx_25060170_REGADDR]   rd_addr_i                  //<<i<<
    ,input  wire                             rd_ena_i                   //<<i<<
    ,input	wire	[6:0]				               csr_ctl_i	                //<<i<<
    ,input	wire	[11:0]				             csr_addr_i                 //<<i<<
    ,input  wire  [`ysyx_25060170_DATA]      csr_data_i                 //<<i<<
    //input from csr
    /* verilator lint_off UNUSEDSIGNAL */
    ,input  wire  [`ysyx_25060170_DATA]      read_csr_data_i
    /* verilator lint_off UNUSEDSIGNAL */           
    // ,input  wire                             pipeline_id_stall_i        //<<i<<  
    // ,input	wire	[`ysyx_25060170_PC]		  ls_pc_i	            //<<i<<
    ,input	wire					                   ls_valid_i                 //<<i<<
    // ,input 	wire					         id_stall_i                 //<<i<<
    //output to regfile      
 	,output wire  [`ysyx_25060170_DATA]        wb_data_o                  //>>o>>  
    ,output wire                             wb_ready_o                 //>>o>>
    ,output	wire                             wb_rd_ena_o                //>>o>>
    ,output	wire	[`ysyx_25060170_REGADDR]   wb_rd_addr_o               //>>o>> 
    //output for forwarding
    ,output	wire	[`ysyx_25060170_REGADDR]   wb_rd_addr_forward	        //>>o>>
    ,output	wire	[`ysyx_25060170_DATA]      wb_rd_data_forward	        //>>o>>
    //out to dpic 发射
    ,output wire  [`ysyx_25060170_INST]      wbu_dpic_inst_o            //>>o>>
    ,output wire  [`ysyx_25060170_PC]        wbu_dpic_pc_o              //>>o>>
    ,output wire  [`ysyx_25060170_PC]        wbu_dpic_next_pc_o         //>>o>>
    // ,output wire                             wbu_dpic_ls_valid_o        //>>o>>
    // ,output wire                             wbu_dpic_id_stall_o        //>>o>>
    ,output wire                             wbu_dpic_valid_o           //>>o>>
    //output to csr
    ,output wire  [6:0]                      csr_ctl_o                  //>>o>>
    ,output wire  [11:0]                     csr_addr_o                 //>>o>>   
    ,output wire  [`ysyx_25060170_REG]       mcause_value_o             //>>o>>   
    ,output wire  [`ysyx_25060170_DATA]      write_csr_data_o           //>>o>>
    // ,output wire                             dpic_pipeline_id_stall_o   //>>o>>
);

assign wb_ready_o = 1'b1;


//***********************************csr**************************************//

// wire [`ysyx_25060170_DATA] set_data    = read_csr_data_i | exu_res_i;
// wire [`ysyx_25060170_DATA] clear_data  = read_csr_data_i & (~exu_res_i) ;

assign mcause_value_o = csr_ctl_i[1] ? 32'd11 : `ysyx_25060170_ZERO32; //ecall from m-mode

// assign write_csr_data_o = `ysyx_25060170_ZERO32  |
//                         {32{csr_ctl_i[6]}} & exu_res_i       | //csr write
//                         {32{csr_ctl_i[5]}} & set_data        | //csr set
//                         {32{csr_ctl_i[4]}} & clear_data      | //csr clear
//                         {32{csr_ctl_i[1]}} & pc_i            ; 

assign write_csr_data_o = exu_res_i;


//***********************************for DPIC**************************************//

assign wbu_dpic_inst_o          = inst_i             ;
assign wbu_dpic_pc_o            = pc_i               ;
assign wbu_dpic_next_pc_o       = next_pc_i          ;
// assign wbu_dpic_ls_valid_o      = ls_valid_i         ;
// assign wbu_dpic_id_stall_o      = id_stall_i         ;
// assign dpic_pipeline_id_stall_o = pipeline_id_stall_i;
assign wbu_dpic_valid_o         = ls_valid_i         ;

//*************************************out**************************************//

assign wb_data_o = `ysyx_25060170_ZERO32 | 
                     {32{wb_ctl_i[0]}}            & ls_rd_data_i     | //load
                     {32{wb_ctl_i[1]}}            & exu_res_i        | //alu
                     {32{csr_ctl_i[3:0] != 4'b0}} & csr_data_i    ; //csr

assign wb_rd_ena_o    = rd_ena_i;
assign wb_rd_addr_o   = rd_addr_i;

//forwarding
//to idu
assign wb_rd_addr_forward = rd_addr_i	;
// assign wb_rd_data_forward = wb_data_o	;

    //TODO：根据wb_ctl判断要前递的是内存数据mem_data_i还是alu运算结果alu_res_i 
    //wb_ctl=01 表示用load的mem_data
    //wb_ctl=10 表示用alu_res_i
    assign wb_rd_data_forward = `ysyx_25060170_ZERO32                 |
                                    {32{wb_ctl_i == 2'b01}} & ls_rd_data_i |
                                    {32{wb_ctl_i == 2'b10}} & exu_res_i  ;

assign csr_ctl_o  = csr_ctl_i;
assign csr_addr_o = csr_addr_i;

endmodule

