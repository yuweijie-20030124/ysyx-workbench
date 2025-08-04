/*
jal-判断该指令是否为jal；
branch-判断指令是否为beq；
brlt-判断指令是否为blt；
regS-写回数据的选择信号，0-来源于ALU，1-来源于DataMem，2-来源于PC+4；
ALUop-ALU控制信号，0对应+，1对应-,2对应*，3对应÷；
MemWr-DataMem写使能；
ALUsrc-操作数选择信号，0-选择寄存器，1-选择立即数；
RegW-寄存器堆写使能；
PCx1-jalr处理信号，若为jalr则将x1+offset的值写入PC；
*/

module ysyx_25060170_IDU(
    //from IFU
    input [31:0] pc_i,

    //from MEM
    input [31:0] inst_i,            // 指令输入

    //from GPR
    input [31:0] reg1_rdata_i,      // 通用寄存器1输入数据
    input [31:0] reg2_rdata_i,      // 通用寄存器2输入数据 暂时还没得用

    //to GPR 
    output [4:0] rs1_raddr_o,     //读通用寄存器1地址
    output [4:0] rs2_raddr_o,     //读通用寄存器2地址

    //to EXU
    output reg [3:0] ALUop,
    output [4:0] rd_addr,           //目标寄存器rd索引    
    output [31:0] op_1,             //exu执行的第一个数
    output [31:0] op_2,             //exu执行的第二个数
    output [31:0] imm_o,             // 立即数
    
    //to WBU
    output reg [31:0] reg2_rdata_o,
    output reg [31:0] memory_lenth,
    output reg MemWr,
    output reg jal,
    //output reg branch,
    //output reg brlt,    
    output reg [1:0] regS,
    output reg RegW,
    output reg PCx1,
    output jump_en

);
/********************************DPI-C START****************************************/
import "DPI-C" function void set_npc_exit(int pc, int halt_ret);



/********************************DPI-C END  ****************************************/

//wire is_jump = (opcode == 7'b1100111 || opcode == 7'b1101111);
    //localparam PC_INCR = 32'd4;  // 添加在模块开头
    assign jump_en = PCx1 | jal;
    wire [6:0] opcode;
    wire [6:0] func7;
    wire [2:0] func3;
    wire [31:0] imm;

    
    // 寄存器文件声明 现在就只有i和u
    assign rs1_raddr_o = inst_i[19:15];  // 源寄存器1地址
    assign rs2_raddr_o = inst_i[24:20];  // 源寄存器2地址
    assign reg2_rdata_o = reg2_rdata_i;
    assign opcode = inst_i[6:0];         // 操作码
    assign func3 = inst_i[14:12];      
    /* lint_off */
    assign func7 = inst_i[31:25];
    /* lint_on */
    assign rd_addr = inst_i[11:7];

/********************************识别是哪一条指令****************************/
//U type
wire auipc;
wire lui;
wire is_Utype;

//I type
wire srli;
wire [5:0] shamt;
assign shamt = inst_i[31:26];
wire slli;
wire srai;
wire lbu;
wire addi;
wire sltiu;
wire lb;
wire lh;
wire lhu;
wire lw;
wire andi;
wire xori;
wire ori;
wire jalr;
wire is_Itype;

//S type
wire sw;
wire sh;
wire sb;
wire sd;
wire is_Stype;

//R type
wire srl ;
wire add ;
wire sll ;
wire slt ;
wire sltu;
wire npcxor ;
wire npcor  ;
wire npcand ;
wire sra ;
wire sub ;
wire mul ;
wire mulh  ;
wire mulhsu;
wire mulhu ;
wire div   ;
wire divu  ;
wire rem   ;
wire remu  ;
wire is_Rtype;

//B type
wire beq ;
wire bne ;
wire blt ;
wire bge ;
wire bltu;
wire bgeu;
wire is_Btype;

//J type
wire jal;
wire is_Jtype;

