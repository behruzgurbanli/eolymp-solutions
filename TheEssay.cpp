#include <iostream>

long function(long n) {
    if (n % 2 == 0) return n * n / 2;
    return (n * n - 1) / 2;
}

int main() {

    long t, n;

    std::cin >> t;

    while (t-- > 0)
    {
        std::cin >> n;
        std::cout << function(n) << std::endl;
    }
    

    return 0;
}