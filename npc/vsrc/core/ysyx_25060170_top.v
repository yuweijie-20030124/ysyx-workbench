`include "define.v"



module ysyx_25060170_top(
input wire              		clk			,
input wire              		rst		
		
);
//------------------ifu_id--------------------//
wire							exu_ifu_pcsrc		;
wire [`ysyx_25060170_INST]		dpic_ifu_inst		;
wire [`ysyx_25060170_INST]		ifu_idu_inst		;
wire [`ysyx_25060170_PC]	    ifu_idu_pc			;
wire 							if_id_reg_valid=1	;
wire 							if_id_reg_ready		;
wire                            ex_pcsrc_o          ;

ysyx_25060170_if_id_reg u_ysyx_25060170_if_id_reg (
    //数据信号
    .clk        (clk			),
    .rst        (rst			),
    .pcsrc_i    (ex_pcsrc_o	    ),
    // from exu 跳转信号
    .ex_pc_i    (exu_jump_pc_o	),
    .inst_i     (dpic_ifu_inst	),
	.pc_o       (ifu_idu_pc		),
    .inst_o     (ifu_idu_inst	),
    //流水线级控制信号
    .valid      (if_id_reg_valid),
    .ready      (if_id_reg_ready)
);

//------------------idu--------------------//
wire   [`ysyx_25060170_REGADDR]  	rs1_addr 		;
wire  							 	rs1_ena  		;
wire   [`ysyx_25060170_REG]      	rs1_data 		;
wire   [`ysyx_25060170_REGADDR]  	rs2_addr 		;
wire  							 	rs2_ena  		;
wire   [`ysyx_25060170_REG]      	rs2_data 		;
wire  							 	rd_ena  		;
wire   [`ysyx_25060170_REGADDR]  	rd_addr 		;
wire   [7:0]         				id_alusrc_o  	;
wire   [3:0]      					id_lsctl_o   	;//表示lsu阶段应该选取什么样的位宽
wire   [1:0]     					id_wbctl_o    	;
wire  								id_branch_o   	;
wire  								id_jump_o     	;
wire   [3:0]                    	id_csr_ctl    	;
wire   [`ysyx_25060170_DATA]  		id_op1_o 		;
wire   [`ysyx_25060170_DATA]  		id_op2_o 		;
wire   [`ysyx_25060170_IMM]     	id_imm_o 		;
wire   [`ysyx_25060170_REGADDR]  	idu_dpic_rd_addr;
wire   [`ysyx_25060170_PC]			id_pc_o			;
wire   [11:0]					  	id_csr_addr_o	;
wire  								magic_flag		;

ysyx_25060170_idu u_ysyx_25060170_idu (
    //system input
	.rst                 (rst),
    //from if_id signal		
	.inst_i              (ifu_idu_inst),
    .pc_i                (ifu_idu_pc),
    //regfile signal
	.rs1_addr            (rs1_addr),
	.rs1_ena             (rs1_ena),
	.rs1_data            (rs1_data),
	.rs2_addr            (rs2_addr),
	.rs2_ena             (rs2_ena),
	.rs2_data            (rs2_data),
	.rd_ena              (rd_ena),
	.rd_addr             (rd_addr),		
	//to exu out signal
	.alusrc_o            (id_alusrc_o),
	.lsctl_o             (id_lsctl_o),//表示lsu阶段应该选取什么样的位宽
	.wbctl_o             (id_wbctl_o),
	.branch_o            (id_branch_o),
	.jump_o              (id_jump_o),
	.csr_ctl             (id_csr_ctl),
	//id out signal_o
	.op1                 (id_op1_o),
	.op2                 (id_op2_o),
	.imm                 (id_imm_o),		
	.idu_dpic_rd_addr    (idu_dpic_rd_addr),
    .pc_o                (id_pc_o),
    //csr control signal
	// .csr_rdata_i         (read_csr_data),
    .csr_addr_o          (id_csr_addr_o),
    // .csr_wdata_o         (id_csr_wdata_o),
    //magic flag for NEMU_STOP
	.magic_flag          (magic_flag)
);