//U type
assign auipc    =   1'b0 | opcode == 7'b0010111;
assign lui      =   1'b0 | opcode == 7'b0110111;
assign is_Utype =   auipc | lui;
//I type
assign srli     =   1'b0 | (opcode == 7'b0010011) & (func3 == 3'b101) & (inst_i[31:26] == 6'b000000);
assign slli     =   1'b0 | (opcode == 7'b0010011) & (func3 == 3'b001) & (func7 == 7'b0000000);
assign srai     =   1'b0 | (opcode == 7'b0010011) & (func3 == 3'b101) & (func7 == 7'b0100000);
assign lbu      =   1'b0 | (opcode == 7'b0000011) & (func3 == 3'b100);
assign addi     =   1'b0 | (opcode == 7'b0010011) & (func3 == 3'b000);
assign sltiu    =   1'b0 | (opcode == 7'b0010011) & (func3 == 3'b101);
assign lb       =   1'b0 | (opcode == 7'b0010011) & (func3 == 3'b000);
assign lh       =   1'b0 | (opcode == 7'b0010011) & (func3 == 3'b001);
assign lhu      =   1'b0 | (opcode == 7'b0010011) & (func3 == 3'b101);
assign lw       =   1'b0 | (opcode == 7'b0010011) & (func3 == 3'b010);
assign andi     =   1'b0 | (opcode == 7'b0010011) & (func3 == 3'b111);
assign xori     =   1'b0 | (opcode == 7'b0010011) & (func3 == 3'b110);
assign ori      =   1'b0 | (opcode == 7'b0010011) & (func3 == 3'b010);
assign jalr     =   1'b0 | (opcode == 7'b1101111);
assign is_Itype =   srli | slli | srai | lbu | addi | sltiu | lb | lh | lhu | lw | andi | xori | ori | jalr;

//S type
assign sw       =   1'b0 | (opcode == 7'b0100011) & (func3 == 3'b010);
assign sh       =   1'b0 | (opcode == 7'b0100011) & (func3 == 3'b001);
assign sb       =   1'b0 | (opcode == 7'b0100011) & (func3 == 3'b000);
assign sd       =   1'b0 | (opcode == 7'b0100011) & (func3 == 3'b011);
assign is_Stype =   sw | sh | sb | sd;

//R type
assign srl      =   1'b0 | (opcode == 7'b0110011) & (func3 == 3'b101) & (func7 == 7'b0000000);
assign add      =   1'b0 | (opcode == 7'b0110011) & (func3 == 3'b000) & (func7 == 7'b0000000);
assign sll      =   1'b0 | (opcode == 7'b0110011) & (func3 == 3'b001) & (func7 == 7'b0000000);
assign slt      =   1'b0 | (opcode == 7'b0110011) & (func3 == 3'b010) & (func7 == 7'b0000000);
assign sltu     =   1'b0 | (opcode == 7'b0110011) & (func3 == 3'b011) & (func7 == 7'b0000000);
assign npcxor   =   1'b0 | (opcode == 7'b0110011) & (func3 == 3'b100) & (func7 == 7'b0000000);
assign npcor    =   1'b0 | (opcode == 7'b0110011) & (func3 == 3'b110) & (func7 == 7'b0000000);
assign npcand   =   1'b0 | (opcode == 7'b0110011) & (func3 == 3'b111) & (func7 == 7'b0000000);
assign sra      =   1'b0 | (opcode == 7'b0110011) & (func3 == 3'b101) & (func7 == 7'b0100000);
assign sub      =   1'b0 | (opcode == 7'b0110011) & (func3 == 3'b000) & (func7 == 7'b0100000);
assign mul      =   1'b0 | (opcode == 7'b0110011) & (func3 == 3'b000) & (func7 == 7'b0000001);
assign mulh     =   1'b0 | (opcode == 7'b0110011) & (func3 == 3'b001) & (func7 == 7'b0000001);
assign mulhsu   =   1'b0 | (opcode == 7'b0110011) & (func3 == 3'b010) & (func7 == 7'b0000001);
assign mulhu    =   1'b0 | (opcode == 7'b0110011) & (func3 == 3'b011) & (func7 == 7'b0000001);
assign div      =   1'b0 | (opcode == 7'b0110011) & (func3 == 3'b100) & (func7 == 7'b0000001);
assign divu     =   1'b0 | (opcode == 7'b0110011) & (func3 == 3'b101) & (func7 == 7'b0000001);
assign rem      =   1'b0 | (opcode == 7'b0110011) & (func3 == 3'b110) & (func7 == 7'b0000001);
assign remu     =   1'b0 | (opcode == 7'b0110011) & (func3 == 3'b111) & (func7 == 7'b0000001);
assign is_Rtype =   srli | srl | add | sll | slt | sltu | npcxor | npcor | npcand | sra | sub | mul | mulh | mulhsu | mulhu | div | divu | rem | remu;

