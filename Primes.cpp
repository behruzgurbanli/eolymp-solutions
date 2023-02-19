#include <stdio.h>

#include <math.h>

#define MAX 10000001



int i, a, b, n;

bool primes[MAX];

int cnt[MAX];



void gen_primes(void)

{

  for (int i = 0; i < MAX; i++) primes[i] = 1;

  primes[0] = primes[1] = 0;

  for (int i = 2; i * i < MAX; i++)

    if (primes[i])

      for (int j = i * i; j < MAX; j += i) primes[j] = 0;

}



int main()

{

  gen_primes(); // Preprocessing

  cnt[0] = cnt[1] = 0;

  for (i = 2; i < MAX; i++)

    if (primes[i] == 1) cnt[i] = cnt[i - 1] + 1;

    else cnt[i] = cnt[i - 1];



  while (scanf("%d %d", &a, &b) == 2) // 10^3 test cases

  {

    //int cnt = 0;

    //for (i = a; i <= b; i++) // O(b - a) = O(n) = 10^7 iterations

    //  if (primes[i] == 1) cnt++;

    //printf("%d\n\n", cnt);

    printf("%d\n\n", cnt[b] - cnt[a-1]);

  }

  return 0;

}