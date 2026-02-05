CPPFLAGS = -D_FORTIFY_SOURCE=2

CFLAGS = -std=c23 -Wpedantic \
         -Wall -Wextra \
         -Wconversion -Wwrite-strings -Wstrict-prototypes -Werror \
         -fstack-protector-all \
         -O2 -g

PRGS = hello printf scanf array matrix strlen strncpy strncat

all: $(PRGS) hello.o

clean: clean_all hello.o hello

clean_all:
	$(RM) *.o *~ $(PRGS) \#*\#

