CXX      := g++
CXXFLAGS := -Wall -std=c++11
LDFLAGS  := -L/usr/lib -lstdc++ -lm
INCLUDE  := 
SRC      := $(wildcard *.cpp)
OBJECTS  := $(SRC:%.cpp=%.o)
TARGETS  := $(SRC:%.cpp=%)

all: $(TARGETS)

%: %.o
	$(CXX) $(CXXFLAGS) -o $(APP_DIR)/$(TARGET) $^ $(LDFLAGS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDE) -c $< -o $@ $(LDFLAGS)

.PHONY: all clean debug release

debug: CXXFLAGS += -DDEBUG -g
debug: all

release: CXXFLAGS += -O2
release: all

clean:
	rm -rvf $(TARGETS) $(OBJECTS)
