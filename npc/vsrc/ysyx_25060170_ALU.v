module ALU(
    input [3:0] opcode,
    input [31:0] sr1,
    input [31:0] sr2,
    output zero,
    output less,
    output reg [31:0] res
);

    assign zero = (res == 0)? 1:0;
    assign less = res[31];

    always@(*) begin
        case(opcode)
           0: res = sr1 + sr2;
           1: res = sr1 - sr2;
           2: res = sr1 | sr2;
           3: res = sr1 & sr2;
           4: res = (sr1 == sr2)? 1:0;
           5: res = (sr1 < sr2)? 1:0;
        endcase
    end


endmodule