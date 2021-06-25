#include "ReturnStruct.h"

void testSource()
{
    Point3d zero{ getZeroPoint() };

    if (zero.x == 0.0 && zero.y == 0.0 && zero.z == 0.0)
        std::cout << "The point is zero\n";
    else
        std::cout << "The point is not zero\n";
}

Point3d getZeroPoint()
{
    // We can create a variable and return the variable.
    Point3d temp{ 0.0, 0.0, 0.0 };
    return temp;
}

Point3d getZeroPoint2()
{
    // We can return directly. We already specified the type
    // at the function declaration (Point3d), so we don't need
    // it again here.
    return { 0.0, 0.0, 0.0 };
}

Point3d getZeroPoint3()
{
    // We can use empty curly braces to zero-initialize all
    // members of `Point3d`.
    return {};
}