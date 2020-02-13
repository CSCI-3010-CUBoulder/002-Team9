CXX = g++
CXXFLAGS = -std=c++17 -Wall

all: main

main: main.cpp test.o UtilityFunctions.o
	$(CXX) $(CXXFLAGS) main.cpp test.o UtilityFunctions.o -o main

UtilityFunctions.o: UtilityFunctions.cpp
	$(CXX) $(CXXFLAGS) -c UtilityFunctions.cpp

test.o: test.cpp
	$(CXX) $(CXXFLAGS) -c test.cpp

clean:
	rm *.o main