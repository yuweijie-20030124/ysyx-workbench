module ysyx_25060170_btb_write_logic(
    input  logic [127:0] old_set,      //从BTB读取的旧的当前内容     
    input  logic [26:0]  new_tag,       //新分支的标签
    input  logic [31:0]  new_target,    //实际目标地址
    input  logic         mispredicted,  //预测错误标志 idu比较逻辑
    input  logic         update,        //更新使能
    input  logic         update_branch1,//命中way1
    input  logic         update_branch2,//命中way2
    input  logic         lru_write,     //lru替换策略
    output logic [127:0] write_set      //新的128位组数据
);

    // -------- Extract old fields from old_set --------
    logic        valid1, valid2;
    logic [26:0] tag1, tag2;
    logic [31:0] target1, target2;
    logic [1:0]  fsm1, fsm2;

    // Branch 1
    assign valid1  = old_set[127];
    assign tag1    = old_set[126:100];
    assign target1 = old_set[99:68];
    assign fsm1    = old_set[67:66];

	/* verilator lint_off UNUSEDSIGNAL */
    logic [3:0] unused = {old_set[0],old_set[1],old_set[65],old_set[64]};
	/* verilator lint_on  UNUSEDSIGNAL */


    // Branch 2
    assign valid2  = old_set[63];
    assign tag2    = old_set[62:36];
    assign target2 = old_set[35:4];
    assign fsm2    = old_set[3:2];  

    // -------- Write-back logic --------
    logic        write_valid1, write_valid2;
    logic [26:0] write_tag1, write_tag2;
    logic [31:0] write_target1, write_target2;
    logic        new_entry;
    logic        insert_branch1, insert_branch2;
    logic        take_branch1, take_branch2;

    assign new_entry = update && ~(update_branch1 || update_branch2);

    assign insert_branch1 = new_entry && ~lru_write;
    assign insert_branch2 = new_entry && lru_write;

    assign take_branch1 = update_branch1 || insert_branch1;
    assign take_branch2 = update_branch2 || insert_branch2;

    assign write_valid1 = valid1 | take_branch1;
    assign write_valid2 = valid2 | take_branch2;

    assign write_tag1 = insert_branch1 ? new_tag : tag1;
    assign write_tag2 = insert_branch2 ? new_tag : tag2;

    assign write_target1 = take_branch1 ? new_target : target1;
    assign write_target2 = take_branch2 ? new_target : target2;

    // -------- FSM updates --------
    logic [1:0] next_fsm1, next_fsm2, fsm1_input, fsm2_input;

    assign fsm1_input = insert_branch1 ? 2'b00 : fsm1;
    assign fsm2_input = insert_branch2 ? 2'b00 : fsm2;

    ysyx_25060170_predictor_fsm u_ysyx_25060170_fsm1(
        .currentState(fsm1_input),
        .mispredicted(mispredicted),
        .nextState(next_fsm1)
    );

    ysyx_25060170_predictor_fsm u_ysyx_25060170_fsm2(
        .currentState(fsm2_input),
        .mispredicted(mispredicted),
        .nextState(next_fsm2)
    );

    // -------- Rebuild 128-bit write_set --------
    assign write_set = {
        write_valid1, write_tag1, write_target1, next_fsm1, 2'b00,
        write_valid2, write_tag2, write_target2, next_fsm2, 2'b00
    };

endmodule
