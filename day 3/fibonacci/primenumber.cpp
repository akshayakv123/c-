#include <iostream>
using namespace std;

int main() {
    int n, i = 2;
    bool prime = true;

    cout << "Enter a number: ";
    cin >> n;

    if(n <= 1) {
        prime = false;
    }

    while(i < n) {
        if(n % i == 0) {
            prime = false;
            break;
        }
        i++;
    }

    if(prime)
        cout << n << " is a Prime Number";
    else
        cout << n << " is not a Prime Number";

    return 0;
}