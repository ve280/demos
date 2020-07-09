all: my_prog

my_prog: main.o add.o sub.o incdec.o
	g++ -o my_prog main.o add.o sub.o incdec.o

main.o: main.cpp
	g++ -c main.cpp

add.o: add.cpp
	g++ -c add.cpp

sub.o: sub.cpp
	g++ -c sub.cpp

incdec.o: incdec.cpp
	g++ -c incdec.cpp

clean:
	rm -f my_prog *.o
