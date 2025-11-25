`include "define.v"



module ysyx_25060170_fishtailcore(
 input wire     clk			
,input wire     rst		    		
);

// ysyx_25060170_bpu Inputs
reg  [`ysyx_25060170_INST]      inst_i;
reg  [`ysyx_25060170_PC]        pc_i;

// ysyx_25060170_bpu Outputs
wire [`ysyx_25060170_PC]        bp_id_pc; //*f
wire                            bp_predict_o;

ysyx_25060170_bpu u_ysyx_25060170_bpu (
     .clk           ( clk          )//<<i<<
    ,.rst           ( rst          )//<<i<<
    ,.inst_i        ( inst_i       )//<<i<<
    ,.pc_i          ( pc_i         )//<<i<<
    ,.bp_pc_o       ( bp_id_pc     )//>>o>>
    ,.bp_predict_o  ( bp_predict   )//>>o>>
);

// ysyx_25060170_ifu Inputs
reg             id_pc_jump_i             ;
reg             id_pc_i                  ;
reg             ex_pc_jump_i             ;
reg             ex_pc_i                  ;
reg             ls_pc_jump_i             ;
reg             ls_pc_i                  ;
reg             bp_pc_i                  ;
reg             inst_valid_i             ;
reg             id_ready_i               ;
reg             id_stall_i               ;
// reg             inst_i                   ;
// reg             pc_i                     ;

// ysyx_25060170_ifu Outputs
wire      if_valid_o;
wire      pc_o;
wire      inst_o;
wire      pc_next_o;

ysyx_25060170_ifu  u_ysyx_25060170_ifu (
     .id_pc_jump_i     (id_pc_jump_i     )//<<i<<
    ,.id_pc_i          (id_pc_i          )//<<i<<
    ,.ex_pc_jump_i     (ex_pc_jump_i     )//<<i<<
    ,.ex_pc_i          (ex_pc_i          )//<<i<<
    ,.ls_pc_jump_i     (ls_pc_jump_i     )//<<i<<
    ,.ls_pc_i          (ls_pc_i          )//<<i<<
    ,.bp_pc_i          (bp_id_pc         )//<<i<< //*f
    ,.inst_valid_i     (inst_valid_i     )//<<i<<
    ,.id_ready_i       (id_ready_i       )//<<i<<
    ,.id_stall_i       (id_stall_i       )//<<i<<
    ,.inst_i           (inst_i           )//<<i<<
    ,.pc_i             (pc_i             )//<<i<<
    ,.if_valid_o       (if_valid_o       )//<<i<<
    ,.pc_o             (pc_o             )//>>o>>
    ,.inst_o           (inst_o           )//>>o>>
    ,.pc_next_o        (pc_next_o        )//>>o>>
);

// ysyx_25060170_if_id_reg Inputs
// reg  [`ysyx_25060170_PC]        pc_i;
// reg  [`ysyx_25060170_INST]      inst_i;
reg                             bp_jump_i;
reg                             if_valid_i;
reg                             id_flush_i;
reg                             ex_flush_i;
reg                             ls_flush_i;
// reg                             id_stall_i;
// reg                             id_ready_i;

// ysyx_25060170_if_id_reg Outputs
wire [`ysyx_25060170_PC]        pc_o;
wire [`ysyx_25060170_INST]      inst_o;
wire                            id_jump_o;

ysyx_25060170_if_id_reg u_ysyx_25060170_if_id_reg (
     .clk           ( clk        )
    ,.rst           ( rst        )
    ,.pc_i          ( pc_i       )
    ,.inst_i        ( inst_i     )
    ,.bp_jump_i     ( bp_jump_i  )
    ,.if_valid_i    ( if_valid_i )
    ,.id_flush_i    ( id_flush_i )
    ,.ex_flush_i    ( ex_flush_i )
    ,.ls_flush_i    ( ls_flush_i )
    ,.id_stall_i    ( id_stall_i )
    ,.id_ready_i    ( id_ready_i )

    ,.pc_o          ( pc_o       )
    ,.inst_o        ( inst_o     )
    ,.id_jump_o     ( id_jump_o  )
);

