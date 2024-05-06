#include <iostream>
#include <fstream>

using namespace std;

int main(){
    //creating a file
    ofstream MyFile("example.txt");

    //close afile
    MyFile.close();

    return 0;
}