#Created by Ryan Ellis 4/1/25

PROG = prog
CC = g++
CPPFLAGS = -g -Wall -std=c++11
OBJS = lab_08.o 

$(PROG) : $(OBJS)
	$(CC) -o $(PROG) $(OBJS)

lab06_set.o : lab_08.cpp 
	$(CC) $(CPPFLAGS) -c lab_08.cpp

clean:
	rm -f core $(PROG) $(OBJS)

rebuild:
	make clean
	make
