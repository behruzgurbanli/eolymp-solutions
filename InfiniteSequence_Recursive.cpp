#include <iostream>
#include <cmath>
#include <map>

std::map<long, long> m;
long n, p, q;

long function(long n, long p, long q) {
    if (n == 0) return 1;
    if (m.count(n) > 0) return m[n];
    return m[n] = function(n / p, p, q) + function(n / q, p, q);
}

int main() {

    std::cin >> n >> p >> q;
    
    std::cout << function(n, p, q) << std::endl;
    
    return 0;
}