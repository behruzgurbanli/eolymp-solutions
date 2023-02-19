#include <iostream>
#include <string>

std::string fibonacciStrings(int n) {
    if (n == 0) return "a";
    if (n == 1) return "b";
    return fibonacciStrings(n - 1) + fibonacciStrings(n - 2);
}

int main() {
    int n;

    std::cin >> n;

    std::cout << fibonacciStrings(n);

    return 0;
}