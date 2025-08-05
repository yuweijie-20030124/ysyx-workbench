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


module ysyx_25060170_WBU(
    input rst,

    //from MEM
    //input [31:0] mem_data_i,    //IFU出来的rs1和offset经过EXU计算之后的DataMem读取的数据 

    //from exu
    input beq_flag, 
    input blt_flag, 
    input bne_flag, 
    input bge_flag, 
    input bltu_flag,
    input bgeu_flag,
    input sltiu_flag,
    input sltu_flag,
    input [31:0] exu_result_i,   // EXU计算结果

    //from IFU
    input [31:0] PC_i,

    //from IDU
    input is_beq,
    input is_blt,
    input is_bne,
    input is_bge,
    input is_bltu,
    input is_bgeu,
    input is_sltiu,
    input is_sltu,
    input [4:0]   rd_i,              // 目的寄存器号
    input [1:0]   regS,              // 写回数据的选择信号，0-来源于ALU，1-来源于DataMem，2-来源于PC+4；
    input RegW,                     //寄存器堆写使能信号
    input MemWr,                    //表示数据要load store到内存中 
    input [31:0]  reg2_rdata,
    input [31:0]  memory_lenth,     //load store 的字节的大小（配合paddrwrite和paddrread使用）
    //to GPR
    output [31:0] reg_write_data_o, // 写回寄存器的数据
    output [4:0]  reg_write_addr_o, // 写回寄存器的地址
    output        reg_write_en_o    // 写回使能
);

/********************************DPI-C****************************************/
    import "DPI-C" function void paddr_write(int addr, int len, int data);
    import "DPI-C" function int paddr_read(int addr, int len);

/********************************DPI-C END  ****************************************/
    wire tiaojian;
    assign tiaojian = 1'b0 |
                    ({is_beq  == 1'b1}   & { beq_flag  == 1'b0  }) | 
                    ({is_blt  == 1'b1}   & { blt_flag  == 1'b0  }) |
                    ({is_bne  == 1'b1}   & { bne_flag  == 1'b0  }) |
                    ({is_bge  == 1'b1}   & { bge_flag  == 1'b0  }) |
                    ({is_bltu == 1'b1}   & { bltu_flag == 1'b0  }) |
                    ({is_bgeu == 1'b1}   & { bgeu_flag == 1'b0  }) |
                    ({is_sltiu == 1'b1}  & { sltiu_flag == 1'b0 }) |
                    ({is_sltu == 1'b1}   & { sltu_flag  == 1'b0 }) ;

    wire [31:0] l_memdata;

    always @(*)begin
    //$display("regS = %d",regS);
    end
    
    //assign l_memdata = paddr_read(exu_result_i,memory_lenth);
    assign l_memdata = (regS == 1) ? paddr_read(exu_result_i,memory_lenth) : 0 ;
    
    always @(*) begin
        if(MemWr)begin
            //$display("exu_result_i = %08x",exu_result_i);
            paddr_write(exu_result_i,memory_lenth,reg2_rdata);
        end
    end
    

    //assign reg_write_data_o = exu_result_i;
    assign reg_write_data_o = 32'b0 |
                    ({32{regS == 2'd0}}  & { exu_result_i }) |
                    ({32{tiaojian == 1'd1}}  & {32{regS == 2'd0}}  & { PC_i + 4 }) |
                    ({32{regS == 2'd1}}  & { l_memdata }) |
                    ({32{regS == 2'd2}}  & { PC_i + 4 }) ;
                       
    assign reg_write_addr_o = rd_i;
    assign reg_write_en_o = !rst && RegW && (rd_i != 0); // x0不写

    // always @(*)begin
    //     if (regS == 1)
    // end

    /*
    always @(*) begin
        if (regS == 2'b11) $display("Warning: Invalid regS value!");
    end
    */
 

endmodule

