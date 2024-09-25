VPATH=../src

all:libprint.a

print.o : print.c

libprint.a : print.o
	$(AR) $(ARFLAGS) $@ $^
	
.PHONY: clean
clean:
	rm -f *.o *.a