#include <iostream>
using namespace std;

char board[3][3] = { {'1', '2', '3'},
                     {'4', '5', '6'},
                     {'7', '8', '9'} };

char currentPlayer = 'X';

void displayBoard() {
    cout << "\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

bool checkWin() {
    // Check rows and columns
    for (int i = 0; i < 3; i++) {
        if ((board[i][0] == board[i][1] && board[i][1] == board[i][2]) ||
            (board[0][i] == board[1][i] && board[1][i] == board[2][i])) {
            return true;
        }
    }
    // Check diagonals
    if ((board[0][0] == board[1][1] && board[1][1] == board[2][2]) ||
        (board[0][2] == board[1][1] && board[1][1] == board[2][0])) {
        return true;
    }
    return false;
}

bool checkTie() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != 'X' && board[i][j] != 'O') {
                return false;
            }
        }
    }
    return true;
}

void changePlayer() {
    if (currentPlayer == 'X')
        currentPlayer = 'O';
    else
        currentPlayer = 'X';
}

void makeMove() {
    int choice;
    cout << "Player " << currentPlayer << ", enter the number of the cell you want to mark: ";
    cin >> choice;

    int row = (choice - 1) / 3;
    int col = (choice - 1) % 3;

    if (choice < 1 || choice > 9 || board[row][col] == 'X' || board[row][col] == 'O') {
        cout << "Invalid move! Try again.\n";
        makeMove();
    } else {
        board[row][col] = currentPlayer;
    }
}

int main() {
    cout << "Welcome to Tic Tac Toe!\n";
    displayBoard();

    while (true) {
        makeMove();
        displayBoard();

        if (checkWin()) {
            cout << "Player " << currentPlayer << " wins! Congratulations!\n";
            break;
        } else if (checkTie()) {
            cout << "It's a tie!\n";
            break;
        }

        changePlayer();
    }

    return 0;
}
