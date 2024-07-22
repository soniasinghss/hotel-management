//
//  StdRoom.h
//  A5
//
// Created by Liyan Al-mosaria (40251099) Sonia Singh (40098260)
//

#ifndef StdRoom_h
#define StdRoom_h
#include "Room.h"
using namespace std;
class StdRoom : public Room {
    bool extraBed;
public:
    StdRoom(int number);//constructor
    virtual string getRoomInfo() const override;//virtual function
    virtual void print() const override;
    void setExtraBed(bool extra);
    bool hasExtraBed() const;
};

#endif /* StdRoom_h */
