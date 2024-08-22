#include <iostream>

int main() {
    const int arraySize = 6; // Adjust if you need a different array size
    int numbers[arraySize];

    // Get array input from the user
    for (int i = 0; i < arraySize; ++i) {
        std::cout << "Enter a[" << i << "] value: ";
        std::cin >> numbers[i];
    }

    // Display the entered list
    std::cout << "Given list: ";
    for (int i = 0; i < arraySize; ++i) {
        std::cout << numbers[i];
        if (i < arraySize - 1) {
            std::cout << ", ";
        }
    }
    std::cout << std::endl;

    // Get the search value
    int searchValue;
    std::cout << "Enter your search value: ";
    std::cin >> searchValue;

    // Search for the value
    int searchResult = -1; // Initialize to -1 (not found)
    for (int i = 0; i < arraySize; ++i) {
        if (numbers[i] == searchValue) {
            searchResult = i;
            break; // Stop searching once found
        }
    }

    // Display the search result
    if (searchResult != -1) {
        std::cout << "Search Result: Your value is located in " << searchResult << " place." << std::endl;
    } else {
        std::cout << "Search Result: Value not found in the list." << std::endl;
    }

    return 0;
}