//B type
assign beq      =   1'b0 | (opcode == 7'b1100011) & (func3 == 3'b000);
assign bne      =   1'b0 | (opcode == 7'b1100011) & (func3 == 3'b001);
assign blt      =   1'b0 | (opcode == 7'b1100011) & (func3 == 3'b100);
assign bge      =   1'b0 | (opcode == 7'b1100011) & (func3 == 3'b101);
assign bltu     =   1'b0 | (opcode == 7'b1100011) & (func3 == 3'b110);
assign bgeu     =   1'b0 | (opcode == 7'b1100011) & (func3 == 3'b111);
assign is_Btype =   beq | bne | blt | bge | bltu | bgeu;

//J type
assign jal      =   1'b0 | opcode == 7'b1101111;
assign is_Jtype = jal;

//选择器模板 立即数处理 R-type并不需要立即数处理
assign imm = 32'h0 |    
                    //U type
                    ({32{is_Utype == 1'b1}} & {inst_i[31:12],12'b0}) |
                    //I type
                    ({32{is_Itype == 1'b1}} & {{20{inst_i[31]}},inst_i[31:20]}) |
                    //S type
                    ({32{is_Stype == 1'b1}} & {{20{inst_i[31]}},inst_i[31:25],inst_i[11:7]}) |
                    //B type
                    ({32{is_Btype == 1'b1}} & {{20{inst_i[31]}},inst_i[7],inst_i[30:25],inst_i[11:8],1'b0}) |
                    //J type
                    ({32{is_Jtype == 1'b1}} & {{12{inst_i[31]}}, inst_i[19:12], inst_i[20], inst_i[30:21], 1'b0});

assign imm_o = imm;

/*************************************2025 . 8 . 03 (todo)*************************************************/
    assign op_1 = 32'h0 |
                    //auipc u-type
                    ({32{auipc == 1'b1}} & {pc_i}) |
                    //lui   u-type
                    ({32{lui == 1'b1}} & {imm}) |
                    //addi  i-type
                    ({32{opcode == 7'b0010011}} & {reg1_rdata_i}) |
                    //add  i-type
                    ({32{opcode == 7'b0110011}} & {reg1_rdata_i}) |
                    //lw i-type
                    ({32{opcode == 7'b0000011}} & {reg1_rdata_i}) |
                    //sw s-type
                    ({32{opcode == 7'b0100011}} & {reg1_rdata_i}) |
                    //beq blt b-type
                    ({32{opcode == 7'b1100011}} & {pc_i}) |
                    //jalr i-type 4
                    ({32{opcode == 7'b1100111}} & {pc_i}) |
                    //jal j-type 4
                    ({32{opcode == 7'b1101111}} & {pc_i}) |
                    //all r-type page160
                    ({32{opcode == 7'b0110011}} & {reg1_rdata_i}) ;
	
    assign op_2 = 32'h0 |
                    //auipc u-type
                    ({32{auipc == 1'b1}} & {imm}) |
                    //lui   u-type
                    ({32{lui == 1'b1}} & {0}) |
                    //addi  i-type
                    ({32{opcode == 7'b0010011}} & {imm}) |
                    //add  i-type
                    ({32{opcode == 7'b0110011}} & {reg2_rdata_i}) |
                    //auipc u-type
                    ({32{opcode == 7'b0010111}} & {imm}) |
                    //lw i-type
                    ({32{opcode == 7'b0000011}} & {imm}) |
                    //sw s-type
                    ({32{opcode == 7'b0100011}} & {imm}) |
                    //beq blt b-type
                    ({32{opcode == 7'b1100011}} & {imm}) |
                    //jalr i-type 4
                    ({32{opcode == 7'b1100111}} & {32'd4}) |
                    //jal j-type 4
                    //({32{opcode == 7'b1101111}} & {imm[31:1], 1'b0});
                    ({32{opcode == 7'b1101111}} & {32'd4}) |
                    //all r-type page160
                    ({32{opcode == 7'b0110011}} & {reg2_rdata_i}) ;

    assign ALUop = 4'b0 |
                    //auipc u-type
                    ({4{auipc == 1'b1}} & {4'd0}) ;

    assign regS = 2'b0 |
                    ({2{auipc == 1'b1}} & {4'd0}) ;
    //用来控制EXU和WBU的控制信号
    always @(*) begin
        // 默认值
        jal = 0;
        //branch = 0;
        //brlt = 0;
        regS = 0;
        ALUop = 0;
        MemWr = 0;
        RegW = 0;
        PCx1 = 0;
        // $display("op_1 = 0x%08x", op_1);
        // $display("op_2 = 0x%08x", op_2);
        case(opcode)
            7'b0110011: begin //Rtype
                if   (func7 == 7'b0000000) begin
                        if(func3 == 3'b000)begin        //add
                            ALUop = 0;
                            RegW = 1;
                        end
                        else if(func3 == 3'b001)begin   //sll

                        end
                        else if(func3 == 3'b010)begin   //slt

                        end
                        else if(func3 == 3'b011)begin   //Rsltu

                        end
                        else if(func3 == 3'b100)begin   //xor

                        end
                        else if(func3 == 3'b101)begin   //srl

                        end
                        else if(func3 == 3'b110)begin   //or

                        end
                        else begin  //func3 == 3'b111   //and

                        end
                        
                end
                else if   (func7 == 7'b0100000) begin
                        if(func3 == 3'b000)begin  //sub
                            ALUop = 1;
                            RegW = 1;
                        end
                        else if(func3 == 3'b101)begin   //sra

                        end                
                end
                else if   (func7 == 7'b0000001) begin  
                        if(func3 == 3'b000)begin  //mul
                            
                        end
                        else begin
                            $display("add more instructions please!");
                        end                
                end
            end
            7'b0010111:begin    //I type

            end
            7'b0000011:begin    //I type

            end
            7'b0010011:begin    //I type

            end
            /*
            7'b0010011: begin // addi
                RegW = 1;
            end
    
            7'b0010111: begin // auipc
                regS = 0;
                RegW = 1;
            end
    
            7'b0000011: begin // lw
                regS = 1;
                RegW = 1;
            end
    
            7'b0100011: begin // sw
                MemWr = 1;
                ALUop = 0;
            end
    /*
            7'b1100011: begin // beq/blt
                ALUop = 1;
                regS = 2;
                if (func3 == 3'b000) branch = 1;
                else if (func3 == 3'b100) brlt = 1;
            end
    */
    /*
            7'b1100111: begin // jalr
                regS = 2;
                RegW = 1;
                PCx1 = 1;
            end
    
            7'b1101111: begin // jal
                jal = 1;
                regS = 2;
                RegW = 1;
            end
            */
            default: begin   
                //todo
                $display("add more instructions please!");
            end
        endcase
        //$display("opcode = %7b", opcode);
    end
    
assign memory_lenth = 32'b0 |
                        //lw
                        ({32{opcode == 7'b0000011}} & {32{func3 == 3'b010}} & { 32'd4 }) |
                        //sw
                        ({32{opcode == 7'b0100011}} & {32{func3 == 3'b010}} & { 32'd4 }) ;

assign 

/***************************************DPI-C*******************************************/


    always @(*) begin
    //$display("PC = 0x%08x", pc_i);
    //$display("inst = 0x%08x", inst_i);
    if(inst_i == 32'b0000_0000_0001_0000_0000_0000_0111_0011) begin
        set_npc_exit(pc_i,0);
    end
end

export "DPI-C" task IDU_SEND_INST;

task IDU_SEND_INST(
    output int c_inst
);

    c_inst = inst_i;

endtask    

/********************************FTRACE****************************************/

export "DPI-C" task IDU_SEND_CALL_FLAG;

task IDU_SEND_CALL_FLAG(
    output int call_flag,
    output int pc,
    output int dnpc
);

    call_flag = ((rd_addr == 1 && jump_en == 1) || (rd_addr == 0 && imm == 0 && PCx1 == 1)) ? 1 : 0;
    // $display("rd_addr = 0x%08x", rd_addr);
    // $display("jump_en = %d", jump_en);
    // $display("jalr = %d", PCx1);
    // $display("jal = %d", jal);
    // $display("imm = 0x%08x", imm);
    // $display("PCx1 = %d", PCx1);
    dnpc =  pc_i + imm;

endtask

export "DPI-C" task IDU_SEND_RET_FLAG;

task IDU_SEND_RET_FLAG(
    output int ret_flag,
    output int pc
);

    ret_flag = inst_i == 32'h00008067 ? 1 : 0;
    //pc  = pc_i;
    pc = PCx1 ? {pc_i[31:1],1'b0} : pc_i ;

endtask





    endmodule
