#include <iostream>

int function(int q) {
    int t = q % 10;
    if (q == 0) return 0;
    return ((t * (t + 1) / 2) + (45 * ((int)(q / 10))) + function((int)(q / 10)));
}

int main() {

    int p, q;

    while (std::cin >> p >> q) {
        if (p < 0 && q < 0) break;
        std::cout << function(q) - q * (p - 1)<< std::endl;
    }
    

    return 0;
}