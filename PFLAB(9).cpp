
         /*OPPOSITE DIAGONAL*/

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the side length of the square: ";
    cin >> n;
    cout << endl;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j == n - i + 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
