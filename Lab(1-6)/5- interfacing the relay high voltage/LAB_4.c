void main() {

        TRISC = 0x00; //Set as PORTC output
        PORTC = 0x00;
        
        while(1)
        {
          portc.f0 = 1;
          delay_ms(1000);
          portc.f0 = 0;
          delay_ms(1000);
        
        
        }
}