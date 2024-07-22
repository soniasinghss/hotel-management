//
//  FiveStarHotel.h
//  A5
//
// Created by Liyan Al-mosaria (40251099) Sonia Singh (40098260)
//

#ifndef FiveStarHotel_h
#define FiveStarHotel_h

#include "FourStarHotel.h"
#include "Suite.h"
using namespace std;

class FiveStarHotel : public FourStarHotel {
    double suiteRate;
public:
    FiveStarHotel(const string& name, double stdrate,double deluxrate, double srate, double brate, int capacity);//constructor
    virtual void print() const override;
    virtual double getRoomRate(int roomNo) const override; // Implemented method
};
#endif /* FiveStarHotel_h */
