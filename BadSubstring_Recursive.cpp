#include <iostream>
#include <string>

long bs[45];

long badSubstring(long n) {
    if (n == 0) return 1;
    if (n == 1) return 3;
    if (bs[n] != -1) return bs[n];
    return bs[n] = 3 * badSubstring(n - 1) - badSubstring(n - 2);
}

int main() {
    long n;

    std::cin >> n;

    memset(bs, -1, sizeof(bs));

    std::cout << badSubstring(n) << std::endl;

    return 0;
}
