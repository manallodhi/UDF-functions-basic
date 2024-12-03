
            /*PLUS SIGN*/

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the side length of the square (odd number for symmetry): ";
    cin >> n;
    cout << endl ;

    int mid = (n + 1) / 2;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == mid || j == mid) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

