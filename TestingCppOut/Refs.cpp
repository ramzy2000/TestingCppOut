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

void testRefs2()
{
    // a pointer gets to move around freely to other memory adresses 
    // a refrence is another name given to a memory location that can't be changed; // holds no seprate memory address from var
    // hold the address its pointing to
    int* ptr{};
    int var{ 7 };
    int foo{ 21 };
    ptr = &var;
    ptr = &foo;

    int& ref = var;

    // not possible
    ref = 10;


    // prints value in the poiter object
    std::cout << var << '\n';
    // prints the value that the pointer object is pointing to
    // std::cout << *ptr << '\n';
}