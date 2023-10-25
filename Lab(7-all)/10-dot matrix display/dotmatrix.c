 int i;
void main()

{
      TRISC=0x00;
      TRISD=0x00;
      while(1)
      {
      // for I
         portd=0x00;
         portc=0x00;
         delay_ms(500);
          for(i=1;i<=125;i++){
           PORTD=0x80;
           PORTC=0xc3;
           delay_ms(1);

           PORTD=0x40;
           PORTC=0xc3;
           delay_ms(1);

           PORTD=0x20;
           PORTC=0xc3;
           delay_ms(1);

           PORTD=0x10;
           PORTC=0xff;
           delay_ms(1);

           PORTD = 0x08;
           PORTC = 0xff;
           delay_ms(1);

           PORTD =0x04;
           PORTC =0xc3;
           delay_ms(1);

           PORTD = 0x02;
           PORTC = 0xc3;
           delay_ms(1);

           PORTD = 0x01;
           PORTC = 0xc3;
           delay_ms(1);
         }
          // for M
         portc=0x00;
         portd=0x00;
         delay_ms(500);
         for(i=1;i<=125;i++){
           PORTD=0x80;
           PORTC=0xff;
           delay_ms(1);

           PORTD=0x40;
           PORTC=0xff;
           delay_ms(1);

           PORTD=0x20;
           PORTC=0x60;
           delay_ms(1);

           PORTD=0x10;
           PORTC=0x30;
           delay_ms(1);

           PORTD = 0x08;
           PORTC = 0x30;
           delay_ms(1);

           PORTD =0x04;
           PORTC =0x60;
           delay_ms(1);

           PORTD = 0x02;
           PORTC = 0xff;
           delay_ms(1);

           PORTD = 0x01;
           PORTC = 0xff;
           delay_ms(1);
         }
         //for R
         portd=0x00;
         portc=0x00;
         delay_ms(500);
          for(i=1;i<=125;i++){
           PORTD=0x80;
           PORTC=0x00;
           delay_ms(1);

           PORTD=0x40;
           PORTC=0xff;
           delay_ms(1);

           PORTD=0x20;
           PORTC=0xff;
           delay_ms(1);

           PORTD=0x10;
           PORTC=0xCC;
           delay_ms(1);

           PORTD = 0x08;
           PORTC = 0xCC;
           delay_ms(1);

           PORTD =0x04;
           PORTC =0xF7;
           delay_ms(1);

           PORTD = 0x02;
           PORTC = 0x77;
           delay_ms(1);

           PORTD = 0x01;
           PORTC = 0x00;
           delay_ms(1);
         }
         // for A
         portd=0x00;
         portc=0x00;
         delay_ms(500);
         for(i=0;i<125;i++)
         {
           PORTD=0x80;
           PORTC=0x00;
           delay_ms(1);

           PORTD=0x40;
           PORTC=0x7f;
           delay_ms(1);

           PORTD=0x20;
           PORTC=0xff;
           delay_ms(1);

           PORTD=0x10;
           PORTC=0xcc;
           delay_ms(1);

           PORTD = 0x08;
           PORTC = 0xcc;
           delay_ms(1);

           PORTD =0x04;
           PORTC =0xff;
           delay_ms(1);

           PORTD = 0x02;
           PORTC = 0x7f;
           delay_ms(1);

           PORTD = 0x01;
           PORTC = 0x00;
           delay_ms(1);

         }
         //for N
          portd=0x00;
         portc=0x00;
         delay_ms(500);
          for(i=1;i<=125;i++){
           PORTD=0x80;
           PORTC=0x00;
           delay_ms(1);

           PORTD=0x40;
           PORTC=0xff;
           delay_ms(1);

           PORTD=0x20;
           PORTC=0xff;
           delay_ms(1);

           PORTD=0x10;
           PORTC=0x30;
           delay_ms(1);

           PORTD = 0x08;
           PORTC = 0x18;
           delay_ms(1);

           PORTD =0x04;
           PORTC =0xff;
           delay_ms(1);

           PORTD = 0x02;
           PORTC = 0xff;
           delay_ms(1);

           PORTD = 0x01;
           PORTC = 0x00;
           delay_ms(1);
         }


         
     }


}