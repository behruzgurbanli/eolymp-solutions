#include <iostream>

int GreatestCommonDivisor(int a, int b) {
    if (b == 0) return a;
    if (a == 0) return b;
    if (a >= b) return GreatestCommonDivisor(a % b, b);
    return GreatestCommonDivisor(a, b % a);
}

int main() {

    int a, b, c, d;

    std::cin >> a >> b >> c >> d;

    int GCD = GreatestCommonDivisor(std::abs(a * d + b * c), std::abs(b * d));

    long numerator = (a * d + b * c) / GCD;
    long denominator = (b * d) / GCD;

    if ((1.0 * numerator / denominator) == int(numerator / denominator)) 
        std::cout << (numerator / denominator) << std::endl;
    else std::cout << numerator << ' ' << denominator << std::endl;

    return 0;
}