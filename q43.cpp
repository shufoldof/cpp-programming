#include <iostream>

using namespace std;

class Vehicle {
protected:
    string brand;
    int year;

public:
    Vehicle(string b, int y) : brand(b), year(y) {}

    string getInfo() const {
        return "Brand: " + brand + ", Year: " + to_string(year);
    }
};

class Car : public Vehicle {
private:
    int passengers;

public:
    Car(string b, int y, int p) : Vehicle(b, y), passengers(p) {}

    string getInfo() const {
        return Vehicle::getInfo() + ", Passengers: " + to_string(passengers);
    }
};

int main() {
    Car myCar("Toyota", 2022, 5);
    cout << myCar.getInfo() << endl;
    return 0;
}