#include <iostream>

long int product_of_digits(long int number) {
    long int mul = 1;
    if (number == 0) return 1;
    return mul *= (number % 10) * product_of_digits(number / 10);
}

long int persistentNumber(long int number, int count) {
    if (number < 10) return count;
    return persistentNumber(product_of_digits(number), ++count);
}


int main() {
    long int number, result[3], i;
    for (i = 0; i < 3; i++) {
        std::cin >> number;
        result[i] = persistentNumber(number, 0);
    }

    for (int j = 0; j < i; j++)
    {
        std::cout << result[j] << std::endl;
    }

    return 0;
}