`include "define.v"

module ysyx_25060170_if_id_reg (
 //数据信号
 input  wire								          clk			  ,
 input  wire								          rst			  ,
 input	wire								          pcsrc_i		,// from exu 跳转信号
 input	wire 	[`ysyx_25060170_PC]			ex_pc_i  	, 
 
 input  wire	[`ysyx_25060170_INST]		inst_i	  ,
 
 output	reg 	[`ysyx_25060170_PC]			pc_o  	  ,
 output	reg 	[`ysyx_25060170_INST]		inst_o	  ,

 //流水线级控制信号
 input wire                           valid     ,
 output wire                          ready
 );

 reg [`ysyx_25060170_PC] pc_next;
 wire [`ysyx_25060170_PC] pc_plus4;

//  assign pc_plus4=(rst==`ysyx_25060170_RSTABLE) ? `ysyx_25060170_STARTPC : (pc_o+`ysyx_25060170_PLUS4);
//  assign pc_next = (rst == `ysyx_25060170_RSTABLE) ? `ysyx_25060170_STARTPC : ((pcsrc_i==0) ? pc_plus4 : ex_pc_i);
 assign pc_plus4 = 32'b0 |
                ({32{rst == `ysyx_25060170_RSTABLE}} & `ysyx_25060170_STARTPC) |
                ({32{rst != `ysyx_25060170_RSTABLE}} & (pc_o + `ysyx_25060170_PLUS4)); 

 assign pc_next = 32'b0 |
                ({32{rst == `ysyx_25060170_RSTABLE}} & `ysyx_25060170_STARTPC) |
                ({32{rst != `ysyx_25060170_RSTABLE && pcsrc_i == 0}} & pc_plus4) |
                ({32{rst != `ysyx_25060170_RSTABLE && pcsrc_i == 1}} & ex_pc_i);   

 always@(posedge clk) begin
     if(rst == `ysyx_25060170_RSTABLE) begin
     	pc_o   <= `ysyx_25060170_ZERO32;
     	inst_o <= `ysyx_25060170_ZERO32;
    end
  else if( & valid == 1 ) begin
     	pc_o   <= pc_next;
     	inst_o <= inst_i;
      ready  <= 1'b1;