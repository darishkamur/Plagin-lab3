// Triangle data structure and validation functions

#ifndef TRIANGLE_H
#define TRIANGLE_H

struct Triangle {
    double a;
    double b;
    double c;
};

bool isValidTriangle(const Triangle& t);
double trianglePerimeter(const Triangle& t);

#endif
