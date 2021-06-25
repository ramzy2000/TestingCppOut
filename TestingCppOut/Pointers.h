#ifndef POINTERS_H
#define POINTERS_H

#include <iostream>
#include <string_view>
#include <cstddef>
#include <algorithm>
#include <iterator>

// Show how to instanitate a pointer
void testPointers1();

// Shows all how to dereferance and reference with pointers
void testPointers2();


// Shows how you should use nullprt instead of NULL predefine because of issues with udefined behavior
void testPointers3();

// Shows the diffrent constants with pointers and values
void testPointers4();

// prints the value of the given integer perameter
void print(int x);

/* Gives the value of the given interger pointer dereferenced and will inform
 the user if the pointer is not pointing to anything in momory or other known as NULL */
void print(int* x);


// Allows the user to execute somthing based on if they have passed in a pointer that is is NULL or is not pointing to anything
void doSomething(std::nullptr_t ptr);

// Checks if a char data type is a vowel or not and returns a bool value
bool isVowel(char ch);

// using this is a shortcut to the using the testVowel2;

// Very effective way to use pointers works just the same as the above example
void testVowel2();

// checks the array passes in the first perameter and the length of that array along with the value you are checking for
void checkArrayForInstances(int* array, int length, int instance);

// function for testing and calling CheckArrayForInstances
void testCheckArrayForInstances();

#endif
