`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:31:12 05/07/2022
// Design Name:   cunchuqi
// Module Name:   D:/zuchengyuanli/cunchuqi/test.v
// Project Name:  cunchuqi
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: cunchuqi
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test;

	// Inputs
	reg [7:2] mem_arr;
	reg [1:0] sw;
	reg mem_write;
	reg clk;

	// Outputs
	wire [7:0] led;

	// Instantiate the Unit Under Test (UUT)
	cunchuqi uut (
		.mem_arr(mem_arr), 
		.sw(sw), 
		.mem_write(mem_write), 
		.clk(clk), 
		.led(led)
	);

	initial begin
		// Initialize Inputs
		mem_arr = 0;
		sw = 0;
		mem_write = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
      mem_arr = 6'b000000;
		sw = 2'b00;
		mem_write = 1;

		// Wait 100 ns for global reset to finish
		#100;
		mem_arr = 6'b000000;
		sw = 2'b00;
		mem_write = 0;

		// Wait 100 ns for global reset to finish
		#100;
		mem_arr = 6'b000000;
		sw = 2'b01;
		mem_write = 0;

		// Wait 100 ns for global reset to finish
		#100;
		mem_arr = 6'b000000;
		sw = 2'b10;
		mem_write = 0;

		// Wait 100 ns for global reset to finish
		#100;
		mem_arr = 6'b000000;
		sw = 2'b11;
		mem_write = 0;

		// Wait 100 ns for global reset to finish
		#100;
		mem_arr = 6'b000001;
		sw = 2'b00;
		mem_write = 0;

		// Wait 100 ns for global reset to finish
		#100;
		// Add stimulus here

	end
      always #5 clk=~clk;
endmodule

