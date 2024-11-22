#include <iostream> // Include library for input/output
using namespace std;

int main() {
    // Declare variables to hold the two numbers and their average
    double num1, num2, average;

    // Prompt the user to enter the first number
    cout << "Enter the first number: ";
    cin >> num1;

    // Prompt the user to enter the second number
    cout << "Enter the second number: ";
    cin >> num2;
    cout<<"hellllllo";
    // Calculate the average
    average = (num1 + num2) / 2;

    // Display the result
    cout << "The average of " << num1 << " and " << num2 << " is: " << average << endl;

    return 0; // Indicate successful program termination
}
