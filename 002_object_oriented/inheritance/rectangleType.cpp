//
// Created by Massimo Biancalani on 2019-04-15.
//

#include "rectangleType.h"
#include <iostream>
using namespace std;
void rectangleType::setDimension(double l, double w) {
    length = l > 0 ? l : 0;
    width = w > 0 ? w : 0;
}

double rectangleType::getLength() const {
    return length;
}

double rectangleType::getWidth() const {
    return width;
}

double rectangleType::area() const {
    return length * width;
}

double rectangleType::perimeter() const {
    return 2 * length + 2 * width;
}

void rectangleType::print() const {
    cout << "Width: " << width << " ;Length: " << length << endl;
}

rectangleType::rectangleType() {
    setDimension(0, 0);
}

rectangleType::rectangleType(double l, double w) {
    setDimension(l, w);
}

