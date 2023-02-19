#include <iostream>
#define MAX 100001

int i, a, b, n;

int primes[MAX];

void gen_primes(void) {
    for (int i = 0; i < MAX; i++) primes[i] = 1;
        primes[0] = primes[1] = 0;
        for (int i = 2; i * i < MAX; i++)
            if (primes[i]) 
            for (int j = i * i; j < MAX; j += i) primes[j] = 0;
}

int main() {
    gen_primes();

    scanf("%d %d", &a, &b);

    for(i = a; i <= b; i++)

    if (primes[i] == 1) printf("%d ", i);
    
    return 0;
}