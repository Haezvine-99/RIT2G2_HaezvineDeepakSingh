include Irvine32.inc

checkLongestDecreasing PROTO C, value:SDWORD, outWidth:DWORD

.data
intArray	SDWORD	-5, 10, 20, 80, 73, 32, 20, 22, 19, -5

.code
p1q2 PROC C
	INVOKE checkLongestDecreasing, offset intArray, lengthOf intArray
	call writeDec
	call crlf
	ret
p1q2 ENDP
end