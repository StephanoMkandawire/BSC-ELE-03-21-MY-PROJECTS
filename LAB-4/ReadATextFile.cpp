#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    string line;
    //creating a file
    ifstream MyFile("example.txt");

    if(MyFile.is_open()){
        while(getline(MyFile,line)){
                cout<<line<<"\n";
        }
        MyFile.close();
    }else{
        cout<<"Unable to open the file"<<endl;
    }

    return 0;
}