// ysyx_25060170_idu Inputs 
// reg                             rst;
// reg  [`ysyx_25060170_INST]      inst_i;
// reg  [`ysyx_25060170_PC]        pc_i;
// reg                             bp_jump_i;
reg  [`ysyx_25060170_REGADDR]   ex_addr_forward;
reg  [`ysyx_25060170_DATA]      ex_data_forward;
reg  [`ysyx_25060170_REGADDR]   ls_addr_forward;
reg  [`ysyx_25060170_DATA]      ls_data_forward;
reg  [`ysyx_25060170_REGADDR]   wb_addr_forward;
reg  [`ysyx_25060170_DATA]      wb_data_forward;
reg                             ex_load_ena;
reg                             ex_csr_ena;
reg                             ls_csr_ena;
reg  [`ysyx_25060170_REG]       rs1_data;
reg  [`ysyx_25060170_REG]       rs2_data;
// reg                             if_valid_i;
reg                             ex_ready_i;

// ysyx_25060170_idu Outputs 
wire [`ysyx_25060170_REGADDR]   rs1_addr;
wire                            rs1_ena;
wire [`ysyx_25060170_REGADDR]   rs2_addr;
wire                            rs2_ena;
wire                            rd_ena;
wire [`ysyx_25060170_REGADDR]   rd_addr;
wire [7:0]                      alusrc_o;
wire [3:0]                      lsctl_o;
wire [1:0]                      wbctl_o;
wire [1:0]                      op1_sel;
wire [2:0]                      op2_sel;
wire                            load_flag_o;
wire                            csr_ena_o;
wire [`ysyx_25060170_DATA]      op1;
wire [`ysyx_25060170_DATA]      op2;
wire [`ysyx_25060170_IMM]       imm;
wire [`ysyx_25060170_REGADDR]   idu_dpic_rd_addr;
wire [`ysyx_25060170_PC]        pc_o;
wire [`ysyx_25060170_INST]      inst_o;
wire [4:0]                      csr_imm;
wire                            jump_ena_o;
wire [`ysyx_25060170_PC]        jump_pc_o;
wire                            id_flush_o;
wire                            id_ex_flush_o;
wire                            id_ready_o;
wire                            id_valid_o;
wire                            magic_flag;

ysyx_25060170_idu u_ysyx_25060170_idu (
     .rst                (rst)
    ,.inst_i             (inst_i)
    ,.pc_i               (pc_i)
    ,.bp_jump_i          (bp_jump_i)

    ,.ex_addr_forward    (ex_addr_forward)
    ,.ex_data_forward    (ex_data_forward)
    ,.ls_addr_forward    (ls_addr_forward)
    ,.ls_data_forward    (ls_data_forward)
    ,.wb_addr_forward    (wb_addr_forward)
    ,.wb_data_forward    (wb_data_forward)

    ,.ex_load_ena        (ex_load_ena)
    ,.ex_csr_ena         (ex_csr_ena)
    ,.ls_csr_ena         (ls_csr_ena)

    ,.rs1_data           (rs1_data)
    ,.rs2_data           (rs2_data)

    ,.rs1_addr           (rs1_addr)
    ,.rs1_ena            (rs1_ena)
    ,.rs2_addr           (rs2_addr)
    ,.rs2_ena            (rs2_ena)
    ,.rd_ena             (rd_ena)
    ,.rd_addr            (rd_addr)

    ,.alusrc_o           (alusrc_o)
    ,.lsctl_o            (lsctl_o)
    ,.wbctl_o            (wbctl_o)
    ,.op1_sel            (op1_sel)
    ,.op2_sel            (op2_sel)
    ,.load_flag_o        (load_flag_o)
    ,.csr_ena_o          (csr_ena_o)

    ,.op1                (op1)
    ,.op2                (op2)
    ,.imm                (imm)

    ,.idu_dpic_rd_addr   (idu_dpic_rd_addr)
    ,.pc_o               (pc_o)
    ,.inst_o             (inst_o)
    ,.csr_imm            (csr_imm)

    ,.jump_ena_o         (jump_ena_o)
    ,.jump_pc_o          (jump_pc_o)

    ,.if_valid_i         (if_valid_i)
    ,.ex_ready_i         (ex_ready_i)

    ,.id_flush_o         (id_flush_o)
    ,.id_ex_flush_o      (id_ex_flush_o)
    ,.id_ready_o         (id_ready_o)
    ,.id_valid_o         (id_valid_o)

    ,.magic_flag         (magic_flag)
);

