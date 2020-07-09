CC = g++
CFLAGS = -g -Wall -std=c++11
TARGET = main
INCLUDE = -I../include
OBJS = main.o ../lib/IntSet.o

%.o: %.cpp
	$(CC) $(CFLAGS) $(INCLUDE) -o $@ -c $< 

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean 
