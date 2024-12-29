#include <iostream>
using namespace std;

int main() {
    int number;
    int oddCount = 0, evenCount = 0;

    while (true) {
        cout << "Enter a number (0 to stop): ";
        cin >> number;

        if (number == 0) {
            break; // Exit loop when 0 is entered
        }

        if (number % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    cout << "Total even numbers: " << evenCount << endl;
    cout << "Total odd numbers: " << oddCount << endl;

    return 0;
}

