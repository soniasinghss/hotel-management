//
//  ThreeStarHotel.h
//  A5
//
// Created by Liyan Al-mosaria (40251099) Sonia Singh (40098260)
//

#ifndef ThreeStarHotel_h
#define ThreeStarHotel_h

#include "Hotel.h"
#include "StdRoom.h"
using namespace std;

class ThreeStarHotel : public Hotel {
    double stdRoomRate;
    double breakfastrate;
public:
    ThreeStarHotel(const string& name, double stdrate, double brate, int capacity);//constructor
    //virtual functions
    virtual double getBreakfastRate() const override;
    virtual void print() const override;
    virtual double getRoomRate(int roomNo) const override;
};


#endif /* ThreeStarHotel_h */
