CC = g++
CFLAGS = -g -Wall -std=c++11
INCLUDE = -I../include

IntSet.o: IntSetImpl.cpp
	$(CC) $(CFLAGS) $(INCLUDE) -o IntSet.o -c IntSetImpl.cpp
	cp IntSet.o ../lib/IntSet.o

clean:
	rm -f *.o

.PHONY: all clean 
