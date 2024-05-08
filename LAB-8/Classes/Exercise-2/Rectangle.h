#ifndef Rectangle_h
#define Rectangle_h

#include <iostream>

class Rectangle {
private:
    float length;
    float width;

public:
    Rectangle(); // Default constructor
    Rectangle(float length1, float width1); // Overloaded constructor

    void setLength(float length1); // Setter for length
    void setWidth(float width1); // Setter for width

    float getLength() const; // Getter for length
    float getWidth() const; // Getter for width

    float calculateAreaOfRectangle() const; // Function to calculate area
};

#endif
