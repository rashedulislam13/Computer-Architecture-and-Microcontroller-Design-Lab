//create a varible that will hold the ADC value
int valADC;
//create a char array
char x[4];
void main() {
   //initialize uart
   uart1_init(9600);
   
   //initialize adc
   adc_init();
   
   //create a loop
   while(1){
      //read adc value in RA0
      valADC = adc_read(0);
      //convert into string/char array
      inttostr(valADC,x);
      //print
      uart1_write_text("Analog valu=");
      uart1_write_text(x);
      strcpy(x,"");
      uart1_write(13);
      delay_ms(1000);
   }
}