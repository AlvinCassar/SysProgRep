all: build

build: buildA
	gcc q1.o q2.o q3.o q4.o q5.o q6.o q789.o -o hello

buildA:
	gcc -Wall -c q1.c
	gcc -Wall -c q2.c
	gcc -Wall -c q3.c
	gcc -Wall -c q4.c
	gcc -Wall -c q5.c
	gcc -Wall -c q6.c
	gcc -Wall -c q789.c

clean:
	-rm *.o hello