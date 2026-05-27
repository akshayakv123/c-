#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 5;

    // Pre-decrement
    cout << "Pre-decrement: " << --a << endl;

    // Post-decrement
    cout << "Post-decrement: " << b-- << endl;

    // Final values
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;

    return 0;
}