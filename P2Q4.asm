INCLUDE Irvine32.inc

.DATA
TC		DWORD 3200
TF		DWORD ?
MULTI	DWORD 90
DIVISOR DWORD 4

.CODE
MAIN PROC
	MOV EAX, TC
	MUL MULTI
	DIV DIVISOR
	ADD EAX, TC
	MOV TF, EAX

	MOV EAX, TF
	CALL WRITEINT
	CALL CRLF

	EXIT
MAIN ENDP
END MAIN