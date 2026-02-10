assume    CS : code

code      segment

debut :
          mov AX, -114h
          add AX, -105h
          mov AX, 4C00h
          int 21h
code      ends
          end debut
