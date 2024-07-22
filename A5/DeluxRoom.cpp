//
//  DeluxRoom.cpp
//  A5
//
// Created by Liyan Al-mosaria (40251099) Sonia Singh (40098260)

#include "DeluxRoom.h"
#include <iostream>
using namespace std;

DeluxRoom::DeluxRoom(int number, const string& viewType) : Room(number), view(viewType) {} //constructor

std::string DeluxRoom::getRoomInfo() const {
    return "Delux Room with " + view + " view";
}

void DeluxRoom::print() const {
    
    Room::print();//print room data members
    
    cout << "Delux Room with " << view << " view" << endl;
}

string DeluxRoom::getView() const {
    return view;
}
