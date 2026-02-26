#include <iostream>
using namespace std;

// Call by value
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "After swap (call by value): a = " << a << ", b = " << b << endl;
}

// Call by reference
void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "After swap (call by reference): a = " << a << ", b = " << b << endl;
}

// Call by address
void swapByAddress(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "After swap (call by address): a = " << *a << ", b = " << *b << endl;
}

int main() {
    int a, b;
    cout<<"khushi\n";
    cout<<"2410997187\n";

    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Call by value
    swapByValue(a, b);

    // Call by reference
    swapByReference(a, b);

    // Call by address
    swapByAddress(&a, &b);

    return 0;
}

