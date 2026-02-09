assume CS : code ; on precise ici a l ’ assembleur que les
                 ; instructions du programme se trouvent dans
                 ; le segment appele code .
                 ; ce progamme comporte qu'une seule segment
                 ;une directive est une commande qui permet de declarer des segment et autre
                 ;assume permet de declarer les segments
		             ;segment permet d'initialiser les segments de codes et de donnees


                 ;les commentaires servent à expliquer le programme en detaille
code segment     ; definition d ’ une zone memoire de type " segment "

debut : ; debut des instructions
         ; sequence d ’ instructions
      mov AL, 27h
		  add AL, 21h
		  mov AX, 4C00h
		  int 21h

code ends ; fin du segment de memoire dedie au code
end debut ; fin du programme
         
