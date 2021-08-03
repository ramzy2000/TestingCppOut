#include <iostream>
#include <vector>

int main()
{
	std::vector<int> numbers{ 8, 10, 40, 33, 67 };
	std::size_t size{ numbers.size() };
	int* begin{ numbers.data() };
	int* end{ numbers.data() + size };

	// for loop
	std::cout << "First print" << '\n';
	for (auto* index{ begin }; index != end; ++index)
	{
		std::cout << index << ' ';
	}
	std::cout << '\n' << "Second print" << '\n';
	for (int element : numbers)
	{
		std::cout << element << ' ';
	}

	return 0;
}