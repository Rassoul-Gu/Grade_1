assume CS:code
code segment
 debut :
                mov AL, 27h
		sub AL, 21h
		sub AL,6
		mov AX, 4C00h
		int 21h
  code ends
		   end debut
;A la fin Al a pour valour 00
; A la fin de tout les executions AL=93
