//
// Created by Massimo Biancalani on 2019-04-21.
//
#include <string>
#include "dateType.h"
#include "personType.h"
#ifndef DATA_STRUCTURE_USING_C_PLUS_PLUS_PERSONALINFOTYPE_H
#define DATA_STRUCTURE_USING_C_PLUS_PLUS_PERSONALINFOTYPE_H

using namespace std;

class personalInfoType {
public:
    void setPersonalInfo(string first, string last, int month,
                         int day, int year, int ID);
    //Function to set the personal information.
    //The member variables are set according to the
    //parameters.
    //Postcondition: firstName = first; lastName = last;
    // dMonth = month; dDay = day; dYear = year;
    // personID = ID;
    void printPersonalInfo () const;
    //Function to print the personal information.
    personalInfoType(string first = "", string last = "",
                     int month = 1, int day = 1, int year = 1900,
                     int ID = 0);
    //Constructor
    //The member variables are set according to the parameters.
    //Postcondition: firstName = first; lastName = last;
    // dMonth = month; dDay = day; dYear = year;
    // personID = ID;
    // If no values are specified, the default values are
    // used to initialize the member variables.
private:
    personType name;
    dateType bDay;
    int personID;
};


#endif //DATA_STRUCTURE_USING_C_PLUS_PLUS_PERSONALINFOTYPE_H
