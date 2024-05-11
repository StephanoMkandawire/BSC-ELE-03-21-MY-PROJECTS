#include "Box.h"
#include <iostream>

using namespace std;
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