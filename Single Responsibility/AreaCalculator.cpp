/** @file AreaCalculator.cpp 
 * This design principle states:
 * A class should have one and only reason to change, meaning that a class should have only one job to do.
 * It should have only one reason to change.
*/

// In this example area calculator shouldn't be responsible of printing the areas of shapes
// That's why we seperate printing the result of the calculation to an another class.

#ifndef AreaCalculator_cpp
#define AreaCalculator_cpp

#include "./Calculator.cpp"

class AreaCalculator: public Calculator {
private:

public:

    int calculate(const Shape& shape) const {
        int result = 0;
        int width = shape.getWidth();
        int length = shape.getLength();
        if (shape.getType() == ShapeType::Triangle)
            result = (width * length) / 2;

        if (shape.getType() == ShapeType::Rectangle)
            result = (width * length);

        return result;
    }
};
#endif
