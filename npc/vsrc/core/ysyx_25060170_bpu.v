`include "define.v"

//两位饱和计数器的动态分支预测方法 在里面加入加法器以提前获取分支预测会进行的pc


module ysyx_25060170_bpu(
     input  wire                        clk          //<<i<<
    ,input  wire                        rst          //<<i<<
    //form ifu 
    ,input  wire [`ysyx_25060170_INST]  inst_i       //<<i<<
    ,input  wire [`ysyx_25060170_PC]    pc_i         //<<i<<
    //from regfile
    // ,input  wire [`ysyx_25060170_REG]   bp_rd_data_i //<<i<<
    //to ifu
    ,output reg [`ysyx_25060170_PC]     bp_pc_o      //>>o>>
    //to regfile        
    // ,output reg [`ysyx_25060170_REGADDR] bp_rd_addr_o //>>o>>
    // ,output reg                         bp_rd_ena_o  //>>o>>
    //to if_id_reg
    ,output reg                         bp_predict_o //>>o>>
);

    reg strongly_not_taken_state    ;
    reg weakly_not_taken_state      ;
    reg weakly_taken_state          ;
    reg strongly_taken_state        ;


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
                    if(inst_i[6:2] == `ysyx_25060170_BRANCH) begin
                        strongly_not_taken_state <= 1'b0;
                        weakly_not_taken_state   <= 1'b1;
                        weakly_taken_state       <= 1'b0;
                        strongly_taken_state     <= 1'b0;
                    end
                end
                4'b0100: begin //weakly not taken
                    if(inst_i[6:2] == `ysyx_25060170_BRANCH) begin//预测成功
                        strongly_not_taken_state <= 1'b0;
                        weakly_not_taken_state   <= 1'b0;
                        weakly_taken_state       <= 1'b1;
                        strongly_taken_state     <= 1'b0;
                    end
                    else begin
                        strongly_not_taken_state <= 1'b0;
                        weakly_not_taken_state   <= 1'b1;
                        weakly_taken_state       <= 1'b0;
                        strongly_taken_state     <= 1'b0;
                    end
                end
                4'b0010: begin //weakly taken
                    if(inst_i[6:2] == `ysyx_25060170_BRANCH) begin
                        strongly_not_taken_state <= 1'b0;
                        weakly_not_taken_state   <= 1'b0;
                        weakly_taken_state       <= 1'b0;
                        strongly_taken_state     <= 1'b1;
                    end
                    else begin
                        strongly_not_taken_state <= 1'b0;
                        weakly_not_taken_state   <= 1'b0;
                        weakly_taken_state       <= 1'b1;
                        strongly_taken_state     <= 1'b0;
                    end
                end
                4'b0001: begin //strongly taken
                    if(inst_i[6:2] == `ysyx_25060170_BRANCH) begin
                        strongly_not_taken_state <= 1'b0;
                        weakly_not_taken_state   <= 1'b0;
                        weakly_taken_state       <= 1'b0;
                        strongly_taken_state     <= 1'b1;
                    end
                    else begin
                        strongly_not_taken_state <= 1'b0;
                        weakly_not_taken_state   <= 1'b0;
                        weakly_taken_state       <= 1'b1;
                        strongly_taken_state     <= 1'b0;
                    end
                end
                default: begin
                        strongly_not_taken_state <= 1'b1;
                        weakly_not_taken_state   <= 1'b0;
                        weakly_taken_state       <= 1'b0;
                        strongly_taken_state     <= 1'b0;    
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

assign op1 = pc_i;

assign op2 = inst_jal  ? jal_offset  :
             inst_bxx  ? br_offset   :
             inst_jalr ? jalr_offset :
                         32'd4;

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
            // $display("bpu predict jump from to pc = 0x%08x", jump_pc);
        end
        else if( (inst_bxx & (weakly_taken_state | strongly_taken_state)) ) begin
            bp_pc_o      <= jump_pc ;
            bp_predict_o <= 1'b1 ;
            // $display("bpu predict jump from to pc = 0x%08x", jump_pc);
        end
        else if( inst_jalr ) begin
            bp_pc_o      <= jump_jalr_pc ;
            bp_predict_o <= 1'b0 ;
        end
        else begin
            bp_pc_o      <= pc_i + `ysyx_25060170_PLUS4 ;
            bp_predict_o <= 1'b0 ;
        end
    end
end

//*********************************jalr 朝着着rd寄存器写回方向传递********************************//
// assign bp_rd_ena_o = 

endmodule

