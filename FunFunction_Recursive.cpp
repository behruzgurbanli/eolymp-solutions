#include <iostream>

long dp[51][51];

long function(long x, long y) {
    if (x <= 0 || y <= 0) return 0;
    if (dp[x][y] != -1) return dp[x][y];
    if (x <= y) return dp[x][y] = function(x - 1, y - 2) + function(x - 2, y - 1) + 2;
    return dp[x][y] = function(x - 2, y - 2) + 1;
}

int main() {
    long x, y;

    std::cin >> x >> y;

    memset(dp, -1, sizeof(dp));

    std::cout << function(x, y) << std::endl;

    return 0;
}