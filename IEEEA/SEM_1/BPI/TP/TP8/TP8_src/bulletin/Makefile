CFLAGS=-std=c2x -Wall -Wconversion -Werror -Wextra -Wfatal-errors -Wpedantic -Wwrite-strings -O2

EXEC=bulletin

all: $(EXEC)

bulletin:  main.o
	$(LINK.o) $^ $(LOADLIBES) $(LDLIBS) -o $@

main.o: main.c ue.h

clean:
	$(RM) *.o

mrproper: clean
	$(RM) $(EXEC)
