#include <iostream>
#include "Box.h"
using namespace std;

Box::Box(const double newLength, const double newBreadth, const double newHeight){
    length = 0.0;
    breadth = 0.0;
    height = 0.0;
}

Box::~Box() {}

double Box::GetVolume() {
    return length * breadth * height;
}

void Box::SetLength(double len) {
    length = len;
}

void Box::SetBreadth(double bre) {
    breadth = bre;
}

void Box::SetHeight(double hei) {
    height = hei;
}

// Overload + operator to add two Box objects.
Box Box::operator+(const Box& b) {
    Box box;
    box.length = this->length + b.length;
    box.breadth = this->breadth + b.breadth;
    box.height = this->height + b.height;
    return box;
}

// Main function for the program
int main() {
    // box 1 specification
    Box Box1(6.0, 7.0, 5.0);

    // box 2 specification
    Box Box2(12.0, 13.0, 10.0);

    // volume of box 1
    double volume = Box1.GetVolume();
    cout << "Volume of Box1 : " << volume << endl;

    // volume of box 2
    volume = Box2.GetVolume();
    cout << "Volume of Box2 : " << volume << endl;

    // Add two objects
    Box Box3 = Box1 + Box2;

    // volume of box 3
    volume = Box3.GetVolume();
    cout << "Volume of Box3 : " << volume << endl;

    return 0;
}