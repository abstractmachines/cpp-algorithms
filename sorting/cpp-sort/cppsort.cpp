
/* Integer Sort using C++11 Standard Library:
sort in ascending order.

Compile with C++11 option
$ g++ cppsort.cpp -std=c+=11

See also: stricter ordering such as
*/

#include <algorithm>
#include <functional>
#include <array>
#include <iostream>

#define RANGE 10

std::array<int, RANGE> sortAscend(std::array<int, RANGE> arr)
{
	std::sort(arr.begin(),arr.end());

	std::cout<<"\n\nSorted Ascending: \n\n";

	return arr;
};

std::array<int, RANGE> sortAscendGreater(std::array<int, RANGE> arr)
{
	std::sort(arr.begin(),arr.end(),std::greater<int>());

	std::cout<<"\n\nstd::greater<int>() is same as default sorted ascending: \n\n";

	return arr;
};

bool descend(int x, int y)
{
	return x > y;
}

std::array<int, RANGE> sortDescend(std::array<int, RANGE> arr)
{
// 3rd param is function pointer Functor
	std::sort(arr.begin(),arr.end(), descend);

	std::cout<<"\n\nSorted Descending: \n\n";

	return arr;
};

void print(std::array<int, RANGE> arr)
{
	for(auto a:arr)
	{
		std::cout << a << " ";
	}
}

int main ()
{
	std::array<int, RANGE> arr = {5,4,7,9,0,1,2,3,8,6};

	std::cout<<"\nUnsorted Array: \n\n";

	print(arr);

	arr = sortAscend(arr);

	print(arr);

	arr = sortAscendGreater(arr);

	print(arr);

	arr = sortDescend(arr);

	print(arr);

	return 0;
}