//------------------id_ex_reg--------------------//
wire	[`ysyx_25060170_DATA]    id_ex_reg_op1_o       ;
wire	[`ysyx_25060170_DATA]    id_ex_reg_op2_o       ;
wire	[`ysyx_25060170_IMM]     id_ex_reg_imm_o	   ;  
wire	[`ysyx_25060170_PC]      id_ex_reg_pc_o        ;
wire	[11:0]                   id_ex_reg_csr_addr_o  ;
wire	[7:0]                    id_ex_reg_alusrc_o    ;
wire	[3:0]                    id_ex_reg_lsctl_o     ;
wire	[1:0]                    id_ex_reg_wbctl_o     ;
wire	                    	 id_ex_reg_branch_o    ;
wire	                    	 id_ex_reg_jump_o      ;
wire	[3:0]                    id_ex_reg_csr_ctl_o   ;
wire    [`ysyx_25060170_REGADDR] id_ex_reg_rd_addr_o   ;
wire                             id_ex_reg_rd_ena_o    ;
wire	                    	 id_ex_reg_valid_o     ;
wire	                    	 id_ex_reg_next_ready_i;

ysyx_25060170_id_ex_reg u_ysyx_25060170_id_ex_reg (
    .clk            (clk),
    .rst            (rst),
    //signals about idu
    .op1_i          (id_op1_o),
    .op2_i          (id_op2_o),
    .imm_i          (id_imm_o),
    .pc_i           (id_pc_o),
    .csr_addr_i     (id_csr_addr_o),
    .rd_ena_i       (rd_ena),
    .rd_addr_i      (rd_addr),
    .alusrc_i       (id_alusrc_o),
    .lsctl_i        (id_lsctl_o),
    .wbctl_i        (id_wbctl_o),
    .branch_i       (id_branch_o),
    .jump_i         (id_jump_o),
    .csr_ctl_i      (id_csr_ctl),
    .valid          (if_id_reg_ready),
    .ready          (if_id_reg_valid),
    //outputs about exu 11.13 13:20
    .op1_o          (id_ex_reg_op1_o),
    .op2_o          (id_ex_reg_op2_o),
    .imm_o          (id_ex_reg_imm_o),
    .pc_o           (id_ex_reg_pc_o),
    .csr_addr_o     (id_ex_reg_csr_addr_o),
    .rd_ena_o       (id_ex_reg_rd_ena_o),
    .rd_addr_o      (id_ex_reg_rd_addr_o),
    .alusrc_o       (id_ex_reg_alusrc_o),
    .lsctl_o        (id_ex_reg_lsctl_o),
    .wbctl_o        (id_ex_reg_wbctl_o),
    .branch_o       (id_ex_reg_branch_o),
    .jump_o         (id_ex_reg_jump_o),
    .csr_ctl_o      (id_ex_reg_csr_ctl_o),
    .valid_o        (id_ex_reg_valid_o),
    .next_ready     (id_ex_reg_next_ready_i)
);

//------------------exu--------------------//
wire [`ysyx_25060170_REG]     exu_store_data_o    ;
wire [`ysyx_25060170_PC]      exu_jump_pc_o       ;
// wire                          exu_pcsrc_o        ;
wire [`ysyx_25060170_DATA]    exu_res_o           ;
wire [3:0]					  exu_ls_ctl_o		 ;
wire [1:0]                    exu_wb_ctl_o        ;
wire [11:0]                   exu_csr_addr_o      ;
wire                          exu_rd_ena_o        ;
wire [`ysyx_25060170_REGADDR] exu_rd_addr_o       ;
wire [`ysyx_25060170_DATA]    exu_write_csr_data  ;
wire [`ysyx_25060170_REG]     exu_mcause_value    ;

ysyx_25060170_exu u_ysyx_25060170_exu (
    //system signals
    .rst               (rst),
    //from id_ex_reg
    .op1               (id_ex_reg_op1_o),
    .op2               (id_ex_reg_op2_o),
    .imm               (id_ex_reg_imm_o),
    .pc_i              (id_ex_reg_pc_o),
    .jump_i            (id_ex_reg_jump_o),
    .alu_sel           (id_ex_reg_alusrc_o),
    .branch_i          (id_ex_reg_branch_o),
	.ls_ctl_i          (id_ex_reg_lsctl_o),
    .wbctl_i           (id_ex_reg_wbctl_o),
    .csr_ctl           (id_ex_reg_csr_ctl_o),
    .csr_addr_i        (id_ex_reg_csr_addr_o),
    .rd_ena_i          (id_ex_reg_rd_ena_o),
    .rd_addr_i         (id_ex_reg_rd_addr_o),
    //csr read data
    .read_csr_data     (read_csr_data),//csr读数据
    //outputs to ex_lsu_reg
    .store_data        (exu_store_data_o),
    .jump_pc_o         (exu_jump_pc_o),
    .ex_pcsrc_o        (exu_ifu_pcsrc),
    .exu_res           (exu_res_o),
	.ls_ctl_o      	   (exu_ls_ctl_o),
    .wbctl_o           (exu_wb_ctl_o),
    .csr_addr_o        (exu_csr_addr_o),
    .rd_ena_o          (exu_rd_ena_o),
    .rd_addr_o         (exu_rd_addr_o),
    .write_csr_data    (exu_write_csr_data),
    .mcause_value      (exu_mcause_value)
);

//------------------ex_lsu_reg--------------------//
wire	[`ysyx_25060170_REG]	 ex_ls_reg_store_data_o		;
wire	[`ysyx_25060170_DATA]	 ex_ls_reg_exu_res_o		;	
wire	[11:0]					 ex_ls_reg_csr_addr_o     	;
wire	[`ysyx_25060170_DATA]	 ex_ls_reg_write_csr_data_o	;
wire	[`ysyx_25060170_REG]	 ex_ls_reg_mcause_value_o	;
wire    [3:0]                    ex_ls_reg_ls_ctl_o        	;
wire    [1:0]                    ex_ls_reg_wb_ctl_o        	;
wire                             ex_ls_reg_rd_ena_o        	;
wire    [`ysyx_25060170_REGADDR] ex_ls_reg_rd_addr_o        ;
wire                        	 ex_lsu_valid_i          	;
wire                        	 ex_lsu_ready_o          	;


