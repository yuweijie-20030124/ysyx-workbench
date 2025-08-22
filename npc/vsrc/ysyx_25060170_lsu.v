 `include "define.v"

  module ysyx_25060170_lsu(
  	input	wire                    		        rst             ,
  	input	wire                    		        clk             ,
 	input	wire	[`ysyx_25060170_DATA]           alu_res         ,   //ALU的计算结果，代表操作数的地址或访问的数据
 	input	wire	[`ysyx_25060170_DATA]           store_data      ,   //来自执行单元的数据，准备存储到内存中
 	input	wire	[3:0]               		    ls_ctl          ,   //当前操作时加载操作的字节大小
    
	input	wire					                wb_ready        ,
	input	wire					                ex_valid        ,
 	output	wire					                ls_ready        ,
 	output	wire					                ls_valid        ,
 	output	wire					                ls_flush        ,
 	output	wire					                ls_jump         ,
 	output	wire	[`ysyx_25060170_PC]		        ls_jump_pc      ,
 	
 	 output	wire	[`ysyx_25060170_DATA]      	    ls_data_forward ,
 	output	wire	[`ysyx_25060170_DATA]      	    ls_data_o,
    output	wire	[`ysyx_25060170_DATA]      	    data_o,
    output  wire    [7:0]                           wlen       

 );
 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//------------------------------------------------------hzd_ctl--------------------------------------------------------------//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

 assign ls_ready = wb_ready | data_ok;
 assign ls_valid = ex_valid | data_ok;
 
 wire [`ysyx_25060170_DATAADDR] raddr ;
 wire [`ysyx_25060170_DATAADDR] waddr ; 
 reg  [`ysyx_25060170_DATA] load_data ;
 
 reg data_ok;
 
always@(posedge clk) begin
	if(rst == `ysyx_25060170_RSTABLE) begin
		data_ok <= 1'b0;
	end
	else if(~(ls_ready | ex_valid)) begin 
		data_ok <= 1'b1;
	end
	else begin
		data_ok <= data_ok;
	end
end
 
 reg [`ysyx_25060170_DATA] data_i;
 
 always@(posedge clk) begin
	if(rst == `ysyx_25060170_RSTABLE) begin
		data_i <= 32'b0;
	end
	else if(~(ls_ready | ex_valid)) begin 
		data_i <= 32'd0;
	end
	else begin
		data_i <= data_i;
	end
end

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//------------------------------------------------------load store --------------------------------------------------------------//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 
 //--------------------------load-----------------------------------------------------------------//
wire [ 2:0] byte_sel = alu_res[2:0] ;
wire [ 1:0] half_sel = alu_res[2:1] ;
wire 	    word_sel = alu_res[2]   ;

reg  [ 7:0] data_byte      ;
reg  [15:0] data_half	   ;
wire [31:0] data_word      ;

always @(*) begin
    if(rst == `ysyx_25060170_RSTABLE) begin
        data_byte = 8'b00000000           ;
    end 
    else begin 
        case (byte_sel)
            3'b000: data_byte = data_i[ 7: 0] ;
            3'b001: data_byte = data_i[15: 8] ;
            3'b010: data_byte = data_i[23:16] ;
            3'b011: data_byte = data_i[31:24] ;

            default: data_byte = 0;
        endcase
    end 
end

always @(*) begin
    if(rst == `ysyx_25060170_RSTABLE) begin 
        data_half = 16'h0  ;
    end 
    else begin 
        case (half_sel)
            2'b00: data_half = data_i[15: 0] ;
            2'b01: data_half = data_i[31:16] ;
            2'b10: data_half = data_i[47:32] ; 
            default: data_half = data_i[63:48];
        endcase
    end 
end

assign data_word = word_sel ? data_i[63:32] : data_i[31:0] ;

always @(*) begin
    if(rst == `ysyx_25060170_RSTABLE) begin
        load_data = `ysyx_25060170_ZERO32 ;
    end 
    else if(ls_ctl[3] == 1'b1 ) begin
        case (ls_ctl[2:0])
            3'b001:begin load_data = {{56{data_byte[7]}} , data_byte} ; end
            3'b010:begin load_data = {{48{data_half[15]}} , data_half} ; end
            3'b011:begin load_data = {{32{data_word[31]}} , data_word} ; end
            3'b100:begin load_data = data_i			; end
            3'b101:begin load_data = {{56{1'b0}} , data_byte} ; end
            3'b110:begin load_data = {{48{1'b0}} , data_half} ; end
            3'b111:begin load_data = {{32{1'b0}} , data_word} ; end
            default:begin load_data = `ysyx_25060170_ZERO32 ; end
        endcase
    end
    else begin load_data = `ysyx_25060170_ZERO32 ; end
end


//--------------------------store--------------------------------------------------------------------//
reg [ 7:0]      sb_mask    ;
reg [ 7:0]      sh_mask    ;
reg [ 7:0]      sw_mask    ;

reg [`ysyx_25060170_DATA] sb_data;
reg [`ysyx_25060170_DATA] sw_data;
reg [`ysyx_25060170_DATA] sh_data;

