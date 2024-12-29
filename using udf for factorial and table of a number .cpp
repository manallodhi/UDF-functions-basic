#include <iostream>
using namespace std;

// Function declarations
void printTable(int num);
int calculateFactorial(int num);

int main() {
    int number;

    // Input from the user
    cout << "Enter a number: ";
    cin >> number;

    // Call the functions
    printTable(number);

    int fact = calculateFactorial(number);
    cout << "\nFactorial of " << number << " is: " << fact << endl;

    return 0;
}

// Function definitions

// Function to calculate the multiplication table
void printTable(int num) {
    cout << "Multiplication Table of " << num << ":\n";
    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }
}

// Function to calculate the factorial
int calculateFactorial(int num) {
    int factorial = 1;
    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }
    return factorial;
}
