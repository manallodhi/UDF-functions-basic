#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

// Function to get random words from a list
string getRandomWord() {
    string words[] = {"apple", "banana", "cherry", "grape", "orange", "pineapple", "kiwi", "watermelon"};
    int index = rand() % 8; // Generate a random index
    return words[index];
}

int main() {
    srand(time(0));  // Initialize random number generator with current time

    int totalWords = 5;  // Number of words to type
    int correctWords = 0;  // Count of correctly typed words
    string wordToType;
    string userInput;
    clock_t startTime, endTime;  // Variables to measure time

    cout << "Welcome to the Typing Speed Test!" << endl;
    cout << "You will need to type " << totalWords << " random words." << endl;
    cout << "Try to type them as quickly as possible." << endl;

    startTime = clock();  // Start the clock to measure time

    // Loop to generate words and ask for input
    for (int i = 0; i < totalWords; i++) {
        wordToType = getRandomWord();  // Get a random word
        cout << "Word " << (i + 1) << ": " << wordToType << endl;
        cout << "Type this word: ";
        cin >> userInput;

        // Check if the typed word is correct
        if (userInput == wordToType) {
            correctWords++;
        } else {
            cout << "Incorrect. The correct word was: " << wordToType << endl;
        }
    }

    endTime = clock();  // End the clock after the game

    // Calculate the time taken to complete the game in seconds
    double timeTaken = double(endTime - startTime) / CLOCKS_PER_SEC;

    // Calculate typing speed (words per minute)
    double typingSpeed = (totalWords / timeTaken) * 60;

    // Display results
    cout << "\nGame Over!" << endl;
    cout << "You typed " << correctWords << " out of " << totalWords << " words correctly." << endl;
    cout << "Time taken: " << timeTaken << " seconds." << endl;
    cout << "Your typing speed is: " << typingSpeed << " words per minute." << endl;

    return 0;
}
