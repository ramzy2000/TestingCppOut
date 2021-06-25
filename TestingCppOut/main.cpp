#include "Refs.h"

int main()
{
    // a pointer gets to move around freely to other memory adresses 
    // a refrence is another name given to a memory location that can't be changed; // holds no seprate memory address from var
    // hold the address its pointing to
    int* ptr{};
    int var{ 7 };
    int foo{ 21 };
    ptr = &var;
    ptr = &foo;

    int& ref = var;

    // not possible
    ref = 10;
    

    // prints value in the poiter object
    std::cout << var << '\n';
    // prints the value that the pointer object is pointing to
    //std::cout << *ptr << '\n';

    return 0;
}