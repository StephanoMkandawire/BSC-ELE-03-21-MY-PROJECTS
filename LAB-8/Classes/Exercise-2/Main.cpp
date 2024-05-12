#include "Rectangle.h"
#include <iostream>
using namespace std;

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
