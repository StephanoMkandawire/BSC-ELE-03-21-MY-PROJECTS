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

int main()
{
    // Create an instance using default constructor
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
    cout << "The area of the first rectangle is " << area << " square meters." << endl;

    // Create another instance using overloaded constructor
    cout << "Enter the length of another rectangle: ";
    cin >> length;
    cout << "Enter the width of another rectangle: ";
    cin >> width;

    Rectangle anotherTrial(length, width);
    float anotherArea = anotherTrial.calculateAreaOfRectangle();
    cout << "The area of the second rectangle is " << anotherArea << " square meters." << endl;

    return 0;
}
