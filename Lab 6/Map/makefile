#Created by Ryan Ellis 3/11/25

PROG = prog
CC = g++
CPPFLAGS = -g -Wall -std=c++11
OBJS = lab06_map.o 

$(PROG) : $(OBJS)
	$(CC) -o $(PROG) $(OBJS)

lab06_map.o : lab06_map.cpp 
	$(CC) $(CPPFLAGS) -c lab06_map.cpp

clean:
	rm -f core $(PROG) $(OBJS)

rebuild:
	make clean
	make
