CPPFLAGS = -D_FORTIFY_SOURCE=2

CFLAGS = -std=c23 -Wpedantic \
         -Wall -Wextra \
         -Wconversion -Wwrite-strings -Wstrict-prototypes -Werror \
         -fstack-protector-all \
         -O2 -g

PRGS = hello

all: $(PRGS)

clean:
	$(RM) *.o *~ $(PRGS) \#*\#

