/** @file Calculate outputter.cpp */

#include "./Calculator.cpp"
#include <iostream>

#ifndef CalculateOutputter_cpp
#define CalculateOutputter_cpp


class CalculateOutputter {
    public:
    void printResult(const Calculator& calculator, const Shape& shape) const;

};

#endif

// Implementation file

void CalculateOutputter::printResult(const Calculator& calculator, const Shape& shape) const {
    std::cout << calculator.calculate(shape);
}