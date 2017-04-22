/* Algorithms with C++ by Amanda Falke

compile with C++11 : $ g++ simple-array-sum.cpp -std=c++11

*/

#include <vector>
#include <iostream>

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
		std::cout<<"\n\nEnter in array of any size.\n\n";

		std::cout<<"\n\nEnter individual numbers... then hit EOF to stop.\n\n";

		if(!std::cin>>input)
		{
			std::cout<<"\n\nInvalid input.\n\n";
		}
		else
		{
			std::cout<<"\n\nOK, valid input.\n\n";

			while(std::cin >> input)
			{

					v.push_back(input);
			}
			for(it = v.begin(); it != v.end();++it)
			{
					count += *it;
			}

			std::cout<< count;
		}


		return 0;
}
