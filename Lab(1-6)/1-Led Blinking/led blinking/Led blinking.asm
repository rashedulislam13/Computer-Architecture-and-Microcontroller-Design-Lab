
_main:

;Led blinking.c,1 :: 		void main() {
;Led blinking.c,2 :: 		TRISB=0x00; // set portb as output
	CLRF       TRISB+0
;Led blinking.c,3 :: 		PORTB=0x00; //initialize all portb as off state
	CLRF       PORTB+0
;Led blinking.c,5 :: 		while(1){
L_main0:
;Led blinking.c,6 :: 		PORTB.f0=0xff;
	BSF        PORTB+0, 0
;Led blinking.c,7 :: 		delay_ms(4000);
	MOVLW      41
	MOVWF      R11+0
	MOVLW      150
	MOVWF      R12+0
	MOVLW      127
	MOVWF      R13+0
L_main2:
	DECFSZ     R13+0, 1
	GOTO       L_main2
	DECFSZ     R12+0, 1
	GOTO       L_main2
	DECFSZ     R11+0, 1
	GOTO       L_main2
;Led blinking.c,8 :: 		PORTB.f0=0x00;
	BCF        PORTB+0, 0
;Led blinking.c,9 :: 		PORTB.f1=0xff;
	BSF        PORTB+0, 1
;Led blinking.c,10 :: 		delay_ms(4000);
	MOVLW      41
	MOVWF      R11+0
	MOVLW      150
	MOVWF      R12+0
	MOVLW      127
	MOVWF      R13+0
L_main3:
	DECFSZ     R13+0, 1
	GOTO       L_main3
	DECFSZ     R12+0, 1
	GOTO       L_main3
	DECFSZ     R11+0, 1
	GOTO       L_main3
;Led blinking.c,11 :: 		PORTB.f2=0xff;
	BSF        PORTB+0, 2
;Led blinking.c,12 :: 		PORTB.f1=0x00;
	BCF        PORTB+0, 1
;Led blinking.c,13 :: 		delay_ms(4000);
	MOVLW      41
	MOVWF      R11+0
	MOVLW      150
	MOVWF      R12+0
	MOVLW      127
	MOVWF      R13+0
L_main4:
	DECFSZ     R13+0, 1
	GOTO       L_main4
	DECFSZ     R12+0, 1
	GOTO       L_main4
	DECFSZ     R11+0, 1
	GOTO       L_main4
;Led blinking.c,14 :: 		PORTB.f2=0x00;
	BCF        PORTB+0, 2
;Led blinking.c,15 :: 		}
	GOTO       L_main0
;Led blinking.c,16 :: 		}
L_end_main:
	GOTO       $+0
; end of _main
