//
// Created by Massimo Biancalani on 2019-04-15.
//

#include "boxType.h"
using namespace std;
void boxType::setDimension(double l, double w, double h) {
    rectangleType::setDimension(l, w);
    height = h > 0 ? h : 0;
}

double boxType::getHeight() const {
    return height;
}

double boxType::area() const {
    return 2 * (rectangleType::area() + height * getWidth() + height * getLength());
}

double boxType::volume() const {
    return rectangleType::area() * height;
}

void boxType::print() const {
    cout << "Width: " << getWidth() << " ;Length: " << getLength() << endl;
}

boxType::boxType() {
    rectangleType();
}

boxType::boxType(double l, double w, double h) {
    rectangleType(l, w);
    height = h;
}
