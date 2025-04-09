#Created by Ryan Ellis 2/4/25

PROG = prog
CC = g++
CPPFLAGS = -g -Wall -std=c++11
OBJS = lab01.o 

$(PROG) : $(OBJS)
	$(CC) -o $(PROG) $(OBJS)

lab01.o : lab01.cpp 
	$(CC) $(CPPFLAGS) -c lab01.cpp

clean:
	rm -f core $(PROG) $(OBJS)

rebuild:
	make clean
	make
