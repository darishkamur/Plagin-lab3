// Triangle logic implementation
// Checks triangle validity and calculates perimeter

#include "triangle.h"

bool isValidTriangle(const Triangle& t) {
    return t.a + t.b > t.c &&
           t.a + t.c > t.b &&
           t.b + t.c > t.a;
}

double trianglePerimeter(const Triangle& t) {
    return t.a + t.b + t.c;
}
