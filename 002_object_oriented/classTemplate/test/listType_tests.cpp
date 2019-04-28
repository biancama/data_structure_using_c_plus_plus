//
// Created by Massimo Biancalani on 2019-04-21.
//

#include "../../../catch.hpp"
#include "../listType.h"

TEST_CASE("listType 00" ) {
    listType<int> l;
    REQUIRE(l.isEmpty() == true);
}

TEST_CASE("listType 01" ) {
    listType<int> l;
    REQUIRE(l.isFull() == false);
}

TEST_CASE("listType 02" ) {
    listType<int> l;
    bool found;
    l.insert(7);
    l.insert(8);
    l.insert(9);
    l.insert(10);
    l.insert(11);
    REQUIRE(l.isEmpty() == false);
    REQUIRE(l.isFull() == false);
    l.search(10, found);
    REQUIRE(found == true);
    l.remove(9);
    l.search(9, found);
    REQUIRE(found == false);
}
