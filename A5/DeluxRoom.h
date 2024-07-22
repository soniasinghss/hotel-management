//
//  DeluxRoom.h
//  A5
//
// Created by Liyan Al-mosaria (40251099) Sonia Singh (40098260)
//

#ifndef DeluxRoom_h
#define DeluxRoom_h

#include "Room.h"
#include <string>
using namespace std;

class DeluxRoom : public Room {
    string view; // "mountain" or "lake"
public:
    DeluxRoom(int number, const std::string& viewType);//constructor
    virtual string getRoomInfo() const override;
    virtual void print() const override;//virtual function
    string getView() const;
};
#endif /* DeluxRoom_h */
