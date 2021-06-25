#include "Arrays.h"

// Constructor
// called when creating a testArray object
testArrays::testArrays()
{
	testArraySorting();
}

// for testing out the enums and calls a function to print using arrays
void testArrays::test()
{
	printFoodItems();
}

// print items based on the enum item type
void testArrays::printFoodItems()
{
	int Items[Items::Food::Max_Number]{ Items::Food::Cake, Items::Food::Carrots, Items::Food::Grapes, Items::Food::Potatos, Items::Food::Cheese, Items::Food::Rice, Items::Food::Fish };

	for (int i{ 0 }; i < Items::Food::Max_Number; i++)
	{
		std::cout << getItemString(Items[i]) << '\n';
	}
}

// returns a string baed on the enum time type selected
std::string testArrays::getItemString (int item)
{
	switch (item)
	{
	case Items::Food::Cake:
		return "Cake";
	case Items::Food::Carrots:
		return "Carrots";
	case Items::Food::Grapes:
		return "Grapes";
	case Items::Food::Potatos:
		return "Potatos";
	case Items::Food::Cheese:
		return "Cheese";
	case Items::Food::Rice:
		return "Rice";
	case Items::Food::Fish:
		return "Fish";

	default:
		return "???";
	}
}

// returns a bool based on the if the item is a Food type
bool testArrays::isAFood(int item)
{
	switch (item)
	{
	case Items::Food::Cake:
		return true;
	case Items::Food::Carrots:
		return true;
	case Items::Food::Grapes:
		return true;
	case Items::Food::Potatos:
		return true;
	case Items::Food::Cheese:
		return true;
	case Items::Food::Rice:
		return true;
	case Items::Food::Fish:
		return true;
	default:
		return false;
	}
}

// A example of sorting arrays from least to greatest
void testArrays::testArraySorting()
{
	int array[]{ 6, 5, 1, 10, 100 };
	constexpr int length{ static_cast<int>(std::size(array)) };

	// Step trhough each element of the array
	// (except the last one which will already be sorted by the time we get there)
	for (int startIndex{ 0 }; startIndex < length - 1; ++startIndex)
	{
		// smallestIndex is the index of the smallest element in the rest of the array
		// Start by assuming the smallest element is the first element of the iteration
		int smallestIndex{ startIndex };

		// Then look for a smaller element in the rest of the array
		for (int currentIndex{ startIndex + 1 }; currentIndex < length; ++currentIndex)
		{
			// If we've found an element that is smaller than our previously found smallest
			if (array[currentIndex] < array[smallestIndex])
				// then keep track of it
				smallestIndex = currentIndex;
		}
		// smallestIndex is now the smallest element in the remaining array
			// swap our start element with our smallest element (this sorts it into the correct place)

		std::swap(array[startIndex], array[smallestIndex]);
	}

	// Now that the whole array is sorted print our sorted array as proof it works
	//Printing the index out to the user
	for (int i{ 0 }; i < length; ++i)
	{
		std::cout << array[i] << '\n';
	}
}

// uncomment if you want to go to greatest to least
//#define REVERSE
// sorts the arrays out from least greatest
void testArrays::testArraySortingBeta()
{
	// create the sorage of the array
	int array[]{ 30, 50, 20, 10, 40 };

	// sort the array ( begin, end )
	std::sort(std::begin(array), std::end(array));
#ifdef REVERSE
	// reverse the array from the
	std::reverse(array, array + static_cast<int>(std::size(array)));
#endif

	// print the array out to the user
	for (int i{ 0 }; i < static_cast<int>(std::size(array)); ++i)
		std::cout << array[i] << ' ';

	std::cout << '\n';
}

// creates a table of multiples
void testArrays::testMultipleArray()
{
	constexpr int numRows{ 20 };
	constexpr int numCols{ 20 };

	// Declare a 10x10 array
	int product[numRows][numCols]{};

	// Calculate a multiplication table
	for (int row{ 1 }; row < numRows; ++row)
	{
		for (int col{ 1 }; col < numCols; ++col)
		{
			product[row][col] = row * col;
		}
	}

	// Print the table
	for (int row{ 1 }; row < numRows; ++row)
	{
		for (int col{ 1 }; col < numCols; ++col)
		{
			std::cout << product[row][col] << '\t';
		}

		std::cout << '\n';
	}
}