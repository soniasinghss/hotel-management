//
//  Suite.cpp
//  A5
//
// Created by Liyan Al-mosaria (40251099) Sonia Singh (40098260)
//

#include "Suite.h"
#include <iostream>
using namespace std;

Suite::Suite(int number, const string& size) : Room(number), suiteSize(size) {} //constructor

string Suite::getRoomInfo() const {
    return "Suite size: " + suiteSize;
}

void Suite::print() const {
    
    Room::print();//print room data members
    
    cout << "Suite size: " << suiteSize << endl;
}

string Suite::getSize() const {
    return suiteSize;
}
