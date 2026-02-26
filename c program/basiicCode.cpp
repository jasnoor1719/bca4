#include <iostream>  // For input and output
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // If-else example
    if (number > 0) {
        cout << "The number is positive.\n";
    } else if (number < 0) {
        cout << "The number is negative.\n";
    } else {
        cout << "The number is zero.\n";
    }

    // Loop example
    cout << "Counting from 1 to 5: ";
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }

    return 0; // End of program
}
