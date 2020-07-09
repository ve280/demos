# variable definition

CC = g++

DEFS =
LIBS =
INCLUDES =
HEADERS = IntList.h
MAINSRCS = main.cpp
OTHSRCS = IntList.cpp
SRCS = $(MAINSRCS) $(OTHSRCS)
OBJS = $(SRCS:.cpp=.o)
TARGETS = $(MAINSRCS:.cpp=)

CFLAGS = -g -Wall $(INCLUDES) $(DEFS)

%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ -c $< 

all: $(TARGETS)

$(TARGETS): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGETS) $(OBJS) $(LIBS)

depend:
	makedepend -Y $(INCLUDES) $(SRCS)

memcheck: $(TARGETS)
	valgrind --leak-check=full ./$(TARGETS)

clean:
	rm -f $(OBJS) $(TARGETS)

.PHONY: all depend memcheck clean 
