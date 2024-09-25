VPATH=../src ../include ../libprint ../libstr
CPPFLAGS=-I ../include
all:HelloWorld

HelloWorld : main.c libprint.a libstr.a
	${CC} ${CPPFLAGS} -o $@ $^

.PHONY: clean
clean:
	rm -f HelloWorld