#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle() {
    length = 0;
    width = 0;
}

Rectangle::Rectangle(float length1, float width1) {
    length = length1;
    width = width1;
}

void Rectangle::setLength(float length1) {
    length = length1;
}

void Rectangle::setWidth(float width1) {
    width = width1;
}

float Rectangle::getLength() const {
    return length;
}

float Rectangle::getWidth() const {
    return width;
}

float Rectangle::calculateAreaOfRectangle() const {
    return length * width;
}

