#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    int age;

    cout << "Please enter your name: ";
    cin >> name;

    cout << "Please enter your age: ";
    cin >> age;

    cout << "Welcome, " << name << "! You are " << age << " years old." << endl;

    return 0;
}
