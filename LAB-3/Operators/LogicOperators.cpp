#include  <iostream>
using namespace std;

int main()
{
    int a = 21;
    int b = 10;
    int c;
    if (a && b)
    {
        cout <<"Line 1 - condition is true"<<endl;
    }
    if (a || b)
    {
         cout <<"Line 2 - condition is true"<<endl;
    }
    /*Lets Change the Value of a and b */
    a = 0;
    b = 10;

    if (a && b)
    {
         cout <<"Line 3 - condition is true"<<endl;
    }
    if (a || b)
    {
         cout <<"Line 4 - condition is true"<<endl;
    }

    return 0;
}