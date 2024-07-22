//
//  Hotel.h
//  A5
//
// Created by Liyan Al-mosaria (40251099) Sonia Singh (40098260)
//

#ifndef Hotel_h
#define Hotel_h
#include <string>
#include "Room.h"
using namespace std;

class Hotel {
protected:
    string hotelName;
    int roomCapacity;
    Room** roomArray;
public:
    Hotel(string name, int capacity);
    virtual ~Hotel();
    virtual double getBreakfastRate() const = 0; // Pure virtual function
    virtual void print() const; // virtual function
    Room* getRoom(int index) const;
    int getRoomCapacity() const;
    string getHotelName() const;
    void setroomArray(int, Room *);
    virtual double getRoomRate(int roomNo) const = 0; // Added method
};

#endif /* Hotel_h */
