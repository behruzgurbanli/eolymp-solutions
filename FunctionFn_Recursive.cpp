#include <iostream>
#define MOD 123456789

long exponentiation(long x, long n, int m) {
    long res = 1;
    while (n > 0) {
        if (n % 2 == 1) {
            res = (res * x) % m;
        }
        x = (x * x) % m;
        n /= 2;
    }
    return res;
}

int main() {
    long n;

    std::cin >> n;

    std::cout << exponentiation(2, n - 2, MOD) << std::endl;

    return 0;
}