/* Algorithms with C++ by Amanda Falke

compile with C++11 : $ g++ simple-array-sum.cpp -std=c++11

*/

#include <vector>
#include <iostream>

using namespace std;

int main() {
		std::vector<int> v;
		std::vector<int>::iterator it;
		int input;
		int count = 0;

		/* For determinism (not used here): 
		int vectorSize;
		cout<<"\n\nEnter a size of the array (integer).\n\n";
		std::cin >> vectorSize;
		std::cin.clear();
		*/
		cout<<"\n\nEnter in array of any size.\n\n";

		// try catch: input must be integer data type
		// try catch: size must be smaller than 50, otherwise not reasonable

		cout<<"\n\nEnter individual numbers... then hit EOF to stop.\n\n";
		 while(std::cin >> input)
		{
				v.push_back(input);
		}
		for(it = v.begin(); it != v.end();++it)
		{
				count += *it;
		}

		std::cout<< count;

		return 0;
}
