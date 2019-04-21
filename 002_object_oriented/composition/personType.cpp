//
// Created by Massimo Biancalani on 2019-04-21.
//

#include "personType.h"
#include <iostream>


void personType::print() const {
    cout << "Name: " << firstName << " Last name: " << lastName << endl;
}

void personType::setName(string first, string last) {
    firstName = first;
    lastName = last;
}

string personType::getFirstName() const {
    return firstName;
}

string personType::getLastName() const {
    return lastName;
}

personType::personType() {
    firstName = "";
    lastName = "";
}

personType::personType(string first, string last) {
    setName(first, last);
}
