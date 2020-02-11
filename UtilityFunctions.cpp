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
		std::cout<<v.at(j)<<std::endl;
	}
	return v;

}


int Sum(std::vector<int> sums)
{
	int sum = 0;

	for(int i = 0; i < sums.size(); i++)
	{
		sum+=sums.at(i);
	}
	return sum;

}
