//
//  Reservation.cpp
//  A5
//
//  Created by Sonia Singh on 2024-06-15.
//

#include "Reservation.h"
#include <iostream>
using namespace std;

int Reservation::counter = 1;

Reservation::Reservation(const Guest& g, int room, double rate)
    : guest(g), roomNo(room), baseRate(rate), extraBedFee(0), perdayCost(rate) {
    reservationNo = counter++;
    
    // Adjust perdayCost for extra bed if it's a standard room
    if (guest.getRoomType() == "stdRoom" && guest.hasExtraBed()) {
        extraBedFee = 0.1 * rate;
        perdayCost += extraBedFee; // 10% of the standard room rate is added for the extra bed
    }

    // Adjust perdayCost for suite size
    if (guest.getRoomType() == "suite") {
        if (guest.getSuiteSize() == "medium") {
            perdayCost *= 1.5; // 50% more for medium suite
        } else if (guest.getSuiteSize() == "large") {
            perdayCost *= 2.0; // 100% more for large suite
        }
    }

    int days = (guest.getCheckoutDate().toDayNumber() - guest.getCheckinDate().toDayNumber());
    totalCost = perdayCost * days;
}

int Reservation::getReservationNo() const {
    return reservationNo;
}
int Reservation::getRoomNo() const {
    return roomNo;

ostream&operator<<(ostream&output,const Reservation&reservation){
    output << "Reservation number: " << reservation.getReservationNo()<< endl;
    output << "Room number: " << reservation.getRoomNo()<< endl;

    
}
//void Reservation::print() const {
   // std::cout << "Reservation No: " << reservationNo << "\n"
              //<< "Guest: " << guest.getName() << "\n"
             // << "Room No: " << roomNo << "\n"
             // << "Check-in Date: " << guest.getCheckinDate().getMonth() << "/" << guest.getCheckinDate().getDay() << "/" << guest.getCheckinDate().getYear() << "\n"
             // << "Check-out Date: " << guest.getCheckoutDate().getMonth() << "/" << guest.getCheckoutDate().getDay() << "/" << guest.getCheckoutDate().getYear() << "\n"
             // << "Regular cost per day: " << baseRate << "\n"
             // << "Extra bed fee: " << extraBedFee << "\n"
            //  << "Cost per day: " << perdayCost << "\n"
            //  << "Total cost: " << totalCost << "\n"
           //   << "Extra bed: " << (guest.hasExtraBed() ? "Yes" : "No") << std::endl;
}
