#include<iostream>
using namespace std;

void SwapNumbers(int&, int&);

int main()
{
    int varA = 25;
    int varB = 100;

    cout << "varA before swap: " << varA << endl;
    cout << "varB before swap: " << varB << endl;

    SwapNumbers(varA, varB);
    cout << "varA After swap: " << varA << endl;
    cout << "varB After swap: " << varB << endl;

    return 0;
}

void SwapNumbers(int& one, int& two){
    
    int temp = one;
    one = two;
    two = temp;
}
