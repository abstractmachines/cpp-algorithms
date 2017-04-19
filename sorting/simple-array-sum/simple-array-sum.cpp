#include <algorithm>
#include <functional>
#include <array>
#include <iostream>

#define RANGE 10

int main ()
{
	std::array<int,RANGE> arr = {1,2,3};

	int index = 0;

	// try catch here. what if array is empty? 

	for(auto i:arr)
	{
		index += i;
	}

	// let's test it.

	// unit test: input 1, expected output 6.
	std::cout << "Total is 6: " << index << std::endl;

	return 0;
}
