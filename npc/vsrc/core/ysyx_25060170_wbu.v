 `include "define.v"

 module ysyx_25060170_wbu(
 	 input  wire                             clk                        //<<i<<  
    ,input	wire            		         rst                        //<<i<<
    ,input	wire  [`ysyx_25060170_DATA]      ls_rd_data_i               //<<i<<
    ,input  wire  [1:0]      		         wb_ctl_i                   //<<i<<
    ,input  wire  [`ysyx_25060170_DATA]      exu_res_i                  //<<i<<
    ,input  wire  [`ysyx_25060170_PC]        pc_i                       //<<i<<
    ,input  wire  [`ysyx_25060170_PC]        next_pc_i                  //<<i<<
    ,input  wire  [`ysyx_25060170_INST]      inst_i                     //<<i<<
    ,input  wire  [`ysyx_25060170_REGADDR]   rd_addr_i                  //<<i<<
    ,input  wire                             rd_ena_i                   //<<i<<
    ,input	wire	[6:0]				     csr_ctl_i	                //<<i<<
    ,input	wire	[11:0]				     csr_addr_i                 //<<i<<
    // ,input  wire                             pipeline_id_stall_i        //<<i<<  
    // ,input	wire	[`ysyx_25060170_PC]		  ls_pc_i	            //<<i<<
    ,input	wire					         ls_valid_i                 //<<i<<
    // ,input 	wire					         id_stall_i                 //<<i<<
    //output to regfile      
 	,output wire  [`ysyx_25060170_DATA]      wb_data_o                  //>>o>>  
    ,output wire                             wb_ready_o                 //>>o>>
    ,output	wire                             wb_rd_ena_o                //>>o>>
    ,output	wire	[`ysyx_25060170_REGADDR] wb_rd_addr_o               //>>o>> 
    //output for forwarding
    ,output	wire	[`ysyx_25060170_REGADDR] wb_rd_addr_forward	        //>>o>>
    ,output	wire	[`ysyx_25060170_DATA]    wb_rd_data_forward	        //>>o>>
    //output for wb_flush
    ,output wire                             wb_flush_o                 //>>o>>
    ,output wire                             wb_if_changepc             //>>o>>
    ,output wire  [`ysyx_25060170_PC]        wb_mepc_pc_o               //>>o>>
    //out for difftest 
    ,output wire  [`ysyx_25060170_REG]       mstatus_o                  //>>o>>
    ,output wire  [`ysyx_25060170_REG]       mepc_o                     //>>o>>
    ,output wire  [`ysyx_25060170_REG]       mtvec_o                    //>>o>>
    ,output wire  [`ysyx_25060170_REG]       mcause_o                   //>>o>>
    ,output wire  [`ysyx_25060170_INST]      wbu_dpic_inst_o            //>>o>>
    ,output wire  [`ysyx_25060170_PC]        wbu_dpic_pc_o              //>>o>>
    ,output wire  [`ysyx_25060170_PC]        wbu_dpic_next_pc_o         //>>o>>
    // ,output wire                             wbu_dpic_ls_valid_o        //>>o>>
    // ,output wire                             wbu_dpic_id_stall_o        //>>o>>
    ,output wire                             wbu_dpic_valid_o           //>>o>>
    // ,output wire                             dpic_pipeline_id_stall_o   //>>o>>
);

assign wb_ready_o = 1'b1;


//***********************************csr**************************************//
wire [`ysyx_25060170_DATA] mstatus;
wire [`ysyx_25060170_DATA] mepc;
wire [`ysyx_25060170_DATA] mtvec;
wire [`ysyx_25060170_DATA] mcause;
wire [`ysyx_25060170_DATA] read_csr_data;
wire [`ysyx_25060170_DATA] write_csr_data;
wire [`ysyx_25060170_DATA] mcause_value;

wire [`ysyx_25060170_DATA] set_data    = read_csr_data | exu_res_i;
wire [`ysyx_25060170_DATA] clear_data  = read_csr_data & (~exu_res_i) ;

assign mcause_value = csr_ctl_i[1] ? 32'd11 : `ysyx_25060170_ZERO32; //ecall from m-mode

assign write_csr_data = `ysyx_25060170_ZERO32  |
                        {32{csr_ctl_i[6]}} & exu_res_i       | //csr write
                        {32{csr_ctl_i[5]}} & set_data        | //csr set
                        {32{csr_ctl_i[4]}} & clear_data      | //csr clear
                        {32{csr_ctl_i[1]}} & pc_i            ; 

ysyx_25060170_csr u_ysyx_25060170_csr (
    //<<i<<
     .clk               (clk)
    //<<i<<
    ,.rst               (rst)
    //<<i<<  {csr_wr_ena, csr_rd_ena, ecall_ena, mret_ena}
    ,.csr_ctl           (csr_ctl_i[3:0])
    //<<i<<
    ,.csr_addr          (csr_addr_i)
    //<<i<<
    ,.mcause_value      (mcause_value)
    //<<i<<
    ,.write_csr_data    (write_csr_data)
    //>>o>>
    ,.read_csr_data     (read_csr_data)
    //>>o>>
    ,.mstatus_o         (mstatus)
    //>>o>>
    ,.mepc_o            (mepc)
    //>>o>>
    ,.mtvec_o           (mtvec)
    //>>o>>
    ,.mcause_o          (mcause)
);

//***********************************for DPIC**************************************//
//简单debug ecall//
// assign 

assign mstatus_o = mstatus;
assign mepc_o    = mepc   ;
assign mtvec_o   = mtvec  ;
assign mcause_o  = mcause ;

assign wbu_dpic_inst_o          = inst_i             ;
assign wbu_dpic_pc_o            = pc_i               ;
assign wbu_dpic_next_pc_o       = next_pc_i          ;
// assign wbu_dpic_ls_valid_o      = ls_valid_i         ;
// assign wbu_dpic_id_stall_o      = id_stall_i         ;
// assign dpic_pipeline_id_stall_o = pipeline_id_stall_i;
assign wbu_dpic_valid_o         = ls_valid_i         ;

//*************************************out**************************************//

assign wb_data_o = `ysyx_25060170_ZERO32 | 
                     {32{wb_ctl_i[0]}}          & ls_rd_data_i     | //load
                     {32{wb_ctl_i[1]}}          & exu_res_i        | //alu
                     {32{csr_ctl_i[3:0] != 4'b0}} & read_csr_data    ; //csr

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



endmodule



