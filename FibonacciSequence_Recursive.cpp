#include <iostream>

int sequence(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return sequence(n - 1) + sequence(n - 2);
}

int main() {
    int n;

    std::cin >> n;

    std::cout << sequence(n) << std::endl;

    return 0;
}