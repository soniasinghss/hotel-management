//
//  Guest.cpp
//  A5
//
// Created by Liyan Al-mosaria (40251099) Sonia Singh (40098260)
//

#include "Guest.h"
using namespace std;

Guest::Guest(const string& name, const Date& checkin, const Date& checkout, int star, const string& hotel, const string& room, bool extra, const string& v, const string& size)
    : guestName(name), checkinDate(checkin), checkoutDate(checkout), starRate(star), hotelName(hotel), roomType(room), extraBed(extra), view(v), suiteSize(size) {}//constructor
//get/set member functions
string Guest::getHotelName() const {
    return hotelName;
}

string Guest::getRoomType() const {
    return roomType;
}

Date Guest::getCheckinDate() const {
    return checkinDate;
}

Date Guest::getCheckoutDate() const {
    return checkoutDate;
}

string Guest::getName() const {
    return guestName;
}

bool Guest::hasExtraBed() const {
    return extraBed;
}

string Guest::getSuiteSize() const {
    return suiteSize;
}

ostream&operator<<(ostream&output,const Guest&guest){//prints all guest objects
    output << "Guest name: " << guest.getName() << endl;
    output << "Check-in date: " << guest.getCheckinDate() << endl;
    output << "Check-out date: " << guest.getCheckoutDate() << endl;
    output << "Hotel star rating: " << guest.starRate << endl;
    output << "Hotel name: " << guest.getHotelName() << endl;
    output << "Room type: " << guest.getRoomType() << endl;
    output << "Extra bed: " << (guest.hasExtraBed() ? "Yes":"No")<< endl;
    output << "View: " << guest.view << endl;
    output << "Suite size: " << guest.getSuiteSize() << endl;
    return output;
}
