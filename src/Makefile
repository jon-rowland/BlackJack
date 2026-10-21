CC=gcc
CFLAGS=-g -Wall
CFLAGS_OBJ=-g -Wall -c
OBJ=deck.o

all: main

main: main.c $(OBJ)
	$(CC) $(CFLAGS) $@.c $(OBJ) -o $@

#clean
.PHONY: clean
clean:
	rm -f *.o main
