#include <iostream>

long exponentiation(long x, int n) {
    if (n == 0) return 1;
    if (n % 2 == 0) return exponentiation(x * x, n / 2);
    return x * exponentiation(x, n - 1);
}

int main() {
    long x, n;

    std::cin >> x;

    std::cin >> n;

    std::cout << exponentiation(x, n) << std::endl;

    return 0;
}