// ysyx_25060170_id_ex_reg Inputs 
// reg                             clk;
// reg                             rst;
// reg  [`ysyx_25060170_INST]      inst_i;
// reg  [`ysyx_25060170_PC]        pc_i;
reg  [`ysyx_25060170_DATA]      op1_i;
reg  [`ysyx_25060170_DATA]      op2_i;
reg  [1:0]                      op1_sel_i;
reg  [2:0]                      op2_sel_i;
reg                             rd_ena_i;
reg  [`ysyx_25060170_REGADDR]   rd_addr_i;
reg  [`ysyx_25060170_REGADDR]   rs1_addr_i;
reg  [`ysyx_25060170_IMM]       imm_i;
reg  [7:0]                      alusrc_i;
reg  [3:0]                      lsctl_i;
reg  [1:0]                      wbctl_i;
reg                             csr_ena_i;
reg                             load_flag_i;
reg                             id_valid_i;
// reg                             id_flush_i;
// reg                             ex_flush_i;
// reg                             ls_flush_i;
// reg                             ex_ready_i;

// ysyx_25060170_id_ex_reg Outputs 
wire [`ysyx_25060170_INST]      inst_o;
wire [`ysyx_25060170_PC]        pc_o;
wire [`ysyx_25060170_DATA]      op1_o;
wire [`ysyx_25060170_DATA]      op2_o;
wire [1:0]                      op1_sel_o;
wire [2:0]                      op2_sel_o;
wire                            rd_ena_o;
wire [`ysyx_25060170_REGADDR]   rd_addr_o;
wire [`ysyx_25060170_REGADDR]   rs1_addr_o;
wire [`ysyx_25060170_IMM]       imm_o;
wire [7:0]                      alusrc_o;
wire [3:0]                      lsctl_o;
wire [1:0]                      wbctl_o;
wire                            csr_ena_o;
wire                            load_flag_o;

ysyx_25060170_id_ex_reg u_ysyx_25060170_id_ex_reg (
     .clk            (clk           )
    ,.rst            (rst           )
    ,.inst_i         (inst_i        )
    ,.pc_i           (pc_i          )
    ,.op1_i          (op1_i         )
    ,.op2_i          (op2_i         )
    ,.op1_sel_i      (op1_sel_i     )
    ,.op2_sel_i      (op2_sel_i     )
    ,.rd_ena_i       (rd_ena_i      )
    ,.rd_addr_i      (rd_addr_i     )
    ,.rs1_addr_i     (rs1_addr_i    )
    ,.imm_i          (imm_i         )
    ,.alusrc_i       (alusrc_i      )
    ,.lsctl_i        (lsctl_i       )
    ,.wbctl_i        (wbctl_i       )
    ,.csr_ena_i      (csr_ena_i     )
    ,.load_flag_i    (load_flag_i   )
    ,.id_valid_i     (id_valid_i    )
    ,.id_flush_i     (id_flush_i    )
    ,.ex_flush_i     (ex_flush_i    )
    ,.ls_flush_i     (ls_flush_i    )
    ,.ex_ready_i     (ex_ready_i    )
    ,.inst_o         (inst_o        )
    ,.pc_o           (pc_o          )
    ,.op1_o          (op1_o         )
    ,.op2_o          (op2_o         )
    ,.op1_sel_o      (op1_sel_o     )
    ,.op2_sel_o      (op2_sel_o     )
    ,.rd_ena_o       (rd_ena_o      )
    ,.rd_addr_o      (rd_addr_o     )
    ,.rs1_addr_o     (rs1_addr_o    )
    ,.imm_o          (imm_o         )
    ,.alusrc_o       (alusrc_o      )
    ,.lsctl_o        (lsctl_o       )
    ,.wbctl_o        (wbctl_o       )
    ,.csr_ena_o      (csr_ena_o     )
    ,.load_flag_o    (load_flag_o   )
);

