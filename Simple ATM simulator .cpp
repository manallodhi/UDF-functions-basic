#include <iostream>
using namespace std;

int main() {
    double balance = 1000; // Starting balance
    int choice;

    do {
        // Display ATM Menu
        cout << "\nATM Menu:\n";
        cout << "1. Check Balance\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Deposit Money\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Your current balance is: $" << balance << endl;
                break;
            case 2: {
                double withdrawAmount;
                cout << "Enter amount to withdraw: ";
                cin >> withdrawAmount;

                if (withdrawAmount > balance) {
                    cout << "Insufficient balance!\n";
                } else {
                    balance -= withdrawAmount;
                    cout << "Withdrawal successful. Remaining balance: $" << balance << endl;
                }
                break;
            }
            case 3: {
                double depositAmount;
                cout << "Enter amount to deposit: ";
                cin >> depositAmount;
                balance += depositAmount;
                cout << "Deposit successful. New balance: $" << balance << endl;
                break;
            }
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
