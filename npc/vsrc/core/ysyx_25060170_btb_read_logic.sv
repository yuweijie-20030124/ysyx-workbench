`include "define.v"

module ysyx_25060170_btb_read_logic(
    input  logic [127:0] set_data,      //128位读出的数据 or 更新的数据
    input  logic [26:0]  pc_tag,        //pc or updatepc 的[31:5]
    output logic         hit1,          //way1命中
    output logic         hit2,          //way2命中
    output logic [31:0]  target,        //猜测跳转的地址
    // output logic [`ysyx_25060170_PC]  target,    
    output logic         valid,         //way1 way2有一个命中就置1
    output logic         predictedTaken //预测跳转  
);

    // Split set into two branches
    logic        valid1, valid2;
    logic [26:0] tag1, tag2;
    logic [31:0] target1, target2;
    logic [1:0]  fsm1, fsm2;
    logic [1:0]  fsm_state;

	/* verilator lint_off UNUSEDSIGNAL */
    logic [3:0] unused0 = {set_data[0],set_data[1],set_data[65],set_data[64]};
    logic unused1 = fsm_state[0];
	/* verilator lint_on  UNUSEDSIGNAL */

    // Branch 1
    assign valid1  = set_data[127];
    assign tag1    = set_data[126:100];
    assign target1 = set_data[99:68];
    assign fsm1    = set_data[67:66];

    // Branch 2
    assign valid2  = set_data[63];
    assign tag2    = set_data[62:36];
    assign target2 = set_data[35:4];
    assign fsm2    = set_data[3:2];

    // Compare tags to determine hit
    assign hit1 = valid1 && (pc_tag == tag1);
    assign hit2 = valid2 && (pc_tag == tag2);

    assign target    = hit1 ? target1 : hit2 ? target2 : `ysyx_25060170_ZERO32;
    assign fsm_state = hit1 ? fsm1 : (hit2 ? fsm2 : 2'b00);

    assign valid          = hit1 || hit2;
    assign predictedTaken = fsm_state[1];

endmodule

