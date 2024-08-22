#include <iostream>

int main() {
    // Pattern a)
    std::cout << "Pattern a)" << std::endl;
    for (int i = 1; i <= 4; ++i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }

    std::cout << std::endl; // Add spacing between patterns

    // Pattern c) 
    std::cout << "Pattern c)" << std::endl;
    for (int i = 1; i <= 4; ++i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}