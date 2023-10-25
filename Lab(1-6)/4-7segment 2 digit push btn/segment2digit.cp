#line 1 "E:/Course Materials/3rd Year 1st Semester/3rd Year 1st Semester(S2)/Tarun-Lab/All Lab/4-7segment 2 digit/segment2digit.c"
char array[] = {0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
void main() {
 int i,k,res=0,mod=0;
 TRISB=0x00;
 TRISC=0x00;
 portb=0x00;
 portc=0x00;

 while(1)
 {

 for(i=0;i<100;i++){

 res=i/10;
 mod=i%10;
 for(k=0;k<50;k++){
 portc.f0=1;
 portb=array[res];
 delay_ms(1);
 portc.f0=0;
 portc.f1=1;
 portb=array[mod];
 delay_ms(1);
 portc.f1=0;

 }}


 }
