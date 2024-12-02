#//************************************************
#// Purpose: Build Project 
#// Author: Micah Gordon
#// Date: 2024.11.23

OBJ= database.o \
     table.o 

CC=gcc

CFLAGS=-g -Wall -O0

all: database.o table.o test 

clean:
	rm -f *.o
	rm -f test
#	rm -f httpserver \
	rm -f *.o 

test: testDriver.c
	$(CC) $(CFLAGS) testDriver.c -o test $(OBJ)

database: database.c
	$(CC) $(CFLAGS) database.c -o database

tabel: table.c
	$(CC) $(CFLAGS) table.c -o table
