#include <iostream>
using namespace std;

int main() {
    double celsius, fahrenheit;
    int choice;

    cout << "Temperature Converter\n";
    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Fahrenheit to Celsius\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;
        fahrenheit = (celsius * 9/5) + 32;
        cout << "Temperature in Fahrenheit: " << fahrenheit << "°F\n";
    } else if (choice == 2) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> fahrenheit;
        celsius = (fahrenheit - 32) * 5/9;
        cout << "Temperature in Celsius: " << celsius << "°C\n";
    } else {
        cout << "Invalid choice. Please run the program again.\n";
    }

    return 0;
}