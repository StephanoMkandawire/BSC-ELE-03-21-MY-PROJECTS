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

int main()
{
    Rectangle trial;
    float width;
    float length;

    cout << "Enter the length of a rectangle: ";
    cin >> length;
    trial.setLength(length);

    cout << "Enter the width of a rectangle: ";
    cin >> width;
    trial.setWidth(width);

    float area = trial.calculateAreaOfRectangle();

    cout << "The area of a Rectangle is " << area << " Square Meters";

    return 0;
}