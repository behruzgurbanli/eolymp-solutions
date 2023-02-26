#include <iostream>
#define MAX 1000001

int dp[MAX], result;

void preprocessor() {
    dp[1] = 0;
    for (int i = 2; i < MAX; i++) {
        dp[i] = dp[i - 1] + 1;
        if (i % 2 == 0) dp[i] = std::min(dp[i], dp[i / 2] + 1);
        if (i % 3 == 0) dp[i] = std::min(dp[i], dp[i / 3] + 1);
    }
    
}

int main() {

    preprocessor();

    int n;

    while(std::cin >> n) {
        std::cout << dp[n] << std::endl;
    }

    return 0;
}