#ifndef RETURN_CLASS_H
#define RETURN_CLASS_H

#include <iostream>

// struct to define a point in space
struct Point3d
{
    double x{};
    double y{};
    double z{};
};

// test translation unit
void testSource();


Point3d getZeroPoint();

Point3d getZeroPoint2();

Point3d getZeroPoint3();

#endif