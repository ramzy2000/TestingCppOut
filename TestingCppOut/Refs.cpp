#include "Refs.h"

void printRef(const int& ref)
{
	std::cout << ref << '\n';
}

void printNumber(const int num)
{
	std::cout << num << '\n';
}


void testRefs() 
{
	int a{ 5 };
	int& ref{ a };
	printRef(ref);
	printNumber(ref);
	printRef(a);
	printNumber(a);
}