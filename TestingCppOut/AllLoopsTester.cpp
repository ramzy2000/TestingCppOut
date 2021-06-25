#include "AllLoopsTester.h"

// Source code for AllLoopsTester class

void AllLoopsTester::testForEachLoop()
{
	// for-each loop
	for (int number : array)
	{
		std::cout << number << '\n';
	}
}

void AllLoopsTester::testForLoop()
{
	// for loop
	for (int number{ 0 }; number < std::size(array); number++)
	{
		std::cout << array[number] << '\n';
	}
}

void AllLoopsTester::testWhileLoop()
{
	// while loop
	int number{ 0 };
	while (number < std::size(array))
	{
		std::cout << array[number] << '\n';
		number++;
	}
}

void AllLoopsTester::testAllLoops()
{
	// test all loops
	testForEachLoop();
	testForLoop();
	testWhileLoop();
}