// ysyx_25060170_exu Inputs
// reg                             rst;
// reg  [`ysyx_25060170_DATA]      op1_i;
// reg  [`ysyx_25060170_DATA]      op2_i;
// reg  [1:0]                      op1_sel_i;
// reg  [2:0]                      op2_sel_i;
// reg  [`ysyx_25060170_REGADDR]   rd_addr_i;
// reg  [`ysyx_25060170_REGADDR]   rs1_addr_i;
// reg  [`ysyx_25060170_IMM]       imm_i;
// reg  [`ysyx_25060170_PC]        pc_i;
reg  [7:0]                      alu_sel_i;
reg                             ls_ready_i;
// reg                             id_valid_i;

// ysyx_25060170_exu Outputs
wire                            ex_valid_o;
wire                            ex_ready_o;
wire [`ysyx_25060170_REG]       store_data_o;
wire [`ysyx_25060170_DATA]      exu_res_o;
wire [11:0]                     csr_addr_o;
wire [6:0]                      csr_ctl_o;

ysyx_25060170_exu u_ysyx_25060170_exu (
     .rst            ( rst           )
    ,.op1_i          ( op1_i         )
    ,.op2_i          ( op2_i         )
    ,.op1_sel_i      ( op1_sel_i     )
    ,.op2_sel_i      ( op2_sel_i     )
    ,.rd_addr_i      ( rd_addr_i     )
    ,.rs1_addr_i     ( rs1_addr_i    )
    ,.imm_i          ( imm_i         )
    ,.pc_i           ( pc_i          )
    ,.alu_sel_i      ( alu_sel_i     )
    ,.ls_ready_i     ( ls_ready_i    )
    ,.id_valid_i     ( id_valid_i    )

    ,.ex_valid_o     ( ex_valid_o    )
    ,.ex_ready_o     ( ex_ready_o    )
    ,.store_data_o   ( store_data_o  )
    ,.exu_res_o      ( exu_res_o     )
    ,.csr_addr_o     ( csr_addr_o    )
    ,.csr_ctl_o      ( csr_ctl_o     )
);

// ysyx_25060170_ex_ls_reg Inputs
// reg                             clk;
// reg                             rst;
// reg  [`ysyx_25060170_INST]      inst_i;
// reg  [`ysyx_25060170_PC]        pc_i;
reg  [`ysyx_25060170_REG]       store_data_i;
reg  [`ysyx_25060170_DATA]      exu_res_i;
reg  [3:0]                      ls_ctl_i;
reg  [1:0]                      wb_ctl_i;
reg  [6:0]                      csr_ctl_i;
// reg                             rd_ena_i;
// reg  [`ysyx_25060170_REGADDR]   rd_addr_i;
reg                             ex_csr_ena_i;
reg  [11:0]                     csr_addr_i;
reg                             ex_valid_i;
// reg                             ls_ready_i;
// reg                             ex_flush_i;
// reg                             ls_flush_i;

