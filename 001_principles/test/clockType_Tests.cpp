//
// Created by Massimo Biancalani on 2019-04-12.
//
#include "../../catch.hpp"
#include "../clockType.h"
using namespace std;


TEST_CASE("clockType 00" ) {
   clockType clockType01(0, 2, 3);

    unsigned int hours, minutes, seconds;

    clockType01.getTime(hours, minutes, seconds);

    REQUIRE(hours == 0);
    REQUIRE(minutes == 2);
    REQUIRE(seconds == 3);
}


TEST_CASE("clockType 01" ) {
    clockType clockType01(25, 60, 60);

    unsigned int hours, minutes, seconds;

    clockType01.getTime(hours, minutes, seconds);

    REQUIRE(hours == 0);
    REQUIRE(minutes == 0);
    REQUIRE(seconds == 0);
}

TEST_CASE("clockType 03" ) {
    clockType clockType01(0, 2, 3);
    clockType01.incrementSeconds();
    unsigned int hours, minutes, seconds;

    clockType01.getTime(hours, minutes, seconds);

    REQUIRE(hours == 0);
    REQUIRE(minutes == 2);
    REQUIRE(seconds == 4);
}

TEST_CASE("clockType 04" ) {
    clockType clockType01(0, 2, 59);
    clockType01.incrementSeconds();
    unsigned int hours, minutes, seconds;

    clockType01.getTime(hours, minutes, seconds);

    REQUIRE(hours == 0);
    REQUIRE(minutes == 3);
    REQUIRE(seconds == 0);
}

TEST_CASE("clockType 05" ) {
    clockType clockType01(23, 59, 59);
    clockType01.incrementSeconds();
    unsigned int hours, minutes, seconds;

    clockType01.getTime(hours, minutes, seconds);

    REQUIRE(hours == 0);
    REQUIRE(minutes == 0);
    REQUIRE(seconds == 0);
}

TEST_CASE("clockType 06" ) {
    clockType clockType01(0, 2, 3);
    clockType01.incrementMinutes();
    unsigned int hours, minutes, seconds;

    clockType01.getTime(hours, minutes, seconds);

    REQUIRE(hours == 0);
    REQUIRE(minutes == 3);
    REQUIRE(seconds == 3);
}

TEST_CASE("clockType 07" ) {
    clockType clockType01(0, 59, 3);
    clockType01.incrementMinutes();
    unsigned int hours, minutes, seconds;

    clockType01.getTime(hours, minutes, seconds);

    REQUIRE(hours == 1);
    REQUIRE(minutes == 0);
    REQUIRE(seconds == 3);
}