#include <iostream>

using namespace std;

int main()
{
    //null pointer
    int* pPointer = nullptr;

    int numbersArray[3] = {10, 20, 30};

    //assign address of first element to pointer
    pPointer = numbersArray;

    //output the address of a the first element
    cout<<"address at pPointer: "<<pPointer<<endl;
    cout<<"address at numbersArray[0]: "<<numbersArray<<endl;

    //output the value of the first element using the pointer and indirection
    cout<<"Value of the second element: "<<*(pPointer)<<endl;

    //This outputs the value of the second element
    cout<<"Value at ++pPointer: "<<*(++pPointer)<<endl;

    //this outputs the value of the first element and this will work only when line 
    //23 is ignored.
    cout << "Value at pPointer++: "<<*(pPointer)<<endl;

    return 0;    
}