#include "Fixed.hpp"

class Point {
    private:
        Fixed const x;
        Fixed const y;
    public:
        Point();
        ~Point();
        Point(const Point &other);
        Point(const float x, const float y);

        void operator=(const Point &other);
};