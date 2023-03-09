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
    private:
    ShapeType type;
    

    protected:
    int length;
    int width;

    public:
    Shape(const int& length, const int& width, const ShapeType& type);
    int getLength() const;
    int getWidth() const;
    ShapeType getType() const;
    void setLength(const int& length);
    void setWidth(const int& width);
};
#endif

// Implementation file

Shape::Shape( const int& length, const int& width, const ShapeType& type): 
length(length), 
width(width),
type(type)
{}

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