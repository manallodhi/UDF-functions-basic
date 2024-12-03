#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {1, 3, 5, 7, 9};
    int outputs[5];
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        sum = sum + numbers[i];
        outputs[i] = sum;
    }

    cout << "Number\tOutput" << endl;
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << "\t" << outputs[i] << endl;
    }

    return 0;
}
