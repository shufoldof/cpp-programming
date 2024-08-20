//Answer to the Q1
#include <iostream>

int main() {
    int n;

    std::cout << "Enter a value: ";
    std::cin >> n;

    // Print colon and two dots
    std::cout << ":.."<< std::endl;

    // Print the pattern
    for (int i = 1; i <= n; i++) {
        // Print spaces for alignment (optional)
        //for (int j = 1; j <= n - i; j++) {
        //    std::cout << " ";
        //}

        // Print asterisks
        for (int j = 1; j <= 2 * i - 1; j++) {
            std::cout << "*";
        }

        std::cout << std::endl;
    }

    return 0;
}