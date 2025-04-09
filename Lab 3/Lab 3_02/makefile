#Created by Ryan Ellis 2/20/25

PROG = prog
CC = g++
CPPFLAGS = -g -Wall -std=c++11
OBJS = Lab03_02.o

$(PROG) : $(OBJS)
	$(CC) -o $(PROG) $(OBJS)

Lab03_02.o : Lab03_02.cpp
	$(CC) $(CPPFLAGS) -c Lab03_02.cpp

clean:
	rm -f core $(PROG) $(OBJS)

rebuild:
	make clean
	make
