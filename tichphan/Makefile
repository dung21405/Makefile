main: main.o lib.o
	gcc -o main main.o lib.o
lib.o: lib.c lib.h
	gcc -c lib.c 
main.o: main.c lib.h
	gcc -c main.c
