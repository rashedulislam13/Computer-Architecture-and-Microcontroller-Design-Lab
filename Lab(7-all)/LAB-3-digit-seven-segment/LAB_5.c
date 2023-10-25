// it's for common cathode and decimal value for
int array[]={63,6,91,79,102,109,125,7,127,111};
void main() {
           int i=100,j;
           int left,right,middle;
           TRISC = 0x00; //PORTC as a output
           TRISD = 0x00; //PORTD as a output
           PORTC=0x00;   //  initialize portc off condition
           PORTD=0x00;   //  initialize portd off condition

           while(1){
                   left = i/100;
                   middle = (i%100)/10;
                   right = (i%100)%10;
                   //1 sec for late any digit use loop total 30 sec for 1000/30 times loop
                   for(j=0;j<34;j++){
                           portd.f0=1;
                           portc = array[left];
                           portd.f1=0;
                           delay_ms(10);
                           portd.f1=1;
                           portc = array[middle];
                           portd.f2=0;
                           delay_ms(10);
                           portd.f2=1;
                           portc = array[right];
                           portd.f3=0;
                           delay_ms(10);
                           portd.f3=1;   
                                     }
                   i++;
                   if(i>999){i=100;}
                   }

                   
                   
                           }