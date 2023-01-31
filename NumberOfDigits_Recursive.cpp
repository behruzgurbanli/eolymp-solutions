#include <iostream>

long numberOfDigits(long number) {
    if (number < 10) return 1;
    return numberOfDigits(number / 10) + 1;
}

int main() {

    long number;

    std::cin >> number;

    std::cout << numberOfDigits(abs(number)) << std::endl;

}