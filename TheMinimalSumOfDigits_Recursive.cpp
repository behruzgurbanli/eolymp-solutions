#include <iostream>

int min;

int sumOfDigits(int number) {
    if (number < 10) return number;
    return sumOfDigits(number / 10) + (number % 10);
}

int minimalSumOfDigits(int m, int n) {
    
    min = std::min(m, n);

}

int main() {

    long m, n;

    std::cin >> m;

    std::cin >> n;

    std::cout << " " << std::endl;

}