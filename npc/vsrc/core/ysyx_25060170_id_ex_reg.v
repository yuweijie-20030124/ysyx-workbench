`include "define.v"
module ysyx_25060170_id_ex_reg(
    input   wire                           clk        ,
    input   wire                           rst        ,
    
    //signals about idu
    input   wire [`ysyx_25060170_DATA]     op1_i      ,
    input   wire [`ysyx_25060170_DATA]     op2_i      ,
    input   wire [`ysyx_25060170_IMM]      imm_i      ,
    input   wire [`ysyx_25060170_PC]       pc_i       ,
    input   wire [11:0]                    csr_addr_i ,
    input   wire [`ysyx_25060170_REG]      csr_wdata_i,
    input   wire                           rd_ena_i   ,
    input   wire [`ysyx_25060170_REGADDR]  rd_addr_i  ,
    input   wire [7:0]         			   alusrc_i   ,
    input   wire [3:0]      			   lsctl_i    ,
    input   wire [1:0]     				   wbctl_i    ,
    input   wire            			   branch_i   ,
    input   wire            			   jump_i     ,
    input   wire [3:0]                     csr_ctl_i  ,
    input   wire                           ena_i,
    input   wire [`ysyx_25060170_REGADDR]  addr_i,
    input   wire                           valid      ,
    output  wire                           ready      ,
    //outputs about exu
    output  reg  [`ysyx_25060170_DATA]     op1_o      ,
    output  reg  [`ysyx_25060170_DATA]     op2_o      ,
    output  reg  [`ysyx_25060170_IMM]      imm_o      ,
    output  reg  [`ysyx_25060170_PC]       pc_o       ,
    output  reg  [11:0]                    csr_addr_o ,
    output  reg  [`ysyx_25060170_REG]      csr_wdata_o,
    output  reg                            rd_ena_o   ,
    output  reg  [`ysyx_25060170_REGADDR]  rd_addr_o  ,
    output  reg  [7:0]         			   alusrc_o   ,
    output  reg  [3:0]      		       lsctl_o    ,
    output  reg  [1:0]     				   wbctl_o    ,
    output  reg             		       branch_o   ,
    output  reg             		       jump_o     ,
    output  reg  [3:0]                     csr_ctl_o  ,
    output  reg                            valid_o    ,
    input   reg                            next_ready  
    
);

    assign ready = !valid_o || next_ready;

    always@(posedge clk) begin
        if(rst) begin
                valid_o             <= 1'b0;
                op1_o               <= `ysyx_25060170_ZERO32;
                op2_o               <= `ysyx_25060170_ZERO32;
                imm_o               <= `ysyx_25060170_ZERO32;
                pc_o                <= `ysyx_25060170_STARTPC;
                csr_addr_o          <= 12'b0;
                csr_wdata_o         <= `ysyx_25060170_ZERO32;
                rd_ena_o            <= 1'b0;
                rd_addr_o           <= 5'b00000;
                alusrc_o            <= 8'b00000000;
                lsctl_o             <= 4'b0000;
                wbctl_o             <= 2'b00;
                branch_o            <= 1'b0;
                jump_o              <= 1'b0;
                csr_ctl_o           <= 4'b0000;
                valid_o             <= 1'b0;
        end
        else begin
            if(ready && valid) begin
                valid_o             <= 1'b1;
                op1_o               <= op1_i;
                op2_o               <= op2_i;
                imm_o               <= imm_i;
                pc_o                <= pc_i;
                csr_addr_o          <= csr_addr_i;
                csr_wdata_o         <= csr_wdata_i;
                rd_ena_o            <= rd_ena_i;
                rd_addr_o           <= rd_addr_i;
                alusrc_o            <= alusrc_i;
                lsctl_o             <= lsctl_i;
                wbctl_o             <= wbctl_i;
                branch_o            <= branch_i;
                jump_o              <= jump_i;
                csr_ctl_o           <= csr_ctl_i;
            end
            else if(next_ready && valid_o) begin
                valid_o         <= 1'b0;
            end
            else if (next_ready && !valid && valid_o) begin
                valid_o         <= 1'b0;
            end
        end
    end



endmodule

