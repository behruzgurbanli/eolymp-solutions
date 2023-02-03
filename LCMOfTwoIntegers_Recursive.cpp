#include <iostream>

long int GCD(long int a, long int b) {
    if (b == 0) return a;
    if (a == 0) return b;
    if (a >= b) return GCD(a % b, b);
    return GCD(a, b % a);
}

int main() {

    long int a, b;

    std::cin >> a;

    std::cin >> b;

    std::cout << a * b / GCD(a,b) << std::endl;

    return 0;
}