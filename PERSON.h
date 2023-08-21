//
// Created by ARİFKURU on 7.06.2023.
//

#ifndef PERSON_H
#define PERSON_H

#include <iostream>
using namespace std;
class Person {
public:
    Person(const string &_firstName,const string &_lastName,const string &_idNumber, int _age=0.0);

    void setFirstName(const string &_firstName);
    void setLastName(const string &_lastName);
    void setIDNumber(const string &_idNumber);
    void setAge(int &_age);

    string getFirstName() const;
    string getLastName() const;
    string getIDNumber() const;
    int getAge() const;

    string getAgeClass() const;
    void print() const;
protected:
    string firstName;
    string lastName;
    string idNumber;
    int age;

};



#endif //PERSON_H
