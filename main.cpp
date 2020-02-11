#include "UtilityFunctions.h"
#include <vector>
#include <iostream>
int main()
{
	std::vector<int> v = {1,2,3,4};
	VectorPlusN(v,2);
	std::cout<<Sum(v);
}