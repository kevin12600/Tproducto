#include <iostream>
#include <cmath>

void printTriangle(int base) {
    int height = sqrt(pow(base, 2) - pow(base / 2, 2));
    int rows = (height + 1) / 2; // número de filas en el triángulo
    int mid = base / 2; // punto medio de la base

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < (2 * i - 1); j++) {
            std::cout << '*';
        }

        int spaces = abs(mid - i);
        for (int j = 0; j < spaces; j++) {
            std::cout << ' ';
        }

        for (int j = 0; j < (2 * (rows - i) - 1); j++) {
            std::cout << '*';
        }

        std::cout << std::endl;
    }
}

int main() {
    int base;
    std::cout << "Ingrese la base del triángulo: ";
    std::cin >> base;

    printTriangle(base);

    return 0;
}
