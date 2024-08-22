#include <iostream>
#include <stdexcept> // Include for exception handling

using namespace std;

class DivisionCalculator {
public:
    double num1, num2;

    void getNumbers() {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        // Check for invalid input (non-numeric)
        if (cin.fail()) {
            cin.clear(); // Clear error state
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            throw runtime_error("Invalid input. Please enter numbers only.");
        }

        // Check for division by zero
        if (num2 == 0) {
            throw runtime_error("Division by zero!");
        }
    }

    double calculateDivision() {
        return num1 / num2;
    }
};

int main() {
    DivisionCalculator calc;

    try {
        calc.getNumbers();
        double result = calc.calculateDivision();
        cout << "Result of division: " << result << endl;
    } catch (const runtime_error& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}