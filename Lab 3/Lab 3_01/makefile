#Created by Ryan Ellis 2/18/25

PROG = prog
CC = g++
CPPFLAGS = -g -Wall -std=c++11
OBJS = Lab03_01.o

$(PROG) : $(OBJS)
	$(CC) -o $(PROG) $(OBJS)

Lab03_01.o : Lab03_01.cpp
	$(CC) $(CPPFLAGS) -c Lab03_01.cpp

clean:
	rm -f core $(PROG) $(OBJS)

rebuild:
	make clean
	make
