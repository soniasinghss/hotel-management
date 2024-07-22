//
//  Hotel.cpp
//  A5
//
// Created by Liyan Al-mosaria (40251099) Sonia Singh (40098260)
//

#include "Hotel.h"
#include <iostream>

using namespace std;

Hotel::Hotel(string name, int capacity) : hotelName(name), roomCapacity(capacity) { //constructor
    roomArray = new Room*[capacity];
    for(int i=0;i<capacity; i++){
        roomArray[i]=nullptr;
    }
}

Hotel::~Hotel() {//destructor
    for (int i = 0; i < roomCapacity; ++i) {
        delete roomArray[i];
    }
    delete[] roomArray;
}

Room* Hotel::getRoom(int index) const {//returns room index
    if (index >= 0 && index < roomCapacity) {
        return roomArray[index];
    }
    return nullptr;
}

int Hotel::getRoomCapacity() const {
    return roomCapacity;
}

string Hotel::getHotelName() const {
    return hotelName;
}

void Hotel::setroomArray(int indexRoom, Room * ptr)
{ roomArray[indexRoom] = ptr;
    
}

void Hotel::print() const {
     cout << "Hotel name is "<< hotelName << ", Room capacity is " << roomCapacity <<endl;
 
}
