//
// Created by ARİFKURU on 12.05.2023.
//

#ifndef UNTITLED2_EVENT_H
#define UNTITLED2_EVENT_H


#include <iostream>
using namespace std;
class event {
public:
    //constructor
    event(string _name="Unknown", int _catagory=0, int _hour=0, int _capacity=0, int _price=0,int _sold=0);
    //bilgi event hakkında
    void infos();
    //privatelara erişim
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
    static int totalCount;
    // ...
    bool operator>( event other) ;
    bool operator>( int amount) ;

    int operator+(event other);
    int operator+(int amount);


    static void updateTotalCount(int count);
private:
    string name;
    int hour;
    int capacity;
    int catagory;
    int price;
    int sold;
};




#endif //UNTITLED2_EVENT_H
