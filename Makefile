CC=gcc
CFLAGS=-I. -g


adder: adder.o
	gcc adder.o -o adder

hello: hello.o
	gcc hello.o -o hello 

hello.o: hello.c
	gcc -c $(CFLAGS) -o hello.o hello.c
clean:
	rm -rf hello.o hello


