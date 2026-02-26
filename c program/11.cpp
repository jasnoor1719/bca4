#include <iostream>
using namespace std;

// Function that takes two integers and returns their sum
int add(int a, int b) {
    return a + b;
}

int main() {
    // Declare a function pointer and assign the address of the 'add' function to it
    int (*funcPtr)(int, int) = add;
cout<<"2410997187\n";
cout<<"khushi\n";
    int num1 = 5;
    int num2 = 7;

    // Using the function pointer to call the 'add' function
    int result = funcPtr(num1, num2);

    // Display the result
    cout << "The sum of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}

