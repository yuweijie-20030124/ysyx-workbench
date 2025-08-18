 `include "define.v"
module ysyx_25060170_ifu (
  
	// diff_pc_input
	input	wire					id_pc_jump	,
	input	wire	[`ysyx_25060170_PC]		id_pc_i  	,
	input	wire					ie_pc_jump	,
	input	wire	[`ysyx_25060170_PC]		ie_pc_i  	,
	input	wire					ls_pc_jump	,
	input	wire	[`ysyx_25060170_PC]		ls_pc_i  	,

	//stage control signal 
	input	wire					inst_valid	, 
	input	wire					id_ready	,
	input	wire					id_stall	,
	output  wire					if_valid	, 
	output  wire					core_ready	,
	
	//out sign
	input	wire	[`ysyx_25060170_INST]		inst_i	,
	input	wire	[`ysyx_25060170_PC]		pc_i	,
	output  wire	[`ysyx_25060170_PC]		pc_o	,
	output	wire	[`ysyx_25060170_INST]		inst_o	,
	output  wire	[`ysyx_25060170_PC]		pc_next		
 );
 
assign pc_next = 	ie_pc_jump ? ie_pc_i : 
			ls_pc_jump ? ls_pc_i :
			id_pc_jump ? id_pc_i : 0 ;

assign pc_next = 32'b0 |   
                    ({32{ie_pc_jump == 1'b1}} & {ie_pc_i}) |
                    ({32{ls_pc_jump == 1'b1}} & {ls_pc_i}) |
                    ({32{id_pc_jump == 1'b1}} & {id_pc_i}) ;
		
wire clean_stall = ie_pc_jump | ls_pc_jump;
wire stall = clean_stall ? 1'b0 : id_stall;

assign if_valid = (id_ready | stall) ? 1'b0 : ~inst_valid  ;
assign core_ready = (id_ready | stall);
assign inst_o = inst_i;
assign pc_o = pc_i;

endmodule