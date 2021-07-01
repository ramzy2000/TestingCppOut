#ifndef POINTER_POINTER_TESTER_H
#define POINTER_POINTER_TESTER_H

#include <iostream>

class PointerPointerTester
{
	int number{ 100 };
	int* ptr{ &number };
	int** doublePtr{ &ptr };
	int*** triplePtr{ &doublePtr };
public:
	PointerPointerTester();
	void test();
};

#endif // POINTER_POINTER_TESTER_H