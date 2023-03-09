/** @file Shape.cpp 
 * Base class for shapes.
*/

#ifndef Shape_cpp
#define Shape_cpp

enum ShapeType {
    Triangle, // 1
    Rectangle, // 2
    Pentagon, // 3
    Hexagon // 4
};

class Shape {
    protected:
    int length;
    int width;
    ShapeType type;

    public:
    int getLength() const;
    int getWidth() const;
    virtual int getArea() const = 0;
    virtual int getVolume() const = 0;
    ShapeType getType() const;
    void setLength(const int& length);
    void setWidth(const int& width);
};
#endif

// Implementation file

int Shape::getLength() const {
    return length;
}

int Shape::getWidth() const {
    return width;
}

ShapeType Shape::getType() const {
    return type;
}

void Shape::setLength(const int& length) {
    this->length = length;
}

void Shape::setWidth(const int& width) {
    this->width = width;
}