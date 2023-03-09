/** @file Calculator.cpp 
 * Open closed principle states:
 * Objects or entities should be open for extension but closed for modification.
 * Imagine that we have other shapes like pentagon, hexagon etc...
 * Each time we have a new shape, we need to add more if/else clause to our calculate method
 * How can we avoid this situation?
 * We can add area and volume to each shape as a method so that we won't need to calculate from calculator method
*/

#ifndef Calculator_cpp
#define Calculator_cpp

#include "../Shape.cpp"

class Calculator {
public:
    virtual int calculate(const Shape& shape) const = 0;
};
#endif