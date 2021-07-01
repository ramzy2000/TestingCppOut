#include "fib.h"

// run a test of fib numbers
void testFib()
{
	std::cout << "testing fib numbers" << '\n';
	// get the amount of fib numbers the user needs
	printFibs();

	return;
}

// prints the fib numbers to the screen
void printFibs()
{
	double amountOfFibs{ getFibAmount() };
	double currentNumber{ 1 };
	double previousNumber{ 1 };
	double nextNumber{ 1 };
	double storage{ 0 };
	for (int i{ 0 }; i < amountOfFibs; ++i)
	{
		std::cout << currentNumber << '\n';
		nextNumber = currentNumber + previousNumber;
		previousNumber = currentNumber;
		currentNumber = nextNumber;
	}
}

// gets the amount of fibs the user wants
double getFibAmount()
{
	bool invalidInput{ true };
	int num{};
	while (invalidInput)
	{
		std::cout << "Enter a the number of fib numbers you want: ";
		std::cin >> num;

		if (std::cin.fail())
		{
			std::cerr << "Invalid selection" << '\n';
			std::cin.clear();
			std::cin.ignore();
			continue;
		}

		invalidInput = false;
	}

	return static_cast<int>(num);
}