ysyx_25060170_ex_lsu_reg u_ysyx_25060170_ex_lsu_reg (
    //system signals
    .clk                 (clk),
    .rst                 (rst),
    //signals for pipeline
    .valid               (id_ex_reg_valid_o),
    .ready               (id_ex_reg_next_ready_i),
    .valid_o             (ex_lsu_valid_i),
    .next_ready          (ex_lsu_ready_o),
    //signals from exu
    .store_data_i        (exu_store_data_o),
    .ex_pcsrc_i          (exu_ifu_pcsrc),
    .exu_res_i           (exu_res_o),
    .csr_addr_i          (exu_csr_addr_o),
    .write_csr_data_i    (exu_write_csr_data),
    .rd_ena_i            (exu_rd_ena_o),
    .rd_addr_i           (exu_rd_addr_o),
    .mcause_value_i      (exu_mcause_value),
	.ls_ctl_i            (exu_ls_ctl_o),
    .wbctl_i             (exu_wb_ctl_o),
	//outputs to lsu
    .store_data_o        (ex_ls_reg_store_data_o),
    .exu_res_o           (ex_ls_reg_exu_res_o),
    .csr_addr_o          (ex_ls_reg_csr_addr_o),
    .write_csr_data_o    (ex_ls_reg_write_csr_data_o),
    .rd_ena_o            (ex_ls_reg_rd_ena_o),
    .rd_addr_o           (ex_ls_reg_rd_addr_o),
    .mcause_value_o      (ex_ls_reg_mcause_value_o),
    .ls_ctl_o            (ex_ls_reg_ls_ctl_o),
    .wbctl_o             (ex_ls_reg_wb_ctl_o),
	//signals to ifu
    .ex_pcsrc_o          (ex_pcsrc_o)
);

