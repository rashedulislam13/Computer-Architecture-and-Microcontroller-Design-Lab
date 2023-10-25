#line 1 "C:/Users/MD IMRAN HOSSAIN/Desktop/7-SEGMENT/2-7 segment/segment.c"

void main() {
 int i=0;
 char array[]={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
 trisb=0x00;
 portb=0xff;
 while(1){
 portb=array[i];
 delay_ms(1000);
 i++;
 if(i==10)
 i=0;
 }
}
