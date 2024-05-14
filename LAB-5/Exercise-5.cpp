#include<iostream>
#include<string>
#include<cmath>

using namespace std;

// Function prototypes
double squareFn(double&);
double rectangleFn(double&, double&);
double triangleFn(double&, double&);

int main() 
{
    cout << "Please select the area of a shape to calculate." << endl;

    while(true)
    {
        cout << "1. Square\n"<<"2. Rectangle\n"<<"3. Triangle\n"<<"4. Quit program\n\n"<<  "Enter selection: " << endl;
        int number;
        cin >> number;  //ACCEPTING INPUT STREAM

        //CHECKING IF NUMBER IS NOT FROM 1 TO 5 AND WHETHER ITS NOT A NUMBER.
        if(((number < 1)||(number  >4))||(cin.fail())) 
        {
            cout << "Your input was: " << number << " which is invalid input please\nPlease enter the valid input!!! " << endl;

            //CLEARING ERROR FLAGS FROM INPUT STREAM.
            cin.clear();
            cin.ignore(100, '\n');  //INGONORING 100 CHARACTERS FROM INPUT STREAM
        } 

        //CHECKING IF NUMBER IS FROM 1 TO 4.
        else if(number >= 1 && number <= 4) {
            double length, height, base, width;

            //USING SWITCH STATEMENT.
            switch(number) {
                case 1:
                    cout << "Enter the length of a Square: " << endl;
                    cin >> length;
                    if (cin.fail()){
                         cout << "Your input was: " << length << " which is invalid input please\nPlease enter the valid input!!! " << endl;
                         cin.clear();
                         cin.ignore(100, '\n');
                    }else{
                    cout << "The area of the square of length " << length << "m is " << squareFn(length) << endl;
                    break;
                    }
                case 2:
                    cout << "Enter the length of a rectangle: " << endl;
                    cin >> length;
                    cout << "Enter the width of a rectangle: " << endl;
                    cin >> width;
                    cout << "The area of the rectangle of length " << length << "m is " << rectangleFn(length, width) << endl;
                    break;
                case 3:
                    cout << "Enter the base of a triangle: " << endl;
                    cin >> base;
                    cout << "Enter the height of a triangle: " << endl;
                    cin >> height;
                    cout << "The area of the triangle of base " << base << "m and height " << height << "m is " << triangleFn(base, height) << endl;
                    break;
                case 4:
                    exit(0);
                default:
                    break;
            }
            return 0;
        }
    }
}

//FUNCTION DIFINITIONS.
double squareFn(double& valueA) {
    return valueA * valueA;
}

double rectangleFn(double& length, double& width) {
    return length * width;
}

double triangleFn(double& base, double& height) {
    return (0.5) * base * height;
}