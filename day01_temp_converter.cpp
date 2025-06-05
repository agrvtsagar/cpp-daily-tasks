//write a C++ program that converts a temprature between celsuis and Fahrenheit based on user input (C to F or F to C). Debug an intentionl error and version it with git.
#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main() {
    char choice;
    double temp, result;

    cout << "Temperature Converter\n";
    cout << "Enter 'C' to convert Celsius to Fahrenheit,\n";
    cout << "Enter 'F' to convert Fahrenheit to Celsius: ";
    cin >> choice;

    cout << "Enter temperature: ";
    cin >> temp;

    // Check for invalid (non-numeric) input
    if (cin.fail()) {
        cout << "Invalid temperature input! Please enter a numeric value.\n";
        return 1;
    }

    if (choice == 'C' || choice == 'c') {
        result = temp * 9 / 5 + 32;
        cout << temp << "°C = " << result << "°F\n";
    } else if (choice == 'F' || choice == 'f') {
        result = (temp - 32) * 5 / 9;
        cout << temp << "°F = " << result << "°C\n";
    } else {
        cout << "Invalid choice! Please enter 'C' or 'F'.\n";
    }

    return 0;
}
