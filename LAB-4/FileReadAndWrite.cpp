#include <fstream>
#include <iostream>
#include <string> // Include for std::string
using namespace std;

int main() {
    char data[100];

    // open a file in write mode.
    ofstream outfile;
    outfile.open("afile.txt");

    cout << "Writing to the file" << endl;
    cout << "Enter your name: ";
    cin.getline(data, 100);

    // write inputted data into the file.
    outfile << data << endl;

    cout << "Enter your age: ";
    int age; // Variable to store age
    cin >> age;
    cin.ignore(); // Clear input buffer
    outfile << age << endl; // Write age to file

    // close the opened file.
    outfile.close();

    // open a file in read mode.
    ifstream infile;
    infile.open("afile.txt");

    cout << "Reading from the file" << endl;
    infile.getline(data, 100); // Read name from file
    cout << data << endl; // Output name

    // Read age from file
    infile >> age;
    cout << age << endl; // Output age

    // close the opened file.
    infile.close();

    return 0;
}
