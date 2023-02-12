// Consider and correct by comparing full or partial reloading

// #include <stdio.h>

// int main ()
// {
//     long long n, m, a, b;
//     scanf("%lld %lld %lld %lld", &n, &m, &a, &b);
    
//     if (a < m * b) a = a;
//     else a = m * b;
    
//     long long time, reload_time, add_time;
    
//     reload_time = (n / m) * a;
//     if (a < ((n % m) * b)) add_time = a;
//     else add_time = ((n % m) * b);
    
//     time = reload_time + add_time + n;
//     printf ("%lld\n", time);
    
// }

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