#ifndef VOID_POINTER_TESTER_H
#define VOID_POINTER_TESTER_H

#include <iostream>

class VoidPointerTester
{
	int number{ 4 };
	void* voidPtr{ &number };
public:
	void test();
};

#endif // VOID_POINTER_TESTER_H