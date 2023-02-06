#include <iostream>

long SumOfDigits(long number) {
    if (number < 10) return number;
    return SumOfDigits(number / 10) + (number % 10);
}

int main() {

    long number;

    std::cin >> number;

    std::cout << SumOfDigits(abs(number)) << std::endl;

    return 0;
}