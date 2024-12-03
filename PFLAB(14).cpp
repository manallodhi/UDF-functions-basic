
                  /*SAND CLOCK*/

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the height of the sand clock (odd number): ";
    cin >> n;
    cout << endl ;

    // Upper part
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower part
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
