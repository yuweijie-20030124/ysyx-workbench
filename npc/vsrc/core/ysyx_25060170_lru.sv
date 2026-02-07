//2路组相联BTB的LRU（最近最少使用）替换策略

module ysyx_25060170_lru (
    input  logic        clk,
    input  logic        rst,
    input  logic [2:0]  read_index,       //current pc[5:2]
    input  logic        branch1_used,     // ways0被使用了
    input  logic        branch2_used,     // ways1被使用了
    input  logic        update,           //更新使能 （分支执行后）
    input  logic [2:0]  update_index,     //update pc[5:2] 要更新的组索引
    input  logic        update_branch1,   // 更新时命中way0
    input  logic        update_branch2,   // 更新时命中way1
    output logic        lru_read_bit,     // 读取时的LRU位 （用于预测）ifu
    output logic        lru_write_bit     // 写入时的LRU位 （用于替换）idu
);

    // LRU table — 8 sets, each 1 bit (since 2-way BTB)
    logic [7:0] lru_reg;

    // Combinational outputs
    assign lru_read_bit  = lru_reg[read_index];
    assign lru_write_bit = lru_reg[update_index];

    // Procedural update for LRU
    logic new_entry;
    logic insert_branch1, insert_branch2;

    assign new_entry      = update && ~(update_branch1 || update_branch2); // new entry if no hit
    assign insert_branch1 = new_entry && ~lru_write_bit;
    assign insert_branch2 = new_entry && lru_write_bit;

    always_ff @(posedge clk) begin
        if (rst)
            lru_reg <= 8'b0;  // reset all sets to branch1 recently used
        else begin
            // --- IF stage: update on branch usage ---
            if (branch1_used)
                lru_reg[read_index] <= 1'b1; // branch 0 used, so branch 1 is now LRU
            else if (branch2_used)
                lru_reg[read_index] <= 1'b0; // branch 1 used, so branch 0 is now LRU

            // --- EX stage: new entry insertion ---
            if (new_entry) begin
                if (insert_branch1)
                    lru_reg[update_index] <= 1'b1; 
                else if (insert_branch2)
                    lru_reg[update_index] <= 1'b0; 
            end
        end
    end

endmodule
