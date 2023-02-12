#include <iostream>
#include <cmath>
#include <string>

long exponentiation(long x, int n, int m) {
    if (n == 0) return 1;
    if (n % 2 == 0) return exponentiation((x * x) % m, n / 2, m);
    return (x * exponentiation(x, n - 1, m)) % m;
}

long sumOfPowers(long n, long m) {
    long sum = exponentiation(1, n, m) + exponentiation(2, n, m);
    for (int i = 3; i <= 100; i++) {
        sum += (i - 1) * exponentiation(i, n, m);
    }
    return sum % m;
}

int main() {

    long n, m;

    std::cin >> n >> m;

    std::cout << sumOfPowers(n, m) << std::endl;

    return 0;
}