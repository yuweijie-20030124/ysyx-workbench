`include "define.v"

module ysyx_25060170_fishtailcore(
 input wire     clk			
,input wire     rst		    		
);

// ysyx_25060170_bpu Inputs
// wire      [`ysyx_25060170_PC]       if_id_pc;
wire      [`ysyx_25060170_INST]     if_id_inst;

// ysyx_25060170_bpu Outputs
wire [`ysyx_25060170_PC]        bp_if_pc;  
wire                            bp_predict;
wire [`ysyx_25060170_REG]       bp_rs1_data;
wire [`ysyx_25060170_REGADDR]   bp_rs1_addr;
wire                            bp_rs1_ena;
// wire                            bp_if_jal_jalr;        
// wire                            bp_if_branch;
wire                            bpu_ifu_inst_bxx;
wire                            bpu_ifu_jal_jalr;

ysyx_25060170_bpu u_ysyx_25060170_bpu (
     .clk                ( clk                  )//<<i<<  
    ,.rst                ( rst                  )//<<i<<
    // ,.branch             ( id_jump              )//<<i<<  
    // ,.pc_before_bxx      ( id_ex_reg_pc         )//<<i<<
    ,.branch_success     ( ex_branch            )//<<i<<
    ,.idu_bxx_inst       ( if_id_reg_inst_bxx   )//<<i<<
    // ,.bxx_imm            ( id_ex_reg_imm        )//<<i<<  
    ,.inst_i             ( if_id_inst           )//<<i<<      
    ,.pc_i               ( if_id_pc             )//<<i<<
    ,.ls_wb_forward_data ( ls_rd_data_forward   )//<<i<<
    ,.ls_wb_forward_addr ( ls_rd_addr_forward   )//<<i<<
    ,.ex_ls_forward_data ( ex_rd_data_forward   )//<<i<<
    ,.ex_ls_forward_addr ( ex_rd_addr_forward   )//<<i<<
    ,.ls_mem_forward_data( ls_rd_data_forward   )//<<i<<
    ,.ls_mem_forward_addr( ls_rd_addr_forward   )//<<i<<
    ,.wb_rd_addr_forward ( wb_rd_addr_forward   )//<<i<<
    ,.wb_rd_data_forward ( wb_rd_data_forward   )//<<i<<
    ,.bp_rs1_data_i      ( bp_rs1_data          )//<<i<<
    ,.bp_rs1_addr_o      ( bp_rs1_addr          )//>>o>>
    ,.bp_rs1_ena_o       ( bp_rs1_ena           )//>>o>>  
    ,.bp_pc_o            ( bp_if_pc             )//>>o>>
    // ,.jal_jalr_o         ( bp_if_jal_jalr       )//>>o>>
    ,.inst_bxx_o         ( bpu_ifu_inst_bxx    )//>>o>>
    ,.jal_jalr_o         ( bpu_ifu_jal_jalr     )//>>o>>
    // ,.branch_o           ( bp_if_branch         )//>>o>> jal jalr
    ,.bp_predict_o       ( bp_predict           )//>>o>> 预测bxx跳转则1，不调转则2
);

// ysyx_25060170_ifu Inputs
// wire                             id_if_pc_jump  ;   
wire  [`ysyx_25060170_PC]        id_jump_pc     ; 
wire                             ls_pc_jump     ;  
wire  [`ysyx_25060170_PC]        ls_jump_pc     ;  
// reg  [`ysyx_25060170_PC]        bp_jump_pc;
// reg                             inst_valid;
wire                             id_ready       ;
wire                             id_stall       ;
// reg                             id_stall;
// reg             inst_i                   ;
// reg             pc_i                     ;

// ysyx_25060170_ifu Outputs
wire                                if_valid;
wire      [`ysyx_25060170_PC]       if_id_pc;
wire      [`ysyx_25060170_PC]       if_id_next_pc;
// wire      [`ysyx_25060170_INST]     if_id_inst;
wire      [`ysyx_25060170_INST]     dpic_ifu_inst        ;
wire                                if_id_inst_bxx;
// wire      [`ysyx_25060170_PC]       if_pc;
// wire      [`ysyx_25060170_PC]       if_next_pc; 
//if_next_pc also use dpic to get instruction

ysyx_25060170_ifu  u_ysyx_25060170_ifu (
     .clk              (clk              )//<<i<<
    ,.rst              (rst              )//<<i<<
    // ,.id_pc_jump_i     (id_if_pc_jump    )//<<i<<  
    // ,.id_pc_i          (id_jump_pc       )//<<i<<  
    ,.ls_pc_jump_i     (ls_pc_jump       )//<<i<<  
    ,.ls_pc_i          (ls_jump_pc       )//<<i<<
    ,.bp_pc_jump_i     (bpu_ifu_jal_jalr )//<<i<<  jal jalr
    ,.bp_predict_i     (bp_predict       )//<<i<<  bpu预测指令会跳转
    ,.bp_pc_i          (bp_if_pc         )//<<i<<  
    ,.id_bxx_error_i   (id_predict_error )//<<i<<
    ,.id_bxx_error_pc_i(id_jump_pc       )//<<i<<
    // ,.jal_jalr_i       (bp_if_jal_jalr   )//<<i<<
    ,.inst_bxx_i       (bpu_ifu_inst_bxx )//<<i<< bxx
    // ,.inst_valid_i     (inst_valid_i     )//<<i<<
    ,.id_ready_i       (id_ready         )//<<i<<
    ,.id_stall_i       (id_stall         )//<<i<<   bp_if_pc
    ,.inst_i           (dpic_ifu_inst    )//<<i<<
    ,.if_valid_o       (if_valid         )//>>o>>  
    ,.inst_o           (if_id_inst       )//>>o>>
    ,.pc_o             (if_id_pc         )//>>o>>  
    ,.next_pc_o        (if_id_next_pc    )//>>o>>  
    ,.inst_bxx_o       (if_id_inst_bxx   )//>>o>>
);

// ysyx_25060170_if_id_reg Inputs
// reg  [`ysyx_25060170_PC]        pc_i;
// reg  [`ysyx_25060170_INST]      inst_i;
// reg                             bp_jump_i;
// reg                             id_stall_i;
// reg                             id_ready_i;
wire                               ls_flush;
wire                               id_flush;


// ysyx_25060170_if_id_reg Outputs
wire [`ysyx_25060170_PC]        if_id_reg_pc;
wire [`ysyx_25060170_PC]        if_id_reg_next_pc;
wire [`ysyx_25060170_INST]      if_id_reg_inst;
// wire                            id_jump;
wire                            if_id_reg_inst_bxx  ;
wire                            if_id_reg_bp_jump;
wire                            if_id_valid;
// wire [`ysyx_25060170_PC]        bp_jalr_pc_i;
// wire [`ysyx_25060170_PC]        bp_jalr_pc_o;

ysyx_25060170_if_id_reg u_ysyx_25060170_if_id_reg (
     .clk           ( clk               ) //<<i<<
    ,.rst           ( rst               ) //<<i<<
    ,.pc_i          ( if_id_pc          ) //<<i<<
    ,.next_pc_i     ( if_id_next_pc     ) //<<i<<
    ,.inst_i        ( if_id_inst        ) //<<i<<
    ,.bxx_inst_i    ( if_id_inst_bxx    ) //<<i<< 上一条指令是不是bxx
    ,.bp_jump_i     ( bp_predict        ) //<<i<< 上一条bxx指令bpu预测成功与否
    // ,.bp_jalr_pc_i  ( bp_jalr_pc_i      )
    ,.if_valid_i    ( if_valid          ) //<<i<<
    ,.id_flush_i    ( id_flush          ) //<<i<<
    ,.ls_flush_i    ( ls_flush          ) //<<i<<
    ,.id_stall_i    ( id_stall          ) //<<i<<
    ,.id_ready_i    ( id_ready          ) //<<i<<
    
    ,.if_valid_o    ( if_id_valid       ) //>>o>>
    ,.pc_o          ( if_id_reg_pc      ) //>>o>>
    ,.next_pc_o     ( if_id_reg_next_pc ) //>>o>>
    ,.inst_o        ( if_id_reg_inst    ) //>>o>>
    ,.inst_bxx_o    ( if_id_reg_inst_bxx    ) //>>o>>
    ,.bp_jump_o     ( if_id_reg_bp_jump  ) //>>o>>
    // ,.bp_jalr_pc_o  ( bp_jalr_pc_o      ) //>>o>>
    // ,.id_jump_o     ( id_jump           ) //>>o>>
);

