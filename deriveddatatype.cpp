#include <iostream>
using namespace std;

struct MyStruct {
    int a;
    double b;
};

union MyUnion {
    int a;
    double b;
};

int main() {
    int arr[5];
    int* ptr;
    MyStruct s;
    MyUnion u;

    cout << "Size of int array (5 elements): " << sizeof(arr) << " bytes" << endl;
    cout << "Size of pointer: " << sizeof(ptr) << " bytes" << endl;
    cout << "Size of struct MyStruct: " << sizeof(s) << " bytes" << endl;
    cout << "Size of union MyUnion: " << sizeof(u) << " bytes" << endl;

    return 0;
}
