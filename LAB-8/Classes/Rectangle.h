#ifndef Rectangle_h
#define Rectangle_h

#include <iostream>

class Rectangle {
private:
    // Private members
    float length;
    float width;

public:
    // Default constructor
    Rectangle() {
        length = 0;
        width = 0;
    }

    // Destructor (optional)
    //~Rectangle();

    // Accessor methods for assigning the value
    void setLength(float one);
    void setWidth(float two);

    // Accessor methods for retrieving the values
    float getLength() const;
    float getWidth() const;

    // Member function for calculating the area of a rectangle
    float calculateAreaOfRectangle() const;
};

#endif
