main: main.o caculate.o
	gcc -o main main.o caculate.o
caculate.o: caculate.c caculate.h
	gcc -c caculate.c
main.o: main.c caculate.h
	gcc -c main.c
