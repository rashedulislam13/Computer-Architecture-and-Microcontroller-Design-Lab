void main() {
short duty = 0; //initial value for duty
TRISD= 0xff; //PORTD as input
TRISB= 0x00; //PORTB as output
//Run motor in anticlock wise
PORTB.F0=0xff;
PORTB.F1=0x00;
PWM1_init(1000); //Initialize PWM1
PWM1_Start(); //start PWMI
PWM1_Set_Duty(duty); //Set current duty for PWMI
while (1){ //Il endless loop
if (RD0_bit && duty<250) //if button on RDO pressed
{
Delay_ms(100);
if (RD0_bit && duty<250)
{
duty = duty + 10; //increment current_duty
PWM1_Set_Duty(duty); //Change the duty cycle
}
}

if (RD1_bit && duty >0) //button on RDI pressed
{
Delay_ms(100);
if (RD1_bit && duty >0)
{
duty = duty - 10; //decrement duty
PWM1_Set_Duty(duty);
}}
Delay_ms(10); //slow down change pace a little
}
}