`include "define.v"
//Branch History Table
//两位饱和计数器的动态分支预测方法 在里面加入加法器以提前获取分支预测会进行的pc 


module ysyx_25060170_bpu(
     input  wire                            clk                 //<<i<<
    ,input  wire                            rst                 //<<i<<
    //for branch
    ,input  wire [`ysyx_25060170_PC]        pc_before_bxx       //<<i<<
    ,input  wire                            branch_success      //<<i<<
    ,input  wire                            branch              //<<i<<
    ,input  wire [`ysyx_25060170_IMM]       bxx_imm             //<<i<<
    //form ifu      
    ,input  wire [`ysyx_25060170_INST]      inst_i              //<<i<<
    ,input  wire [`ysyx_25060170_PC]        pc_i                //<<i<<
    //from regfile 这里应该加上前递的数据 上一个操作reg[0]的数还没进去就取指出来了。
    ,input  wire [`ysyx_25060170_REG]       ls_wb_forward_data  //<<i<<
    ,input  wire [`ysyx_25060170_REGADDR]   ls_wb_forward_addr  //<<i<<
    ,input  wire [`ysyx_25060170_REG]       ex_ls_forward_data  //<<i<<
    ,input  wire [`ysyx_25060170_REGADDR]   ex_ls_forward_addr  //<<i<<
    ,input  wire [`ysyx_25060170_REG]       bp_rs1_data_i       //<<i<<
    ,input  wire [`ysyx_25060170_REGADDR]   wb_rd_addr_forward  //<<i<<
    ,input  wire [`ysyx_25060170_REG]       wb_rd_data_forward  //<<i<<
    //to ifu
    ,output reg  [`ysyx_25060170_PC]        bp_pc_o             //>>o>>
    ,output reg                             jal_jalr_o          //>>o>>
    ,output wire                            branch_o            //>>o>>
    //to regfile        
    ,output reg [`ysyx_25060170_REGADDR]    bp_rs1_addr_o       //>>o>>
    ,output reg                             bp_rs1_ena_o        //>>o>>
    //to if_id_reg
    ,output reg                             bp_predict_o        //>>o>>
);
    reg                                     jal_jalr_temp;
    // wire                                    jal_jalr;
    wire   [`ysyx_25060170_REGADDR]         rd_addr = inst_i[11:7];
    //jalr 译码模块
    assign bp_rs1_ena_o = inst_jalr ? 1 : 0;
    assign bp_rs1_addr_o =  bp_rs1_ena_o ? inst_i[19:15] : 5'b0;

    reg strongly_not_taken_state    ;
    reg weakly_not_taken_state      ;
    reg weakly_taken_state          ;
    reg strongly_taken_state        ;

    // wire [1:0] predict_taken = {1'b0 , branch_success};

    //两位状态机预测逻辑
    always@(posedge clk) begin  
        if(rst) begin 
        strongly_not_taken_state <= 1'b0;
        weakly_not_taken_state   <= 1'b0;
        weakly_taken_state       <= 1'b0;
        strongly_taken_state     <= 1'b1;    
        end
        else begin
            case({strongly_not_taken_state , weakly_not_taken_state , weakly_taken_state , strongly_taken_state})
                4'b1000: begin //strongly not taken 
                    if( branch & branch_success) begin  //预测成功
                        strongly_not_taken_state <= 1'b0;
                        weakly_not_taken_state   <= 1'b1;
                        weakly_taken_state       <= 1'b0;
                        strongly_taken_state     <= 1'b0;
                    end
                    else if( branch & ~branch_success )begin  //预测失败
                        strongly_not_taken_state <= 1'b1;
                        weakly_not_taken_state   <= 1'b0;
                        weakly_taken_state       <= 1'b0;
                        strongly_taken_state     <= 1'b0;
                    end
                end
                4'b0100: begin //weakly not taken
                    if( branch & branch_success) begin//预测成功
                        strongly_not_taken_state <= 1'b0;
                        weakly_not_taken_state   <= 1'b0;
                        weakly_taken_state       <= 1'b1;
                        strongly_taken_state     <= 1'b0;
                    end
                    else if ( branch & ~branch_success) begin//预测失败
                        strongly_not_taken_state <= 1'b1;
                        weakly_not_taken_state   <= 1'b0;
                        weakly_taken_state       <= 1'b0;
                        strongly_taken_state     <= 1'b0;
                    end
                end
                4'b0010: begin //weakly taken
                    if( branch & branch_success) begin//预测成功
                        strongly_not_taken_state <= 1'b0;
                        weakly_not_taken_state   <= 1'b0;
                        weakly_taken_state       <= 1'b0;
                        strongly_taken_state     <= 1'b1;
                    end
                    else if ( branch & ~branch_success) begin//预测失败
                        strongly_not_taken_state <= 1'b0;
                        weakly_not_taken_state   <= 1'b1;
                        weakly_taken_state       <= 1'b0;
                        strongly_taken_state     <= 1'b0;
                    end
                end
                4'b0001: begin //strongly taken
                    if( branch & branch_success)  begin //预测成功
                        strongly_not_taken_state <= 1'b0;
                        weakly_not_taken_state   <= 1'b0;
                        weakly_taken_state       <= 1'b0;
                        strongly_taken_state     <= 1'b1;
                    end
                    else if ( branch & ~branch_success) begin//预测失败
                        strongly_not_taken_state <= 1'b0;
                        weakly_not_taken_state   <= 1'b0;
                        weakly_taken_state       <= 1'b1;
                        strongly_taken_state     <= 1'b0;
                    end
                end
                default: begin
                        strongly_not_taken_state <= strongly_not_taken_state;
                        weakly_not_taken_state   <= weakly_not_taken_state  ;
                        weakly_taken_state       <= weakly_taken_state      ;
                        strongly_taken_state     <= strongly_taken_state    ;    
                end
            endcase
        end
    end

wire [20:0] jal_imm;
wire [12:0] b_imm ;
wire [11:0] jalr_imm;
/* verilator lint_off UNUSEDSIGNAL */
wire [6:0]  opcode;
/* verilator lint_on UNUSEDSIGNAL */
wire [`ysyx_25060170_DATA] op1;
wire [`ysyx_25060170_DATA] op2;
wire inst_jal;
wire inst_jalr;
wire inst_bxx;
wire [31:0] jump_pc;
wire [31:0] jump_jalr_pc;


assign opcode = inst_i[6:0];
assign inst_jal = (rst) ? 1'b0 : (opcode[6:2] == `ysyx_25060170_JAL) & (opcode[1:0] == 2'b11)    ;
assign inst_jalr= (rst) ? 1'b0 : ((opcode[6:2] == `ysyx_25060170_JALR) && (opcode[1:0] == 2'b11));
assign inst_bxx = (rst) ? 1'b0 : (opcode[6:2] == `ysyx_25060170_BRANCH) ;

