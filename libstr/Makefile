VPATH=../src ../include

all:libstr.a

libstr.a : strcat.o
	$(AR) $(ARFLAGS) $@ $^
	
.PHONY: clean
clean:
	rm -f *.o *.a