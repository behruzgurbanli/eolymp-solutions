#include <iostream>

long exponentiation(long x, int n, int m) {
    if (n == 0) return 1;
    if (n % 2 == 0) return exponentiation((x * x) % m, n / 2, m);
    return (x * exponentiation(x, n - 1, m)) % m;
}

int main() {
    long x;
    int n, m;

    std::cin >> x;

    std::cin >> n;

    std::cin >> m;

    std::cout << exponentiation(x, n, m) << std::endl;

    return 0;
}