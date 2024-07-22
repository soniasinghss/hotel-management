//
//  Reservation.h
//  A5
//
// Created by Liyan Al-mosaria (40251099) Sonia Singh (40098260)
//

#ifndef Reservation_h
#define Reservation_h

#include "Guest.h"
using namespace std;
class Reservation {
    static int counter;
    int reservationNo;
    Guest guest;
    int roomNo;
    double baseRate;
    double extraBedFee;
    double perdayCost;
    double totalCost;
public:
    Reservation(const Guest& guest, int roomNo, double rate);//constructor
    int getReservationNo() const;
    int getRoomNo() const;
    void print() const;
    friend ostream&operator<<(ostream output,const Reservation&reservation);//overloaded << operator
};
#endif /* Reservation_h */
