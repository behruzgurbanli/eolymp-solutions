#include <iostream>

long GreatestCommonDivisor(long a, long b) {
    if (b == 0) return a;
    if (a == 0) return b;
    if (a >= b) return GreatestCommonDivisor(a % b, b);
    return GreatestCommonDivisor(a, b % a);
}

int main() {

    long x1, y1, x2, y2;

    std::cin >> x1 >> y1 >> x2 >> y2;

    std::cout << 1 + GreatestCommonDivisor(std::abs(x2 - x1), std::abs(y2 - y1)) << std::endl;

    return 0;
}