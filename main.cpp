#include "UtilityFunctions.h"
#include <vector>
#include <iostream>
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
int main()
{
	std::vector<int> v = {1,2,3,4};
	VectorPlusN(v,2);
	std::cout<<Sum(v);
}