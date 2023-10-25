
_main:

;segment2digit.c,3 :: 		void main() {
;segment2digit.c,4 :: 		trisb=0x00;
	CLRF       TRISB+0
;segment2digit.c,5 :: 		trisc=0x00;
	CLRF       TRISC+0
;segment2digit.c,6 :: 		portb=0x00;
	CLRF       PORTB+0
;segment2digit.c,7 :: 		portc=0x00;
	CLRF       PORTC+0
;segment2digit.c,8 :: 		trisd=0xff;
	MOVLW      255
	MOVWF      TRISD+0
;segment2digit.c,9 :: 		portd=0;
	CLRF       PORTD+0
;segment2digit.c,10 :: 		while(1){
L_main0:
;segment2digit.c,11 :: 		int l=0;
	CLRF       main_l_L1+0
	CLRF       main_l_L1+1
;segment2digit.c,12 :: 		while(l<50){
L_main2:
	MOVLW      128
	XORWF      main_l_L1+1, 0
	MOVWF      R0+0
	MOVLW      128
	SUBWF      R0+0, 0
	BTFSS      STATUS+0, 2
	GOTO       L__main10
	MOVLW      50
	SUBWF      main_l_L1+0, 0
L__main10:
	BTFSC      STATUS+0, 0
	GOTO       L_main3
;segment2digit.c,13 :: 		portc.f0=0;
	BCF        PORTC+0, 0
;segment2digit.c,14 :: 		portb=segment[i/10];
	MOVLW      10
	MOVWF      R4+0
	MOVLW      0
	MOVWF      R4+1
	MOVF       _i+0, 0
	MOVWF      R0+0
	MOVF       _i+1, 0
	MOVWF      R0+1
	CALL       _Div_16x16_S+0
	MOVF       R0+0, 0
	ADDLW      _segment+0
	MOVWF      FSR
	MOVF       INDF+0, 0
	MOVWF      PORTB+0
;segment2digit.c,15 :: 		delay_ms(10);
	MOVLW      26
	MOVWF      R12+0
	MOVLW      248
	MOVWF      R13+0
L_main4:
	DECFSZ     R13+0, 1
	GOTO       L_main4
	DECFSZ     R12+0, 1
	GOTO       L_main4
	NOP
;segment2digit.c,16 :: 		portc.f0=1;
	BSF        PORTC+0, 0
;segment2digit.c,18 :: 		portc.f1=0;
	BCF        PORTC+0, 1
;segment2digit.c,19 :: 		portb=segment[i%10];
	MOVLW      10
	MOVWF      R4+0
	MOVLW      0
	MOVWF      R4+1
	MOVF       _i+0, 0
	MOVWF      R0+0
	MOVF       _i+1, 0
	MOVWF      R0+1
	CALL       _Div_16x16_S+0
	MOVF       R8+0, 0
	MOVWF      R0+0
	MOVF       R8+1, 0
	MOVWF      R0+1
	MOVF       R0+0, 0
	ADDLW      _segment+0
	MOVWF      FSR
	MOVF       INDF+0, 0
	MOVWF      PORTB+0
;segment2digit.c,20 :: 		delay_ms(10);
	MOVLW      26
	MOVWF      R12+0
	MOVLW      248
	MOVWF      R13+0
L_main5:
	DECFSZ     R13+0, 1
	GOTO       L_main5
	DECFSZ     R12+0, 1
	GOTO       L_main5
	NOP
;segment2digit.c,21 :: 		portc.f1=1;
	BSF        PORTC+0, 1
;segment2digit.c,22 :: 		l++;
	INCF       main_l_L1+0, 1
	BTFSC      STATUS+0, 2
	INCF       main_l_L1+1, 1
;segment2digit.c,23 :: 		}
	GOTO       L_main2
L_main3:
;segment2digit.c,24 :: 		if(portd.f0==1)
	BTFSS      PORTD+0, 0
	GOTO       L_main6
;segment2digit.c,25 :: 		i++;
	INCF       _i+0, 1
	BTFSC      STATUS+0, 2
	INCF       _i+1, 1
L_main6:
;segment2digit.c,26 :: 		if(portd.f1==1)
	BTFSS      PORTD+0, 1
	GOTO       L_main7
;segment2digit.c,27 :: 		i--;
	MOVLW      1
	SUBWF      _i+0, 1
	BTFSS      STATUS+0, 0
	DECF       _i+1, 1
L_main7:
;segment2digit.c,28 :: 		if(i<0)
	MOVLW      128
	XORWF      _i+1, 0
	MOVWF      R0+0
	MOVLW      128
	SUBWF      R0+0, 0
	BTFSS      STATUS+0, 2
	GOTO       L__main11
	MOVLW      0
	SUBWF      _i+0, 0
L__main11:
	BTFSC      STATUS+0, 0
	GOTO       L_main8
;segment2digit.c,29 :: 		i=0;
	CLRF       _i+0
	CLRF       _i+1
L_main8:
;segment2digit.c,30 :: 		}
	GOTO       L_main0
;segment2digit.c,31 :: 		}
L_end_main:
	GOTO       $+0
; end of _main
