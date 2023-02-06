#include <iostream>

int teleportation(int a, int b, int x, int y) {
    int min = 99999;
    if (std::abs(b - a) < min) min = std::abs(b - a); // a -> b
    if (std::abs(a - x) + std::abs(b - y) < min) min = std::abs(a - x) + std::abs(b - y); // a -> x -> y -> b
    if (std::abs(a - y) + std::abs(b - x) < min) min = std::abs(a - x) + std::abs(b - y); // a -> y -> x -> b
    if (std::abs(a - y) + std::abs(b - x) < min) min = std::abs(a - y) + std::abs(b - x);
    return min;
}

int main() {
    int a, b, x, y;

    std::cin >> a;
    std::cin >> b;
    std::cin >> x;
    std::cin >> y;

    std::cout << teleportation(a, b, x, y) << std::endl;

    return 0;
}