//
// Created by Massimo Biancalani on 2019-04-11.
//

#include <iostream>
#include "clockType.h"

using namespace std;
void clockType::printTime() const {
    cout << "Hours: " << _hours << "Minutes: " << _minutes << "Seconds: " << _seconds << endl;
}

void clockType::incrementSeconds() {
    _seconds++;
    _minutes += _seconds / 60;
    _hours += _minutes / 60;
    resetInTheConstraints();
}

void clockType::resetInTheConstraints() {
    _seconds = _seconds % 60;
    _minutes = _minutes % 60;
    _hours = _hours % 24;
}

void clockType::getTime(unsigned int &hours, unsigned int &minutes, unsigned int &seconds) const {
    hours = _hours;
    minutes = _minutes;
    seconds = _seconds;
}

clockType::clockType(unsigned int hours, unsigned int minutes, unsigned int seconds) {
    _hours = hours < 24 ? hours : 0;
    _minutes = minutes < 60 ? minutes : 0;
    _seconds = seconds < 60 ? seconds : 0;
}

void clockType::incrementMinutes() {
    _minutes++;
    _hours += _minutes / 60;
    resetInTheConstraints();
}

void clockType::incrementHours() {
    _hours++;
    resetInTheConstraints();
}

bool clockType::operator==(const clockType &other) const {
    unsigned int hours, minutes, seconds;
    other.getTime(hours, minutes, seconds);
    if (_hours != hours) {
        return false;
    }
    if (_minutes != minutes) {
        return false;
    }
    if (_seconds != seconds) {
        return false;
    }

    return true;
}
