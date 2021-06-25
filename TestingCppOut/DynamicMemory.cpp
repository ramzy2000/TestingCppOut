#include "DynamicMemory.h"

void testDynamicArrays()
{
    std::size_t length{};
    bool validInput{ false };
    while (!validInput)
    {
        std::cout << "Enter how many integers you want to enter: ";
        std::cin >> length;
        if (std::cin.fail())
        {
            std::cerr << "Error invalid type input " << '\a' << '\n';
            std::cin.clear();
            std::cin.ignore();
            continue;
        }
        else
        {
            validInput = true;
        }

    }

    int* array{ new int[length] {} }; // use array new.  Note that length does not need to be constant!

    std::cout << "I just allocated an array of integers of length " << length << '\n';
    // store the value entered by user into the array
    for (int i{ 0 }; i < length; ++i)
    {
        std::cout << "Enter a number: ";
        std::cin >> *(array + i);
        while (std::cin.fail())
        {
            std::cerr << "Error invalid type input" << '\a' << '\n';
            std::cin.clear();
            std::cin.ignore();
            std::cout << "Enter a number: ";
            std::cin >> *(array + i);
        }
    }

    // print the array contest onto the screen
    for (int* ptr{ array }; ptr != (array + length); ++ptr)
    {
        std::cout << *ptr << '\n';
    }

    delete[] array; // use array delete to deallocate array
    array = nullptr; /* allthough not nessisary because it is going out of scope if it was not it
                        would be a pointer holding an address that is inacsessable*/
}

void testDynamicArrays2()
{
    std::size_t length{};
    bool invalidInput{ true };
    // get the users input on how many integers to reserve in the heap
    while (invalidInput)
    {
        std::cout << "Enter how many integers you want to create in heap memory: ";
        std::cin >> length;
        if (std::cin.fail())
        {
            std::cerr << "Error invalid input please try again..." << '\a' << '\n';
            std::cin.clear();
            std::cin.ignore();
            continue;
        }

        invalidInput = false;
    }

    std::cout << "Allocating " << length << " integers in the heap" << '\n';

    // create the heap memory arra with the given size
    int* array{ new int[length] {} };

    // create a counter to make sure that the second loop will not over execute
    int counter{ 0 };
    // loop a loop that sets the current selected pointing address to value of the index
    // add to the counter everytime we want to switch to the next address
    for (int* ptr{ array }; ptr != array + length; ++ptr)
    {
        for (int i{ 0 }; i <= counter; ++i)
        {
            *ptr = i;
        }

        ++counter;
    }

    // print all the memory address's and the values held at the address
    for (int i{ 0 }; i < length; ++i)
    {
        std::cout << (array + i) << " holds " << *(array + i) << '\n';
    }

    std::cout << "End" << '\n';

    // delete the memory from the heap
    delete[] array;
    // point pointer to nothing
    array = nullptr;
}

void testDynamicMemory()
{
    int* ptr{ new int }; // use the new operator to allocate space into the heap and use a pointer to store the memory location
    
    // print the address location to the user
    std::cout << "ptr is holding address value: " << ptr << '\n';

    std::cout << "giveing address back to windows" << '\n';
    delete ptr; // give the memory address back to the operating system
    // set the pointer to a null so that it can access a location that was given back to windows which could lead to undefined behavior
    std::cout << "set value of ptr to null" << '\n';
    ptr = nullptr;

    std::cout << "ptr now points to: " << ptr << '\n';
}