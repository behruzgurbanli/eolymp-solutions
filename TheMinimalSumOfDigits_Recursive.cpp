#include <iostream>

int min = 99999999, count = 0;

int sumOfDigits(int number) {
    if (number < 10) return number;
    return sumOfDigits(number / 10) + (number % 10);
}

int minimalSumOfDigits(int m, int n) {
    for (int i = m; i <= n; i++) {
        int sum = sumOfDigits(i);
        if (sum == min) count++;
        if (sum < min)
        {
            min = sum;
            count = 1;
        }
        
    }
    return count;
}

int main() {

    long m, n;

    std::cin >> m;

    std::cin >> n;

    std::cout << minimalSumOfDigits(m, n) << std::endl;

    return 0;
}