//------------------lsu--------------------//
wire    [`ysyx_25060170_DATA]    lsu_ls_data_o          ;
wire                             dpic_lsu_re              ;
wire                             dpic_lsu_we              ;
wire [`ysyx_25060170_DATA]       dpic_dpic_data_i         ;
wire [`ysyx_25060170_DATA]       dpic_lsu_data_o          ;
wire [`ysyx_25060170_DATA]       ls_data_i           ;
wire [1:0]                       ls_wbctl_o          ; 
wire                             lsu_rd_ena_o        ;
wire [`ysyx_25060170_REGADDR]    lsu_rd_addr_o       ;
wire [`ysyx_25060170_DATA]       ls_exures_o         ;
wire [`ysyx_25060170_DATA]       lsu_write_csr_data_o ;        
wire [`ysyx_25060170_DATA]       lsu_mcause_value_o          ;
wire [`ysyx_25060170_DATAADDR]   dpic_lsu_raddr           ;
wire [`ysyx_25060170_DATAADDR]   dpic_lsu_waddr           ;
wire [7:0]                       dpic_lsu_wlen            ;
wire [7:0]                       dpic_lsu_rlen            ;

ysyx_25060170_lsu u_ysyx_25060170_lsu (
    .rst                (rst),
    .alu_res            (ex_ls_reg_exu_res_o),
    .store_data         (ex_ls_reg_store_data_o),
    .ls_ctl             (ex_ls_reg_ls_ctl_o),
    .wb_ctl_i           (ex_ls_reg_wb_ctl_o),
    .rd_ena_i           (ex_ls_reg_rd_ena_o),
    .rd_addr_i          (ex_ls_reg_rd_addr_o),
    .ls_data_o          (lsu_ls_data_o),
    .wb_ctl_o           (ls_wbctl_o),
    .rd_ena_o           (lsu_rd_ena_o),
    .rd_addr_o          (lsu_rd_addr_o),
    .exu_res_i          (ex_ls_reg_exu_res_o),
    .exu_res_o          (ls_exures_o),
    .write_csr_data_i   (ex_ls_reg_write_csr_data_o),
    .write_csr_data_o   (lsu_write_csr_data_o),
    .mcause_value_i     (ex_ls_reg_mcause_value_o),
    .mcause_value_o     (lsu_mcause_value_o),
    .csr_addr_i         (ex_ls_reg_csr_addr_o),
    .csr_addr_o         (//think//),
    //about dpi-c
    .re            (dpic_lsu_re),
    .we            (dpic_lsu_we),
    .data_i        (dpic_lsu_data_i),
    .data_o        (dpic_lsu_data_o),
    .raddr         (dpic_lsu_raddr),
    .waddr         (dpic_lsu_waddr),
    .wlen          (dpic_lsu_wlen),
    .rlen          (dpic_lsu_rlen)
);

//------------------lsu_wbu_reg--------------------//
wire        [`ysyx_25060170_DATA]    lsu_wbu_reg_data_o     ;
wire        [1:0]                    lsu_wbu_reg_wbctl_o    ;
wire        [`ysyx_25060170_DATA]    lsu_wbu_reg_exu_res_o  ;
wire                                 lsu_wbu_reg_rd_ena_o   ;
wire        [`ysyx_25060170_REGADDR] lsu_wbu_reg_rd_addr_o  ;
wire        [`ysyx_25060170_DATA]    lsu_wbu_reg_write_csr_data_o   ;
wire                                 lsu_wbu_reg_valid_o    ;
wire                                 lsu_wbu_reg_next_ready_i;

ysyx_25060170_lsu_wbu_reg u_ysyx_25060170_lsu_wbu_reg (
    .clk           (clk),
    .rst           (rst),
    //signals from lsu
    .ls_data_i     (lsu_ls_data_o),
    .wbctl_i       (ls_wbctl_o),
    .exu_res_i     (ls_exures_o),
    .rd_ena_i      (lsu_rd_ena_o),
    .rd_addr_i     (lsu_rd_addr_o),
    .write_csr_data_i (lsu_write_csr_data_o),
    .valid         (ex_lsu_valid_i),
    .ready         (ex_lsu_ready_o),
    //outputs to wbu
    .ls_data_o     (lsu_wbu_reg_data_o),
    .wbctl_o       (lsu_wbu_reg_wbctl_o),
    .exu_res_o     (lsu_wbu_reg_exu_res_o),
    .rd_ena_o      (lsu_wbu_reg_rd_ena_o),
    .rd_addr_o     (lsu_wbu_reg_rd_addr_o),
    .write_csr_data_o (lsu_wbu_reg_write_csr_data_o),
    .valid_o       (lsu_wbu_reg_valid_o),
    .next_ready    (lsu_wbu_reg_next_ready_i)
);

//------------------wbu--------------------//
wire [`ysyx_25060170_DATA]  wb_data_o;

ysyx_25060170_wbu u_ysyx_25060170_wbu (
    .rst           (rst),
    .ls_rd_data    (lsu_wbu_reg_data_o),
    .wb_ctl        (lsu_wbu_reg_wbctl_o),
    .exu_res       (lsu_wbu_reg_exu_res_o),
    .wb_data       (wb_data_o)
);

//------------------regfile--------------------//
wire [`ysyx_25060170_REG] dpicregs0 ;
wire [`ysyx_25060170_REG] dpicregs1 ;
wire [`ysyx_25060170_REG] dpicregs2 ;
wire [`ysyx_25060170_REG] dpicregs3 ;
wire [`ysyx_25060170_REG] dpicregs4 ;
wire [`ysyx_25060170_REG] dpicregs5 ;
wire [`ysyx_25060170_REG] dpicregs6 ;
wire [`ysyx_25060170_REG] dpicregs7 ;
wire [`ysyx_25060170_REG] dpicregs8 ;
wire [`ysyx_25060170_REG] dpicregs9 ;
wire [`ysyx_25060170_REG] dpicregs10;
wire [`ysyx_25060170_REG] dpicregs11;
wire [`ysyx_25060170_REG] dpicregs12;
wire [`ysyx_25060170_REG] dpicregs13;
wire [`ysyx_25060170_REG] dpicregs14;
wire [`ysyx_25060170_REG] dpicregs15;
wire [`ysyx_25060170_REG] dpicregs16;
wire [`ysyx_25060170_REG] dpicregs17;
wire [`ysyx_25060170_REG] dpicregs18;
wire [`ysyx_25060170_REG] dpicregs19;
wire [`ysyx_25060170_REG] dpicregs20;
wire [`ysyx_25060170_REG] dpicregs21;
wire [`ysyx_25060170_REG] dpicregs22;
wire [`ysyx_25060170_REG] dpicregs23;
wire [`ysyx_25060170_REG] dpicregs24;
wire [`ysyx_25060170_REG] dpicregs25;
wire [`ysyx_25060170_REG] dpicregs26;
wire [`ysyx_25060170_REG] dpicregs27;
wire [`ysyx_25060170_REG] dpicregs28;
wire [`ysyx_25060170_REG] dpicregs29;
wire [`ysyx_25060170_REG] dpicregs30;
wire [`ysyx_25060170_REG] dpicregs31;
wire [`ysyx_25060170_REG] dpicmstatus;
wire [`ysyx_25060170_REG] dpicmtvec;
wire [`ysyx_25060170_REG] dpicmepc;
wire [`ysyx_25060170_REG] dpicmcause;

ysyx_25060170_regfile u_ysyx_25060170_regfile (
    .clk       (clk),
    .rst       (rst),
    .waddr     (lsu_wbu_reg_rd_addr_o),
    .wdata     (wb_data_o),
    .wen       (lsu_wbu_reg_rd_ena_o),
    .raddr1    (rs1_addr),
    .rdata1    (rs1_data),
    .ren1      (rs1_ena),
    .raddr2    (rs2_addr),
    .rdata2    (rs2_data),
    .ren2      (rs2_ena),
    //to dpi-c for difftest
	.regs0     (dpicregs0 ),
    .regs1     (dpicregs1 ),
    .regs2     (dpicregs2 ),
    .regs3     (dpicregs3 ),
    .regs4     (dpicregs4 ),
    .regs5     (dpicregs5 ),
    .regs6     (dpicregs6 ),
    .regs7     (dpicregs7 ),
    .regs8     (dpicregs8 ),
    .regs9     (dpicregs9 ),
    .regs10    (dpicregs10),
    .regs11    (dpicregs11),
    .regs12    (dpicregs12),
    .regs13    (dpicregs13),
    .regs14    (dpicregs14),
    .regs15    (dpicregs15),
    .regs16    (dpicregs16),
    .regs17    (dpicregs17),
    .regs18    (dpicregs18),
    .regs19    (dpicregs19),
    .regs20    (dpicregs20),
    .regs21    (dpicregs21),
    .regs22    (dpicregs22),
    .regs23    (dpicregs23),
    .regs24    (dpicregs24),
    .regs25    (dpicregs25),
    .regs26    (dpicregs26),
    .regs27    (dpicregs27),
    .regs28    (dpicregs28),
    .regs29    (dpicregs29),
    .regs30    (dpicregs30),
    .regs31    (dpicregs31)
);

//------------------csr--------------------//
wire    [`ysyx_25060170_DATA]    read_csr_data          ;
wire    [`ysyx_25060170_REG]     csr_mcause_value_o     ;
wire                             csr_rd_ena_i           ;

ysyx_25060170_csr u_ysyx_25060170_csr (
    //system signals
    .clk               (clk),
    .rst               (rst),
    //from exu
    .csr_rd_ena        (csr_rd_ena_i),
    .csr_ctl           (),// {csr_wr_ena, csr_rd_ena, ecall_ena, mret_ena}
    .csr_addr          (id_csr_addr_o),
    //csr地址
    .mcause_value      (csr_mcause_value_o),
    .write_csr_data    (lsu_wbu_reg_write_csr_data_o),
    .read_csr_data     (read_csr_data),
    .mstatus_o         (dpicmstatus),
    .mepc_o            (dpicmepc),
    .mtvec_o           (dpicmtvec),
    .mcause_o          (dpicmcause)
);

//------------------dpic--------------------//

wire  [`ysyx_25060170_DATA]    dpic_lsu_data_i       ;

ysyx_25060170_DPIC u_ysyx_25060170_DPIC (
    /* verilator lint_off UNUSEDSIGNAL */
	.clk                (clk),
    .rst                (rst),
    /* verilator lint_on UNUSEDSIGNAL */
    .pc_i               (ifu_idu_pc),
    .inst_o             (dpic_ifu_inst),
    //for ftrace
	.rd_addr            (idu_dpic_rd_addr),
    .imm                (id_imm_o),
    //for difftest      
	.regs0              (dpicregs0),
    .regs1              (dpicregs1),
    .regs2              (dpicregs2),
    .regs3              (dpicregs3),
    .regs4              (dpicregs4),
    .regs5              (dpicregs5),
    .regs6              (dpicregs6),
    .regs7              (dpicregs7),
    .regs8              (dpicregs8),
    .regs9              (dpicregs9),
    .regs10             (dpicregs10),
    .regs11             (dpicregs11),
    .regs12             (dpicregs12),
    .regs13             (dpicregs13),
    .regs14             (dpicregs14),
    .regs15             (dpicregs15),
    .regs16             (dpicregs16),
    .regs17             (dpicregs17),
    .regs18             (dpicregs18),
    .regs19             (dpicregs19),
    .regs20             (dpicregs20),
    .regs21             (dpicregs21),
    .regs22             (dpicregs22),
    .regs23             (dpicregs23),
    .regs24             (dpicregs24),
    .regs25             (dpicregs25),
    .regs26             (dpicregs26),
    .regs27             (dpicregs27),
    .regs28             (dpicregs28),
    .regs29             (dpicregs29),
    .regs30             (dpicregs30),
    .regs31             (dpicregs31),
    .mstatus            (dpicmstatus),
    .mtvec              (dpicmtvec),
    .mepc               (dpicmepc),
    .mcause             (dpicmcause),
    //from lsu
	.re                 (dpic_lsu_re),
    .we                 (dpic_lsu_we),
    .data_i             (dpic_lsu_data_o),
    .wlen               (dpic_lsu_wlen),
    .rlen               (dpic_lsu_rlen),
    .raddr              (dpic_lsu_raddr),
    .waddr              (dpic_lsu_waddr),
    //to lsu
	.data_o             (dpic_lsu_data_i),

    //for magic number
	.magic_flag    (magic_flag)
);

endmodule


 
