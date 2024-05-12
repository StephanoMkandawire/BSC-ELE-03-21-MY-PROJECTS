#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include <cmath>
#include <iostream>
using namespace std;

using namespace shapes;

//functions prototypes.
int areaOfSquare(int);
double areaOfTriangle(double, double);
double areaOfCircle(double);

int main() {
    char choice;
    do {
        cout << "Options:" <<endl;
        cout << "1. Calculate the area of a square" <<endl;
        cout << "2. Calculate the area of a triangle" <<endl;
        cout << "3. Calculate the area of a circle" <<endl;
        cout << "4. Quit" <<endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case '1': {
                double sideLength;
                cout << "Enter the side length of the square: ";
                cin >> sideLength;
                Square square(sideLength);
                cout << "Area of square: " << areaOfSquare(sideLength) <<endl;
                break;
            }
            case '2': {
                double base, height;
                cout << "Enter the base and height of the triangle: ";
                cin >> base >> height;
                Triangle triangle(base, height);
                cout << "Area of triangle: " << areaOfTriangle(base, height) <<endl;
                break;
            }
            case '3': {
                double radius;
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                Circle circle(radius);
                cout << "Area of circle: " << areaOfCircle(radius) <<endl;
                break;
            }
            case '4':
                exit(0);
                break;
            default:
                cout << "Invalid choice!" <<endl;
        }
    } while (choice != '4');

    return 0;
}
int areaOfSquare(int l)
{
    return l * l;
}
double areaOfTriangle(double base, double height)
{
    return 0.5 * base * height;
}
double areaOfCircle(double radius)
{
    return M_PI * radius * radius;
}