// ysyx_25060170_ex_ls_reg Outputs
wire [`ysyx_25060170_INST]      inst_o;
wire [`ysyx_25060170_PC]        pc_o;
wire [`ysyx_25060170_REG]       store_data_o;
wire [`ysyx_25060170_DATA]      exu_res_o;
wire [3:0]                      ls_ctl_o;
wire [1:0]                      wb_ctl_o;
wire [6:0]                      csr_ctl_o;
wire                            rd_ena_o;
wire [`ysyx_25060170_REGADDR]   rd_addr_o;
wire [11:0]                     csr_addr_o;
wire                            ls_csr_ena_o;
wire [`ysyx_25060170_REGADDR]   ex_rd_addr_forward_o;
wire                            ex_csr_o;
wire [`ysyx_25060170_DATA]      ex_rd_data_forward_o;

ysyx_25060170_ex_ls_reg u_ysyx_25060170_ex_ls_reg (
     .clk                    ( clk                    )
    ,.rst                    ( rst                    )
    ,.inst_i                 ( inst_i                 )
    ,.pc_i                   ( pc_i                   )
    ,.store_data_i           ( store_data_i           )
    ,.exu_res_i              ( exu_res_i              )
    ,.ls_ctl_i               ( ls_ctl_i               )
    ,.wb_ctl_i               ( wb_ctl_i               )
    ,.csr_ctl_i              ( csr_ctl_i              )
    ,.rd_ena_i               ( rd_ena_i               )
    ,.rd_addr_i              ( rd_addr_i              )
    ,.ex_csr_ena_i           ( ex_csr_ena_i           )
    ,.csr_addr_i             ( csr_addr_i             )
    ,.ex_valid_i             ( ex_valid_i             )
    ,.ls_ready_i             ( ls_ready_i             )
    ,.ex_flush_i             ( ex_flush_i             )
    ,.ls_flush_i             ( ls_flush_i             )

    ,.inst_o                 ( inst_o                 )
    ,.pc_o                   ( pc_o                   )
    ,.store_data_o           ( store_data_o           )
    ,.exu_res_o              ( exu_res_o              )
    ,.ls_ctl_o               ( ls_ctl_o               )
    ,.wb_ctl_o               ( wb_ctl_o               )
    ,.csr_ctl_o              ( csr_ctl_o              )
    ,.rd_ena_o               ( rd_ena_o               )
    ,.rd_addr_o              ( rd_addr_o              )
    ,.csr_addr_o             ( csr_addr_o             )
    ,.ls_csr_ena_o           ( ls_csr_ena_o           )
    ,.ex_rd_addr_forward_o   ( ex_rd_addr_forward_o   )
    ,.ex_csr_o               ( ex_csr_o               )
    ,.ex_rd_data_forward_o   ( ex_rd_data_forward_o   )
);


// ysyx_25060170_lsu Inputs
reg  [`ysyx_25060170_DATA]      alu_res_i;
// reg  [`ysyx_25060170_DATA]      store_data_i;
// reg  [3:0]                      ls_ctl_i;
// reg                             wb_ready_i;
// reg                             ex_valid_i;
reg  [`ysyx_25060170_DATA]      data_i; // module 中为 input reg

// ysyyx_25060170_lsu Outputs
wire                            ls_ready_o;
wire                            ls_valid_o;
wire                            ls_flush_o;
wire [`ysyx_25060170_PC]        ls_jump_pc_o;
wire                            re;
wire                            we;
wire [`ysyx_25060170_DATA]      data_o;
wire [`ysyx_25060170_DATAADDR]  raddr;
wire [`ysyx_25060170_DATAADDR]  waddr;
wire [7:0]                      wlen;
wire [7:0]                      rlen;
wire [`ysyx_25060170_DATA]      ls_data_forward_o;
wire [`ysyx_25060170_DATA]      ls_data_o;

// 实例化
ysyx_25060170_lsu u_ysyx_25060170_lsu (
     .clk            ( clk             )
    ,.rst            ( rst             )
    ,.alu_res_i      ( alu_res_i       )
    ,.store_data_i   ( store_data_i    )
    ,.ls_ctl_i       ( ls_ctl_i        )
    ,.wb_ready_i     ( wb_ready_i      )
    ,.ex_valid_i     ( ex_valid_i      )

    ,.ls_ready_o     ( ls_ready_o      )
    ,.ls_valid_o     ( ls_valid_o      )
    ,.ls_flush_o     ( ls_flush_o      )
    ,.ls_jump_pc_o   ( ls_jump_pc_o    )

    ,.re             ( re              )
    ,.we             ( we              )
    ,.data_i         ( data_i          )
    ,.data_o         ( data_o          )
    ,.raddr          ( raddr           )
    ,.waddr          ( waddr           )
    ,.wlen           ( wlen            )
    ,.rlen           ( rlen            )

    ,.ls_data_forward_o ( ls_data_forward_o )
    ,.ls_data_o         ( ls_data_o         )
);

// ysyx_25060170_ls_wb_reg Inputs

// reg  [`ysyx_25060170_INST]      inst_i;
// reg  [`ysyx_25060170_PC]        pc_i;
// reg  [1:0]                      wb_ctl_i;
reg  [`ysyx_25060170_DATA]      lsu_res_i;
reg  [`ysyx_25060170_DATA]      lsu_wb_data_i;
// reg                             rd_ena_i;
// reg  [`ysyx_25060170_REGADDR]   rd_addr_i;
// reg  [6:0]                      csr_ctl_i;
// reg  [11:0]                     csr_addr_i;
reg  [`ysyx_25060170_DATA]      ls_data_forward_i;
reg                             ls_valid_i;
// reg                             wb_ready_i;
// reg                             ex_flush_i;

// ysyx_25060170_ls_wb_reg Outputs
wire [`ysyx_25060170_INST]      inst_o;
wire [`ysyx_25060170_PC]        pc_o;
wire [1:0]                      wb_ctl_o;
wire [`ysyx_25060170_DATA]      lsu_res_o;
wire [`ysyx_25060170_DATA]      lsu_wb_data_o;
wire                            rd_ena_o;
wire [`ysyx_25060170_REGADDR]   rd_addr_o;
wire [6:0]                      csr_ctl_o;
wire [11:0]                     csr_addr_o;
wire [`ysyx_25060170_REGADDR]   ls_rd_addr_forward;
wire [`ysyx_25060170_DATA]      ls_rd_data_forward;

