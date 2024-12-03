
                    /*NUMBER TRIANGLE*/

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the height of the triangle: ";
    cin >> n;
    cout << endl ;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
