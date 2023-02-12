#include <iostream>
#include <cmath>
#include <string>

bool isPrime(long n) {
    for (int i = 2; i <= std::sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {

    long n;

    std::cin >> n;

    std::string result = isPrime(n) ? "Yes" : "No";

    std::cout << result << std::endl;

    return 0;
}