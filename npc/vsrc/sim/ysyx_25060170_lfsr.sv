// lfsr_5_10_20.v
module ysyx_25060170_lfsr (
     input  wire clk                 // 时钟
    ,input  wire rst                 // 复位
    ,input  wire en                  // 使能信号，高电平时更新随机数
    ,output reg  [15:0] delay_value  // 输出的延迟值（5、10或20）
);

// 内部寄存器
reg [7:0] lfsr_reg;  // 8位LFSR寄存器
// LFSR状态更新
always @(posedge clk or posedge rst) begin
    if (rst) begin
        lfsr_reg <= 8'b10101010;  // 复位时恢复初始值
        delay_value <= 5;          // 默认延迟5个周期
    end else if (en) begin
        // 更新LFSR（简单线性反馈移位寄存器）
        lfsr_reg <= {lfsr_reg[6:0], lfsr_reg[7] ^ lfsr_reg[5] ^ lfsr_reg[4] ^ lfsr_reg[3]};
        
        // 根据LFSR的低2位决定延迟值
        case (lfsr_reg[1:0])
            2'b00: begin
                delay_value <= 5;   // 00 -> 5个周期
            end
            2'b01: begin
                delay_value <= 10;  // 01 -> 10个周期
            end
            2'b10: begin
                delay_value <= 20;  // 10 -> 20个周期
            end
            2'b11: begin
                delay_value <= 5;   // 11 -> 也返回5个周期
            end
        endcase
    end
end

endmodule