// ysyx_25060170_idu Inputs 
// reg                             rst;
// reg  [`ysyx_25060170_INST]      inst_i;
// reg  [`ysyx_25060170_PC]        pc_i;
// reg                             bp_jump_i;
// wire                             ex_load_ena;
wire                             ex_csr_ena;
wire                             ls_csr_ena;
wire  [`ysyx_25060170_REG]       rf_id_rs1_data;
wire  [`ysyx_25060170_REG]       rf_id_rs2_data;
// reg                             if_valid_i;
wire                             ex_ready;

// ysyx_25060170_idu Outputs 
wire [`ysyx_25060170_REGADDR]   idu_rs1_addr;
wire                            idu_rs1_ena;
wire [`ysyx_25060170_REGADDR]   idu_rs2_addr;
wire                            idu_rs2_ena;
wire                            idu_rd_ena;
wire [`ysyx_25060170_REGADDR]   idu_rd_addr;
wire [7:0]                      idu_alusrc;
wire [3:0]                      idu_lsctl;
wire [1:0]                      idu_wbctl;
wire [1:0]                      idu_op1_sel;
wire [2:0]                      idu_op2_sel;
wire                            idu_load_flag;
wire                            idu_csr_ena;
wire [`ysyx_25060170_DATA]      idu_op1;
wire [`ysyx_25060170_DATA]      idu_op2;
wire [`ysyx_25060170_IMM]       idu_imm;
wire [`ysyx_25060170_REGADDR]   idu_dpic_rd_addr;
wire [`ysyx_25060170_PC]        idu_pc;
wire [`ysyx_25060170_PC]        idu_next_pc;
wire [`ysyx_25060170_INST]      idu_inst;
wire [`ysyx_25060170_REGADDR]   idu_csr_imm;
wire                            id_predict_error;
// wire [`ysyx_25060170_REGADDR]   store_addr;
// wire                            id_if_pc_jump;
// wire [`ysyx_25060170_PC]        id_jump_pc;
// wire                            id_flush;
// wire                            id_ex_flush_o;
wire                            ex_branch;
wire                            magic_flag;

ysyx_25060170_idu u_ysyx_25060170_idu (
     .rst                (rst                   )//<<i<<
    ,.inst_i             (if_id_reg_inst        )//<<i<<
    ,.pc_i               (if_id_reg_pc          )//<<i<<
    ,.next_pc_i          (if_id_reg_next_pc     )//<<i<<
    ,.bp_jump_i          (if_id_reg_bp_jump     )//<<i<<
    ,.inst_bxx_i         (if_id_reg_inst_bxx    )//<<i<<

    ,.ex_addr_forward    (ex_rd_addr_forward    )//<<i<<
    ,.ex_data_forward    (ex_rd_data_forward    )//<<i<<
    // ,.ex_op2_addr_forward(ex_op2_addr_forward   )//<<i<<
    // ,.ex_op2_data_forward(ex_op2_data_forward   )//<<i<<
    ,.ls_addr_forward    (ls_rd_addr_forward    )//<<i<<
    ,.ls_data_forward    (ls_rd_data_forward    )//<<i<<
    ,.mem_data_forward   (mem_rd_data_forward   )//<<i<<
    ,.mem_addr_forward   (mem_rd_addr_forward   )//<<i<<
    ,.wb_addr_forward    (wb_rd_addr_forward    )//<<i<<

    ,.wb_data_forward    (wb_rd_data_forward    )//<<i<<

    ,.ex_load_ena        (id_ex_reg_load_flag   )//<<i<<
    ,.ls_load_ena        (ex_ls_reg_load_flag   )//<<i<<
    // ,.ex_valid_i         (ex_ls_valid           )//<<i<<
    ,.ex_valid_i         (ex_valid           )//<<i<<
    // ,.ls_valid_i         (ls_mem_valid          )//<<i<<
    ,.ls_valid_i         (ls_valid          )//<<i<<
    ,.mem_load_ena       (ls_mem_reg_load_flag  )//<<i<<
    ,.wb_load_ena        (mem_wb_reg_load_flag  )//<<i<<
    ,.ex_csr_ena         (ex_csr_ena            )//<<i<<
    ,.ls_csr_ena         (ls_csr_ena            )//<<i<<

    ,.rs1_data           (rf_id_rs1_data        )//<<i<<
    ,.rs2_data           (rf_id_rs2_data        )//<<i<<

    ,.rs1_addr           (idu_rs1_addr          )//>>O>>
    ,.rs1_ena            (idu_rs1_ena           )//>>O>>
    ,.rs2_addr           (idu_rs2_addr          )//>>O>>
    ,.rs2_ena            (idu_rs2_ena           )//>>O>>
    ,.rd_ena             (idu_rd_ena            )//>>O>>
    ,.rd_addr            (idu_rd_addr           )//>>O>>

    ,.alusrc_o           (idu_alusrc            )//>>O>>
    ,.lsctl_o            (idu_lsctl             )//>>O>>
    ,.wbctl_o            (idu_wbctl             )//>>O>>
    ,.op1_sel            (idu_op1_sel           )//>>O>>
    ,.op2_sel            (idu_op2_sel           )//>>O>>
    ,.load_flag_o        (idu_load_flag         )//>>O>>
    ,.csr_ena_o          (idu_csr_ena           )//>>O>>

    ,.op1                (idu_op1               )//>>O>>
    ,.op2                (idu_op2               )//>>O>>
    ,.imm                (idu_imm               )//>>O>>

    ,.idu_dpic_rd_addr   (idu_dpic_rd_addr      )//>>O>>
    ,.pc_o               (idu_pc                )//>>O>>
    ,.next_pc_o          (idu_next_pc           )//>>O>>
    ,.inst_o             (idu_inst              )//>>O>>
    ,.csr_imm_o          (idu_csr_imm           )//>>O>>
    // ,.store_addr_o       (store_addr            )//>>o>>

    ,.predict_error_o    (id_predict_error     )//>>O>>    
    ,.predict_revise_pc   (id_jump_pc           )//>>O>> 
    ,.bp_predict_success  (ex_branch            )//>>O>>   

    ,.if_valid_i         (if_id_valid           )//<<i<<   
    ,.ex_ready_i         (ex_ready              )//<<i<<   
    ,.id_flush_o         (id_flush              )//>>O>>
    ,.id_stall_o         (id_stall              )//>>O>>
    ,.id_ready_o         (id_ready              )//>>O>>
    ,.id_valid_o         (id_valid              )//>>O>>
    
    ,.magic_flag         (magic_flag            )//>>O>>
);

