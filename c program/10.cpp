#include <iostream>
using namespace std;

int main() {
    int num = 10;      // Declare an integer variable 'num' and initialize it with 10
    
    int *ptr = &num;   // Declare a pointer 'ptr' and store the address of 'num'
    
    int **double_ptr = &ptr;  // Declare a double pointer 'double_ptr' and store the address of 'ptr'

    // Display the values and addresses
    cout<<"khushi\n";
    cout<<"2410997187\n";
    cout << "Value of num: " << num << endl;  // Prints the value of 'num'
    cout << "Address of num: " << &num << endl;  // Prints the address of 'num'

    cout << "Value stored in ptr (address of num): " << ptr << endl;  // Prints the address stored in 'ptr'
    cout << "Value pointed to by ptr: " << *ptr << endl;  // Dereference 'ptr' to get the value of 'num'

    cout << "Value stored in double_ptr (address of ptr): " << double_ptr << endl;  // Prints the address stored in 'double_ptr'
    cout << "Value pointed to by double_ptr (address of ptr): " << *double_ptr << endl;  // Dereference 'double_ptr' to get the address stored in 'ptr'
    cout << "Value pointed to by the pointer pointed by double_ptr: " << **double_ptr << endl;  // Dereference 'double_ptr' twice to get the value of 'num'

    return 0;
}



