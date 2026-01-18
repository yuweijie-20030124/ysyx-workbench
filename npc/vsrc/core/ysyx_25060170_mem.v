 `include "define.v"

//used to read memory data

module ysyx_25060170_mem(
     input   wire                           clk                 //<<i<<
    ,input   wire                           rst                 //<<i<<
    ,input   wire [`ysyx_25060170_INST]     inst_i              //<<i<<
    ,input   wire [`ysyx_25060170_PC]       pc_i                //<<i<<
    ,input   wire [`ysyx_25060170_PC]       next_pc_i           //<<i<<
    ,input   wire [1:0]                     wb_ctl_i            //<<i<<
    ,input   wire [`ysyx_25060170_DATA]     alu_res_i           //<<i<<
    ,input   wire                           re                  //<<i<<
    // ,input   wire [`ysyx_25060170_DATA]     lsu_wb_data_i       //<<i<<
    ,input   wire                           rd_ena_i            //<<i<<
    ,input   wire [`ysyx_25060170_REGADDR]  rd_addr_i           //<<i<<
    ,input   wire [6:0]                     csr_ctl_i           //<<i<<
    ,input   wire [11:0]                    csr_addr_i          //<<i<<
    ,input   wire [3:0]                     ls_ctl_i            //<<i<<
    ,input   wire [`ysyx_25060170_DATA]     mem_data_i          //<<i<<
    //harzard
    ,input   wire                           ls_valid_i          //<<i<<
    ,input   wire                           wb_ready_i          //<<i<<
    ,output  wire                           mem_valid_o         //>>o>>
    ,output  wire                           mem_ready_o         //>>o>>
    ,output  wire [`ysyx_25060170_INST]     inst_o              //>>o>>
    ,output  wire [`ysyx_25060170_PC]       pc_o                //>>o>>
    ,output  wire [`ysyx_25060170_PC]       next_pc_o           //>>o>>
    ,output  wire [1:0]                     wb_ctl_o            //>>o>>
    ,output  wire [`ysyx_25060170_DATA]     alu_res_o           //>>o>>
    // ,output  wire [`ysyx_25060170_DATA]     lsu_wb_data_o       //>>o>>
    ,output  wire                           rd_ena_o            //>>o>>
    ,output  wire [`ysyx_25060170_REGADDR]  rd_addr_o           //>>o>>
    ,output  wire [6:0]                     csr_ctl_o           //>>o>>
    ,output  wire [11:0]                    csr_addr_o          //>>o>>
    ,output  wire [`ysyx_25060170_DATA]     mem_data_o          //>>o>>
    //forwarding
    // ,output  wire [`ysyx_25060170_DATA]     mem_data_forward_o  //>>o>>
);

//********************************控制冒险********************************//
 reg  [`ysyx_25060170_DATA]     load_data ;

assign mem_ready_o  = wb_ready_i | (data_ok  & (re));
assign mem_valid_o  = ls_valid_i | (data_ok  & (re));

reg data_ok;

always@(posedge clk) begin
	if(rst == `ysyx_25060170_RSTABLE) begin
		data_ok <= 1'b0;
	end
	else if(~(mem_ready_o | ls_valid_i)) begin 
		data_ok <= 1'b1;
	end
	else begin
		data_ok <= 1'b0;
	end
end

//-----------------------load--------------------------------//
reg  [7:0]  data_byte = mem_data_i[7:0] ;
reg  [15:0] data_half = mem_data_i[15:0];
wire [31:0] data_word = mem_data_i      ;  // 32-bit word

always @(*) begin
    if (rst == `ysyx_25060170_RSTABLE) begin
        load_data = `ysyx_25060170_ZERO32;
    end 
    else if (ls_ctl_i[3] == 1'b1) begin
        case (ls_ctl_i[2:0])
            3'b001:  load_data = {{24{data_byte[7]}}, data_byte};    // LB: sign-extended byte
            3'b010:  load_data = {{16{data_half[15]}}, data_half};   // LH: sign-extended halfword
            3'b011:  load_data = data_word;                          // LW: (word ls_ctl_i = B=1011)
            3'b101:  load_data = {24'b0, data_byte};                 // LBU: zero-extended byte
            3'b110:  load_data = {16'b0, data_half};                 // LHU: zero-extended halfword
            default: load_data = `ysyx_25060170_ZERO32;
        endcase
    end else begin
        load_data = `ysyx_25060170_ZERO32;
    end
end
    // assign mem_data_forward_o   = re ? load_data : alu_res_i             ;
    assign mem_data_o           = re ? load_data : `ysyx_25060170_ZERO32 ;
    assign inst_o               = inst_i                                 ;
    assign pc_o                 = pc_i                                   ;
    assign next_pc_o            = next_pc_i                              ;
    assign wb_ctl_o             = wb_ctl_i                               ;
    assign alu_res_o            = alu_res_i                              ;
    // assign lsu_wb_data_o = lsu_wb_data_i ;                        
    assign rd_ena_o             = rd_ena_i                               ;
    assign rd_addr_o            = rd_addr_i                              ;
    assign csr_ctl_o            = csr_ctl_i                              ;
    assign csr_addr_o           = csr_addr_i                             ;
    assign mem_data_o           = mem_data_i                             ;
    
endmodule
