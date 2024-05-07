#include <iostream>
using namespace std;

int main()
{
    //declare pointer and initialize it.
    //so that it doesn't a random address.
    int* pPointer = nullptr;

    int integerVar = 5;

    //asign pointer to the address
    pPointer = &integerVar;

    //output the address of integerVar
    cout << "Address of integerVar: "<<pPointer <<endl;

    //output the address assigned to pPointer
    cout << "pPointer" << pPointer<<endl;

    //output the address of the pPointer
    cout<<"address of pPointer: "<<&pPointer<<endl;
    
    return 0;
}