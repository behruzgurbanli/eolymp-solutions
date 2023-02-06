#include <iostream>

int product_of_digits(int number) {
    int mul = 1;
    if (number == 0) return 1;
    return mul *= (number % 10) * product_of_digits(number / 10);
}

int persistentNumber(int number, int count) {
    if (number < 10) return count;
    return persistentNumber(product_of_digits(number), ++count);
}


int main() {
    int number, result[1000000000], i = 0;
    while (!std::cin.eof()) {
        std::cin >> number;
        result[i++] = persistentNumber(number, 0);
    }

    for (int j = 0; j < i; j++)
    {
        std::cout << result[j] << std::endl;
    }
    

    return 0;
}