.PHONY: main clean
CC := gcc
CFLAGS := -I.
INC_FILES := hello.h

%.o: %.c $(INC_FILES)
	$(CC) $(CFLAGS) -c -o $@ $<

main: main.o hello.o
	gcc -o main main.o hello.o
#hello.o: hello.c hello.h
#	gcc -c hello.c
#main.0: main.c hello.h
#	gcc -c main.c

clean:
	rm -rf main main.o hello.o
