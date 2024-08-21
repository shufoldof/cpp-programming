#include <iostream>
using namespace std;

class base {
protected: // Changed to protected for derived class access
    int i, j;

public:
    void set(int a, int b) {
        i = a;
        j = b;
    }
    void show() {
        cout << i << " " << j << endl;
    }
};

class derived : private base {
    int k;

public:
    derived(int x) { k = x; }
    void showk() {
        cout << k << endl;
    }

    // Add public access functions in derived to call base class functions
    void setValues(int a, int b) {
        set(a, b);
    }

    void displayValues() {
        show();
    }
};

int main() {
    derived ob(3);

    ob.setValues(1, 2); // Use the public access function in derived
    ob.displayValues();  // Use the public access function in derived
    ob.showk();

    return 0;
}