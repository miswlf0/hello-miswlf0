CC=gcc
CFLAGS=-I. -g

.PHONY: all clean
all: hello.o adder.o multipler.o
	gcc hello.o -o hello 
	gcc adder.o -o adder
	gcc multipler.o -o multipler

hello.o: hello.c
	gcc -c $(CFLAGS) -o hello.o hello.c
adder.o: adder.c
	gcc -c $(CFLAGS) -o adder.o adder.c
multipler.o: multipler.c
	gcc -c $(CFLAGS) -o multipler.o multipler.c
clean:
	rm -rf hello.o hello
	rm -rf adder.o adder
	rm -rf multipler.o multipler 


