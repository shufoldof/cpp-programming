#include <iostream>

int main() {
    int a = 5;
    int b = 10;

    int* ptrA = &a;
    int* ptrB = &b;

    std::cout << "Before swapping:" << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;

    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;

    std::cout << "After swapping:" << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;

    return 0;
}