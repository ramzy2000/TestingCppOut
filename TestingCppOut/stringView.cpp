#include "stringView.h"

void testStringViewAndItsTools()
{
	std::string_view str{ "Peach" };

	std::cout << str << '\n';

	// Ignore the first character
	str.remove_prefix(1);

	std::cout << str << '\n';

	// Ignore the last 2 characters
	str.remove_suffix(2);

	std::cout << str << '\n';
}

void testStringViewExample2()
{
	// No null-terminator.
	char vowels[]{ 'a', 'e', 'i', 'o', 'u' };

	// vowels isn't null-terminated. We need to pass the length manually.
	// Because vowels is an array, we can use std::size to get its length.
	std::string_view str{ vowels, std::size(vowels) };

	std::cout << str << '\n'; // This is safe. std::cout knows how to print std::string_views.
}