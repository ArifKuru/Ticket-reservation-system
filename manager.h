//
// Created by ARİFKURU on 12.05.2023.
//

#ifndef UNTITLED2_MANAGER_H
#define UNTITLED2_MANAGER_H
#include <iostream>
using namespace std;

class manager {
public:
    manager(string _id, int _pin);
    string getId();
    void setId(string _id);
    int getPin();
    void setPin(int _pin);
    ~manager();
    friend void writeName(manager _manager); // Friend fonksiyon

private:
    string id;
    int pin;
};


#endif //UNTITLED2_MANAGER_H
