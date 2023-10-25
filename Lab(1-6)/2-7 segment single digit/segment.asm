
_main:

;segment.c,2 :: 		void main() {
;segment.c,3 :: 		int i=0;
	CLRF       main_i_L0+0
	CLRF       main_i_L0+1
	MOVLW      192
	MOVWF      main_array_L0+0
	MOVLW      249
	MOVWF      main_array_L0+1
	MOVLW      164
	MOVWF      main_array_L0+2
	MOVLW      176
	MOVWF      main_array_L0+3
	MOVLW      153
	MOVWF      main_array_L0+4
	MOVLW      146
	MOVWF      main_array_L0+5
	MOVLW      130
	MOVWF      main_array_L0+6
	MOVLW      248
	MOVWF      main_array_L0+7
	MOVLW      128
	MOVWF      main_array_L0+8
	MOVLW      144
	MOVWF      main_array_L0+9
;segment.c,5 :: 		trisb=0x00;
	CLRF       TRISB+0
;segment.c,6 :: 		portb=0xff;
	MOVLW      255
	MOVWF      PORTB+0
;segment.c,7 :: 		while(1){
L_main0:
;segment.c,8 :: 		portb=array[i];
	MOVF       main_i_L0+0, 0
	ADDLW      main_array_L0+0
	MOVWF      FSR
	MOVF       INDF+0, 0
	MOVWF      PORTB+0
;segment.c,9 :: 		delay_ms(1000);
	MOVLW      11
	MOVWF      R11+0
	MOVLW      38
	MOVWF      R12+0
	MOVLW      93
	MOVWF      R13+0
L_main2:
	DECFSZ     R13+0, 1
	GOTO       L_main2
	DECFSZ     R12+0, 1
	GOTO       L_main2
	DECFSZ     R11+0, 1
	GOTO       L_main2
	NOP
	NOP
;segment.c,10 :: 		i++;
	INCF       main_i_L0+0, 1
	BTFSC      STATUS+0, 2
	INCF       main_i_L0+1, 1
;segment.c,11 :: 		if(i==10)
	MOVLW      0
	XORWF      main_i_L0+1, 0
	BTFSS      STATUS+0, 2
	GOTO       L__main5
	MOVLW      10
	XORWF      main_i_L0+0, 0
L__main5:
	BTFSS      STATUS+0, 2
	GOTO       L_main3
;segment.c,12 :: 		i=0;
	CLRF       main_i_L0+0
	CLRF       main_i_L0+1
L_main3:
;segment.c,13 :: 		}
	GOTO       L_main0
;segment.c,14 :: 		}
L_end_main:
	GOTO       $+0
; end of _main