// ysyx_25060170_id_ex_reg Inputs 
// reg                             clk;
// reg                             rst;
// reg  [`ysyx_25060170_INST]      inst_i;
// reg  [`ysyx_25060170_PC]        pc_i;
wire  [7:0]                      id_ex_reg_alusrc;
// wire  [3:0]                      lsctl_i;
// wire  [1:0]                      wbctl_i;
// wire                             csr_ena_i;
// wire                             load_flag_i;
wire                             id_valid;
// reg                             id_flush_i;
// reg                             ex_flush_i;
// reg                             ls_flush_i;
// reg                             ex_ready_i;
wire  [`ysyx_25060170_PC]       id_ex_reg_pc;

// ysyx_25060170_id_ex_reg Outputs 
wire [`ysyx_25060170_INST]      id_ex_reg_inst;
// wire [`ysyx_25060170_PC]        id_ex_reg_pc;
wire [`ysyx_25060170_PC]        id_ex_reg_next_pc;
wire [`ysyx_25060170_DATA]      id_ex_reg_op1;
wire [`ysyx_25060170_DATA]      id_ex_reg_op2;
wire [1:0]                      id_ex_reg_op1_sel;
wire [2:0]                      id_ex_reg_op2_sel;
wire                            id_ex_reg_rd_ena;
wire [`ysyx_25060170_REGADDR]   id_ex_reg_rd_addr;
wire [`ysyx_25060170_REGADDR]   id_ex_reg_rs1_addr;
// wire [`ysyx_25060170_REGADDR]   id_ex_reg_rs2_addr;
wire [`ysyx_25060170_IMM]       id_ex_reg_imm;
// wire [7:0]                      alusrc_o;
wire [3:0]                      id_ex_reg_lsctl;
wire [1:0]                      id_ex_reg_wbctl;
// wire                            id_ex_reg_csr_ena;
wire                            id_ex_reg_load_flag;
// wire                            id_ex_pipeline_idstall;
wire                            id_ex_valid;
ysyx_25060170_id_ex_reg u_ysyx_25060170_id_ex_reg (
     .clk                   (clk                   )//<<i<<
    ,.rst                   (rst                   )//<<i<<
    ,.inst_i                (idu_inst              )//<<i<<
    ,.pc_i                  (idu_pc                )//<<i<<
    ,.next_pc_i             (idu_next_pc           )//<<i<<
    ,.op1_i                 (idu_op1               )//<<i<<
    ,.op2_i                 (idu_op2               )//<<i<<
    ,.op1_sel_i             (idu_op1_sel           )//<<i<<
    ,.op2_sel_i             (idu_op2_sel           )//<<i<<
    ,.rd_ena_i              (idu_rd_ena            )//<<i<<
    ,.rd_addr_i             (idu_rd_addr           )//<<i<<
    ,.rs1_addr_i            (idu_csr_imm           )//<<i<<
    // ,.rs2_addr_i            (store_addr            )//<<i<<
    ,.imm_i                 (idu_imm               )//<<i<<
    ,.alusrc_i              (idu_alusrc            )//<<i<<
    ,.lsctl_i               (idu_lsctl             )//<<i<<
    ,.wbctl_i               (idu_wbctl             )//<<i<<
    ,.csr_ena_i             (idu_csr_ena           )//<<i<<
    ,.load_flag_i           (idu_load_flag         )//<<i<<
    // ,.pipeline_id_stall_i   (id_stall              )//<<i<<         
    ,.id_valid_i            (id_valid              )//<<i<<
    ,.id_flush_i            (id_flush              )//<<i<<
    ,.id_stall_i            (id_stall              )//<<i<<
    ,.ls_flush_i            (ls_flush              )//<<i<<
    ,.ex_ready_i            (ex_ready              )//<<i<<
    ,.id_valid_o            (id_ex_valid           )//>>o>>

    ,.inst_o                (id_ex_reg_inst        )//>>o>>
    ,.pc_o                  (id_ex_reg_pc          )//>>o>>
    ,.next_pc_o             (id_ex_reg_next_pc     )//>>o>>
    ,.op1_o                 (id_ex_reg_op1         )//>>o>>
    ,.op2_o                 (id_ex_reg_op2         )//>>o>>
    ,.op1_sel_o             (id_ex_reg_op1_sel     )//>>o>>
    ,.op2_sel_o             (id_ex_reg_op2_sel     )//>>o>>
    ,.rd_ena_o              (id_ex_reg_rd_ena      )//>>o>>
    ,.rd_addr_o             (id_ex_reg_rd_addr     )//>>o>>
    ,.rs1_addr_o            (id_ex_reg_rs1_addr    )//>>o>>
    // ,.rs2_addr_o            (id_ex_reg_rs2_addr    )//>>o>>
    ,.imm_o                 (id_ex_reg_imm         )//>>o>>
    ,.alusrc_o              (id_ex_reg_alusrc      )//>>o>>
    ,.lsctl_o               (id_ex_reg_lsctl       )//>>o>>
    ,.wbctl_o               (id_ex_reg_wbctl       )//>>o>>
    ,.csr_ena_o             (ex_ls_reg_ls_csr_ena  )//>>o>>
    ,.load_flag_o           (id_ex_reg_load_flag   )//>>o>>
    // ,.pipeline_id_stall_o   (id_ex_pipeline_idstall)//>>o>>
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
// wire  [7:0]                      alu_sel_i;
wire                             ls_ready;
// reg                             id_valid_i;

// ysyx_25060170_exu Outputs
wire [`ysyx_25060170_INST]      exu_inst;
wire [`ysyx_25060170_PC]        exu_pc;
wire [`ysyx_25060170_PC]        exu_next_pc;
wire                            ex_valid;
// wire                            ex_ready;
wire [`ysyx_25060170_REG]       exu_store_data;
wire [`ysyx_25060170_DATA]      exu_res;
wire [11:0]                     exu_csr_addr;
wire [6:0]                      exu_csr_ctl;
// wire                            exu_pipeline_idstall;

ysyx_25060170_exu u_ysyx_25060170_exu (
     .rst                   ( rst                       )//<<i<<
    ,.op1_i                 ( id_ex_reg_op1             )//<<i<<
    ,.op2_i                 ( id_ex_reg_op2             )//<<i<<
    ,.op1_sel_i             ( id_ex_reg_op1_sel         )//<<i<<
    ,.op2_sel_i             ( id_ex_reg_op2_sel         )//<<i<<
    ,.rd_addr_i             ( id_ex_reg_rd_addr         )//<<i<<
    ,.rs1_addr_i            ( id_ex_reg_rs1_addr        )//<<i<<
    // ,.rs2_addr_i            ( id_ex_reg_rs2_addr        )//<<i<<
    ,.imm_i                 ( id_ex_reg_imm             )//<<i<<
    ,.inst_i                ( id_ex_reg_inst            )//<<i<<
    ,.pc_i                  ( id_ex_reg_pc              )//<<i<<
    ,.next_pc_i             ( id_ex_reg_next_pc         )//<<i<<
    ,.alu_sel_i             ( id_ex_reg_alusrc          )//<<i<<
    // ,.pipeline_id_stall_i   ( id_ex_pipeline_idstall    )//<<i<<
    ,.ls_ready_i            ( ls_ready                  )//<<i<<
    ,.id_valid_i            ( id_ex_valid               )//<<i<<

    ,.inst_o                ( exu_inst                  )//>>o>>
    ,.pc_o                  ( exu_pc                    )//>>o>>
    ,.next_pc_o             ( exu_next_pc               )//>>o>>
    ,.ex_valid_o            ( ex_valid                  )//>>o>>
    ,.ex_ready_o            ( ex_ready                  )//>>o>>
    ,.store_data_o          ( exu_store_data            )//>>o>>
    ,.exu_res_o             ( exu_res                   )//>>o>>
    ,.csr_addr_o            ( exu_csr_addr              )//>>o>>
    ,.csr_ctl_o             ( exu_csr_ctl               )//>>o>>
    // ,.rs2_addr_o            ( id_ex_reg_rs2_addr        )//>>o>>
    // ,.pipeline_id_stall_o   ( exu_pipeline_idstall      )//>>o>>
);

