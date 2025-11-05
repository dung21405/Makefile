

static:
	ar rcs lib/static/libhello.a obj/helloC.o obj/helloWorld.o
link:
	gcc obj/main.o -Llib/static -lhello -o bin/main

all:
	gcc -c main.c -o obj/main.o -I./inc
	gcc -c src/helloC.c -o obj/helloC.o -I./inc
	gcc -c src/helloWorld.c -o obj/helloWorld.o -I./inc

clean:
	rm -rf obj/* bin/*
