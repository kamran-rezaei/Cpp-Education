#include <iostream>
using namespace std;

int main() {
    
    int number;

    cout << "Odd or Even Checker\n";
    cout << "Enter an integer: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << number << " is even.\n";
    } else {
        cout << number << " is odd.\n";
    }

    return 0;
}
