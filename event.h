
#include <iostream>
using namespace std;
class event {
public:
	//constructor
	event() : name(""), catagory(0), hour(0), capacity(0), price(0) , sold(0){}
	event(string _name, int _catagory, int _hour, int _capacity, int _price,int _sold);
	//bilgi event hakkýnda
	void infos();
	//privatelara eriþim
	void setName(string _name);
	string getName();
	void setCatagory(int _catagory);
	int getCatagory();
	void setHour(int _hour);
	int getHour();
	void setCapacity(int _Capacity);
	int getCapacity();
	void setPrice(int _price);
	int getPrice();
	void setSold(int _sold);
	int getSold();
	~event();

private:
	string name;
	int hour;
	int capacity;
	int catagory;
	int price;
	int sold;
};
class manager {
public:
	manager(string _id, int _pin);
	string getId();
	void setId(string _id);
	int getPin();
	void setPin(int _pin);
	~manager();
private:
	string id;
	int pin;
};
class customer {
public:
	string getName();
	void infos(int i);
	void setName(string _name);
	int long long getPhone_number();
	void setPhone_number(int long long _phone_number);
	int getPaid();
	void setPaid(int _Paid);
	string geteventName();
	void seteventName(string _eventName);
	int geteventNumber();
	void seteventNumber(int _eventNumber);
	void setseatNumber(int _seatNumber);
	int getseatNumber();
	~customer();
private:
	string name;
	int long long phone_number;
	int paid;
	string eventName;
	int eventNumber;
	int seatNumber;
};


