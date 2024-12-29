#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm> // For transform and find

using namespace std;

// Function declarations
void displayHangman(int attempts);
void playGame(const string& word, const string& category);

int main() {
    // Categories and their respective words
    string member1Category = "Movies";      // Member 1's category
    string member2Category = "Animals";    // Member 2's category
    string member3Category = "Sports";     // Member 3's category

    vector<string> movies = {"inception", "titanic", "avatar"};
    vector<string> animals = {"elephant", "giraffe", "dolphin"};
    vector<string> sports = {"cricket", "football", "hockey"};

    cout << "Welcome to the Hangman Game!\n";
    cout << "Please select a category:\n";
    cout << "1. " << member1Category << "\n";
    cout << "2. " << member2Category << "\n";
    cout << "3. " << member3Category << "\n";

    int choice;
    cin >> choice;

    // Seed for randomization
    srand(time(0));

    string selectedWord;
    string selectedCategory;

    // Choose category and random word
    if (choice == 1 && !movies.empty()) {
        selectedCategory = member1Category;
        selectedWord = movies[rand() % movies.size()];
    } else if (choice == 2 && !animals.empty()) {
        selectedCategory = member2Category;
        selectedWord = animals[rand() % animals.size()];
    } else if (choice == 3 && !sports.empty()) {
        selectedCategory = member3Category;
        selectedWord = sports[rand() % sports.size()];
    } else {
        cout << "Invalid choice or empty category. Exiting game.\n";
        return 0;
    }

    // Start the game
    playGame(selectedWord, selectedCategory);

    return 0;
}

// Function to display hangman stages
void displayHangman(int attempts) {

    const string stages[] = {
        "  -----  \n  |   |  \n      |  \n      |  \n      |  \n      |  \n========= ",
        "  -----  \n  |   |  \n  O   |  \n      |  \n      |  \n      |  \n========= ",
        "  -----  \n  |   |  \n  O   |  \n  |   |  \n      |  \n      |  \n========= ",
        "  -----  \n  |   |  \n  O   |  \n /|   |  \n      |  \n      |  \n========= ",
        "  -----  \n  |   |  \n  O   |  \n /|\\  |  \n      |  \n      |  \n========= ",
        "  -----  \n  |   |  \n  O   |  \n /|\\  |  \n /    |  \n      |  \n========= ",
        "  -----  \n  |   |  \n  O   |  \n /|\\  |  \n / \\  |  \n      |  \n========= "
    };

    cout << stages[attempts] << endl;
}

// Function to play the game
void playGame(const string& word, const string& category) {
    int wordLength = word.length();
    string guessedWord(wordLength, '_');
    vector<char> guessedLetters;
    int maxAttempts = 6;
    int attempts = 0;

    cout << "\nYou selected the category: " << category << "\n";
    cout << "Guess the word!\n";

    while (attempts < maxAttempts && guessedWord != word) {
        cout << "\nCurrent word: " << guessedWord << "\n";
        cout << "Attempts left: " << maxAttempts - attempts << "\n";
        cout << "Guessed letters: ";
        for (char c : guessedLetters) cout << c << " ";
        cout << "\nEnter your guess: ";

        char guess;
        cin >> guess;

        // Convert guess to lowercase for case-insensitivity
        guess = tolower(guess);

        // Check if already guessed
        if (find(guessedLetters.begin(), guessedLetters.end(), guess) != guessedLetters.end()) {
            cout << "You already guessed that letter!\n";
            continue;
        }

        guessedLetters.push_back(guess);

        // Check if guess is correct
        bool correct = false;
        for (int i = 0; i < wordLength; i++) {
            if (tolower(word[i]) == guess) {
                guessedWord[i] = word[i];
                correct = true;
            }
        }

        if (!correct) {
            cout << "Wrong guess!\n";
            attempts++;
        } else {
            cout << "Good guess!\n";
        }

        displayHangman(attempts);
    }

    // Check win/lose
    if (guessedWord == word) {
        cout << "\nCongratulations! You guessed the word: " << word << "\n";
    } else {
        cout << "\nGame over! The word was: " << word << "\n";
    }
}
