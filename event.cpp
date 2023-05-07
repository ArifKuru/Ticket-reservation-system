#include <iostream>
#include "event.h"
using namespace std;
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
//kullanýcý bilgileri
//destructor
customer::~customer(){
}
void customer::infos(int i) {
	cout << "                      Name of customer : " << name << endl;
	cout << "                      Phone number of customer : " << phone_number << endl;
	cout << "                      Customer paid : " << paid << " TL" << endl;
	cout << "                      Name of event : " << eventName << endl;
	cout << "                      Number of event : " << eventNumber << endl;
	cout << "                      Seat number : " << seatNumber << endl;
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
//
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
int customer::getPaid() {
	return paid;
}
void customer::setPaid(int _paid) {
	paid = _paid;
}
string customer::geteventName() {
	return eventName;
}
void customer::seteventName(string _eventName) {
	eventName = _eventName;
}
int customer::geteventNumber() {
	return eventNumber;
}
void customer::seteventNumber(int _eventNumber) {
	eventNumber = _eventNumber;
}
void customer::setseatNumber(int _seatNumber) {
	seatNumber = _seatNumber;
}
int customer::getseatNumber() {
	return seatNumber;
}

