#include <iostream>

long function(long n) {
    if (n == 0) return 0;
    return ((long)((n + 1) / 2) * (long)((n + 1) / 2) + function((long)(n / 2)));
}

int main() {

    long n;
    
    while(std::cin >> n) {
        std::cout << function(n) << std::endl;
    }

    return 0;
}