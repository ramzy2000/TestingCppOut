#ifndef ALL_LOOP_TESTER_H
#define ALL_LOOP_TESTER_H

#include <iostream>
#include <iterator>

class AllLoopsTester
{
private:
	// integer array storage
	const int array[4]{ 30, 45, 55, 20 };
public:
	void testForEachLoop();
	void testForLoop();
	void testWhileLoop();
	void testAllLoops();
};

#endif