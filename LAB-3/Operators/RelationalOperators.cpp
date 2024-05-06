#include  <iostream>
using namespace std;

int main()
{
    int a = 21;
    int b = 10;
    int c;

    if (a==b)
    {
        cout<< "Line 1 - a is equal to b "<<endl;
    }
    else
    {
        cout<< "Line 1 - a is not equal to b "<<endl;
    }
    if (a<b)
    {
        cout<< "Line 2 - a is less than b "<<endl;
    }
    else
    {
         cout<< "Line 2 - a is not less than b "<<endl;
    }

    return 0;
}