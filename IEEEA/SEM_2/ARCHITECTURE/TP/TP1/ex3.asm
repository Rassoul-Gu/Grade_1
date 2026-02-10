assume    CS : code

code      segment

debut :
          mov AL, 142
          add AL, 151
          mov AX, 4C00h
          int 21h
code      ends
          end debut
