//
//  FourStarHotel.h
//  A5
//
// Created by Liyan Al-mosaria (40251099) Sonia Singh (40098260)
//

#ifndef FourStarHotel_h
#define FourStarHotel_h

#include "ThreeStarHotel.h"
#include "DeluxRoom.h"

class FourStarHotel : public ThreeStarHotel {
    double deluxRoomRate;
public:
    FourStarHotel(const std::string& name, double stdrate, double deluxrate, double breakfastrate, int capacity);//constructor
    virtual void print() const override;//virtual function
    virtual double getRoomRate(int roomNo) const override; // Implemented method
};
#endif /* FourStarHotel_h */
