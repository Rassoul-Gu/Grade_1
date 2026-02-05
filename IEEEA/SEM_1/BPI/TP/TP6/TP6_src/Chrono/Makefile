CFLAGS=-std=c2x -Wall -Wconversion -Werror -Wextra -Wfatal-errors -Wpedantic -Wwrite-strings -O2 

EXEC=chrono

all: $(EXEC)

chrono: tools_time.o format_time.o ext_time.o main.o
	$(LINK.o) $^ $(LOADLIBES) $(LDLIBS) -o $@

tools_time.o: tools_time.c timeio.h

format_time.o: format_time.c timeio.h

ext_time.o : ext_time.c timeio.h

main.o: main.c timeio.h

clean:
	$(RM) *.o

mrproper: clean
	$(RM) $(EXEC)
