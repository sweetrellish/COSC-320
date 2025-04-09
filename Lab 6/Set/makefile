#Created by Ryan Ellis 3/11/25

PROG = prog
CC = g++
CPPFLAGS = -g -Wall -std=c++11
OBJS = lab06_set.o 

$(PROG) : $(OBJS)
	$(CC) -o $(PROG) $(OBJS)

lab06_set.o : lab06_set.cpp 
	$(CC) $(CPPFLAGS) -c lab06_set.cpp

clean:
	rm -f core $(PROG) $(OBJS)

rebuild:
	make clean
	make
