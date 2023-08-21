//
// Created by ARİFKURU on 12.05.2023.
//
#include <iostream>
#include "customer.h"
#include "event.h"
using namespace std;

customer::~customer(){
}
void customer::infos(int i) {
    cout << "                      Name of customer : " << name << endl;
    cout << "                      Phone number of customer : " << phone_number << endl;
    cout << "                      Customer paid : " << eventNumber.getPrice() << " TL" << endl;
    cout << "                      Name of event : " << eventNumber.getName() << endl;
  //  cout << "                      Number of event : " << eventNumber. << endl;
    cout << "                      Seat number : " << seatNumber << endl;
}

string customer::getName() {
    return name;
}
void customer::setName(string _name) {
    name = _name;
}
int long long customer::getPhone_number() {
    return phone_number;
}
void customer::setPhone_number(int long long _phone_number) {
    //5554443322
    //5000000000-1
    //6000000000
    while(!(_phone_number <=6000000000 && _phone_number>5000000000-1)){
        cout << "                  Invalid Phone number value! Please enter again : ";
        cin >> _phone_number;
    }
    phone_number = _phone_number;
}

void customer::seteventNumber(event _eventNumber){
    eventNumber = _eventNumber;
}

event customer::geteventNumber() {
    return eventNumber;
}

void customer::setseatNumber(int _seatNumber) {
    seatNumber = _seatNumber;
}
int customer::getseatNumber() {
    return seatNumber;
}
int customer::operator+(int amount){
    return eventNumber.getPrice()+amount;
}
int customer::operator+(customer other){
    return eventNumber.getPrice()+other.eventNumber.getPrice();
}
