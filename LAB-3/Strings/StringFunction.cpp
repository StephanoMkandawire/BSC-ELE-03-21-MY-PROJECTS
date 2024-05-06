#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str1[10] = "HELLO";
    char str2[10] = " WORLD";
    char str3[10];
    int length;
        //copy str1 into str3
    strcpy(str3, str1);
    cout<<"strcpy(str3, str1) is: "<<str3<<endl;

        //concatenate string
    strcat(str3, str2);
     cout<<"strcat(str3, str2) is: "<<str3<<endl;

        //total length
    length = strlen(str3);
     cout<<"strlen(str3) is: "<<length<<endl;

    return 0;
}