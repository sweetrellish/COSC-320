#Created by Ryan Ellis 3/25/25

PROG = prog
CC = g++
CPPFLAGS = -g -Wall -std=c++11
OBJS = lab_07.o

$(PROG) : $(OBJS)
	$(CC) -o $(PROG) $(OBJS)

lab_07: lab_07p 
	$(CC) $(CPPFLAGS) -c lab_07p

clean:
	rm -f core $(PROG) $(OBJS)

rebuild:
	make clean
	make