// ysyx_25060170_ex_ls_reg Inputs
// reg                             clk;
// reg                             rst;
reg  [`ysyx_25060170_INST]       ex_ls_reg_inst;
// reg  [`ysyx_25060170_PC]        pc_i;
wire  [`ysyx_25060170_REG]       ex_ls_reg_store_data;
wire  [`ysyx_25060170_DATA]      ex_ls_reg_exu_res;
wire  [3:0]                      ex_ls_reg_ls_ctl;
wire  [1:0]                      ex_ls_reg_wb_ctl;
wire  [6:0]                      ex_ls_reg_csr_ctl;
reg                              ex_ls_reg_rd_ena;
reg  [`ysyx_25060170_REGADDR]    ex_ls_reg_rd_addr;
wire                             ex_ls_reg_ls_csr_ena;
wire  [11:0]                     ex_ls_reg_csr_addr;
// reg                             ls_ready_i;
// reg                             ex_flush_i;
// reg                             ls_flush_i;

// ysyx_25060170_ex_ls_reg Outputs
// wire [`ysyx_25060170_INST]      inst_o;
wire [`ysyx_25060170_PC]         ex_ls_reg_pc;
wire [`ysyx_25060170_PC]         ex_ls_reg_next_pc;
// wire                            rd_ena_o;
// wire [`ysyx_25060170_REGADDR]   rd_addr_o;
// wire [11:0]                     csr_addr_o;
// wire                            ls_csr_ena_o;
wire  [`ysyx_25060170_REGADDR]   ex_rd_addr_forward;
wire  [`ysyx_25060170_DATA]      ex_rd_data_forward;
// wire  [`ysyx_25060170_DATA]      ex_op2_data_forward;
// wire  [`ysyx_25060170_REGADDR]   ex_op2_addr_forward;
// wire                             ex_ls_pipeline_idstall;
wire                             ex_ls_valid;
wire                             ex_ls_reg_load_flag;

ysyx_25060170_ex_ls_reg u_ysyx_25060170_ex_ls_reg (
     .clk                    ( clk                    )//<<i<<
    ,.rst                    ( rst                    )//<<i<<
    ,.inst_i                 ( exu_inst               )//<<i<<
    ,.pc_i                   ( exu_pc                 )//<<i<<
    ,.next_pc_i              ( exu_next_pc            )//<<i<<
    ,.store_data_i           ( exu_store_data         )//<<i<<
    ,.exu_res_i              ( exu_res                )//<<i<<
    ,.load_flag_i            ( id_ex_reg_load_flag    )//<<i<<
    ,.ls_ctl_i               ( id_ex_reg_lsctl        )//<<i<<
    ,.wb_ctl_i               ( id_ex_reg_wbctl        )//<<i<<
    ,.csr_ctl_i              ( exu_csr_ctl            )//<<i<<
    ,.rd_ena_i               ( id_ex_reg_rd_ena       )//<<i<<
    ,.rd_addr_i              ( id_ex_reg_rd_addr      )//<<i<<
    ,.ex_csr_ena_i           ( ex_ls_reg_ls_csr_ena   )//<<i<<
    ,.csr_addr_i             ( exu_csr_addr           )//<<i<<
    // ,.store_addr_i           ( id_ex_reg_rs2_addr     )//<<i<<
    ,.ex_valid_i             ( ex_valid               )//<<i<<
    ,.ls_ready_i             ( ls_ready               )//<<i<<
    ,.ls_flush_i             ( ls_flush               )//<<i<<
    // ,.pipeline_id_stall_i    ( exu_pipeline_idstall   )//<<i<<
    // ,.id_flush_i             ( id_flush             )//<<i<<
    //forwarding
    // ,.ex_op2_data_forward_o  ( ex_op2_data_forward    )//<<i<<
    // ,.ex_op2_addr_forward_o  ( ex_op2_addr_forward    )//<<i<<
    //output
    ,.ex_valid_o             ( ex_ls_valid            )//>>o>>
    ,.inst_o                 ( ex_ls_reg_inst         )//>>o>>
    ,.pc_o                   ( ex_ls_reg_pc           )//>>o>>
    ,.next_pc_o              ( ex_ls_reg_next_pc      )//>>o>>  
    ,.store_data_o           ( ex_ls_reg_store_data   )//>>o>>
    ,.exu_res_o              ( ex_ls_reg_exu_res      )//>>o>>
    ,.load_flag_o            ( ex_ls_reg_load_flag    )//>>o>>
    ,.ls_ctl_o               ( ex_ls_reg_ls_ctl       )//>>o>>
    ,.wb_ctl_o               ( ex_ls_reg_wb_ctl       )//>>o>>
    ,.csr_ctl_o              ( ex_ls_reg_csr_ctl      )//>>o>>
    ,.rd_ena_o               ( ex_ls_reg_rd_ena       )//>>o>>
    ,.rd_addr_o              ( ex_ls_reg_rd_addr      )//>>o>>
    ,.csr_addr_o             ( ex_ls_reg_csr_addr     )//>>o>>
    ,.ls_csr_ena_o           ( ls_csr_ena             )//>>o>>
    ,.ex_rd_addr_forward_o   ( ex_rd_addr_forward     )//>>o>>
    ,.ex_csr_o               ( ex_csr_ena             )//>>o>>
    ,.ex_rd_data_forward_o   ( ex_rd_data_forward     )//>>o>>
    // ,.pipeline_id_stall_o    ( ex_ls_pipeline_idstall )//>>o>>
);


// ysyx_25060170_lsu Inputs
// wire  [`ysyx_25060170_DATA]      alu_res_i;
// reg  [`ysyx_25060170_DATA]      store_data_i;
// reg  [3:0]                      ls_ctl_i;
// reg                             wb_ready_i;
// reg                             ex_valid_i;


// ysyyx_25060170_lsu Outputs

// wire                            ls_flush;
// wire [`ysyx_25060170_PC]        ls_jump_pc_o;
// wire  [`ysyx_25060170_DATA]     dpic_ls_data; // module 中为 input reg
wire                            ls_valid        ;
// wire                            ls_dpic_re      ;
wire                            ls_dpic_we      ;
wire [`ysyx_25060170_DATA]      ls_dpic_data    ;
wire [`ysyx_25060170_DATAADDR]  ls_dpic_raddr   ;
wire [`ysyx_25060170_DATAADDR]  ls_dpic_waddr   ;
wire [7:0]                      ls_dpic_wlen    ;
wire [7:0]                      ls_dpic_rlen    ;
// wire [`ysyx_25060170_DATA]      ls_data_forward ;
// wire [`ysyx_25060170_DATA]      ls_wb_wbdata;
wire [`ysyx_25060170_PC]        ls_pc;
wire [`ysyx_25060170_PC]        ls_next_pc;
wire [`ysyx_25060170_INST]      ls_inst;
wire                            ls_mem_re;
// wire                            ls_pipeline_idstall;

// 实例化ex_ls_reg_wb_ctl
ysyx_25060170_lsu u_ysyx_25060170_lsu (
     .clk                   ( clk                      )//<<i<<
    ,.rst                   ( rst                      )//<<i<<
    ,.pc_i                  ( ex_ls_reg_pc             )//<<i<<
    ,.next_pc_i             ( ex_ls_reg_next_pc        )//<<i<<
    ,.inst_i                ( ex_ls_reg_inst           )//<<i<<
    ,.alu_res_i             ( ex_ls_reg_exu_res        )//<<i<<
    ,.store_data_i          ( ex_ls_reg_store_data     )//<<i<<
    ,.ls_ctl_i              ( ex_ls_reg_ls_ctl         )//<<i<<
    ,.mem_ready_i           ( mem_ready                )//<<i<<

    // ,.pipeline_id_stall_i   ( ex_ls_pipeline_idstall   )//<<i<<
    //Harzard
    ,.ex_valid_i            ( ex_ls_valid              )//<<i<<
    ,.ls_ready_o            ( ls_ready                 )//>>o>> 
    ,.ls_valid_o            ( ls_valid                 )//>>o>> 
    ,.ls_flush_o            ( ls_flush                 )//>>o>>
        //output 
    ,.ls_jump_o             ( ls_pc_jump               )//>>o>>  
    ,.ls_jump_pc_o          ( ls_jump_pc               )//>>o>>
    ,.re                    ( ls_mem_re                )//>>o>> 
    // ,.pipeline_id_stall_o   ( ls_pipeline_idstall      )//>>o>>
    //dpic

    ,.we                    ( ls_dpic_we               )//>>o>> 
    // ,.data_i                (                )//<<i<<
    ,.data_o                ( ls_dpic_data             )//>>o>> 
    ,.raddr                 ( ls_dpic_raddr            )//>>o>> 
    ,.waddr                 ( ls_dpic_waddr            )//>>o>> 
    ,.wlen                  ( ls_dpic_wlen             )//>>o>> 
    ,.rlen                  ( ls_dpic_rlen             )//>>o>> 
    //forwarding
    // ,.ls_data_forward_o     ( ls_data_forward          )//>>o>>
    // ,.ls_data_o             ( ls_wb_wbdata             )//>>o>>
    //outuput to ls_wb_reg
    ,.inst_o                ( ls_inst                  )//>>o>>
    ,.pc_o                  ( ls_pc                    )//>>o>>
    ,.next_pc_o             ( ls_next_pc               )//>>o>>
);

// ysyx_25060170_ls_wb_reg Inputs

// reg  [`ysyx_25060170_INST]      inst_i;
// reg  [`ysyx_25060170_PC]        pc_i;
// reg  [1:0]                      wb_ctl_i;
// wire  [`ysyx_25060170_DATA]      lsu_res_i;
// wire  [`ysyx_25060170_DATA]      lsu_wb_data_i;
// reg                             rd_ena_i;
// reg  [`ysyx_25060170_REGADDR]   rd_addr_i;
// reg  [6:0]                      csr_ctl_i;
// reg  [11:0]                     csr_addr_i;
// wire  [`ysyx_25060170_DATA]      ls_data_forward_i;
// wire                             ls_valid_i;
// reg                             wb_ready_i;
// reg                             ex_flush_i;

