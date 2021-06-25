#ifndef ARRAY_H
#define ARRAY_H

#include <algorithm> // for std::sort
#include <iostream> // for the std::cout
#include <string> 
#include <iterator>
#include <utility>

namespace Items
{
	namespace Food
	{
		enum
		{
			Carrots,
			Potatos,
			Cake,
			Grapes,
			Cheese,
			Rice,
			Fish,
			Max_Number
		};
	}

	namespace MISC
	{
		enum
		{
			Iron_Ingot,
			Gold_Ingot
		};
	}
}

class testArrays
{
public:
	// Constructor
// called when creating a testArray object
	testArrays();

	// for testing out the enums and calls a function to print using arrays
	void test();

	// print items based on the enum item type
	void printFoodItems();

	// returns a string baed on the enum time type selected
	std::string getItemString(int item);

	// returns a bool based on the if the item is a Food type
	bool isAFood(int item);


	// A example of sorting arrays from least to greatest
	void testArraySorting();

	// uncomment if you want to go to greatest to least
	//#define REVERSE
	// sorts the arrays out from least greatest
	void testArraySortingBeta();

	// creates a table of multiples
	void testMultipleArray();
};

#endif