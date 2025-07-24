/*
jal-判断该指令是否为jal；
branch-判断指令是否为beq；
brlt-判断指令是否为blt；
regS-写回数据的选择信号，0-来源于ALU，1-来源于DataMem，2-来源于PC+4；
ALUop-ALU控制信号，0对应+，1对应-；
MemWr-DataMem写使能；
ALUsrc-操作数选择信号，0-选择寄存器，1-选择立即数；
RegW-寄存器堆写使能；
PCx1-jalr处理信号，若为jalr则将x1+offset的值写入PC；
*/
module ysyx_25060170_ControlUnit(
    //from IDU
    input [6:0] opcode,
    input [6:0] func7,
    input [2:0] func3,

    //to EXU
    output reg [3:0] ALUop,
    output reg MemWr,
    output reg ALUsrc,

    //to WBU
    output reg jal,
    output reg branch,
    output reg brlt,    
    output reg [1:0] regS,
    output reg RegW,
    output reg PCx1
);

    always @(*) begin
        // 默认值
        jal = 0;
        branch = 0;
        brlt = 0;
        regS = 0;
        ALUop = 0;
        MemWr = 0;
        ALUsrc = 0;
        RegW = 0;
        PCx1 = 0;

        case(opcode)
            7'b0110011: begin // add/sub
           if   (func7 == 7'b0000000) ALUop = 0;
           else if(func7 == 7'b0100000) ALUop = 1;
                RegW = 1;
            end
    
            7'b0010011: begin // addi
                ALUsrc = 1;
                RegW = 1;
            end
    
            7'b0010111: begin // auipc
                regS = 3;
                ALUsrc = 1;
                RegW = 1;
            end
    
            7'b0000011: begin // lw
                regS = 1;
                ALUsrc = 1;
                RegW = 1;
            end
    
            7'b0100011: begin // sw
                MemWr = 1;
                ALUsrc = 1;
            end
    
            7'b1100011: begin // beq/blt
                ALUop = 1;
                regS = 2;
                if (func3 == 3'b000) branch = 1;
                else if (func3 == 3'b100) brlt = 1;
            end
    
            7'b1100111: begin // jalr
                regS = 2;
                ALUsrc = 1;
                RegW = 1;
                PCx1 = 1;
            end
    
            7'b1101111: begin // jal
                jal = 1;
                regS = 2;
                RegW = 1;
            end

            default: begin   
                //todo
            end
        endcase
    end
endmodule

