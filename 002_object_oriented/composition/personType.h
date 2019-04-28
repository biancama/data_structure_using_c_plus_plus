//
// Created by Massimo Biancalani on 2019-04-21.
//

#include <string>
#ifndef DATA_STRUCTURE_USING_C_PLUS_PLUS_PERSONTYPE_H
#define DATA_STRUCTURE_USING_C_PLUS_PLUS_PERSONTYPE_H

using namespace std;

class personType {
public:
    void print() const;
    //Function to output the first name and last name
    //in the form firstName lastName.
    void setName(string first, string last);
    //Function to set firstName and lastName according to the
    //parameters.
    //Postcondition: firstName = first; lastName = last
    string getFirstName() const;
    //Function to return the first name.
    //Postcondition: The value of firstName is returned.
    string getLastName() const;
    //Function to return the last name.
    //Postcondition: The value of lastName is returned.
    personType();
    //Default constructor
    //Sets firstName and lastName to null strings.
    //Postcondition: firstName = ""; lastName = "";
    personType(string first, string last);
    //Constructor with parameters.
    //Sets firstName and lastName according to the parameters.
    //Postcondition: firstName = first; lastName = last;

    personType& setFirstName(string first);
    //Function to set the first name.
    //Postcondition: firstName = first
    // After setting the first name, a reference to the
    // object, that is, the address of the object, is
    // returned.
    personType& setLastName(string last);
    //Function to set the last name.
    //Postcondition: lastName = last
    // After setting the last name, a reference to the object,
    // that is, the address of the object, is returned.
private:
    string firstName; //variable to store the first name
    string lastName; //variable to store the last name
};


#endif //DATA_STRUCTURE_USING_C_PLUS_PLUS_PERSONTYPE_H
