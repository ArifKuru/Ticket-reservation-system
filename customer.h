//
// Created by ARİFKURU on 12.05.2023.
//

#ifndef UNTITLED2_CUSTOMER_H
#define UNTITLED2_CUSTOMER_H
#include <iostream>
#include "event.h"
using namespace std;

class customer {
public:
    string getName();
    void infos(int i);
    void setName(string _name);
    int long long getPhone_number();
    void setPhone_number(int long long _phone_number);
    void seteventNumber(event _eventNumber);
    event geteventNumber();
    void setseatNumber(int _seatNumber);
    int getseatNumber();
    ~customer();
    int operator+(int amount);
    int operator+(customer other);
private:
    string name;
    int long long phone_number;
    event eventNumber;
    int seatNumber;
};



#endif //UNTITLED2_CUSTOMER_H
