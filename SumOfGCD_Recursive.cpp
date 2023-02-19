#include <iostream>

int GCD(int a, int b) {
    if (b == 0) return a;
    if (a == 0) return b;
    if (a >= b) return GCD(a % b, b);
    return GCD(a, b % a);
}

int sumOfGCD(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            sum += GCD(arr[i], arr[j]);
        }
    }
    return sum;
}

int main() {

    int n, m, arr[100], result[100];
    
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> m;
        for (int j = 0; j < m; j++) {
            std::cin >> arr[j];
        }
        result[i] = sumOfGCD(arr, m);
    }

    for (int i = 0; i < n; i++) {
        std::cout << result[i] << std::endl;
    }
    

    return 0;
}