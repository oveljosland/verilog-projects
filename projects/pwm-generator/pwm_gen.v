// verilog kode for pwm generator med variabel pulsbredde
// to knapper brukes til å øke/redusere pulsbredden med 10%
module pwm_gen
    (
        clk,            // input: klokke 100MHz
        increase_duty,  // input: +
        decrease_duty,  // input: -
        PWM_OUT         // output: PWM 10Mhz
    );
    input clk;
    input increase_duty;
    input decrease_duty;
    output PWM_OUT;
    wire slow_clk_enable;           // slow clock enable for debouncing
    reg[27:0] counter_debounce=0;   // teller for debouncing
    wire tmp1,tmp2,duty_inc;        // midleritig flip-flop signal for debouncing av (+) knapp
    wire tmp3,tmp4,duty_dec;        // midlertidig flip-flop signal for debouncing av (-) knapp
    reg[3:0] counter_PWM=0;         // teller for å lage 10Mhz PWM signal
    reg[3:0] DUTY_CYCLE=5;          // pulsbredde starter på 50%

    // debouncer knappene for +/- pulsbredde
    // genererer først en sakte klokke for debouncing flip-flop (4Hz)
    always @(posedge clk)
        begin
            counter_debounce <= counter_debounce + 1;
            // kommenter ut for å kjøre på FPGA 
            //if(counter_debounce>=25000000) then

            // kommenter ut for å kjøre simulering
            if(counter_debounce>=1)
                counter_debounce <= 0;
        end
    // kommenter ut for å kjøre på FPGA
    // assign slow_clk_enable = counter_debounce == 25000000 ?1:0;
    
    // kommenter for å kjøre på FPGA
    assign slow_clk_enable = counter_debounce == 1 ?1:0;
    
    // debouncing av flip-flop for (+) knapp
    DFF_PWM PWM_DFF1(clk,slow_clk_enable,increase_duty,tmp1);
    DFF_PWM PWM_DFF2(clk,slow_clk_enable,tmp1, tmp2);
    assign duty_inc =  tmp1 & (~ tmp2) & slow_clk_enable;

    // debouncing av flip-flop for (-) knapp
    DFF_PWM PWM_DFF3(clk,slow_clk_enable,decrease_duty, tmp3);
    DFF_PWM PWM_DFF4(clk,slow_clk_enable,tmp3, tmp4);
    assign duty_dec =  tmp3 & (~ tmp4) & slow_clk_enable;

    // moduler pulsbredde med (+) eller (-) knapp
    always @(posedge clk)
        begin
            if(duty_inc==1 && DUTY_CYCLE <= 9)
                DUTY_CYCLE <= DUTY_CYCLE + 1;       // pulsbredde + 10%
            else if(duty_dec==1 && DUTY_CYCLE>=1)
                DUTY_CYCLE <= DUTY_CYCLE - 1;       // pulsbredde - 10%
        end
    
    // lag 10MHz PWM signal
    always @(posedge clk)
        begin
            counter_PWM <= counter_PWM + 1;
            if(counter_PWM>=9)
                counter_PWM <= 0;
        end
    assign PWM_OUT = counter_PWM < DUTY_CYCLE ? 1:0;
endmodule

// debounce flip-flop for knappene
module DFF_PWM(clk,en,D,Q);
    input clk,en,D;
    output reg Q;
    always @(posedge clk)
        begin
            if(en==1) // slow clock enable signal
                Q <= D;
        end
endmodule