ysyx_25060170_ls_wb_reg u_ysyx_25060170_ls_wb_reg (
     .clk                    ( clk                  )
    ,.rst                    ( rst                  )
    ,.inst_i                 ( inst_i               )
    ,.pc_i                   ( pc_i                 )
    ,.wb_ctl_i               ( wb_ctl_i             )
    ,.lsu_res_i              ( lsu_res_i            )
    ,.lsu_wb_data_i          ( lsu_wb_data_i        )
    ,.rd_ena_i               ( rd_ena_i             )
    ,.rd_addr_i              ( rd_addr_i            )
    ,.csr_ctl_i              ( csr_ctl_i            )
    ,.csr_addr_i             ( csr_addr_i           )
    ,.ls_data_forward_i      ( ls_data_forward_i    )
    ,.ls_valid_i             ( ls_valid_i           )
    ,.wb_ready_i             ( wb_ready_i           )
    ,.ex_flush_i             ( ex_flush_i           )

    ,.inst_o                 ( inst_o               )
    ,.pc_o                   ( pc_o                 )
    ,.wb_ctl_o               ( wb_ctl_o             )
    ,.lsu_res_o              ( lsu_res_o            )
    ,.lsu_wb_data_o          ( lsu_wb_data_o        )
    ,.rd_ena_o               ( rd_ena_o             )
    ,.rd_addr_o              ( rd_addr_o            )
    ,.csr_ctl_o              ( csr_ctl_o            )
    ,.csr_addr_o             ( csr_addr_o           )
    ,.ls_rd_addr_forward     ( ls_rd_addr_forward   )
    ,.ls_rd_data_forward     ( ls_rd_data_forward   )
);

