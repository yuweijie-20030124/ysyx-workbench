 `include "define.v"

 module ysyx_25060170_wbu(
 	input	wire 					clk	,
 	input	wire            			rst	,
 	input	wire	[`ysyx_25060170_DATA]		ls_rd_data  ,
 	input	wire	[1:0]      			wb_ctl	,
 	input	wire	[`ysyx_25060170_DATA]		exu_res	,
 	input	wire	[`ysyx_25060170_INST]		inst_i	,
    input	wire	[`ysyx_25060170_PC]		pc_i	,
    input	wire					rd_ena	,
    input	wire	[`ysyx_25060170_REGADDR]	rd_addr	, 
    input	wire	[6:0]				csr_ctl	,
    input	wire	[11:0]				csr_addr,
    input	wire	[`ysyx_25060170_PC]		ls_pc_i	,
    input	wire					ls_valid,
    input 	wire					id_stall,
    input 	wire					time_interrupt,
    output	wire					wb_ready,
    
    output	wire	[`ysyx_25060170_PC]		ie_jump_pc	,
    output	wire					ie_flush	,
    output	wire                                    ie_jump          ,
    
    output	wire	[`ysyx_25060170_REGADDR]	wb_rd_addr_forward	,
    output	wire	[`ysyx_25060170_DATA]		wb_rd_data_forward	,
    output	wire                                    wb_rd_ena          ,
    output	wire	[`ysyx_25060170_REGADDR]	wb_rd_addr         , 
 	output	wire	[`ysyx_25060170_DATA]		wb_data   
 	
);

//hzd_ctl
assign wb_ready = 1'b0;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//------------------------------------------------------jump--------------------------------------------------------------//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

assign ie_jump = csr_ctl[1] | csr_ctl[0] | time_jump;
assign ie_jump_pc = ie_jump ? read_csr_data : `ysyx_25060170_ZERO32;
assign ie_flush = ie_jump;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//------------------------------------------------------out--------------------------------------------------------------//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

assign wb_data = (csr_ctl[3:0] != 4'd0) ? read_csr_data :
		 (wb_ctl == 2'b01) ?  ls_rd_data :
		 (wb_ctl == 2'b10) ?  exu_res :
		 `ysyx_25060170_ZERO32;

assign wb_rd_ena =  rd_ena	;
assign wb_rd_addr = rd_addr	;

//out to idu
assign wb_rd_addr_forward = wb_rd_addr	;
assign wb_rd_data_forward = wb_data	;



//--------------------DPI-C----------------------//
import "DPI-C" function void pc_inst_end(input int thepc_data, input int the_inst);
import "DPI-C" function void ebreak (input bit ebreak_ena);
reg delay;
reg [31:0] pc_delay;
always@(posedge clk) begin
	if(rst == `ysyx_25060170_RSTABLE) begin
		delay <= 1'b0;
		pc_delay <= 32'd0;
	end
	else if(id_stall & ~ls_valid) begin 
		delay <= 1'b1;
		pc_delay <= pc_i;
	end
	else begin
		delay <= 1'b0;
		pc_delay <= 32'd0;
	end
end

wire ebreak_ena;
assign ebreak_ena = inst_i == `EBREAK_TRAP ? 1'b1 : 1'b0;

 always @(posedge clk) begin
   if(~ls_valid & ~id_stall & ~time_jump) begin
   	pc_inst_end(pc_i, inst_i);
   end
   if(delay & ~time_jump) begin
   pc_inst_end(pc_delay, inst_i);
   end
   ebreak(ebreak_ena);
 end
 

endmodule

