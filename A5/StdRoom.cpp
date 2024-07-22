//
//  StdRoom.cpp
//  A5
//
// Created by Liyan Al-mosaria (40251099) Sonia Singh (40098260)
//

#include <iostream>
#include "StdRoom.h"

StdRoom::StdRoom(int number) : Room(number), extraBed(false) {} //constructor

std::string StdRoom::getRoomInfo() const {
    return extraBed ? "Standard Room with extra bed" : "Standard Room";
}

void StdRoom::print() const {
    
    Room::print();//print Room data members
    
    std::cout << "Extra bed is " << extraBed << std::endl;
}

void StdRoom::setExtraBed(bool extra) {
    extraBed = extra;
}

bool StdRoom::hasExtraBed() const {
    return extraBed;
}

