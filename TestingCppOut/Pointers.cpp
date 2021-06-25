#include "Pointers.h"

// Show how to instanitate a pointer
void testPointers1()
{
    // create a variable
    int v{ 5 };

    // create a pointer that holds the memory address of v
    int* ptr{ &v }; // initialize ptr with address of variable v

    std::cout << &v << '\n'; // print the address of variable v
    std::cout << ptr << '\n'; // print the address that ptr is holding
}

// Shows how to dereferance and reference with pointers
void testPointers2()
{
    int value{ 5 };
    std::cout << "value = " << &value << " prints address of value" << '\n'; // prints address of value
    std::cout << "value = " << value << " prints contents of value" << '\n'; // prints contents of value

    int* ptr{ &value }; // ptr points to value
    std::cout << "ptr = " << ptr << " prints address held in ptr, which is &value" << '\n'; // prints address held in ptr, which is &value
    std::cout << "ptr = " << *ptr << " prints the value using Indirection through ptr (get the value that ptr is pointing to)" << '\n'; // prints the value using Indirection through ptr (get the value that ptr is pointing to)
}


// Shows how you should use nullprt instead of NULL predefine because of issues with udefined behavior
void testPointers3()
{
    int* x{ nullptr };
    print(x); // calls print(int*)

    print(nullptr); // calls print(int*) as desired
}

// Shows the diffrent constants with pointers and values
void testPointers4()
{
    int storage{ 5 };
    int storage2{ 3 };
    int* ptr{ &storage }; // no constant value or pointer
    const int* ptr2{ &storage }; // constant value but not the pointer
    int* const ptr3{ &storage }; // constant pointer but not the value
    const int* const ptr4{ &storage }; // constant pointer and constant value

#if 0
    *ptr = 5; // ok
    *ptr2 = 5; // not ok
    *ptr3 = 5; // ok
    *ptr4 = 5; // not ok

    ptr = &storage2; // ok
    ptr2 = &storage2; // ok
    ptr3 = &storage2; // not ok
    ptr4 = &storage2; // not ok
#endif


    std::cout << "Address: 0x" << ptr2 << "\n" << "Value: " << *ptr2 << '\n';
}

// prints the value of the given integer perameter
void print(int x)
{
    std::cout << "print(int): " << x << '\n';
}

/* Gives the value of the given interger pointer dereferenced and will inform
 the user if the pointer is not pointing to anything in momory or other known as NULL */
void print(int* x)
{
    if (!x)
        std::cout << "print(int*): null\n";
    else
        std::cout << "print(int*): " << *x << '\n';
}


// Allows the user to execute somthing based on if they have passed in a pointer that is is NULL or is not pointing to anything
void doSomething(std::nullptr_t ptr)
{
    std::cout << "in doSomething()\n";
}

// Checks if a char data type is a vowel or not and returns a bool value
bool isVowel(char ch)
{
    switch (ch)
    {
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':
        return true;
    default:
        return false;
    }
}

// using this is a shortcut to the using the testVowel2
void testVowel()
{
    char name[]{ "Mollie" };
    auto numVowels{ std::count_if(std::begin(name), std::end(name), isVowel) };

    std::cout << name << " has " << numVowels << " vowels.\n";
}

// Very effective way to use pointers works just the same as the above example
void testVowel2()
{
    char name[]{ "Mollie" };
    int arrayLength{ static_cast<int>(std::size(name)) };
    int numVowels{ 0 };

    for (char* ptr{ name }; ptr != (name + arrayLength); ++ptr)
    {
        if (isVowel(*ptr))
        {
            ++numVowels;
        }
    }

    std::cout << name << " has " << numVowels << " vowels.\n";
}

// checks the array passes in the first perameter and the length of that array along with the value you are checking for
void checkArrayForInstances(int* array, int length, int instance)
{
	// store the value of the first address in the array
    int* begin{ array };
	// store the value of the last address in the array using the provided length perameter
    int* end{ array + length };
	// create a counter to add to when the a instance was found
    int counter{ 0 };

	// check each memory address between the begining and the end adress for the vale in the instace perameter
    for (int* ptr{ begin }; ptr != end; ++ptr)
    {
        if (*ptr == instance)
        {
            ++counter;
        }
    }
	
	// print result to the user
    std::cout << "You have " << counter << " instances of " << instance << '\n';

}

// function for testing and calling CheckArrayForInstances
void testCheckArrayForInstances()
{
    int arrayStorage[]{ 9, 18, 5, 18, 18, 20 }; // Example of a stored array
    int instance{ 20 }; // instance we are checking
    checkArrayForInstances(arrayStorage, static_cast<int>(std::size(arrayStorage)), instance);
}