#line 1 "E:/Course Materials/3rd Year 1st Semester/3rd Year 1st Semester(S2)/Tarun-Lab/All Lab/1-Led Blinking/led blinking/Led blinking.c"
void main() {
 TRISB=0x00;
 PORTB=0x00;

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
