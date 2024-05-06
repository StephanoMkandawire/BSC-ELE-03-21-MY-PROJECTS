#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// function proto-type of random generator function.
int daysUntilExpiration();

int main()
{
    int number = daysUntilExpiration();
    if ((number >= 6) && (number <= 10))
    {
        cout <<"Your subscription will expire soon. Renew now! "<<endl;

    }else if ((number >= 2) && (number <=5))
    {
        cout<<"Your subscription expires in value of "<< daysUntilExpiration() <<  " Renew now and save 10%!"<< endl;

    }else if (number == 1)
    {
        cout <<"Your subscription expires within a day! Renew now and save 20%!"<<endl;

    }else
    cout<<"You have an active subscription. "<<endl;

    return 0;
}

//fUNCTION GENERATIND RANDOM NUMBERS BETWEEN 0 AND 10.
int daysUntilExpiration()
{
     int randomValue;
    // set seed.
    srand(time(0));

    //generating random integer between 0 and 11.  
    randomValue = (1 +(rand() % 10));

    return randomValue;
}