// ysyx_25060170_wbu Inputs 
// reg                             clk;
// reg                             rst;
reg  [`ysyx_25060170_DATA]      ls_rd_data_i;
// reg  [1:0]                      wb_ctl_i;
// reg  [`ysyx_25060170_DATA]      exu_res_i;
// reg  [`ysyx_25060170_PC]        pc_i;
// reg  [`ysyx_25060170_INST]      inst_i;
// reg  [`ysyx_25060170_REGADDR]   rd_addr_i;
// reg                             rd_ena_i;
// reg  [6:0]                      csr_ctl_i;
// reg  [11:0]                     csr_addr_i;
// reg                             ls_valid_i;
// reg                             id_stall_i;

// ysyx_25060170_wbu Outputs 
wire [`ysyx_25060170_DATA]      wb_data_o;
wire                            wb_ready_o;
wire                            wb_rd_ena_o;
wire [`ysyx_25060170_REGADDR]   wb_rd_addr_o;
wire [`ysyx_25060170_REGADDR]   wb_rd_addr_forward;
wire [`ysyx_25060170_DATA]      wb_rd_data_forward;
wire [`ysyx_25060170_REG]       mstatus_o;
wire [`ysyx_25060170_REG]       mepc_o;
wire [`ysyx_25060170_REG]       mtvec_o;
wire [`ysyx_25060170_REG]       mcause_o;
wire [`ysyx_25060170_INST]      wbu_dpic_inst_o;
wire [`ysyx_25060170_PC]        wbu_dpic_pc_o;
wire                            wbu_dpic_ls_valid_o;
wire                            wbu_dpic_id_stall_o;

ysyx_25060170_wbu u_ysyx_25060170_wbu (
     .clk                   ( clk                   )
    ,.rst                   ( rst                   )
    ,.ls_rd_data_i          ( ls_rd_data_i          )
    ,.wb_ctl_i              ( wb_ctl_i              )
    ,.exu_res_i             ( exu_res_i             )
    ,.pc_i                  ( pc_i                  )
    ,.inst_i                ( inst_i                )
    ,.rd_addr_i             ( rd_addr_i             )
    ,.rd_ena_i              ( rd_ena_i              )
    ,.csr_ctl_i             ( csr_ctl_i             )
    ,.csr_addr_i            ( csr_addr_i            )
    ,.ls_valid_i            ( ls_valid_i            )
    ,.id_stall_i            ( id_stall_i            )

    ,.wb_data_o             ( wb_data_o             )
    ,.wb_ready_o            ( wb_ready_o            )
    ,.wb_rd_ena_o           ( wb_rd_ena_o           )
    ,.wb_rd_addr_o          ( wb_rd_addr_o          )
    ,.wb_rd_addr_forward    ( wb_rd_addr_forward    )
    ,.wb_rd_data_forward    ( wb_rd_data_forward    )
    ,.mstatus_o             ( mstatus_o             )
    ,.mepc_o                ( mepc_o                )
    ,.mtvec_o               ( mtvec_o               )
    ,.mcause_o              ( mcause_o              )
    ,.wbu_dpic_inst_o       ( wbu_dpic_inst_o       )
    ,.wbu_dpic_pc_o         ( wbu_dpic_pc_o         )
    ,.wbu_dpic_ls_valid_o   ( wbu_dpic_ls_valid_o   )
    ,.wbu_dpic_id_stall_o   ( wbu_dpic_id_stall_o   )
);

// ysyx_25060170_regfile Inputs 
reg  [`ysyx_25060170_REGADDR]   waddr;
reg  [`ysyx_25060170_REG]       wdata;
reg                             wen;
reg                             ren1;
reg                             ren2;
reg  [`ysyx_25060170_REGADDR]   raddr1;
reg  [`ysyx_25060170_REGADDR]   raddr2;

