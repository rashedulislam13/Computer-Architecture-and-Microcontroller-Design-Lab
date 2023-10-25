  //code for wave drive
 void main()
 {
    CMCON=0x07;
    ADCON1=0x06;
    TRISB=0;
    portb=0x0F;
    //while(1)
    //{
    //portb=0b00000001;
    // Delay_ms(500);
    // portb=0b00000010;
    // Delay_ms(500);
    // portb=0b00000100;
    // Delay_ms(500);
    // portb=0b00001000;
    // Delay_ms(500);


   // }

//code for Full drive

    while(1)
    {
     portb=0b00000011;
     Delay_ms(500);
     portb=0b00000110;
     Delay_ms(500);
     portb=0b00001100;
     Delay_ms(500);
     portb=0b00001001;
     Delay_ms(500);


    }



 }