// ysyx_25060170_ls_mem_reg Outputs
wire [`ysyx_25060170_INST]      ls_mem_reg_inst;
wire [`ysyx_25060170_PC]        ls_mem_reg_pc;
wire [`ysyx_25060170_PC]        ls_mem_reg_next_pc;
wire [3:0]                      ls_mem_reg_ls_ctl;
wire [1:0]                      ls_mem_reg_wb_ctl;
// wire [`ysyx_25060170_DATA]      ls_mem_reg_lsu_res;
// wire [`ysyx_25060170_DATA]      ls_mem_reg_lsu_wb_data;
wire                            ls_mem_reg_rd_ena;
wire [`ysyx_25060170_REGADDR]   ls_mem_reg_rd_addr;
wire [6:0]                      ls_mem_reg_csr_ctl;
wire [11:0]                     ls_mem_reg_csr_addr;
// wire [`ysyx_25060170_REGADDR]   ls_mem_addr_forward;
// wire [`ysyx_25060170_DATA]      ls_mem_data_forward;
// wire                            ls_mem_pipeline_idstall;
wire                            ls_mem_valid        ;    
wire [`ysyx_25060170_REGADDR]   ls_rd_addr_forward  ;
wire [`ysyx_25060170_DATA]      ls_rd_data_forward  ;
wire                            ls_mem_reg_re       ;
wire [`ysyx_25060170_DATA]      ls_mem_reg_alu_res  ;
wire                            ls_mem_reg_load_flag;
wire [`ysyx_25060170_DATA]      ls_mem_reg_diff_skip;

ysyx_25060170_ls_mem_reg u_ysyx_25060170_ls_mem_reg (
     .clk                    ( clk                     )//<<i<<
    ,.rst                    ( rst                     )//<<i<<
    ,.inst_i                 ( ls_inst                 )//<<i<<
    ,.pc_i                   ( ls_pc                   )//<<i<<
    ,.next_pc_i              ( ls_next_pc              )//<<i<<
    ,.ls_ctl_i               ( ex_ls_reg_ls_ctl        )//<<i<<
    ,.wb_ctl_i               ( ex_ls_reg_wb_ctl        )//<<i<<
    ,.alu_res_i              ( ex_ls_reg_exu_res       )//<<i<<
    ,.load_flag_i            ( ex_ls_reg_load_flag     )//<<i<<
    // ,.lsu_res_i              ( ex_ls_reg_exu_res       )//<<i<<
    // ,.lsu_wb_data_i          ( ls_wb_wbdata            )//<<i<<
    ,.re_i                   ( ls_mem_re               )//<<i<<
    ,.rd_ena_i               ( ex_ls_reg_rd_ena        )//<<i<<
    ,.rd_addr_i              ( ex_ls_reg_rd_addr       )//<<i<<
    ,.csr_ctl_i              ( ex_ls_reg_csr_ctl       )//<<i<<
    ,.csr_addr_i             ( ex_ls_reg_csr_addr      )//<<i<<
    ,.diff_test_skip_i       ( dpi_ls_mem_skip_flag    )//<<i<<
    // ,.pipeline_id_stall_i    ( ls_pipeline_idstall     )//<<i<<
    // ,.ls_data_forward_i      ( ls_data_forward         )//<<i<<
    ,.ls_valid_i             ( ls_valid                 )//<<i<<
    ,.mem_ready_i            ( mem_ready                )//<<i<<
    ,.ls_valid_o             ( ls_mem_valid             )//>>o>>
    // ,.ex_flush_i             ( ex_flush                )//<<i<<
    // ,.id_flush_i             ( id_flush                )//<<i<<

    ,.inst_o                 ( ls_mem_reg_inst          )//>>o>>
    ,.pc_o                   ( ls_mem_reg_pc            )//>>o>>
    ,.next_pc_o              ( ls_mem_reg_next_pc       )//>>o>>
    ,.ls_ctl_o               ( ls_mem_reg_ls_ctl        )//>>o>>
    ,.wb_ctl_o               ( ls_mem_reg_wb_ctl        )//>>o>>
    ,.alu_res_o              ( ls_mem_reg_alu_res       )//>>o>>
    ,.load_flag_o            ( ls_mem_reg_load_flag   )
    // ,.lsu_res_o              ( ls_mem_reg_lsu_res       )//>>o>>
    // ,.lsu_wb_data_o          ( ls_mem_reg_lsu_wb_data   )//>>o>>
    ,.re_o                   ( ls_mem_reg_re)
    ,.rd_ena_o               ( ls_mem_reg_rd_ena        )//>>o>>
    ,.rd_addr_o              ( ls_mem_reg_rd_addr       )//>>o>>
    ,.csr_ctl_o              ( ls_mem_reg_csr_ctl       )//>>o>>
    ,.csr_addr_o             ( ls_mem_reg_csr_addr      )//>>o>>
    ,.diff_test_skip_o       ( ls_mem_reg_diff_skip     )//>>o>>
    // ,.pipeline_id_stall_o    ( ls_mem_pipeline_idstall  )//>>o>>
    ,.ls_rd_addr_forward     ( ls_rd_addr_forward       )//>>o>>
    ,.ls_rd_data_forward     ( ls_rd_data_forward       )//>>o>>
);

// ysyx_25060170_wbu Inputs 
// reg                             clk;
// reg                             rst;
// wire  [`ysyx_25060170_DATA]      ls_rd_data_i;
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


// ysyx_25060170_mem Outputs 
wire [`ysyx_25060170_INST]      mem_inst             ;
wire [`ysyx_25060170_PC]        mem_pc               ;
wire [`ysyx_25060170_PC]        mem_next_pc          ;
wire [`ysyx_25060170_REG]       mem_alu_res          ;
wire                            mem_rd_ena           ;
wire [`ysyx_25060170_REGADDR]   mem_rd_addr          ;
wire [6:0]                      mem_csr_ctl          ;
wire [11:0]                     mem_csr_addr         ;
wire [1:0]                      mem_wbctl            ;
wire                            mem_valid            ;
wire                            mem_ready            ;
wire [`ysyx_25060170_DATA]      mem_data             ;

