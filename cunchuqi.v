`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:16:12 05/07/2022 
// Design Name: 
// Module Name:    cunchuqi 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module cunchuqi(mem_arr,sw,mem_write,clk,led);
	input[7:2] mem_arr;
	input[1:0] sw;
	input mem_write,clk;
	output reg[7:0] led;
	reg [63:0]data[0:31]; //写存储器的数据
	
	always@(posedge clk)
	begin
		if(!mem_write)
		begin
			case(sw)
			2'b00:led<=data[mem_arr][7:0];
			2'b01:led<=data[mem_arr][15:8];
			2'b10:led<=data[mem_arr][23:16];
			2'b11:led<=data[mem_arr][31:24];
			endcase
		end
		else
		begin
			case(sw)
			2'b00:data[mem_arr]<=32'h1234_5678;
			2'b01:data[mem_arr]<=32'h8765_4321;
			2'b10:data[mem_arr]<=32'hFFFF_FFFF;
			2'b11:data[mem_arr]<=32'h0001_1000;
			endcase
		end
	end

endmodule
