// Combined C++ file (manipulation.cpp)

#include <iostream>
#include <limits>
#include <stdexcept> // For std::runtime_error

using namespace std;

class Operation {
public:
    Operation(double num1, double num2) : num1(num1), num2(num2) {}
    virtual double perform() = 0; // Pure virtual function

protected:
    double num1;
    double num2;
};

class Addition : public Operation {
public:
    Addition(double num1, double num2) : Operation(num1, num2) {}
    double perform() override {
        return num1 + num2;
    }
};

class Subtraction : public Operation {
public:
    Subtraction(double num1, double num2) : Operation(num1, num2) {}
    double perform() override {
        return num1 - num2;
    }
};

class Multiplication : public Operation {
public:
    Multiplication(double num1, double num2) : Operation(num1, num2) {}
    double perform() override {
        return num1 * num2;
    }
};

class Division : public Operation {
public:
    Division(double num1, double num2) : Operation(num1, num2) {}
    double perform() override {
        if (num2 == 0) {
            throw runtime_error("Division by zero is not allowed");
        }
        return num1 / num2;
    }
};

// Function to get valid double input from the user
double get_double_input(const string& prompt) {
    double value;
    while (true) {
        cout << prompt;
        if (cin >> value) {
            break;
        } else {
            cout << "Invalid input. Please enter a number." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
    return value;
}

// Function to get valid integer input from the user
int get_integer_input(const string& prompt) {
    int value;
    while (true) {
        cout << prompt;
        if (cin >> value) {
            break;
        } else {
            cout << "Invalid input. Please enter an integer." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
    return value;
}

int main() {
    int choice;
    double num1, num2, result;

    while (true) {
        cout << "\nChoose an operation:" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exit" << endl;

        choice = get_integer_input("Enter your choice (1-5): ");

        if (choice == 5) {
            break;
        }

        try {
            num1 = get_double_input("Enter first number: ");
            num2 = get_double_input("Enter second number: ");

            Operation* operation; 

            if (choice == 1) {
                operation = new Addition(num1, num2);
            } else if (choice == 2) {
                operation = new Subtraction(num1, num2);
            } else if (choice == 3) {
                operation = new Multiplication(num1, num2);
            } else if (choice == 4) {
                operation = new Division(num1, num2);
            } else {
                cout << "Invalid choice." << endl;
                continue;
            }

            result = operation->perform();
            cout << "Result: " << result << endl;

            delete operation; 

        } catch (const runtime_error& e) {
            cout << "Error: " << e.what() << endl;
        }
    }

    return 0;
}