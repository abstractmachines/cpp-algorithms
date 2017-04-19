
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

/* Sort Ascending order is default for std::sort()
*/
std::array<int, RANGE> sortAscend(std::array<int, RANGE> arr)
{
	std::sort(arr.begin(),arr.end());

	std::cout<<"\n\nSorted Ascending: \n\n";

	return arr;
};

/* Sort Descending order happens when 3rd argument is std::greater<type>:
*/
std::array<int, RANGE> sortDescend(std::array<int, RANGE> arr)
{
	std::sort(arr.begin(),arr.end(),std::greater<int>());

	std::cout<<"\n\nstd::greater<int>() to sort descended: \n\n";

	return arr;
};

/* Return true if container.begin() is higher than container.end():
This will essentially swap the beginning with the ending of the elements!
*/
bool descend(int x, int y)
{
	return x > y;
}

/* Custom Descending order for sort() with bool Functor as 3rd argument:
*/
std::array<int, RANGE> sortDescendBool(std::array<int, RANGE> arr)
{
// 3rd param is function pointer Functor
	std::sort(arr.begin(),arr.end(), descend);

	std::cout<<"\n\nSorted Descending: Functor returning bool as 3rd sort() param: \n\n";

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
	const std::array<int, RANGE> arr = {5,4,7,9,0,1,2,3,8,6};
	std::array<int, RANGE> arrMut; //const;

	std::cout<<"\nUnsorted Array: \n\n";
	print(arr);

	arrMut = sortAscend(arr);
	print(arrMut);

	arrMut = sortDescend(arr);
	print(arrMut);

	arrMut = sortDescendBool(arr);
	print(arrMut);

	std::cout<<"\n\nUnsorted Array: \n\n";
	print(arr);

	return 0;
}
