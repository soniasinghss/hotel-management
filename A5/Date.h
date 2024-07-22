//
//  Date.h
//  A5
//
// Created by Liyan Al-mosaria (40251099) Sonia Singh (40098260)


#ifndef Date_h
#define Date_h
#include <iostream>
using namespace std;

class Date {
    friend ostream&operator<<(ostream&output,const Date&date);//overloaded << operator
    friend bool operator>(const Date& left,const Date& right);//overloaded > operator
private:
    int month;
    int day;
    int year;
public:
    Date(int m,int d,int y);
    int toDayNumber() const;
    void setDate(int,int,int);
    int getMonth() const;
    int getDay() const;
    int getYear() const;
    
};


#endif /* Date_h */
