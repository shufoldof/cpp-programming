#include <iostream>
#include <string>

using namespace std;

class Animal {
private:
    string animalType; // wild or domestic
    string animalCategory; // e.g., mammal, bird, reptile

public:
    void getInput() {
        cout << "Enter animal type (wild/domestic): ";
        cin >> animalType;
        cout << "Enter animal category (e.g., mammal, bird, reptile): ";
        cin >> animalCategory;
    }

    void printInfo() {
        cout << "The animal type is: " << animalType << endl;
        cout << "The animal category is: " << animalCategory << endl;
    }
};

int main() {
    Animal myAnimal; 

    myAnimal.getInput(); // Get user input
    myAnimal.printInfo(); // Display animal information

    return 0;
}