// ysyx_25060170_regfile Outputs 
wire [`ysyx_25060170_REG]       rdata1;
wire [`ysyx_25060170_REG]       rdata2;
wire [`ysyx_25060170_REG]       regs0;
wire [`ysyx_25060170_REG]       regs1;
wire [`ysyx_25060170_REG]       regs2;
wire [`ysyx_25060170_REG]       regs3;
wire [`ysyx_25060170_REG]       regs4;
wire [`ysyx_25060170_REG]       regs5;
wire [`ysyx_25060170_REG]       regs6;
wire [`ysyx_25060170_REG]       regs7;
wire [`ysyx_25060170_REG]       regs8;
wire [`ysyx_25060170_REG]       regs9;
wire [`ysyx_25060170_REG]       regs10;
wire [`ysyx_25060170_REG]       regs11;
wire [`ysyx_25060170_REG]       regs12;
wire [`ysyx_25060170_REG]       regs13;
wire [`ysyx_25060170_REG]       regs14;
wire [`ysyx_25060170_REG]       regs15;
wire [`ysyx_25060170_REG]       regs16;
wire [`ysyx_25060170_REG]       regs17;
wire [`ysyx_25060170_REG]       regs18;
wire [`ysyx_25060170_REG]       regs19;
wire [`ysyx_25060170_REG]       regs20;
wire [`ysyx_25060170_REG]       regs21;
wire [`ysyx_25060170_REG]       regs22;
wire [`ysyx_25060170_REG]       regs23;
wire [`ysyx_25060170_REG]       regs24;
wire [`ysyx_25060170_REG]       regs25;
wire [`ysyx_25060170_REG]       regs26;
wire [`ysyx_25060170_REG]       regs27;
wire [`ysyx_25060170_REG]       regs28;
wire [`ysyx_25060170_REG]       regs29;
wire [`ysyx_25060170_REG]       regs30;
wire [`ysyx_25060170_REG]       regs31;

ysyx_25060170_regfile u_ysyx_25060170_regfile (
     .clk    ( clk    )
    ,.rst    ( rst    )
    ,.waddr  ( waddr  )
    ,.wdata  ( wdata  )
    ,.wen    ( wen    )
    ,.ren1   ( ren1   )
    ,.ren2   ( ren2   )
    ,.raddr1 ( raddr1 )
    ,.raddr2 ( raddr2 )

    ,.rdata1 ( rdata1 )
    ,.rdata2 ( rdata2 )

    ,.regs0  ( regs0  )
    ,.regs1  ( regs1  )
    ,.regs2  ( regs2  )
    ,.regs3  ( regs3  )
    ,.regs4  ( regs4  )
    ,.regs5  ( regs5  )
    ,.regs6  ( regs6  )
    ,.regs7  ( regs7  )
    ,.regs8  ( regs8  )
    ,.regs9  ( regs9  )
    ,.regs10 ( regs10 )
    ,.regs11 ( regs11 )
    ,.regs12 ( regs12 )
    ,.regs13 ( regs13 )
    ,.regs14 ( regs14 )
    ,.regs15 ( regs15 )
    ,.regs16 ( regs16 )
    ,.regs17 ( regs17 )
    ,.regs18 ( regs18 )
    ,.regs19 ( regs19 )
    ,.regs20 ( regs20 )
    ,.regs21 ( regs21 )
    ,.regs22 ( regs22 )
    ,.regs23 ( regs23 )
    ,.regs24 ( regs24 )
    ,.regs25 ( regs25 )
    ,.regs26 ( regs26 )
    ,.regs27 ( regs27 )
    ,.regs28 ( regs28 )
    ,.regs29 ( regs29 )
    ,.regs30 ( regs30 )
    ,.regs31 ( regs31 )
);

endmodule


 
