//
//  Suite.h
//  A5
//
// Created by Liyan Al-mosaria (40251099) Sonia Singh (40098260)
//

#ifndef Suite_h
#define Suite_h

#include "Room.h"
#include <string>
using namespace std;

class Suite : public Room {
    string suiteSize; // "small", "medium", "large"
public:
    Suite(int number, const string& size);//constructor
    //virtual functions
    virtual string getRoomInfo() const override;
    virtual void print() const override;
    string getSize() const;
};

#endif /* Suite_h */
