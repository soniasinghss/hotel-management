//
//  ThreeStarHotel.cpp
//  A5
//
// Created by Liyan Al-mosaria (40251099) Sonia Singh (40098260)
//

#include "ThreeStarHotel.h"
#include <iostream>
using namespace std;

ThreeStarHotel::ThreeStarHotel(const string& name, double stdrate, double brate, int capacity) //constructor
    : Hotel(name, capacity), stdRoomRate(stdrate), breakfastrate(brate) {
        for(int j=0; j < capacity; j++)
        {roomArray[j] = new StdRoom (j+1);}
}

double ThreeStarHotel::getBreakfastRate() const {
    return breakfastrate;
}

void ThreeStarHotel::print() const {
    
    Hotel::print();//prints hotel data members
    
    cout<< "Standard room rate is " << stdRoomRate << ", "<< "breakfast rate is " << breakfastrate << endl;
    
    for (int i = 0; i < roomCapacity; ++i) {//prints room
        roomArray[i]->print();
    }
}

double ThreeStarHotel::getRoomRate(int roomNo) const {
    return stdRoomRate;
}
