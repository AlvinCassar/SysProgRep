all: build

build: buildA
	gcc q1.o q2.o -o hello

buildA:
	gcc -Wall -c q1.c
	gcc -Wall -c q2.c

clean:
	-rm *.o hello