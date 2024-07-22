//
//  Guest.h
//  A5
//
// Created by Liyan Al-mosaria (40251099) Sonia Singh (40098260)
//

#ifndef Guest_h
#define Guest_h

#include "Date.h"
#include <string>
using namespace std;

class Guest {
    string guestName;
    Date checkinDate;
    Date checkoutDate;
    int starRate;
    string hotelName;
    string roomType;
    bool extraBed;
    string view;
    string suiteSize;
public:
    Guest(const string& name, const Date& checkin, const Date& checkout, int star, const string& hotel, const string& room, bool extra, const string& v, const string& size);//constructor
    string getHotelName() const;
    string getRoomType() const;
    Date getCheckinDate() const;
    Date getCheckoutDate() const;
    string getName() const;
    bool hasExtraBed() const;
    string getSuiteSize() const;
    friend ostream&operator<<(ostream&output,const Guest&guest);//overloaded <<operator
};


#endif /* Guest_h */
