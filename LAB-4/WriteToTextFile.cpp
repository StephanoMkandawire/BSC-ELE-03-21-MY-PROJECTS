#include <iostream>
#include <fstream>

using namespace std;

int main(){
    //creating a file
    ofstream MyFile("exampleMyFile.txt");

    if(MyFile.is_open()){
        MyFile<<"This is a line "<<endl;
        MyFile<<"this is another line. "<<endl;
        //close afile
        MyFile.close();
    }else{
        cout<<"Unable to open the file"<<endl;
    }

    return 0;
}