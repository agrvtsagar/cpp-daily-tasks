//Writing a Simple C++ program for age validatory

#include<iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter Age: ";
    
    cin >> age;

    // Check if input is non-numeric or if age is out of range
    if (cin.fail()) {
        cout << "Invalid input! Please enter a numeric value." << endl;
    } else if (age >= 0 && age <= 120) {
        cout << "Valid age: " << age << endl;
    } else {
        cout << "Invalid age!" << endl;
    }

    return 0;
}