#Created by Ryan Ellis 3/4/25

PROG = prog
CC = g++
CPPFLAGS = -g -Wall -std=c++11
OBJS = lab_05.o 

$(PROG) : $(OBJS)
	$(CC) -o $(PROG) $(OBJS)

lab_05.o : lab_05.cpp 
	$(CC) $(CPPFLAGS) -c lab_05.cpp

clean:
	rm -f core $(PROG) $(OBJS)

rebuild:
	make clean
	make
