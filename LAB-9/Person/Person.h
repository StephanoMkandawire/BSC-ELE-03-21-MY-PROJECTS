#pragma once
#include <string>
using namespace std;

class Person {
public:
    // Constructors
    Person(); // Default constructor
    Person(float newweight); // Constructor with weight parameter

    // Destructor
    ~Person();

    // Overloaded addition operator
    float operator+(const Person& otherPerson);

    // Setter and getter methods for member variables
    void setmWeight(float);
    float getmWeight();

    void setmFirstName(const string&);
    string getmFirstName();

    void setmAge(int);
    int getmAge();

    //Overloading the operator == and !=.
    bool operator==(const Person& otherPerson) const;
    bool operator!=(const Person& otherPerson) const;

    //overloading mAge with < and >
    bool operator<(const Person& otherPerson) const;
    bool operator>(const Person& otherPerson) const;

    operator int()const;
            void SetjaneFirstName(string fisrtName);
        string getJaneFirstName()const;

        void setJaneAge(int age);
        int Person::getJaneAge()const;
        string operator=(const Person& janeFirstName)const;

private:
    float mWeight; // Weight of the person
    string mFirstName; // First name of the person
    int mAge; // Age of the person
};
