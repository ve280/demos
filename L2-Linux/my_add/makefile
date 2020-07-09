CC = g++
CFLAGS = -std=c++11 -g -Wall

all: run_add

run_add: run_add.o add.o
	$(CC) $(CFLAGS) -o run_add run_add.o add.o

run_add.o: run_add.cpp
	$(CC) $(CFLAGS) -c run_add.cpp

add.o: add.cpp
	$(CC) $(CFLAGS) -c add.cpp

clean:
	rm -f run_add *.o
