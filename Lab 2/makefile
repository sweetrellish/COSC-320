#Created by Ryan Ellis 2/10/25

PROG = prog
CC = g++
CPPFLAGS = -g -Wall -std=c++11
OBJS = lab02.o 

$(PROG) : $(OBJS)
	$(CC) -o $(PROG) $(OBJS)

lab02.o : lab02.cpp 
	$(CC) $(CPPFLAGS) -c lab02.cpp

clean:
	rm -f core $(PROG) $(OBJS)

rebuild:
	make clean
	make