ysyx_25060170_mem u_ysyx_25060170_mem (
     .clk                    (clk                       )//<<i<<
    ,.rst                    (rst                       )//<<i<<
    ,.inst_i                 (ls_mem_reg_inst           )//<<i<<
    ,.pc_i                   (ls_mem_reg_pc             )//<<i<<
    ,.next_pc_i              (ls_mem_reg_next_pc        )//<<i<<
    ,.wb_ctl_i               (ls_mem_reg_wb_ctl         )//<<i<< 
    ,.alu_res_i              (ls_mem_reg_alu_res        )//<<i<<
    ,.re                     (ls_mem_reg_re             )//<<i<<
    ,.rd_ena_i               (ls_mem_reg_rd_ena         )//<<i<<
    ,.rd_addr_i              (ls_mem_reg_rd_addr        )//<<i<<
    ,.csr_ctl_i              (ls_mem_reg_csr_ctl        )//<<i<<
    ,.csr_addr_i             (ls_mem_reg_csr_addr       )//<<i<<
    ,.ls_ctl_i               (ls_mem_reg_ls_ctl         )//<<i<<
    ,.mem_data_i             (DPIC_MEM_data             )//<<i<<
    // ,.lsu_wb_data_i          ()    
    ,.ls_valid_i             (ls_mem_valid              )//<<i<<
    ,.wb_ready_i             (wb_ready                  )//<<i<<
    ,.mem_valid_o            (mem_valid                 )//>>o>>
    ,.mem_ready_o            (mem_ready                 )//>>o>>
    ,.inst_o                 (mem_inst                  )//>>o>>
    ,.pc_o                   (mem_pc                    )//>>o>>
    ,.next_pc_o              (mem_next_pc               )//>>o>>
    ,.wb_ctl_o               (mem_wbctl                 )//>>o>>
    ,.alu_res_o              (mem_alu_res               )//>>o>>
    ,.rd_ena_o               (mem_rd_ena                )//>>o>>
    ,.rd_addr_o              (mem_rd_addr               )//>>o>>
    ,.csr_ctl_o              (mem_csr_ctl               )//>>o>>
    ,.csr_addr_o             (mem_csr_addr              )//>>o>>
    ,.mem_data_o             (mem_data                  )//>>o>>
    // ,.mem_data_forward_o     ()
    // ,.lsu_wb_data_o          ()
);

// ysyx_25060170_ls_mem_reg Outputs
wire  [`ysyx_25060170_INST]     mem_wb_inst           ;
wire  [`ysyx_25060170_PC]       mem_wb_pc             ;
wire  [`ysyx_25060170_PC]       mem_wb_next_pc        ;
wire  [`ysyx_25060170_DATA]     mem_wb_lsu_res        ;
wire  [`ysyx_25060170_DATA]     mem_wb_alures_data    ;
wire  [1:0]                     mem_wb_wb_ctl         ;
wire                            mem_wb_rd_ena         ;
wire  [`ysyx_25060170_REGADDR]  mem_wb_rd_addr        ;
wire  [6:0]                     mem_wb_csr_ctl        ;
wire  [11:0]                    mem_wb_csr_addr       ;
// wire  [`ysyx_25060170_DATA]     mem_wb_wb_data        ;
wire                            mem_valid_o           ;
wire  [`ysyx_25060170_REGADDR]  mem_rd_addr_forward   ;
wire  [`ysyx_25060170_DATA]     mem_rd_data_forward   ;
wire                            mem_wb_reg_load_flag  ;
wire  [`ysyx_25060170_DATA]     dpi_ls_mem_skip_flag      ;
wire  [`ysyx_25060170_DATA]     mem_wb_skip_flag      ;

ysyx_25060170_mem_wb_reg u_ysyx_25060170_mem_wb_reg(
     .clk                   (clk                        )//<<i<<
    ,.rst                   (rst                        )//<<i<<
    ,.inst_i                (mem_inst                   )//<<i<<
    ,.pc_i                  (mem_pc                     )//<<i<<
    ,.next_pc_i             (mem_next_pc                )//<<i<<
    ,.wb_ctl_i              (mem_wbctl                  )//<<i<<
    ,.mem_data_i            (mem_data                   )//<<i<<
    ,.load_flag_i           (ls_mem_reg_load_flag       )//<<i<<
    ,.alu_res_i             (mem_alu_res                )//<<i<<
    ,.rd_ena_i              (mem_rd_ena                 )//<<i<<
    ,.rd_addr_i             (mem_rd_addr                )//<<i<<
    ,.csr_ctl_i             (mem_csr_ctl                )//<<i<<
    ,.csr_addr_i            (mem_csr_addr               )//<<i<<
    ,.dpic_diff_skip_flag_i (ls_mem_reg_diff_skip       )//<<i<<
    // ,.wb_data_i             (mem_data                   )//<<i<<
    ,.mem_valid_i           (mem_valid                  )//<<i<<
    ,.wb_ready_i            (wb_ready                   )//<<i<<

    ,.mem_valid_o           (mem_valid_o                )//>>o>>
    ,.inst_o                (mem_wb_inst                )//>>o>>
    ,.pc_o                  (mem_wb_pc                  )//>>o>>
    ,.next_pc_o             (mem_wb_next_pc             )//>>o>>
    ,.mem_data_o            (mem_wb_lsu_res             )//>>o>>
    ,.load_flag_o           (mem_wb_reg_load_flag           )//>>o>>
    ,.alu_res_o             (mem_wb_alures_data         )//>>o>>
    ,.wb_ctl_o              (mem_wb_wb_ctl              )//>>o>>
    ,.rd_ena_o              (mem_wb_rd_ena              )//>>o>>
    ,.dpic_diff_skip_flag_o (mem_wb_skip_flag           )//>>o>>
    ,.rd_addr_o             (mem_wb_rd_addr             )//>>o>>
    ,.csr_ctl_o             (mem_wb_csr_ctl             )//>>o>>
    ,.csr_addr_o            (mem_wb_csr_addr            )//>>o>>
    // ,.wb_data_o             (mem_wb_wb_data             )//>>o>>
    ,.mem_rd_addr_forward_o (mem_rd_addr_forward)//>>o>>
    ,.mem_rd_data_forward_o (mem_rd_data_forward)//>>o>>
);

