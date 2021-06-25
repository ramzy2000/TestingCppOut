#ifndef TEMPLATES_H
#define TEMPLATES_H


#include <iostream> // defines std::cout printing object
#include <string>   // defines std::getline() and other string variables

template<typename T>
void Print(T value);

template<typename T>
T add(T num1, T num2);

template<typename T>
T checkVar(T var);

void pauseLine();

void testTemplates();

#endif