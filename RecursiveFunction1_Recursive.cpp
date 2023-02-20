#include <iostream>
#include <cmath>
#include <map>

std::map<long, long> m;
long n;

long function(long n) {
    if (n == 0) return 1;
    if (m.count(n) > 0) return m[n];
    return m[n] = function(n / 2) + function(n / 3);
}

int main() {

    std::cin >> n;
    
    std::cout << function(n) << std::endl;
    
    return 0;
}