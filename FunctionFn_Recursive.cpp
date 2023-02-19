#include <iostream>
// #define MOD 123456789

long arr[1000007];

long f(long n) {
    if (n == 1) return 1;
    if (arr[n] != -1) return arr[n];
    return arr[n] = (2 * (n-1) / 2) % 123456789;
}

int main() {
    long n;

    std::cin >> n;
    
    memset(arr, -1, sizeof(arr));
    
    std::cout << f(n) << std::endl;

    return 0;
}