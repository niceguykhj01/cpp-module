#include "Point.hpp"

Fixed area (Point const a, Point const b, Point const c) {
    return abs((a.x*(b.y-c.y) + b.x*(c.y-a.y)+ c.x*(a.y-b.y))/2);
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
    
    Fixed A = area(a, b, c);
    Fixed A1 = area(point, b, c);
    Fixed A2 = area(a, point, c);
    Fixed A3 = area(a, b, point);

    return(A == (A1 + A2 + A3))
}