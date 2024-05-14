#include "Person.h"
#include <iostream>
#include <string>
using namespace std;

#include "Person.h"

// Constructor
Person::Person() {
    mWeight = 0.0f;
    mFirstName = "";
    mAge = 0;
}

// Parameterized Constructor
Person::Person(float newWeight) {
    mWeight = newWeight;
    mFirstName = "";
    mAge = 0;
}

// Destructor
Person::~Person() {
    // Destructor code here if needed
}
        float Person::operator+(const Person& otherPerson) {
            return mWeight + otherPerson.mWeight;
        }
        void Person::setmWeight(float weight){
            mWeight = weight;
        }
        float Person::getmWeight(){
            return mWeight;
        }

        void Person::setmFirstName(const string& firstName){
            mFirstName = firstName;
        }
        string Person::getmFirstName(){
            return mFirstName;
        }

        void Person::setmAge(int age){
            mAge = age;
        }
        int Person::getmAge(){
            return mAge;
        }

        //implementation of overloaded == and !=
        bool Person::operator==(const Person& otherPerson) const {
            return mFirstName == otherPerson.mFirstName;
        }

        bool Person::operator!=(const Person& otherPerson) const {
            return mFirstName != otherPerson.mFirstName;
        }

        // implementation of Overloaded mAge.
        bool Person::operator<(const Person& otherPerson) const {
            return mAge < otherPerson.mAge;
        }
        Person::operator int()const
        {
            return mAge;
        }

        bool Person::operator>(const Person& otherPerson) const {
            return mAge > otherPerson.mAge;
        }

        void Person::SetjaneFirstName(string fisrtName){
            mFirstName = fisrtName;
        }
        string Person::getJaneFirstName()const{
            return mFirstName;
        }

        string Person::operator=(const Person& janeFirstName)const{
            return mFirstName;
        }
        void Person::setJaneAge(int age){
            mAge = age;
        }
        int Person::getJaneAge()const{
            return mAge;
        }
