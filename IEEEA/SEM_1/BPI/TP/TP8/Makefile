CFLAGS=-std=c2x -Wall -Wconversion -Werror -Wextra -Wfatal-errors -Wpedantic -Wwrite-strings -O2

EXEC=bulletin

all: $(EXEC)

bulletin:  main.o tab_double_io.o tab_notes.o
	$(LINK.o) $^ $(LOADLIBES) $(LDLIBS) -o $@

tab_double_io.o: tab_double_io.c ue.h

tab_notes.o: tab_notes.c ue.h

main.o: main.c ue.h

clean:
	$(RM) *.o

mrproper: clean
	$(RM) $(EXEC)
