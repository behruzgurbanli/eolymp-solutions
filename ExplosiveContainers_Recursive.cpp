#include <iostream>

int arr[45];

int function(int n) {
    if (n == 0) return 1;
    if (n == 1) return 2;
    if (arr[n] != -1) return arr[n];
    return arr[n] = function(n - 1) + function(n - 2);
}

int main() {
    int n;
  
    std::cin >> n;

    memset(arr, -1, sizeof(arr));

    std::cout << function(n) << std::endl;

    return 0;
}
