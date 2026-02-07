`include "define.v"

module ysyx_25060170_btb(
     input  logic                           clk                     //<<i<<
    ,input  logic                           rst                     //<<i<<
    ,input  logic [`ysyx_25060170_PC]       if1_btb_PC              //<<i<< IFU<<用于查询BTB
    ,input  logic                           idu_btb_update          //<<i<< IDU<<需要更新BTB inst_jal_jalr_bxx
    ,input  logic [`ysyx_25060170_PC]       idu_btb_updatePC        //<<i<< IDU<<分支指令的地址 inst_jal_jalr_bxx的地址
    ,input  logic [`ysyx_25060170_PC]       idu_btb_updateTarget    //<<i<< IDU<<实际跳转目标地址
    ,input  logic                           idu_btb_mispredicted    //<<i<< IDU<<预测是否正确
    ,output logic                           btb_valid               //>>o>> IFU>>查询结果有效信号，表示BTB中找到了对应PC的条目
    ,output logic [`ysyx_25060170_PC]       btb_target              //>>o>> IFU>>给ifu跳转的地址
    ,output logic                           btb_predictedTaken      //>>o>> IFU>>预测跳转信号
);


//
    // ----------- Internal Signals -------------

    // if1_btb_PC (32 bits) = Tag (27 bits) + Index (3 bits) + Byte offset (2 bits)
    logic [2:0]  index;
    logic [26:0] tag;   
    //由于pc要四字节对齐，因此byte offset为00，不在意

    /*
    Set 0: [Entry0] [Entry1] ← Index=000的PC都映射到这里
    Set 1: [Entry2] [Entry3] ← Index=001的PC都映射到这里
    ...
    Set 7: [Entry14][Entry15] ← Index=111的PC都映射到这里
    */

    logic [127:0] read_set;
    logic [127:0] update_set;
    logic [2:0]   update_index;
    logic [26:0]  update_tag;
    logic [127:0] write_set;
    logic [2:0]   write_index;

    logic check_branch1, check_branch2;
    logic update_branch1, update_branch2;
    

    // ----------- Unuesd -------------
    /* verilator lint_off UNUSEDSIGNAL */
    logic lru_read, lru_write;
    logic [1:0] unused0 = if1_btb_PC[1:0];
    logic [1:0] unused1 = idu_btb_updatePC[1:0];
	/* verilator lint_on  UNUSEDSIGNAL */


    // ----------- IF Stage -------------
    
    // BTB memory
    assign index        = if1_btb_PC[4:2];
    assign tag          = if1_btb_PC[31:5];
    assign update_index = idu_btb_updatePC[4:2];
    assign update_tag   = idu_btb_updatePC[31:5];
    assign write_index  = idu_btb_updatePC[4:2];

    ysyx_25060170_btb_file ysyx_25060170_u_btb_file(
         .clk           (clk                    )//<<i<<
        ,.read_index    (index                  )//<<i<<
        ,.write_index   (write_index            )//<<i<<
        ,.write_set     (write_set              )//<<i<<
        ,.write_enable  (idu_btb_update         )//<<i<<
        ,.update_index  (update_index           )//<<i<< 
        ,.read_set      (read_set               )//>>o>>
        ,.update_set    (update_set             )//>>o>>
    );

    // 预测阶段 预测当前指令是否是分支，以及是否跳转
    // 数据流 PC → btb_file → read_set → btb_read_logic → 预测结果
    // Use btb_read_logic to read the set
    ysyx_25060170_btb_read_logic u_ysyx_25060170_read(
         .set_data      (read_set               )//<<i<<
        ,.pc_tag        (tag                    )//<<i<<  
        ,.hit1          (check_branch1          )//>>o>>
        ,.hit2          (check_branch2          )//>>o>>        
        ,.target        (btb_target             )//>>o>>     
        ,.valid         (btb_valid              )//>>o>>
        ,.predictedTaken(btb_predictedTaken     )//>>o>> 
    );


    // ----------- ID Stage ------------
    // 在已经知道分支结果后
    // 目的 确定BTB中是否有该分支的条目 确定命中了哪个way（用于更新计数器）准备BTB更新数据
    // 数据流：update_PC → btb_file → update_set → update_read_logic → 更新控制
    // Use btb_read_logic to read the set for idu_btb_update
    ysyx_25060170_btb_read_logic u_ysyx_25060170_update_read(
         .set_data      (update_set             )//<<i<<
        ,.pc_tag        (update_tag             )//<<i<<
        ,.hit1          (update_branch1         )//>>o>>
        ,.hit2          (update_branch2         )//>>o>>
        /* verilator lint_off PINCONNECTEMPTY */     
        ,.target        (                       )//>>o>>
        ,.valid         (                       )//>>o>>
        ,.predictedTaken(                       )//>>o>>
        /* verilator lint_on  PINCONNECTEMPTY */
    );

    // LRU tracking
    ysyx_25060170_lru u_ysyx_25060170_lru(
         .clk           (clk                    )//<<i<<
        ,.rst           (rst                    )//<<i<<
        ,.read_index    (index                  )//<<i<<
        ,.branch1_used  (check_branch1          )//<<i<<
        ,.branch2_used  (check_branch2          )//<<i<<
        ,.update        (idu_btb_update         )//<<i<<
        ,.update_index  (update_index           )//<<i<<
        ,.update_branch1(update_branch1         )//<<i<<
        ,.update_branch2(update_branch2         )//<<i<<
        ,.lru_read_bit  (lru_read               )//>>o>>
        ,.lru_write_bit (lru_write              )//>>o>>
    );

    // Build write set
    ysyx_25060170_btb_write_logic u_ysyx_25060170_write_logic (
         .old_set       (update_set             )//<<i<<
        ,.new_tag       (update_tag             )//<<i<<
        ,.new_target    (idu_btb_updateTarget   )//<<i<<
        ,.mispredicted  (idu_btb_mispredicted   )//<<i<<
        ,.update        (idu_btb_update         )//<<i<<
        ,.update_branch1(update_branch1         )//<<i<<
        ,.update_branch2(update_branch2         )//<<i<<
        ,.lru_write     (lru_write              )//<<i<<
        ,.write_set     (write_set              )//>>o>>
    );

endmodule