assign jalr_imm = inst_i[31:20];

assign jal_imm = { inst_i[31],       // imm[20]
                   inst_i[19:12],    // imm[19:12]
                   inst_i[20],       // imm[11]
                   inst_i[30:21],    // imm[10:1]
                   1'b0 };           // imm[0]

assign b_imm[12] = inst_i[31];
assign b_imm[11] = inst_i[7];
assign b_imm[10:5] = inst_i[30:25];
assign b_imm[4:1] = inst_i[11:8];
assign b_imm[0] = 1'b0;

wire [31:0] jal_offset  = {{11{jal_imm[20]}},  jal_imm};
wire [31:0] br_offset   = {{19{b_imm[12]}},   b_imm};
wire [31:0] jalr_offset = {{20{jalr_imm[11]}}, jalr_imm};

wire ls_wb_forward_en = (bp_rs1_addr_o == ls_wb_forward_addr) ? 1 : 0;
wire ex_ls_forward_en = (bp_rs1_addr_o == ex_ls_forward_addr) ? 1 : 0;
wire wbu_forward_en   = (rd_addr == wb_rd_addr_forward) ? 1 : 0;

assign op1 =    (inst_jalr & ls_wb_forward_en) ?    ls_wb_forward_data  :
                (inst_jalr & ex_ls_forward_en) ?    ex_ls_forward_data  :
                (inst_jalr & wbu_forward_en  ) ?    wb_rd_data_forward  :
                inst_jalr                      ?    bp_rs1_data_i       :
                pc_i;

assign op2 = inst_jal                       ? jal_offset  :
             inst_bxx                       ? br_offset   :
             (inst_jalr & wbu_forward_en  ) ? 32'b0       :
             inst_jalr                      ? jalr_offset :
                                              32'd4;
assign jal_jalr_temp = inst_jal | inst_jalr ;
assign branch_o   = inst_bxx ;
assign jump_pc = op1 + op2;
assign jump_jalr_pc = (jump_pc) & (~1) ;
always@(posedge clk) begin
    if(rst) begin
        bp_pc_o       <= `ysyx_25060170_STARTPC ;
        bp_predict_o  <= 1'b0 ;
    end
    else begin
        if( inst_jal) begin
            bp_pc_o      <= jump_pc ;
            bp_predict_o <= 1'b0 ;
            jal_jalr_o   <= jal_jalr_temp;
            // $display("bpu predict jump from to pc = 0x%08x", jump_pc);
        end
        else if( (inst_bxx & (weakly_taken_state | strongly_taken_state)) ) begin
            bp_pc_o      <= jump_pc ;
            bp_predict_o <= 1'b1 ;
            jal_jalr_o   <= 1'b0 ;
            // $display("bpu predict jump from to pc = 0x%08x", jump_pc);
        end
        else if( inst_jalr & ~wbu_forward_en) begin
            bp_pc_o      <= jump_jalr_pc ;
            bp_predict_o <= 1'b0 ;
            jal_jalr_o   <= jal_jalr_temp;
        end
        else if( branch & ~branch_success) begin
            bp_pc_o      <= pc_before_bxx + `ysyx_25060170_PLUS4 ;
            bp_predict_o <= 1'b0 ;
            jal_jalr_o   <= 1'b0 ;
        end
        else if( ~branch & branch_success) begin
            bp_pc_o      <= pc_before_bxx + bxx_imm ;
            bp_predict_o <= 1'b1 ;
            jal_jalr_o   <= 1'b0 ;
        end
        else if( inst_jalr & wbu_forward_en)begin
            bp_pc_o      <= jump_pc ;
            bp_predict_o <= 1'b0 ;
            jal_jalr_o   <= jal_jalr_temp;
        end
        else begin
            bp_pc_o      <= pc_i + `ysyx_25060170_PLUS4 ;
            bp_predict_o <= 1'b0 ;
            jal_jalr_o   <= 1'b0 ;
        end
    end
end
//*********************************debug***********************************//
	// always @(posedge clk) begin
    //     $display("pc_i = 0x%08x", pc_i);
    //     $display("inst_i = 0x%08x", inst_i);
    //     $display("inst_jalr = %b", inst_jalr);
    //     $display("bp_rs1_data_i = 0x%08x", bp_rs1_data_i);
    //     $display("bp_rs1_addr_o = 0x%08x", bp_rs1_addr_o);
    // end

endmodule

