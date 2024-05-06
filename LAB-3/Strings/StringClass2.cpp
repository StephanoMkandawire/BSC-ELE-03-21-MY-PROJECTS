#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string str1 = "HELLO";
    string str2 = " WORLD";
    string str3;
    int length;
        //copy str1 into str3
    str3 =str1;
    cout<< "str3 in line 1 is: "<< str3<<endl;
        //concatenates strings
    str3 = str1 + str2;
    cout<< "str3 in line 2 is: "<< str3<<endl;

        //total length
    length = str3.size();
    cout<<"str3.size() is: "<<length<<endl;

    return 0;
}