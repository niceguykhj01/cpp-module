#include "Point.hpp"

Point::Point() {
    x = 0;
    y = 0;
}

Point::Point(const Point &other) {
    *this = other;
}

Point::Point(const float x, const float y) {
    x = x;
    y = y;
}

void Point::operator=(const Point &other) {
    x = other.x;
    y = other.y;
}

Point::~Point() {
    
}