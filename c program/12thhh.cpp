#include <iostream>
#include <vector>
using namespace std;

class Array_operations {
private:
    vector<int> arr;

public:
    // Constructor to initialize the array
    Array_operations(const vector<int>& input_array) {
        arr = input_array;
    }

    // Function to display the array
    void display() {
        if (arr.empty()) {
            cout << "Array is empty!" << endl;
            return;
        }
        cout << "Array Elements: ";
        for (int num : arr) {
            cout << num << " ";
        }
        cout << endl;
    }

    // Function to find the largest number in the array
    void findLargest() {
        if (arr.empty()) {
            cout << "Array is empty!" << endl;
            return;
        }
        int largest = arr[0];
        for (int num : arr) {
            if (num > largest) {
                largest = num;
            }
        }
        cout << "Largest number in the array is: " << largest << endl;
    }

    // Function to insert an element at a specific position
    void insertElement(int position, int element) {
        if (position < 0 || position > arr.size()) {
            cout << "Invalid position!" << endl;
            return;
        }
        arr.insert(arr.begin() + position, element);
        cout << "Element " << element << " inserted at position " << position << endl;
    }

    // Function to delete an element at a specific position
    void deleteElement(int position) {
        if (arr.empty()) {
            cout << "Array is empty!" << endl;
            return;
        }
        if (position < 0 || position >= arr.size()) {
            cout << "Invalid position!" << endl;
            return;
        }
        arr.erase(arr.begin() + position);
        cout << "Element at position " << position << " deleted." << endl;
    }
};

int main() {
    cout << "jasnoor\n";
    cout << "2410997165\n";
    
    vector<int> numbers = {10, 20, 30, 40, 50};  // Initial array
    Array_operations array_obj(numbers);

    int choice, position, element;

    do {
        // Menu-driven interface
        cout << "\nMenu: \n";
        cout << "1. Display Array\n";
        cout << "2. Find Largest Number\n";
        cout << "3. Insert Element\n";
        cout << "4. Delete Element\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        // Validate the input choice
        if(cin.fail()) {
            cin.clear(); // Clear error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore the rest of the invalid input
            cout << "Invalid input! Please enter a number between 1 and 5.\n";
            continue;
        }

        switch (choice) {
            case 1:
                array_obj.display();
                break;
            case 2:
                array_obj.findLargest();
                break;
            case 3:
                cout << "Enter the position to insert the element (0-based index): ";
                cin >> position;
                cout << "Enter the element to insert: ";
                cin >> element;
                array_obj.insertElement(position, element);
                break;
            case 4:
                cout << "Enter the position to delete the element (0-based index): ";
                cin >> position;
                array_obj.deleteElement(position);
                break;
            case 5:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}

