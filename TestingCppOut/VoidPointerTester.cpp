#include "VoidPointerTester.h"

// source code for VoidPointerTester class

void VoidPointerTester::test()
{
	int* intPtr{ static_cast<int*>(voidPtr) };
	std::cout << *intPtr << '\n';
}