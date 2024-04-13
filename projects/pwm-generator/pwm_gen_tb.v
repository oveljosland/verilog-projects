`timescale 1ns / 1ps
`include "pwm_gen.v"

module tb_pwm_gen;
    // Inputs
    reg clk;
    reg increase_duty;
    reg decrease_duty;
    // Outputs
    wire PWM_OUT;
    // Instantiate the PWM Generator with variable duty cycle in Verilog
    pwm_gen pwm_generator_unit(
        .clk(clk),
        .increase_duty(increase_duty),
        .decrease_duty(decrease_duty),
        .PWM_OUT(PWM_OUT)
    );
    // Clock generation
    always #5 clk = ~clk;

    // Stimulus generation
    initial begin
        clk = 0;
        increase_duty = 0;
        decrease_duty = 0;

        $dumpfile("waveform.vcd"); // Specify the VCD file name
        $dumpvars(0, tb_pwm_gen); // Dump all signals in the module

        #100; // Wait for initial stabilization

        // Simulate button presses
        #10 increase_duty = 1; #10 increase_duty = 0; // increase duty cycle by 10%
        #10 increase_duty = 1; #10 increase_duty = 0; // increase duty cycle by 10%
        #10 increase_duty = 1; #10 increase_duty = 0; // increase duty cycle by 10%
        #10 decrease_duty = 1; #10 decrease_duty = 0; // decrease duty cycle by 10%
        #10 decrease_duty = 1; #10 decrease_duty = 0; // decrease duty cycle by 10%
        #10 decrease_duty = 1; #10 decrease_duty = 0; // decrease duty cycle by 10%
        #10 decrease_duty = 1; #10 decrease_duty = 0; // decrease duty cycle by 10%

        #100; // Wait for simulation to stabilize
        $finish; // End simulation
    end
endmodule
