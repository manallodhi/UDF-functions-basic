
          /*SQUARE*/

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the side length of the square: ";
    cin >> n;
    cout << endl ;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
