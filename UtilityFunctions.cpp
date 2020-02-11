#include "UtilityFunctions.h"
#include <vector>
#include <iostream>
std::vector<int> VectorPlusN(std::vector<int> v, int n)
{
	for(int i = 0; i < v.size(); i++)
	{
		v.at(i)+=n;
	}
	for(int j = 0; j < v.size(); j++)
	{
		std::cout<<v.at(j);
	}
	return v;

}


int Sum(std::vector<int> nums)
{

}
