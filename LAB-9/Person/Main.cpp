#include "Person.h"
#include<iostream>
using namespace std;

int main()
{
    Person Jane(60.0f);
    Person John(75.0f);

    float totalWeight = Jane + John;

    cout<<"Total Weight: "<<totalWeight<<endl;

    if (Jane == John){
        cout<<"This is the same person"<<endl;
    }
    if (Jane!=John){
        cout<<"this is NOT the same person"<<endl;
    }
    if (Jane < John){
        cout<<"Jane is younger than John"<<endl;
    }
    if (John > Jane){
        cout<<"John is older than Jane"<<endl;
    }
    int johnAge = John;
    cout<<"john's Age: "<<johnAge<<endl;

    return 0;
}
