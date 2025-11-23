 `include "define.v"

 module ysyx_25060170_wbu(
 	
 	input	    wire            		         rst         ,
 	input	    wire [`ysyx_25060170_DATA]   ls_rd_data  ,
 	input     wire [1:0]      		         wb_ctl      ,
 	input     wire [`ysyx_25060170_DATA]   exu_res     ,
 	
 	output    reg  [`ysyx_25060170_DATA]   wb_data     ,
   output    reg                          inst_finish  	
);

always @(*) begin
    if(rst == `ysyx_25060170_RSTABLE) begin
       wb_data=`ysyx_25060170_ZERO32;
    end
    else begin
      case(wb_ctl)
        2'b01 :		begin wb_data = ls_rd_data ; inst_finish = 1;end
        2'b10 : 	   begin wb_data = exu_res    ; inst_finish = 1;end
        default : 	begin wb_data = `ysyx_25060170_ZERO32  ; 
                           inst_finish = 0; end
    endcase
 end
end

endmodule

