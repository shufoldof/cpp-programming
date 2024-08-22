#include <iostream>

int main() {
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    std::cout << "Multiplication table: " << number << std::endl;

    for (int i = 1; i <= 10; ++i) {
        std::cout << i << " x " << number << " = " << i * number << std::endl;
    }

    return 0;
}