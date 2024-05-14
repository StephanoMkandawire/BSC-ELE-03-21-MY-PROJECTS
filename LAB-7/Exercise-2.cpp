#include<iostream>
using namespace std;

int main()
{
    int rows;
    int columns;

    // Dynamically allocation
    cout<<"Enter rows from 1 to 3: ";
    cin>>rows;
    cout<<"Enter columns from 1 to 3: ";
    cin>>columns;

    // Check if rows and columns are within the allowed range
    while ((rows < 1 || rows > 3) || (columns < 1 || columns > 3))
    {
        cout << "Invalid dimensions. Rows and columns must be between 1 and 3.\n";
        cout << "Enter rows from 1 to 3: ";
        cin >> rows;
        cout << "\nEnter columns from 1 to 3: ";
        cin >> columns;
    }
    //two dimessions allay.
    int** array;
    array = new int*[rows];
    for (int i = 0; i < rows; i++)
    {
        array[i] = new int[columns];
    }

    // filling the values of an array.
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            array[i][j] = 10 + i;
        }
    }
    
    // Printing the array on the screen.
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    // Deallocating memory
    for (int i = 0; i < rows; i++)
    {
        delete[] array[i];
    }
    delete [] array;

    return 0;
}
