#include <iostream>
using namespace std;

int main()
{
    int number;
    while(true)
    {
        cout<< "Enter the value integer between 5 and 10: ";
        cin >> number;
        if (cin.fail())
        {
            cout<<"Sorry, you have entered invalid number, please try again "<<endl;
            cin.clear();    //function is used to reset any error flags in the input stream.
            cin.ignore(50, '\n');    /* only to skip 50 characters in the input stream and its enough 
            depending on my program and can vary on preference.*/
        }
        else if(number <= 5 || number >= 10)
        {
            cout <<"You have entered "<< number <<". please enter the number between 5 and 10."<<endl;
        }
        else
        {
                cout << "Your input value("<<number<<") has been accepted."<<endl;
                break;
        }
    }
    return 0;
}