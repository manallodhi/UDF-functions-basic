#include <iostream>
using namespace std;

int main() {
    //declaring variables
    int mainChoice, subChoice;
    //menu for choosing options
    cout << "Game Menu:\n";
    cout << "1. Start Game\n";
    cout << "2. Settings\n";
    cout << "3. Exit\n";
    //ask the user for hid choice
    cout << "Enter your choice: ";
    cin >> mainChoice;

    //using nested switch case for a hierachy for game options
    switch (mainChoice) {
        case 1:
            //when user enter 1 so he has 2 choices
            //starting a new game or load game
            cout << "1. New Game\n";
            cout << "2. Load Game\n";
            cout << "Enter your choice: ";
            cin >> subChoice;

            switch (subChoice) {
                case 1:
                    cout << "Starting a New Game...\n";
                    break;
                case 2:
                    cout << "Loading Game...\n";
                    break;
                default:
                    // this results when none of the above cases match the users choice
                    cout << "Invalid option in Start Game menu.\n";
            }
            break;

        case 2:
            //if user choose 2 then settings options are shown
            cout << "1. Audio Settings\n";
            cout << "2. Graphics Settings\n";
            //ask the user whether he want to open
            //audio settings or graphics setting
            cout << "Enter your choice: ";
            cin >> subChoice;

            switch (subChoice) {
                case 1:
                    cout << "Opening Audio Settings...\n";
                    break;
                case 2:
                    cout << "Opening Graphics Settings...\n";
                    break;
                default:
                    // this results when none of the above cases match the users choice
                    cout << "Invalid option in Settings menu.\n";
            }
            break;

        case 3:
            //if the user choose 3 then the game exits
            cout << "Exiting the Game...\n";
            break;

        default:
            // this results when none of the above cases match the users choice
            cout << "Invalid main menu choice.\n";
    }

    return 0;
}

