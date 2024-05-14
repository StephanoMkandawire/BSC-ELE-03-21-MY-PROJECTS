#include "Person.h"
#include <iostream>
#include <string>
using namespace std;

// Constructor
Person::Person() : mWeight(0.0f), mFirstName(""), mAge(0) {}

// Parameterized Constructor
Person::Person(float newWeight) : mWeight(newWeight), mFirstName(""), mAge(0) {}

// Destructor
Person::~Person() {
    // Destructor code here if needed
}

// Overloaded addition operator
float Person::operator+(const Person& otherPerson) {
    return mWeight + otherPerson.mWeight;
}

// Setter and getter for mWeight
void Person::setmWeight(float weight){
    mWeight = weight;
}

float Person::getmWeight(){
    return mWeight;
}

// Setter and getter for mFirstName
void Person::setmFirstName(const string& firstName){
    mFirstName = firstName;
}

string Person::getmFirstName(){
    return mFirstName;
}

// Setter and getter for mAge
void Person::setmAge(int age){
    mAge = age;
}

int Person::getmAge(){
    return mAge;
}

// Overloaded comparison operators
bool Person::operator==(const Person& otherPerson) const {
    return mFirstName == otherPerson.mFirstName;
}

bool Person::operator!=(const Person& otherPerson) const {
    return mFirstName != otherPerson.mFirstName;
}

// Overloaded mAge operators
bool Person::operator<(const Person& otherPerson) const {
    return mAge < otherPerson.mAge;
}

bool Person::operator>(const Person& otherPerson) const {
    return mAge > otherPerson.mAge;
}

// Conversion operator
Person::operator int() const {
    return mAge;
}

// Setter and getter for Jane's first name
void Person::setJaneFirstName(string firstName){
    mFirstName = firstName;
}

string Person::getJaneFirstName() const{
    return mFirstName;
}

// Assignment operator
Person& Person::operator=(const Person& otherPerson) {
    if (this != &otherPerson) {
        mFirstName = otherPerson.mFirstName;
        mAge = otherPerson.mAge;
    }
    return *this;
}

// Setter and getter for Jane's age
void Person::setJaneAge(int age){
    mAge = age;
}

int Person::getJaneAge() const{
    return mAge;
}
