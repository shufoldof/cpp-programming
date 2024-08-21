#include <iostream>
#include <string>

using namespace std;

class Location {
private:
    int degrees;
    float minutes;
    char direction;

public:
    void getpos() {
        cout << "Input degrees between 0 and 180: ";
        cin >> degrees;
        cout << "Input minutes between 0 and 60: ";
        cin >> minutes;
        cout << "Input direction (E/W/N/S) : ";
        cin >> direction;
    }

    void display() {
        cout << degrees << "\xF8" << minutes << "' " << direction;
    }
};

class Yacht {
private:
    static int yachtCount;
    int yachtNumber;
    Location latitude, longitude; // Two Location objects for latitude and longitude

public:
    Yacht() {
        yachtCount++;
        yachtNumber = yachtCount;
    }

    void setLocation() {
        cout << "Enter Latitude: \n";
        latitude.getpos();
        cout << "Enter Longitude: \n";
        longitude.getpos();
    }

    void displayInfo() {
        cout << "The ship serial number is :" << yachtNumber << endl;
        cout << "and it's position is ";
        latitude.display();
        cout << " Latitude ";
        longitude.display();
        cout << " Longtitute" << endl << endl;
    }
};

int Yacht::yachtCount = 0;

int main() {
    cout << "***************Ocean Race 2021-22***************" << endl;
    cout << "**************************************" << endl;

    Yacht yachts[3];

    for (int i = 0; i < 3; i++) {
        cout << "Enter the Location of the " << (i + 1 == 1 ? "first" : i + 1 == 2 ? "second" : "third") << " ship:\n";
        cout << "**************************************" << endl;
        yachts[i].setLocation();
    }

    cout << "***************Welcome to Ocean Race 2021-22***************\n\n";
    for (int i = 0; i < 3; i++) {
        yachts[i].displayInfo();
    }

    return 0;
}