#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(static_cast<unsigned int>(std::time(0))); // Seed the random number generator

    std::vector<int> randomNumbers;

    // Generate and store 6 random numbers between 10 and 20
    for (int i = 0; i < 6; ++i) {
        int randomNumber = 10 + std::rand() % 11; // Generate random number in [10, 20]
        randomNumbers.push_back(randomNumber);
    }

    int luckyNumber;
    int attempts = 2;

    std::cout << "Your lucky numbers have been generated!" << std::endl;

    while (attempts > 0) {
        std::cout << "Enter your lucky number: ";
        std::cin >> luckyNumber;

        if (std::find(randomNumbers.begin(), randomNumbers.end(), luckyNumber) != randomNumbers.end()) {
            std::cout << "Congratulations! You found your lucky number!" << std::endl;
            break;
        } else {
            --attempts;
            if (attempts > 0) {
                std::cout << "Try again. You have " << attempts << " attempt(s) left." << std::endl;
            } else {
                std::cout << "Sorry, you didn't find your lucky number." << std::endl;
            }
        }
    }

    return 0;
}