#include <iostream>
using namespace std;

int main() {
    int n;

    // Input size of array
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    // Input array elements
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Assume first element is greatest and smallest
    int greatest = arr[0];
    int smallest = arr[0];

    // Find greatest and smallest
    for (int i = 1; i < n; i++) {
        if (arr[i] > greatest) {
            greatest = arr[i];
        }

        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    // Display results
    cout << "Greatest number = " << greatest << endl;
    cout << "Smallest number = " << smallest << endl;

    return 0;
}