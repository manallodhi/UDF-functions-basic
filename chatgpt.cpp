#include <iostream>
#include <math.h>
using namespace std;

int main() {
    float a = 3.1;
    float b = 4.2;
    int c;
    float x1, x2;

    cout << "Enter value for c:" << endl;
    cin >> c;

    // Formula for +ve root
    x1 = (-b + sqrt(b * b - 4 * a * c)) / (pow(a / b, 2) + pow(b / c, 2));

    // Formula for -ve root
    x2 = (-b - sqrt(b * b - 4 * a * c)) / (pow(a / b, 2) + pow(b / c, 2));

    cout << "Formula for +ve root: " << x1 << endl;
    cout << "Formula for -ve root: " << x2 << endl;

    return 0;
}
