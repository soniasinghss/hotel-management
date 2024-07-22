//
//  main.cpp
//  A5
//
// Created by Liyan Al-mosaria (40251099) Sonia Singh (40098260)

#include "Date.h"
#include <iostream>

Date::Date(int month,int day,int year) : month(month),day(day),year(year){} //constructor

void Date::setDate(int month,int day,int year) {
   this -> month=month;
  this ->  day=day;
    this ->year=year;
}
int Date::toDayNumber() const {//changes date to day number
    return (month - 1) * 30 + day;
}
ostream&operator<<(ostream&output,const Date&date){ //overloaded << operator
    output << date.day << "/"<<date.month<<"/"<<date.year;
    return output;
}
bool operator>(const Date&left,const Date&right){ //overloaded > operator
    if (left.year>right.year)
        return true;
    else if(left.year == right.year && left.month > right.month)
        return true;
    else if(left.year == right.year && left.month == right.month && left.day)
        return true;
    return false;
}
int Date::getDay() const {
    return day;
}
int Date::getMonth() const {
    return month;
}
int Date::getYear() const {
    return year;
}
