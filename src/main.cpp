#include <iostream>
#include <string>
#include "triangle.h"

int main(int argc, char* argv[]) {
    Triangle t{3, 4, 5};

    if (argc > 1) {
        std::string arg = argv[1];

        if (arg == "--check") {
            if (isValidTriangle(t)) {
                std::cout << "Треугольник корректен\n";
            } else {
                std::cout << "Треугольник некорректен\n";
            }
            return 0;
        }

        if (arg == "--perimeter") {
            if (isValidTriangle(t)) {
                std::cout << "Периметр: " << trianglePerimeter(t) << "\n";
            } else {
                std::cout << "Невозможно вычислить периметр\n";
            }
            return 0;
        }
    }

    std::cout << "Использование:\n";
    std::cout << "./triangle_project --check\n";
    std::cout << "./triangle_project --perimeter\n";

    return 0;
}
