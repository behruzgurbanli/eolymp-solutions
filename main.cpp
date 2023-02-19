#include <iostream>

using namespace std;

void prime_factorize(int n) {
    long cnt;
    for (int i = 2; i <= n / i; i++) {
        cnt = 0;
        while (n % i == 0) {
            cnt++;
            n /= i;
        }
        if (cnt > 0) {
            cout << i;
            if (cnt > 1) cout << "^" << cnt;
            if (n > 1) cout << "*";
        }
    }
    if (n > 1) cout << n;
    cout << endl;
}

int main() {
    long n;
    cin >> n;
    prime_factorize(n);
    return 0;
}
