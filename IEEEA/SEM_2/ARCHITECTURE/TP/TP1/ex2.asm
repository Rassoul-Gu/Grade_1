assume    CS : code

code      segment

debut :
          mov AX, 142
          add AX, 151
          mov AX, 4C00h
          int 21h
code      ends
          end debut
          ;Le resultat de l'addition dans AX est 0293 qui est juste
