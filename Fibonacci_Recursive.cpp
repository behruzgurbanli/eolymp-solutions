#include <iostream>
#include <string>

int fib[46];

int fibonacci(int n) {
    if (n == 0) return 1;
    if (n == 1) return 1;
    if (fib[n] != -1) return fib[n];
    return fib[n] = fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    std::cin >> n;

    memset(fib, -1, sizeof(fib));

    std::cout << fibonacci(n) << std::endl;

    return 0;
}