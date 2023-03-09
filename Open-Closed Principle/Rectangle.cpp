#ifndef Rectangle_cpp
#define Rectangle_cpp

#include "./Shape.cpp"

class Rectangle: public Shape {
    public:
    Rectangle(const int& length, const int& width, const int& height);
    int getArea() const;
    int getVolume() const;
    private:
    int height;
    ShapeType type;
};
#endif

// implementation file
Rectangle::Rectangle(const int& length, const int& width, const int& height)
{
    this->length = length; 
    this->width = width;
    this->height = height;
    this->type = ShapeType::Rectangle;
}

int Rectangle::getArea() const {
    return (length * width ) / 2;
}

int Rectangle::getVolume() const {
    return length * height * width;
}