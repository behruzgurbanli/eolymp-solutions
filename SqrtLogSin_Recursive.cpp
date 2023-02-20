#include <iostream>
#include <cmath>

int dp[1000001];
int n;

long function(long n) {
    if(n == 0) return 1;

    if(dp[n] != -1) return dp[n];

    int a = function((int)(n - sqrt(n)));
    int b = function((int)(log(n)));
    int c = function((int)(n * sin(n) * sin(n)));
    
    return dp[n] = (a + b + c) % 1000000;
}

int main() {

    memset(dp, -1, sizeof(dp));

    while (std::cin >> n && n != -1)
    {
        std::cout << function(n) << std::endl;
    }
    
    return 0;
}