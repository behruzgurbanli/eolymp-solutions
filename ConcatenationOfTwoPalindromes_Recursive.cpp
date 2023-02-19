#include <iostream>
#define MOD 1000000007

long exponentiation(long x, int n, long m) {
    if (n == 0) return 1;
    if (n % 2 == 0) return exponentiation((x * x) % m, n / 2, m);
    return (x * exponentiation(x, n - 1, m)) % m;
}

int main() {
    
    long n, res = 0;
    int k;

    std::cin >> n >> k;

    for (int i = 1; i <= n-1; i++) {
        res += (exponentiation(k, (i + 1) / 2, MOD) * (exponentiation(k, (n - i + 1) / 2, MOD))) % MOD;
    }
    

    std::cout << res % MOD << std::endl;

    return 0;
}