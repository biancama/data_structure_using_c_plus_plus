//
// Created by Massimo Biancalani on 2019-04-21.
//

#include "personalInfoType.h"
#include <iostream>

void personalInfoType::setPersonalInfo(string first, string last, int month, int day, int year, int ID)  {
    personID = ID;
    name.setName(first, last);
    bDay.setDate(month, day, year);
}

void personalInfoType::printPersonalInfo() const {
    name.print();
    cout << "'s date of birth is ";
    bDay.printDate();
    cout << endl;
    cout << "and personal ID is " << personID;
}

personalInfoType::personalInfoType(string first, string last, int month, int day, int year, int ID) :name(first, last),  bDay(month, day, year) {
    personID = ID;
}
