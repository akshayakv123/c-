//from the group of number get first and last number
#include <iostream>

void inputArray(int arr[], int n) {
    std::cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
}

int getFirst(int arr[]) {
    return arr[0]; // first element is at index 0
}

int getLast(int arr[], int n) {
    return arr[n - 1]; // last element is at index n-1
}

void displayFirstLast(int arr[], int n) {
    std::cout << "First number: " << getFirst(arr) << std::endl;
    std::cout << "Last number: " << getLast(arr, n) << std::endl;
}

int main() {
    int n;

    std::cout << "How many numbers? ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Array size must be positive." << std::endl;
        return 1;
    }

    int arr[100]; // assuming max 100 numbers

    inputArray(arr, n);
    displayFirstLast(arr, n);

    return 0;
}