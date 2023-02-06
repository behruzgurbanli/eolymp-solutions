#include <iostream>
#include <string>

int function(int n) {
    if (n == 1) return n;
    if (n % 2 == 0) return function(n / 2);
    return function(n * 3 + 1);
}

int main() {
    int t, n, setnumber, res[t][2];
    
    std::cin >> t;

    for (int i = 0; i < t; i++)
    {
    std::cin >> setnumber;

    std::cin >> n;
    }

    

    std::cout << std::endl;

    return 0;
}