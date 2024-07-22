//
//  Room.h
//  A5
//
// Created by Liyan Al-mosaria (40251099) Sonia Singh (40098260)
//

#ifndef Room_h
#define Room_h

#include <string>
using namespace std;

class Room {
protected:
    int roomNo;
    bool availabilityArray[360]; // Array representing availability for each day of the year
public:
    Room(int number);
    virtual ~Room();
    virtual string getRoomInfo() const = 0; // Pure virtual function
    virtual void print() const; //  virtual function
    bool isAvailable(int start, int end) const; // Declaration only
    void book(int checkin, int checkout); // Declaration only
    int getRoomNo() const; // Added method
};

#endif /* Room_h */
