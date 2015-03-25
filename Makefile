#variables
CC=g++
CFLAGS=-c -Wall

a4q1: loneint.o binaryop.o unaryop.o main.o
	$(CC) loneint.o binaryop.o unaryop.o main.o -o a4q1

loneint.o: loneint.cc
	$(CC) $(CFLAGS) loneint.cc

binaryop.o: binaryop.cc
	$(CC) $(CFLAGS) binaryop.cc

unaryop.o: unaryop.cc
	$(CC) $(CFLAGS) unaryop.cc

main.o: main.cc
	$(CC) $(CFLAGS) main.cc
