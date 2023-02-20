#include <iostream>

int main() {
    
    int n;
    unsigned long res = 1;

    std::cin >> n;

    for (int i = 0; i < n; i++) {
        res *= 2;
    }
    
    std::cout << res - 1 << std::endl;

    return 0;
}