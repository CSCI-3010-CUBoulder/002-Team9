CXX = g++
CXXFLAGS = -std=c++17 -Wall

all: main

main: main.cpp UtilityFunctions.o
	$(CXX) $(CXXFLAGS) main.cpp UtilityFunctions.o -o main

UtilityFunctions.o: UtilityFunctions.cpp
	$(CXX) $(CXXFLAGS) -c UtilityFunctions.cpp

clean:
	rm *.o main