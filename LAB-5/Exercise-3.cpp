#include <iostream>
#include<string>
using namespace std;

int main() 
{
    //Declaring and initialising a string of array.
    string myArrayList[8] = {"B123", "C234", "A345", "C15","B177","G3003","C235","B179"};
        //for loop statement that iterate through each element of myArrayList.
       for (const string& array : myArrayList)
        {
            // Check if the element starts with the letter "B"
            if (array[0] == 'B') 
            {
                cout << array <<endl;
            }
        }
    
    return 0;
}