#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to get integer input from the user with validation
int get_integer_input(const string& prompt) {
    int value;
    while (true) {
        cout << prompt;
        if (cin >> value) {
            break; // Exit the loop if input is valid
        } else {
            cout << "Invalid input. Please enter an integer." << endl;
            cin.clear(); // Clear error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
        }
    }
    return value;
}

int main() {
    // Get list size from the user
    int list_size = get_integer_input("Enter your list size: ");

    // Get integer values from the user
    vector<int> data;
    for (int i = 0; i < list_size; ++i) {
        int value = get_integer_input("Enter list[" + to_string(i) + "] value: ");
        data.push_back(value);
    }

    // Sort the list in descending order
    sort(data.begin(), data.end(), greater<int>());

    // Find the middle value
    int middle_index = data.size() / 2;
    int middle_value = data[middle_index];

    // Print the results
    cout << "Given list: ";
    for (int i = 0; i < data.size(); ++i) {
        cout << data[i];
        if (i < data.size() - 1) {
            cout << ", ";
        }
    }
    cout << endl;

    cout << "Sorted list: ";
    for (int i = 0; i < data.size(); ++i) {
        cout << data[i];
        if (i < data.size() - 1) {
            cout << ", ";
        }
    }
    cout << endl;

    cout << "Middle value: " << middle_value << endl;

    return 0;
}