#include <iostream>

int function(int n, int m, int a, int b) {

    int time = a;
    int cartridge = m;

    while (n >= 0)
    {
        if (cartridge == 0) {
            if (n >= m) {
                time += a;
                cartridge = m;
                
            }
            else {
                time += (n * b);
                cartridge = n;
            }
        } 
        if (cartridge != 0) {
            time += 1;
            cartridge--;
        }
    std::cout << n << " is n and time is: " << time << " and cartridge is left: " << cartridge << std::endl;
        n--;
    }
    return time;
}

int main() {
    
    int n, m, a, b;

    std::cin >> n >> m >> a >> b;

    std::cout << function(n, m, a, b) << std::endl;

    return 0;
}