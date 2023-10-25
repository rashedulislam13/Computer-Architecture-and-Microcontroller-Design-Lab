void servoRotate0()
{
        unsigned int i;
        for(i=0;i<50;i++)
        {
            PORTB.F0=1;
            Delay_us(800);
            PORTB.F0=0;
            Delay_us(19200);
        }
}

void servoRotate90()
{
        unsigned int i;
        for(i=0;i<50;i++)
        {
            PORTB.F0=1;
            Delay_us(1500);
            PORTB.F0=0;
            Delay_us(18500);
        }
}

void servoRotate180()
{
        unsigned int i;
        for(i=0;i<50;i++)
        {
            PORTB.F0=1;
            Delay_us(2200);
            PORTB.F0=0;
            Delay_us(17800);
        }
}

void main() {

            TRISB=0;
            do
            {
                    servoRotate0();
                    Delay_ms(2000);
                    
                    servoRotate90();
                    Delay_ms(2000);
                    
                    servoRotate180();

                    
            }  while(1);
}