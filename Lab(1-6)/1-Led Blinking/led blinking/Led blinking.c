void main() {
      TRISB=0x00; // set portb as output
      PORTB=0x00; //initialize all portb as off state

     while(1){
      PORTB.f0=0xff;
      delay_ms(4000);
      PORTB.f0=0x00;
      PORTB.f1=0xff;
      delay_ms(4000);
      PORTB.f2=0xff;
      PORTB.f1=0x00;
      delay_ms(4000);
      PORTB.f2=0x00;
      }
}