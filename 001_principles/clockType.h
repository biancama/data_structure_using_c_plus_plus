//
// Created by Massimo Biancalani on 2019-04-11.
//

#ifndef DATA_STRUCTURE_USING_C_PLUS_PLUS_CLOCKTYPE_H
#define DATA_STRUCTURE_USING_C_PLUS_PLUS_CLOCKTYPE_H


class clockType {

    unsigned int _hours;
    unsigned int _minutes;
    unsigned int _seconds;
    void resetInTheConstraints();
public:
    clockType(unsigned int hours, unsigned int minutes, unsigned int seconds);
    void getTime(unsigned int& hours, unsigned int& minutes, unsigned int& seconds) const;
    void printTime() const;
    void incrementSeconds();
    void incrementMinutes();
    void incrementHours();
    bool operator == (const clockType& other) const;
};


#endif //DATA_STRUCTURE_USING_C_PLUS_PLUS_CLOCKTYPE_H