// ysyx_25060170_wbu Outputs 
wire [`ysyx_25060170_DATA]      wb_rf_data;
wire                            wb_ready;
wire                            wb_rf_rd_ena;
wire [`ysyx_25060170_REGADDR]   wb_rf_rd_addr;
wire [`ysyx_25060170_REGADDR]   wb_rd_addr_forward;
wire [`ysyx_25060170_DATA]      wb_rd_data_forward;
wire [`ysyx_25060170_INST]      wbu_dpic_inst;
wire [`ysyx_25060170_PC]        wbu_dpic_pc;
wire [`ysyx_25060170_PC]        wbu_dpic_next_pc;
// wire                            wbu_dpic_ls_valid;
// wire                            wbu_dpic_id_stall;
wire                            wbu_dpic_valid;
// wire                            wbu_dpic_pipeline_idstall;
/* verilator lint_off UNUSEDSIGNAL */
wire [6:0]                      wb_csr_csr_ctl          ;
/* verilator lint_on  UNUSEDSIGNAL */     
wire [11:0]                     wb_csr_csr_addr         ;     
wire [`ysyx_25060170_REG]       wb_csr_mcause_value     ;
wire [`ysyx_25060170_DATA]      wb_csr_write_csr_data   ;

ysyx_25060170_wbu u_ysyx_25060170_wbu (
    //  .clk                       ( clk                           )//<<i<<
    // ,.rst                       ( rst                           )//<<i<<

     .ls_rd_data_i              ( mem_wb_lsu_res                )//<<i<<
    ,.wb_ctl_i                  ( mem_wb_wb_ctl                 )//<<i<<
    ,.exu_res_i                 ( mem_wb_alures_data            )//<<i<<
    ,.pc_i                      ( mem_wb_pc                     )//<<i<<
    ,.next_pc_i                 ( mem_wb_next_pc                )//<<i<<
    ,.inst_i                    ( mem_wb_inst                   )//<<i<<
    ,.rd_addr_i                 ( mem_wb_rd_addr                )//<<i<<
    ,.rd_ena_i                  ( mem_wb_rd_ena                 )//<<i<<
    ,.csr_ctl_i                 ( mem_wb_csr_ctl                )//<<i<<
    ,.csr_addr_i                ( mem_wb_csr_addr               )//<<i<<
    ,.read_csr_data_i           ( csr_wbu_read_csr_data         )//<<i<<     
    // ,.pipeline_id_stall_i       (         )//<<i<<
    ,.ls_valid_i                ( mem_valid_o                   )//<<i<<
    // ,.id_stall_i                ( id_stall                      )//<<i<<
    //out for regfile       
    ,.wb_data_o                 ( wb_rf_data                    )//>>o>>
    ,.wb_ready_o                ( wb_ready                      )//>>o>>
    ,.wb_rd_ena_o               ( wb_rf_rd_ena                  )//>>o>>
    ,.wb_rd_addr_o              ( wb_rf_rd_addr                 )//>>o>>
    //out for forwarding        
    ,.wb_rd_addr_forward        ( wb_rd_addr_forward            )//>>o>>
    ,.wb_rd_data_forward        ( wb_rd_data_forward            )//>>o>>
    //out for DPIC 发射      
    ,.wbu_dpic_inst_o           ( wbu_dpic_inst                 )//>>o>>
    ,.wbu_dpic_pc_o             ( wbu_dpic_pc                   )//>>o>>
    ,.wbu_dpic_next_pc_o        ( wbu_dpic_next_pc              )//>>o>>
    // ,.wbu_dpic_ls_valid_o       ( wbu_dpic_ls_valid             )//>>o>>
    // ,.wbu_dpic_id_stall_o       ( wbu_dpic_id_stall             )//>>o>>
    ,.wbu_dpic_valid_o          ( wbu_dpic_valid                )//>>o>>
    ,.csr_ctl_o                 ( wb_csr_csr_ctl                )//>>o>>
    ,.csr_addr_o                ( wb_csr_csr_addr               )//>>o>>
    ,.mcause_value_o            ( wb_csr_mcause_value           )//>>o>>
    ,.write_csr_data_o          ( wb_csr_write_csr_data         )//>>o>>
    // ,.dpic_pipeline_id_stall_o  ( wbu_dpic_pipeline_idstall     )//>>o>>
);

// ysyx_25060170_regfile Inputs 
// wire  [`ysyx_25060170_REGADDR]   waddr;
// wire  [`ysyx_25060170_REG]       wdata;
// wire                             wen;
// wire                             ren1;
// wire                             ren2;
// wire  [`ysyx_25060170_REGADDR]   raddr1;
// wire  [`ysyx_25060170_REGADDR]   raddr2;

// ysyx_25060170_regfile Outputs 
// wire [`ysyx_25060170_REG]       rdata1;
// wire [`ysyx_25060170_REG]       rdata2;
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
//to mem for从地址中取完值为了避免

//output csr signals
wire [`ysyx_25060170_REG]       dpic_mhartid ;
wire [`ysyx_25060170_REG]       dpic_mstatus ;
wire [`ysyx_25060170_REG]       dpic_mepc    ;
wire [`ysyx_25060170_REG]       dpic_mtvec   ;
wire [`ysyx_25060170_REG]       dpic_mcause  ;
wire [`ysyx_25060170_REG]       dpic_mscratch;
wire [`ysyx_25060170_DATA]      csr_wbu_read_csr_data;

ysyx_25060170_csr u_ysyx_25060170_csr (
     .clk               (clk                    )//i
    ,.rst               (rst                    )//i
    ,.csr_ctl           (wb_csr_csr_ctl[3:0]    )//<<i<<  {csr_wr_ena, csr_rd_ena, ecall_ena, mret_ena}
    ,.csr_addr          (wb_csr_csr_addr        )//i
    ,.mcause_value      (wb_csr_mcause_value    )//i
    ,.write_csr_data    (wb_csr_write_csr_data  )//i
    ,.read_csr_data     (csr_wbu_read_csr_data  )//o
    ,.mhartid_o         (dpic_mhartid           )//o
    ,.mstatus_o         (dpic_mstatus           )//o
    ,.mepc_o            (dpic_mepc              )//o
    ,.mtvec_o           (dpic_mtvec             )//o
    ,.mcause_o          (dpic_mcause            )//o
    ,.mscratch_o        (dpic_mscratch          )//o
);

ysyx_25060170_regfile u_ysyx_25060170_regfile (
     .clk           ( clk              )//<<i<<
    ,.rst           ( rst              )//<<i<<
    ,.waddr         ( wb_rf_rd_addr    )//<<i<<
    ,.wdata         ( wb_rf_data       )//<<i<<
    ,.wen           ( wb_rf_rd_ena     )//<<i<<
    ,.ren1          ( idu_rs1_ena      )//<<i<<
    ,.ren2          ( idu_rs2_ena      )//<<i<<
    ,.raddr1        ( idu_rs1_addr     )//<<i<<
    ,.raddr2        ( idu_rs2_addr     )//<<i<<
    ,.rdata1        ( rf_id_rs1_data   )//<<i<<
    ,.rdata2        ( rf_id_rs2_data   )//<<i<<

    ,.regs0_zero    ( regs0            )//>>o>>
    ,.regs1_ra      ( regs1            )//>>o>>
    ,.regs2_sp      ( regs2            )//>>o>>
    ,.regs3_gp      ( regs3            )//>>o>>
    ,.regs4_tp      ( regs4            )//>>o>>
    ,.regs5_t0      ( regs5            )//>>o>>
    ,.regs6_t1      ( regs6            )//>>o>>
    ,.regs7_t2      ( regs7            )//>>o>>
    ,.regs8_s0      ( regs8            )//>>o>>
    ,.regs9_s1      ( regs9            )//>>o>>
    ,.regs10_a0     ( regs10           )//>>o>>
    ,.regs11_a1     ( regs11           )//>>o>>
    ,.regs12_a2     ( regs12           )//>>o>>
    ,.regs13_a3     ( regs13           )//>>o>>
    ,.regs14_a4     ( regs14           )//>>o>>
    ,.regs15_a5     ( regs15           )//>>o>>
    ,.regs16_a6     ( regs16           )//>>o>>
    ,.regs17_a7     ( regs17           )//>>o>>
    ,.regs18_s2     ( regs18           )//>>o>>
    ,.regs19_s3     ( regs19           )//>>o>>
    ,.regs20_s4     ( regs20           )//>>o>>
    ,.regs21_s5     ( regs21           )//>>o>>
    ,.regs22_s6     ( regs22           )//>>o>>
    ,.regs23_s7     ( regs23           )//>>o>>
    ,.regs24_t3     ( regs24           )//>>o>>
    ,.regs25_t4     ( regs25           )//>>o>>
    ,.regs26_t5     ( regs26           )//>>o>>
    ,.regs27_t6     ( regs27           )//>>o>>
    ,.regs28_t3     ( regs28           )//>>o>>
    ,.regs29_t4     ( regs29           )//>>o>>
    ,.regs30_t5     ( regs30           )//>>o>>
    ,.regs31_t6     ( regs31           )//>>o>>
    ,.bp_rs1_data_o ( bp_rs1_data      )//<<i<<
    ,.bp_rs1_addr_i ( bp_rs1_addr      )//>>o>>
    ,.bp_rs1_ena_i  ( bp_rs1_ena       )//>>o>>
);

// ysyx_25060170_DPIC Inputs (驱动信号用 reg)
// wire  [`ysyx_25060170_INST]      pc_i;
// wire  [`ysyx_25060170_REGADDR]   rd_addr;
// wire  [`ysyx_25060170_IMM]       imm;
// wire  [`ysyx_25060170_REG]       regs0;
// wire  [`ysyx_25060170_REG]       regs1;
// wire  [`ysyx_25060170_REG]       regs2;
// wire  [`ysyx_25060170_REG]       regs3;
// wire  [`ysyx_25060170_REG]       regs4;
// wire  [`ysyx_25060170_REG]       regs5;
// wire  [`ysyx_25060170_REG]       regs6;
// wire  [`ysyx_25060170_REG]       regs7;
// wire  [`ysyx_25060170_REG]       regs8;
// wire  [`ysyx_25060170_REG]       regs9;
// wire  [`ysyx_25060170_REG]       regs10;
// wire  [`ysyx_25060170_REG]       regs11;
// wire  [`ysyx_25060170_REG]       regs12;
// wire  [`ysyx_25060170_REG]       regs13;
// wire  [`ysyx_25060170_REG]       regs14;
// wire  [`ysyx_25060170_REG]       regs15;
// wire  [`ysyx_25060170_REG]       regs16;
// wire  [`ysyx_25060170_REG]       regs17;
// wire  [`ysyx_25060170_REG]       regs18;
// wire  [`ysyx_25060170_REG]       regs19;
// wire  [`ysyx_25060170_REG]       regs20;
// wire  [`ysyx_25060170_REG]       regs21;
// wire  [`ysyx_25060170_REG]       regs22;
// wire  [`ysyx_25060170_REG]       regs23;
// wire  [`ysyx_25060170_REG]       regs24;
// wire  [`ysyx_25060170_REG]       regs25;
// wire  [`ysyx_25060170_REG]       regs26;
// wire  [`ysyx_25060170_REG]       regs27;
// wire  [`ysyx_25060170_REG]       regs28;
// wire  [`ysyx_25060170_REG]       regs29;
// wire  [`ysyx_25060170_REG]       regs30;
// wire  [`ysyx_25060170_REG]       regs31;
// wire  [`ysyx_25060170_REG]       mstatus;
// wire  [`ysyx_25060170_REG]       mtvec;
// wire  [`ysyx_25060170_REG]       mepc;
// wire  [`ysyx_25060170_REG]       mcause;
// wire                             re;
// wire                             we;
// wire  [7:0]                      wlen;
// wire  [7:0]                      rlen;
// wire  [`ysyx_25060170_DATAADDR]  raddr;   // memory address inputs to DPIC
// wire  [`ysyx_25060170_DATAADDR]  waddr;
// wire                             magic_flag;

