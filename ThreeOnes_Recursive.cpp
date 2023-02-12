#include <iostream>
#include <string>

int arr[100001];

int function(int n) {
    if (n == 1) return 2;
    if (n == 2) return 4;
    if (n == 3) return 7;
    if (arr[n] != -1) return arr[n];
    return arr[n] = (function(n - 1) + function(n - 2) + function(n - 3)) % 12345;
}

int main() {
    int n;

    std::cin >> n;

    memset(arr, -1, sizeof(arr));

    std::cout << function(n) << std::endl;

    return 0;
}