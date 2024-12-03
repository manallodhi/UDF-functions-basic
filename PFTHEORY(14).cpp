#include <iostream>
using namespace std;

int main() {
    //declaring variables
    int previousReading, currentReading, units;
    double bill = 0;
    //ask the user to enter previous and current readings
    cout << "Enter previous reading: ";
    cin >> previousReading;
    cout << "Enter current reading: ";
    cin >> currentReading;
    //calculate units
    units = currentReading - previousReading;

    if (units <= 300) {
        //if units are less than 300
        bill = units * 4;
        bill -= bill * 0.03; // Apply 3% subsidy
    } else if (units <= 400 && units >=301) {
        //if units are between 301 and 400
        bill = units * 6;
    } else if (units > 400) {
        //if units are grater than 400
        bill = units * 7;
        bill += bill * 0.04; // Add 4% surcharge
    } else {
        cout << "Invalid readings!" << endl;
    }
    //print the total bill calculated
    cout << "Total Bill: Rs. " << bill << endl;
    return 0;
}
