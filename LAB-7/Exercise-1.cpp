#include<iostream>
#include<string>

using namespace std;

int main(){
    // declaring and allocating the dynamic memory.
    int* dynamicallyInt = new int;
    string* dynamicallyString = new string;

    //Asking user to enter the input stream.
    cout<<"Assign a value to the dynamically allocated memory (integer): ";
    cin>>*dynamicallyInt;   //Accepting the input stream

    cout<<"Assign a value to the dynamically allocated memory (String): ";
    cin.ignore(); // Ignore the newline character left in the stream
    getline(cin, *dynamicallyString); // Accepting the input stream

    //Displaying on the console.
    cout<<"The value of dynamically allocated integer: "<<*dynamicallyInt<<endl;
    cout<<"The value of dynamically allocated integer: "<<*dynamicallyString<<endl;

    //Dellocating the memory
    delete dynamicallyInt;
    delete dynamicallyString;

    //assign the memory nullptr;
    dynamicallyInt = nullptr;
    dynamicallyString = nullptr;

    return 0;
}