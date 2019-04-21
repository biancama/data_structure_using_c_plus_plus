//
// Created by Massimo Biancalani on 2019-04-17.
//

#include "dateType.h"
#include <iostream>

using namespace std;

void dateType::setDate(int month, int day, int year) {
    this->dMonth = month;
    this->dDay = day;
    this->dYear = year;
}

int dateType::getDay() const {
    return this->dDay;
}

int dateType::getMonth() const {
    return dMonth;
}

int dateType::getYear() const {
    return dYear;
}

void dateType::printDate() const {
    if (dDay < 10) {
        cout << "0" << dDay << "/";
    } else {
        cout << dDay << "/";
    }

    if (dMonth < 10) {
        cout << "0" << dMonth << "/";
    } else {
        cout << dMonth << "/";
    }

    cout << dYear << endl;
}
