//
// Created by ARİFKURU on 12.05.2023.
//
#include <iostream>
#include "event.h"
using namespace std;
int event::totalCount = 0;

//
//constructor event
event::event(string _name, int _catagory, int _hour, int _capacity, int _price,int _sold) {
    name = _name;
    catagory = _catagory;
    hour = _hour;
    capacity = _capacity;
    price = _price;
     sold = _sold;
}
// destructor
event::~event(){
}
void event::updateTotalCount(int count) {
    totalCount += count;
}
// event bilgiler
void event::infos() {
    cout << "                      Name of event : " << name << endl;
    cout << "                      Catagory of event : ";
    if (catagory == 1) {
        cout << "Concert";
    }
    else if (catagory == 2) {
        cout << "Cinema";
    }
    else {
        cout << "Theatre";
    }
    cout << endl;
    cout << "                      Hour of event : " << hour / 100 << ":";
    if (hour % 100 == 0) { cout << "00" << endl; }
    else { cout << hour % 100 << endl; }
    cout << "                      Capacity of event : " << capacity << endl;
    cout << "                      Price of ticket : " << price << " TL" << endl;


}
void event::setName(string _name) {
    name = _name;
}
string event::getName() {
    return name;
}
void event::setCatagory(int _catagory) {
    while(!(_catagory <=3 && _catagory>0)){
        cout << "                  Invalid catagory value! Please enter again : ";
        cin >> _catagory;
    }
    catagory = _catagory;
}
int event::getCatagory() {
    return catagory;
}


void event::setHour(int _hour) {
    float organised_hour= _hour;
    int ctrl=3;
    if(organised_hour <1000 && organised_hour > 23.59){
        ctrl=1;
    }
    else {
        ctrl=0;
    }
    while (!(organised_hour >= 0 && organised_hour <= 2359 && ctrl==0)) {
        cout << "                  Invalid hour value! Please enter again : ";
        cin >> organised_hour;
        if(organised_hour <1000 && organised_hour > 23.59){
            ctrl=1;
        }
        else {
            ctrl=0;
        }
        if (organised_hour < 100) {
            organised_hour *= 100;
        }
    }

    hour = organised_hour;
}


int event::getHour() {
    return hour;
}
void event::setCapacity(int _Capacity) {
    while(!(_Capacity <= 400 && _Capacity >0)){
        cout << "                  Invalid Capacity value! Please enter again : ";
        cin >> _Capacity;
    }
    capacity = _Capacity;
}
int event::getCapacity() {
    return capacity;
}
void event::setPrice(int _price) {
    price = _price;
}
int event::getPrice() {
    return price;
}
void event::setSold(int _sold) {
    sold = _sold;
}
int event::getSold() {
    return sold;
}
bool event::operator>(event other)  {
    return getSold() > other.getSold();
}
int event::operator+(event other) {
    return getSold() + other.getSold();
}
int event::operator+(int amount) {
    return getSold()+amount;
}
bool event::operator>(int amount)  {
    return getSold() > amount;
}

//