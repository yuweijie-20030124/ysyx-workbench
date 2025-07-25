
module ysyx_25060170_EXU(
    input [31:0] sr1,     // rs1数据
    input [31:0] sr2,     // rs2数据
    input [31:0] imm_i,            // 立即数woji
    input [3:0] opc,
    input [31:0] rd2,
    input ALUsrc,
    input ready_i,

    output zero,
    output less,
    output reg [31:0] res,
    output reg [31:0] data,
    output ready_o
);

    always @(*) begin
        if(ALUsrc) data = imm_i;
         else data = rd2;
    end

    assign ready_o = ready_i;

    assign zero = (res == 0)? 1:0;
    assign less = res[31];

    always@(*) begin
        case(opc)
           0: res = sr1 + sr2;
           1: res = sr1 - sr2;
           2: res = sr1 | sr2;
           3: res = sr1 & sr2;
           4: res = (sr1 == sr2)? 1:0;
           5: res = (sr1 < sr2)? 1:0;
        endcase
    end

endmodule


