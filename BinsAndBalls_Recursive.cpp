#include <iostream>
#define MOD 1000000007


long exponentiation(long x, int n, int m) {
    if (n == 0) return 1;
    if (n % 2 == 0) return exponentiation((x * x) % m, n / 2, m);
    return (x * exponentiation(x, n - 1, m)) % m;
}

int main() {
    int n;

    std::cin >> n;

    std::cout << (exponentiation(n - 1, n - 1, MOD) * n) % MOD << std::endl;

    return 0;
}