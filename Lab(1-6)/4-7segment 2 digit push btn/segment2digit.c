 char segment[]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
int i=0;
void main() {
     trisb=0x00;
     trisc=0x00;
     portb=0x00;
     portc=0x00;
     trisd=0xff;
     portd=0;
     while(1){
        int l=0;
        while(l<50){
          portc.f0=0;
          portb=segment[i/10];
          delay_ms(10);
          portc.f0=1;
          //turning on second digit
          portc.f1=0;
          portb=segment[i%10];
          delay_ms(10);
           portc.f1=1;
          l++;
          }
      if(portd.f0==1)
         i++;
      if(portd.f1==1)
         i--;
      if(i<0)
         i=0;
     }
}