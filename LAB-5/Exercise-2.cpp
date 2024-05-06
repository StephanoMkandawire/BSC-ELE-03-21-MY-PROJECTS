#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// function proto-type of random generator function.
int daysUntilExpiration();

int main()
{
    //using switch statement....
    switch(daysUntilExpiration()) {
    case 0: cout << "Your subscription has expired "<< endl;break;
    case 1: cout << "Your subscription expires within a day! Renew now and save 20%!" <<endl; break;
    case 2:
    case 3:
    case 4:
    case 5: cout << "Your subscription expires in value of "<< daysUntilExpiration() << " Renew now and save 10%!" <<endl; break;
    case 6:
    case 7:
    case 8:
    case 9:
    case 10: cout << "Your subscription will expire soon. Renew now! " << endl;; break;
    case 11: cout << "You have an active subscription. "<< endl; break;

    default:
        break;
    }
    return 0;
}

//fUNCTION GENERATIND RANDOM NUMBERS BETWEEN 0 AND 10.
int daysUntilExpiration()
{
     int randomValue;
    // set seed.
    srand(time(0)); 

    //generating random integer between 0 and 11.  
    randomValue = (1 + (rand() % 10)); 

    return randomValue;
}