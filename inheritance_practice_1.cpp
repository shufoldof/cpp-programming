#include <iostream>
using namespace std;

class base {
protected:
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
    derived(int a, int b) { // Constructor to initialize i and j directly
        i = a;
        j = b;
    }

    void setk() { 
        k = i * j; 
    }

    void showk() { 
        cout << k << endl; 
    }

    void displayValues() {
        show(); 
    }
};

int main() {
    derived ob(1, 2); // Initialize i and j using the constructor

    ob.displayValues(); // Output: 1 2
    ob.setk();
    ob.showk();        // Output: 3

    return 0;
}