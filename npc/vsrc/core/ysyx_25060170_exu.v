`include "define.v"

module ysyx_25060170_exu(
    //system signals
     input  wire                            rst         //<<i<<
    //from id_ex_reg
    ,input  wire [`ysyx_25060170_DATA]      op1_i      	//<<i<< 
    ,input  wire [`ysyx_25060170_DATA]      op2_i       //<<i<<
    ,input  wire [1:0]                      op1_sel_i	  //<<i<<
    ,input  wire [2:0]                      op2_sel_i	  //<<i<<
    ,input  wire [`ysyx_25060170_REGADDR]   rd_addr_i	  //<<i<<
    ,input  wire [`ysyx_25060170_REGADDR]   rs1_addr_i	//<<i<<
    ,input  wire [`ysyx_25060170_IMM]       imm_i		    //<<i<<
    ,input  wire [`ysyx_25060170_PC]        pc_i		    //<<i<<
    ,input  wire [7:0]                      alu_sel_i	  //<<i<<
    //控制冒险
    ,input  wire                            ls_ready_i	//<<i<<
    ,input  wire                            id_valid_i	//<<i<<
    ,output wire                            ex_valid_o	//>>o>>
    ,output wire                            ex_ready_o	//>>o>>
    ,output wire                            ex_flush_o  //>>o>>
    //output to next stage
    ,output wire [`ysyx_25060170_REG]       store_data_o//>>o>>
    ,output wire [`ysyx_25060170_DATA]      exu_res_o	  //>>o>>
    ,output wire [11:0]                     csr_addr_o	//>>o>>
    ,output wire [6:0]                      csr_ctl_o	  //>>o>>
);

//********************************控制冒险********************************//
assign ex_valid_o = id_valid_i;
assign ex_ready_o = ls_ready_i; 

//!!!!!乘除法并没有办法被综合得很好，能乘除主要是因为有软件，最好还是用硬件乘除器!!!!!

//*******************************OPERAND SELECT*******************************//
wire [`ysyx_25060170_DATA] op1;
wire [`ysyx_25060170_DATA] op2;

assign op1 = `ysyx_25060170_ZERO32 |
             {32{op1_sel_i == 2'b01}} & op1_i |
             {32{op1_sel_i == 2'b10}} & pc_i  ;

assign op2 = `ysyx_25060170_ZERO32 |
             {32{op2_sel_i == 3'b001}} & op2_i |
             {32{op2_sel_i == 3'b010}} & 32'b100|
             {32{op2_sel_i == 3'b100}} & imm_i ;   

//*******************************alu calculate*******************************//

// 32-bit operations
wire [`ysyx_25060170_DATA] op1_add_op2 = op1 + op2;

wire [`ysyx_25060170_DATA] op1_sub_op2 = $signed(op1) - $signed(op2);

// SLT / SLTI / SLTIU
wire op1_lt_op2 = (op1[31] && ~op2[31]) || (~op1[31] && ~op2[31] && op1_sub_op2[31]) || (op1[31] && op2[31] && op1_sub_op2[31]);

// SRA / SRAI
wire [`ysyx_25060170_DATA] op1_sra_op2 = $signed(op1) >>> op2[4:0];  // 32-bit shift uses [4:0]

// MUL / MULH
wire [63:0] mul = $signed(op1) * $signed(op2);  // 32x32=64 multiplication
wire [`ysyx_25060170_DATA] op1_mul_op2 = mul[31:0];  // 32-bit result
wire [`ysyx_25060170_DATA] op1_mulh_op2 = mul[63:32];  // 32-bit upper half

// DIV / DIVU
wire [`ysyx_25060170_DATA] div = $signed(op1) / $signed(op2);

// REM / REMU
wire [`ysyx_25060170_DATA] rem = $signed(op1) % $signed(op2);

reg [`ysyx_25060170_DATA] alu_res;

reg branch_beq; //相等则branch
reg branch_bne; //不相等则branch
reg branch_blt; //小于则branch
reg branch_bge; //大于等于则branch
reg branch_bltu;//无符号小于则branch
reg branch_bgeu;//无符号大于等于则branch


always@(*) begin
  if(rst == `ysyx_25060170_RSTABLE) begin
    alu_res = `ysyx_25060170_ZERO32;
  end
  else begin
    case(alu_sel_i)
      `INST_ADDI, `INST_ADD,
      `INST_LUI, `INST_AUIPC: begin alu_res = op1_add_op2; end

      `INST_LB, `INST_LH,
      `INST_LW, `INST_LBU,
      `INST_LHU, `INST_SB,
      `INST_SH, `INST_SW: begin alu_res = op1 + imm_i; end

      `INST_SUB: begin alu_res = op1_sub_op2; end

      `INST_BEQ: begin branch_beq = (op1 == op2); end
      `INST_BNE: begin branch_bne = (op1 != op2); end
      `INST_BLT: begin branch_blt = op1_lt_op2; end
      `INST_BGE: begin branch_bge = ~op1_lt_op2; end
      `INST_BLTU: begin branch_bltu = (op1 < op2); end
      `INST_BGEU: begin branch_bgeu = (op1 >= op2); end

      `INST_SLTI, `INST_SLT: begin alu_res = {31'd0, op1_lt_op2}; end
      `INST_SLTIU, `INST_SLTU: begin alu_res = {31'd0, (op1 < op2)}; end
      `INST_SRAI, `INST_SRA: begin alu_res = op1_sra_op2; end
      `INST_XORI, `INST_XOR: begin alu_res = op1 ^ op2; end
      `INST_ORI, `INST_OR: begin alu_res = op1 | op2; end
      `INST_ANDI, `INST_AND: begin alu_res = op1 & op2; end
      `INST_SLLI, `INST_SLL: begin alu_res = op1 << op2[4:0]; end  // 32-bit shift uses [4:0]
      `INST_SRLI, `INST_SRL: begin alu_res = op1 >> op2[4:0]; end  // 32-bit shift uses [4:0]
      `INST_JAL, `INST_JALR: begin alu_res = pc_i + 32'd4; end
      `INST_EBREAK: begin alu_res = op1; end

      `INST_MUL: begin alu_res = op1_mul_op2; end
      `INST_MULH: begin alu_res = op1_mulh_op2; end

      `INST_DIV, `INST_DIVU: begin alu_res = div; end

      `INST_REM, `INST_REMU: begin alu_res = rem; end

      default: begin
        alu_res = `ysyx_25060170_ZERO32;
      end
    endcase
  end
end

//***********************************csr***********************************//
reg csr_wr_ena;
reg csr_rd_ena;
reg mret_ena;
reg ecall_ena;
reg csrrw_ena;
reg csrrs_ena;
reg csrrc_ena;

wire [`ysyx_25060170_DATA] csr_op = {{27{1'b0}},rs1_addr_i};

assign csr_addr_o = (csr_ctl_o[3:0] != 4'd0) ? imm_i[11:0] : 12'd0;

wire csrrxi_ena = (alu_sel_i == `INST_CSRRWI) |
                  (alu_sel_i == `INST_CSRRSI) |
                  (alu_sel_i == `INST_CSRRCI) ;

always @(*) begin
	if(rst == `ysyx_25060170_RSTABLE) begin
  		csr_wr_ena = 1'b0;
		csr_rd_ena = 1'b0;
		mret_ena =  1'b0;
		ecall_ena = 1'b0;
		csrrw_ena = 1'b0;
		csrrs_ena = 1'b0;
		csrrc_ena = 1'b0;
	end
	else begin
  		case(alu_sel_i)
			`INST_ECALL : begin 
				ecall_ena = 1'b1; 
			end
				
			`INST_CSRRW, `INST_CSRRWI :  begin 	
				csr_wr_ena = `ysyx_25060170_WENABLE; 
				csr_rd_ena = (rd_addr_i == 5'd0) ? `ysyx_25060170_RDISABLE : `ysyx_25060170_RENABLE;
				csrrw_ena = 1'b1;
			end
		 
			`INST_CSRRS, `INST_CSRRSI :  begin	
				csr_wr_ena = (rs1_addr_i == 5'd0) ? `ysyx_25060170_WDISABLE : `ysyx_25060170_WENABLE; 
				csr_rd_ena = `ysyx_25060170_RENABLE;
				csrrs_ena = 1'b1;					
			end
	
			`INST_CSRRC, `INST_CSRRCI :  begin	
				csr_wr_ena = (rs1_addr_i == 5'd0) ? `ysyx_25060170_WDISABLE : `ysyx_25060170_WENABLE; 
				csr_rd_ena = `ysyx_25060170_RENABLE;
				csrrc_ena = 1'b1;
			end
	
			`INST_MRET :  begin  mret_ena = 1'b1 ;end
	
			default : begin	
				csr_wr_ena = 1'b0;
				csr_rd_ena = 1'b0;
				mret_ena =  1'b0;
				ecall_ena = 1'b0;
				csrrw_ena = 1'b0;
				csrrs_ena = 1'b0;
				csrrc_ena = 1'b0;
			end
		endcase 
	end
end

//***********************************output***********************************//
// assign exu_res = (csr_ctl != 3'd0) ? read_csr_data : alu_res;
assign store_data_o = op2_i;

assign exu_res_o = alu_res |
                  {32{(csr_ctl_o[3:0] != 4'd0)}} & op1_i |
                  {32{csrrxi_ena}} & csr_op ;

assign csr_ctl_o = {csrrw_ena, csrrs_ena, csrrc_ena, csr_wr_ena, csr_rd_ena, ecall_ena, mret_ena};

endmodule


