#include <iostream>
using namespace std;

int main() {

    // Demonstrating ASCII conversion
    char myChar = 'B'; // Character 'B' has an ASCII value of 66
    int myInt = 6;

    // Adding the integer to the ASCII value of the character
    char resultChar = myChar + myInt;
    cout << "Result of adding 'B' + 6 = " << resultChar << endl;

    return 0;
}
