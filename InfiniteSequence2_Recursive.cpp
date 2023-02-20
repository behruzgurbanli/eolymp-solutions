#include <iostream>
#include <cmath>
#define MAX 5000000

long m[MAX], n, p, q, x, y;

long function(long n, long p, long q, long x, long y) {
    long temp;
    
    if (n <= 0) return 1;
    if ((n < MAX) && m[n] > 0) return m[n];

    temp = function(n / p - x, p, q, x, y) + function(n / q - y, p, q, x, y);

    if(n < MAX) m[n] = temp;
    return temp;
}

int main() {

    std::cin >> n >> p >> q >> x >> y;
    
    memset(m, -1, sizeof(m));

    std::cout << function(n, p, q, x, y) << std::endl;
    
    return 0;
}