#include <iostream>
using namespace std;

int main() {
    int choice;
    double totalBill = 0;

    do {
        // Display the menu
        cout << "Cafeteria Menu:\n";
        cout << "1. Tea - $2\n";
        cout << "2. Coffee - $3\n";
        cout << "3. Sandwich - $5\n";
        cout << "4. Burger - $7\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        // Handle choices using switch
        switch (choice) {
            case 1:
                totalBill += 2;
                cout << "Tea added. Total: $" << totalBill << endl;
                break;
            case 2:
                totalBill += 3;
                cout << "Coffee added. Total: $" << totalBill << endl;
                break;
            case 3:
                totalBill += 5;
                cout << "Sandwich added. Total: $" << totalBill << endl;
                break;
            case 4:
                totalBill += 7;
                cout << "Burger added. Total: $" << totalBill << endl;
                break;
            case 5:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    cout << "Your total bill is: $" << totalBill << endl;
    return 0;
}
