//
// Created by ARİFKURU on 12.05.2023.
//

#include "manager.h"
#include <iostream>
using namespace std;

void writeName(manager _manager){
    cout << _manager.id << endl;
}
//
// manager constructor
manager::manager(string _id, int _pin) {
    id = _id;
    pin = _pin;
};
//destructor
manager::~manager(){
}
void manager::setId(string _id) {
    id = _id;
}
string manager::getId() {
    return id;
}
void manager::setPin(int _pin) {
    pin = _pin;
}
int manager::getPin() {
    return pin;
}

//kullanıcı bilgileri
//destructor