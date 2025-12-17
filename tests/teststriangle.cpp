#include <cassert>
#include <iostream>
#include "../src/triangle.h"

int main() {
    Triangle t1{3, 4, 5};
    Triangle t2{1, 2, 10};

    assert(isValidTriangle(t1));
    assert(!isValidTriangle(t2));

    assert(trianglePerimeter(t1) == 12);

    std::cout << "All tests passed\n";
    return 0;
}
