#include "PointerPointerTester.h"

PointerPointerTester::PointerPointerTester()
{
	test();
}

void PointerPointerTester::test()
{
	std::cout << "number == " << ***triplePtr << '\n';
	std::cout << "ptr == " << **triplePtr << '\n';
	std::cout << "doublePtr == " << *triplePtr << '\n';
	std::cout << "triplePtr == " << triplePtr << '\n';
}