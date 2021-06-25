#include "Templates.h"

template<typename T>
void Print(T value)
{
	std::cout << value << '\n';
}

template<typename T>
T add(T num1, T num2)
{
	return num1 + num2;
}

template<typename T>
T checkVar(T var)
{
	if (var == "yee")
	{
		std::cout << "Var is " << var << '\n';
	}
	else if (var == "boo")
	{
		std::cout << "Var is " << var << '\n';
	}
	return var;
}

void pauseLine()
{
	std::cout << "Press enter to continue..." << '\n';
	std::cin.get();
}

void testTemplates()
{
	
	auto test{ checkVar<std::string>("boo") };

	std::cout << test << '\n';

	// pause the line
	pauseLine();
}