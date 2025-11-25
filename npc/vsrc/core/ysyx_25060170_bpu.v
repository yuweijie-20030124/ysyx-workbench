`include "define.v"

//两位饱和计数器的动态分支预测方法 在里面加入加法器以提前获取分支预测会进行的pc


module ysyx_25060170_bpu(
     input  wire                        clk          //<<i<<
    ,input  wire                        rst          //<<i<<
    //form ifu 
    ,input  wire [`ysyx_25060170_INST]  inst_i       //<<i<<
    ,input  wire [`ysyx_25060170_PC]    pc_i         //<<i<<
    //to ifu
    ,output reg [`ysyx_25060170_PC]     bp_pc_o      //>>o>>
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
        strongly_not_taken_state <= 1'b1;
        weakly_not_taken_state   <= 1'b0;
        weakly_taken_state       <= 1'b0;
        strongly_taken_state     <= 1'b0;    
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

wire [20:1] j_imm ;
wire [12:1] b_imm ;
/* verilator lint_off UNUSEDSIGNAL */
wire [6:0]  opcode;
/* verilator lint_on UNUSEDSIGNAL */
wire [`ysyx_25060170_DATA] op1;
wire [`ysyx_25060170_DATA] op2;
wire inst_jal;
wire inst_bxx;
wire [31:0] jump_pc;


assign opcode = inst_i[6:0];
assign inst_jal = (rst) ? 0 : (opcode[6:2] == `ysyx_25060170_JAL) & (opcode[1:0] == 2'b11)    ;
assign inst_bxx = (rst) ? 0 : (opcode[6:2] == `ysyx_25060170_BRANCH) ;
assign {j_imm[20],j_imm[10:1],j_imm[11],j_imm[19:12]} = inst_i[31:12];
assign {b_imm[12] , b_imm[10:5] , b_imm[4:1] , b_imm[11]} = {inst_i[31:25] , inst_i[11:7]} ;
assign op1 = pc_i;
assign op2 = 32'b0100 |
            {32{inst_jal}} & {{12{j_imm[20]}},(j_imm[20:1] << 1)} |
            {32{inst_bxx & b_imm[12]}} & {{20{b_imm[12]}},b_imm[12:1] << 1} |
            {32{rst}} & `ysyx_25060170_ZERO32 ;
assign jump_pc = op1 + op2;
             
always@(posedge clk) begin
    if(rst) begin
        bp_pc_o       <= `ysyx_25060170_STARTPC ;
        bp_predict_o  <= 1'b0 ;
    end
    else begin
        if( inst_jal | (inst_bxx & (weakly_taken_state | strongly_taken_state)) ) begin
            bp_pc_o      <= jump_pc ;
            bp_predict_o <= 1'b1 ;
        end
        else begin
            bp_pc_o      <= pc_i + `ysyx_25060170_PLUS4 ;
            bp_predict_o <= 1'b0 ;
        end
    end
end


endmodule
