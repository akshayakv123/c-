#include <iostream>
using namespace std;

// Function with parameters and return value
int add(int a, int b) {
    return a + b;
}

int main() {
    int result;

    result = add(5, 10);

    cout << "Sum = " << result;

    return 0;
}