/** @file Calculator.cpp */

#ifndef Calculator_cpp
#define Calculator_cpp

#include "../Shape.cpp"

class Calculator {
public:
    virtual int calculate(const Shape& shape) const = 0;
};
#endif