always @(*) begin
    if(rst == `ysyx_25060170_RSTABLE) begin
        sb_mask = 8'd0  ;
        sb_data = 32'd0;
    end
    else begin
        case (byte_sel)
            3'b000:    begin
            	sb_data = {56'd0,store_data[7:0]};
                sb_mask = 8'b00000001 ;
            end 
            3'b001:    begin
            	sb_data = {48'd0,store_data[7:0],8'd0};
                sb_mask = 8'b00000010 ;
            end 
            3'b010:    begin 
            	sb_data = {40'd0,store_data[7:0],16'd0};
                sb_mask = 8'b00000100 ;
            end 
            3'b011:    begin
            	sb_data = {32'd0,store_data[7:0],24'd0};
                sb_mask = 8'b00001000 ;
            end 
            3'b100:    begin 
            	sb_data = {24'd0,store_data[7:0],32'd0};
                sb_mask = 8'b00010000 ;
            end 
            3'b101:    begin
            	sb_data = {16'd0,store_data[7:0],40'd0}; 
                sb_mask = 8'b00100000 ;
            end 
            3'b110:    begin
            	sb_data = {8'd0,store_data[7:0],48'd0};
                sb_mask = 8'b01000000 ;
            end  
            default:   begin 
            	sb_data = {store_data[7:0],56'd0};
                sb_mask = 8'b10000000 ;
            end
        endcase
    end
end

always @(*) begin
    if(rst == `ysyx_25060170_RSTABLE) begin
        sh_mask = 8'd0  ;
        sh_data = 32'd0;
    end
    else begin
        case (half_sel)
            2'b00:     begin
                sh_mask = 8'b00000011  ;
                sh_data = {48'd0,store_data[15:0]};
            end 
            2'b01:     begin
                sh_mask = 8'b00001100  ;
                sh_data = {32'd0,store_data[15:0],16'd0};
            end
            2'b10:     begin
                sh_mask = 8'b00110000  ;
                sh_data = {16'd0,store_data[15:0],32'd0};
            end
            default:   begin
                sh_mask = 8'b11000000  ;
                sh_data = {store_data[15:0],48'd0};
            end 
        endcase
    end
end

always @(*) begin
    if(rst == `ysyx_25060170_RSTABLE) begin
        sw_mask = 8'd0  ;
        sw_data = 32'd0;
    end
    else begin
        case (word_sel)
            1'b0:    begin
                sw_mask = 8'b00001111  ;
                sw_data = {32'd0,store_data[31:0]};
            end 
            default: begin
                sw_mask = 8'b11110000  ;
                sw_data = {store_data[31:0],32'd0};
            end 
        endcase
    end
end

always @(*) begin
    if(rst == `ysyx_25060170_RSTABLE) begin
        data_o = `ysyx_25060170_ZERO32 ;
        wlen = 8'd0  ;
    end
    else begin
        case (ls_ctl)
            4'b0001:   begin
                data_o = sb_data ;
                wlen = sb_mask ; 
            end
            4'b0010:   begin
                data_o = sh_data;
                wlen = sh_mask ; 
            end
            4'b0100:   begin
                data_o = sw_data ;
                wlen = sw_mask ; 
            end
            4'b0101:   begin
                data_o = store_data ;
                wlen = 8'b11111111 ; 
            end
            default: begin
                data_o = `ysyx_25060170_ZERO32 ;
                wlen = 8'd0  ;
            end
        endcase
    end
end

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//------------------------------------------------------output--------------------------------------------------------------//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//------------------------------------------------------out to ifu--------------------------------------------------------------//

 assign ls_flush = ls_jump;
 assign ls_jump_pc = alu_res;
 
//------------------------------------------------------out to idu--------------------------------------------------------------//

//  assign ls_data_forward  = re ? load_data : alu_res ;
assign ls_data_forward  = alu_res ;

//------------------------------------------------------out to wbu--------------------------------------------------------------//

 assign ls_data_o  = load_data;

endmodule
