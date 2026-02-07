//8组 * 2路（条目） 每个条目用128位存储
module ysyx_25060170_btb_file(
    input  logic         clk,
    input  logic [2:0]   read_index,    //current_pc[4:2] 
    input  logic [2:0]   write_index,   //update_pc[4:2]
    input  logic [127:0] write_set,     //write_logic? 要写入的128位数据
    input  logic         write_enable,  //btb_input应该是idu传过来的只要是jal jalr bxx指令就为1
    input  logic [2:0]   update_index,  //update_pc[4:2] 和write_index是一个
    output logic [127:0] read_set,      //读出的128位数据
    output logic [127:0] update_set     //更新是读取的128位数据
);

/* 两个条目entry
每个条目（64位）包含：
1. 有效位：1 bit
2. 标签（Tag）：27 bits（假设PC[31:5]）
3. 目标地址：32 bits  
4. 2位饱和计数器：2 bits
5. 预留位：2 bits（可选）
*/

    logic [127:0] btb_mem [7:0]; // 8 sets, 128 bits each

    // ----------- Initialization (simulation) -------------
    // All sets cleared to 0 on simulation start
    // initial begin
    //     integer i;
    //     for (i = 0; i < 8; i = i + 1)
    //         btb_mem[i] = 128'b0;
    // end

    // Read (combinational)
    assign read_set = (write_enable && read_index == write_index) ? write_set : btb_mem[read_index];

    // Write (sequential)
    always_ff @(posedge clk) begin
        if(write_enable)
            btb_mem[write_index] <= write_set;
    end

    // Update (combinational)
    assign update_set = btb_mem[update_index];

endmodule
