CXX = g++
CXXFLAGS	= -std=c++17 -Wall

all: main

clean:
	rm UtilityFunctions.o main.o main

main: UtilityFunctions.o main.o main.cpp
	$(CXX) $(CXXFLAGS) main.cpp UtilityFunctions.o main.o -o main

UtilityFunctions.o: UtilityFunctions.cpp
	$(CXX) $(CXXFLAGS) -c Player.cpp