// ysyx_25060170_DPIC Outputs (观察信号用 wire)     
// wire [`ysyx_25060170_PC]        inst_o;      
// wire [`ysyx_25060170_DATA]      data_o;      

wire [`ysyx_25060170_DATA]      DPIC_MEM_data;

// 实例化（复制粘贴）       
ysyx_25060170_DPIC u_ysyx_25060170_DPIC (       
     .clk                   ( clk                       )//<<i<<
    ,.rst                   ( rst                       )//<<i<<
    ,.pc_i                  ( if_id_pc                  )//<<i<<
    ,.inst_o                ( dpic_ifu_inst             )//>>o>>
    ,.ftrace_pc             ( if_id_reg_pc              )//>>o>>
    ,.rd_addr               ( idu_dpic_rd_addr          )//<<i<<
    ,.imm                   ( idu_imm                   )//<<i<<
    ,.regs0                 ( regs0                     )//<<i<<
    ,.regs1                 ( regs1                     )//<<i<<
    ,.regs2                 ( regs2                     )//<<i<<
    ,.regs3                 ( regs3                     )//<<i<<
    ,.regs4                 ( regs4                     )//<<i<<
    ,.regs5                 ( regs5                     )//<<i<<
    ,.regs6                 ( regs6                     )//<<i<<
    ,.regs7                 ( regs7                     )//<<i<<
    ,.regs8                 ( regs8                     )//<<i<<
    ,.regs9                 ( regs9                     )//<<i<<
    ,.regs10                ( regs10                    )//<<i<<
    ,.regs11                ( regs11                    )//<<i<<
    ,.regs12                ( regs12                    )//<<i<<
    ,.regs13                ( regs13                    )//<<i<<
    ,.regs14                ( regs14                    )//<<i<<
    ,.regs15                ( regs15                    )//<<i<<
    ,.regs16                ( regs16                    )//<<i<<
    ,.regs17                ( regs17                    )//<<i<<
    ,.regs18                ( regs18                    )//<<i<<
    ,.regs19                ( regs19                    )//<<i<<
    ,.regs20                ( regs20                    )//<<i<<
    ,.regs21                ( regs21                    )//<<i<<
    ,.regs22                ( regs22                    )//<<i<<
    ,.regs23                ( regs23                    )//<<i<<
    ,.regs24                ( regs24                    )//<<i<<
    ,.regs25                ( regs25                    )//<<i<<
    ,.regs26                ( regs26                    )//<<i<<
    ,.regs27                ( regs27                    )//<<i<<
    ,.regs28                ( regs28                    )//<<i<<
    ,.regs29                ( regs29                    )//<<i<<
    ,.regs30                ( regs30                    )//<<i<<
    ,.regs31                ( regs31                    )//<<i<<
    ,.mstatus               ( dpic_mhartid              )//<<i<<
    ,.mtvec                 ( dpic_mstatus              )//<<i<<
    ,.mepc                  ( dpic_mepc                 )//<<i<<
    ,.mcause                ( dpic_mtvec                )//<<i<<
    ,.mhartid               ( dpic_mcause               )//<<i<<      
    ,.mscratch              ( dpic_mscratch             )//<<i<<      
    ,.re                    ( ls_mem_re                 )//<<i<<
    ,.we                    ( ls_dpic_we                )//<<i<<
    ,.data_i                ( ls_dpic_data              )//<<i<<
    ,.wlen                  ( ls_dpic_wlen              )//<<i<<
    ,.rlen                  ( ls_dpic_rlen              )//<<i<<
    ,.dpic_difftest_skip_flag    (dpi_ls_mem_skip_flag      )//>>o>>
    ,.wbu_DPIC_difftest_skip_flag(mem_wb_skip_flag      )//<<i<<
    ,.wbu_dpic_inst	        ( wbu_dpic_inst	            )//<<i<<
    ,.wbu_dpic_pc		    ( wbu_dpic_pc	            )//<<i<<
    ,.wbu_dpic_next_pc	    ( wbu_dpic_next_pc	        )//<<i<<
    // ,.wbu_dpic_ls_valid     ( wbu_dpic_ls_valid	        )//<<i<<
    // ,.wbu_dpic_id_stall     ( wbu_dpic_id_stall	        )//<<i<<
    ,.wbu_dpic_valid        ( wbu_dpic_valid            )//<<i<<
    // ,.pipeline_id_stall     ( wbu_dpic_pipeline_idstall )//<<i<<
    ,.data_o                ( DPIC_MEM_data             )//>>o>>
    ,.raddr                 ( ls_dpic_raddr             )//<<i<<
    ,.waddr                 ( ls_dpic_waddr             )//<<i<<
    ,.ex_ls_reg_DPIC_pc_i   ( ex_ls_reg_pc              )//<<i<<
    ,.magic_flag            ( magic_flag                )//<<i<<
);

endmodule


 
