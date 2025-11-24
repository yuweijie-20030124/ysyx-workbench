`include "define.v"
module ysyx_25060170_id_ex_reg(
     input   wire                           clk         //<<i<<
    ,input   wire                           rst         //<<i<<
    //signals about idu
    ,input   wire [`ysyx_25060170_INST]     inst_i      //<<i<<
    ,input   wire [`ysyx_25060170_PC]       pc_i        //<<i<<
    ,input   wire [`ysyx_25060170_DATA]     op1_i       //<<i<<
    ,input   wire [`ysyx_25060170_DATA]     op2_i       //<<i<<
    ,input   wire [1:0]                     op1_sel_i   //<<i<<
    ,input   wire [2:0]                     op2_sel_i   //<<i<<
    ,input   wire                           rd_ena_i    //<<i<<
    ,input   wire [`ysyx_25060170_REGADDR]  rd_addr_i   //<<i<<
    ,input   wire [`ysyx_25060170_REGADDR]  rs1_addr_i  //<<i<<
    ,input   wire [`ysyx_25060170_IMM]      imm_i       //<<i<<
    ,input   wire [7:0]         			alusrc_i    //<<i<<
    ,input   wire [3:0]      			    lsctl_i     //<<i<<
    ,input   wire [1:0]     				wbctl_i     //<<i<<
    ,input   wire                           csr_ena_i   //<<i<<
    ,input   wire                           load_flag_i //<<i<<
    //pipeline control
   	,input	 wire					        id_valid_i	//<<i<<
   	,input	 wire					        id_flush_i	//<<i<<
   	,input	 wire					        ex_flush_i	//<<i<<
   	,input	 wire					        ls_flush_i	//<<i<<
   	,input	 wire					        ex_ready_i	//<<i<<
    //output to exu
    ,output  reg  [`ysyx_25060170_INST]    inst_o      //>>o>>
    ,output  reg  [`ysyx_25060170_PC]      pc_o        //>>o>>
    ,output  reg  [`ysyx_25060170_DATA]    op1_o       //>>o>>
    ,output  reg  [`ysyx_25060170_DATA]    op2_o       //>>o>>
    ,output  reg  [1:0]                    op1_sel_o   //>>o>>
    ,output  reg  [2:0]                    op2_sel_o   //>>o>>
    ,output  reg                           rd_ena_o    //>>o>>
    ,output  reg  [`ysyx_25060170_REGADDR] rd_addr_o   //>>o>>
    ,output  reg  [`ysyx_25060170_REGADDR] rs1_addr_o  //>>o>>
    ,output  reg  [`ysyx_25060170_IMM]     imm_o       //>>o>>
    ,output  reg  [7:0]             		alusrc_o    //>>o>>
    ,output  reg  [3:0]      		        lsctl_o     //>>o>>
    ,output  reg  [1:0]     				wbctl_o     //>>o>>
    ,output  reg                           csr_ena_o   //>>o>>
    ,output  reg                           load_flag_o //>>o>>   
);

wire flush = id_flush_i | ex_flush_i | ls_flush_i;
wire stall = id_valid_i | ex_ready_i;

always@(posedge clk) begin
    if(rst | flush) begin   
        inst_o          <=      `ysyx_25060170_ZERO32    ;
        pc_o            <=      `ysyx_25060170_ZERO32    ;
        op1_o           <=      `ysyx_25060170_ZERO32    ;
        op2_o           <=      `ysyx_25060170_ZERO32    ;
        op1_sel_o       <=      0                       ;   
        op2_sel_o       <=      0                       ;
        rd_ena_o        <=      0                       ;
        rd_addr_o       <=      5'b0                    ;
        rs1_addr_o      <=      5'b0                    ;
        imm_o           <=      `ysyx_25060170_ZERO32    ;
        alusrc_o        <=      8'b0                    ;
        lsctl_o         <=      4'b0                    ;
        wbctl_o         <=      2'b0                    ;
        csr_ena_o       <=      0                       ;
        load_flag_o     <=      0                       ;
    end
    else if(stall) begin
        inst_o          <=      inst_o                  ;
        pc_o            <=      pc_o                    ;
        op1_o           <=      op1_o                   ;
        op2_o           <=      op2_o                   ;
        op1_sel_o       <=      op1_sel_o               ;
        op2_sel_o       <=      op2_sel_o               ;
        rd_ena_o        <=      rd_ena_o                ;
        rd_addr_o       <=      rd_addr_o               ;
        rs1_addr_o      <=      rs1_addr_o              ;
        imm_o           <=      imm_o                   ;
        alusrc_o        <=      alusrc_o                ;
        lsctl_o         <=      lsctl_o                 ;
        wbctl_o         <=      wbctl_o                 ;
        csr_ena_o       <=      csr_ena_o               ;
        load_flag_o     <=      load_flag_o             ;
    end
    else begin
        inst_o          <=      inst_i                  ;
        pc_o            <=      pc_i                    ;
        op1_o           <=      op1_i                   ;
        op2_o           <=      op2_i                   ;
        op1_sel_o       <=      op1_sel_i               ;
        op2_sel_o       <=      op2_sel_i               ;
        rd_ena_o        <=      rd_ena_i                ;
        rd_addr_o       <=      rd_addr_i               ;
        rs1_addr_o      <=      rs1_addr_i              ;
        imm_o           <=      imm_i                   ;
        alusrc_o        <=      alusrc_i                ;
        lsctl_o         <=      lsctl_i                 ;
        wbctl_o         <=      wbctl_i                 ;
        csr_ena_o       <=      csr_ena_i               ;
        load_flag_o     <=      load_flag_i             ;
    end
end

endmodule

