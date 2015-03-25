#variables
CC=g++
CFLAGS=-c -Wall

a4q1: expression.o loneint.o binaryop.o unaryop.o main.o
	$(CC) expression.o loneint.o binaryop.o unaryop.o main.o -o a4q1

expression.o: expression.cc
	$(CC) $(CFLAGS) expression.cc

loneint.o: loneint.cc
	$(CC) $(CFLAGS) loneint.cc

binaryop.o: binaryop.cc
	$(CC) $(CFLAGS) binaryop.cc

unaryop.o: unaryop.cc
	$(CC) $(CFLAGS) unaryop.cc

main.o: main.cc
	$(CC) $(CFLAGS) main.cc
