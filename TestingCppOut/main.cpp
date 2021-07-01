#include "AllLoopsTester.h"

int main()
{
	int number{ 4 };
	int* ptr{ &number };
	int** ptrptr{ &ptr };

	std::cout << ptr << '\n';
	std::cout << ptrptr << '\n';

	std::cout << *ptr << '\n';
	std::cout << *ptrptr << '\n';
	std::cout << **ptrptr << '\n';
	return 0;
}