#include "Rectangle.h"
#include <iostream>
using namespace std;

void Rectangle::setLength(float one) {
    length = one;
}

void Rectangle::setWidth(float two) {
    width = two;
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