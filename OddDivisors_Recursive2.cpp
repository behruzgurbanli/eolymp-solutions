#include <iostream>
#include <map>
#define MAX 5000000

std::map<long, long> m;

long gcod(long n) {
    long temp;
    if (n % 2 == 0) return gcod(n / 2);
    if (m.count(n) > 0) return m[n];
    return m[n] = n;
    
    if ((n < MAX) && m.count(n) > 0) return m[n];

    temp = n;

    if(n < MAX) m[n] = temp;
    return temp;
}

int main() {

    long n;
    
    int x = 3;
    while(x-- > 0) {
        std::cin >> n;
        long sum = 0;
        while (n > 0){
            sum += gcod(n);
            n--;
        }
        std::cout << sum << std::endl;
    }
    
    return 0;
}