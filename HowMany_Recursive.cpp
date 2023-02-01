#include <iostream>

long factorial(int number) {
    if (number == 0) return 1;
    return factorial(number - 1) * number;
}

int main() {
    int n, k;

    std::cin >> n;

    std::cin >> k;

    std::cout << factorial(n) / (factorial(k) * factorial(n - k)) << std::endl;

    return 0;
}