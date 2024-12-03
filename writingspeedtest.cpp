#include <iostream>
#include <ctime>  // For using time functions (clock)
#include <cstdlib>  // For random number generation
#include <string>  // For using strings
using namespace std;

// Function to get a random word from a predefined list
string getRandomWord() {
    // Array of possible words to type
    string words[] = {"apple", "banana", "cherry", "grape", "orange", "pineapple", "kiwi", "watermelon"};
    // Generate a random index between 0 and 7 to pick a word from the array
    int index = rand() % 8;
    return words[index];  // Return the randomly chosen word
}
int main() {
    srand(time(0));  // Initialize random number generator using the current time (seeds the random number generator)

    int totalWords = 5;  // Number of words the player will need to type
    int correctWords = 0;  // Variable to count how many words the player typed correctly
    string wordToType;  // String to hold the current word the player needs to type
    string userInput;  // String to hold the player's input
    clock_t startTime, endTime;  // Variables to store start and end times for timing the game

  cout << "Welcome to the Typing Speed Test!" << endl;
    cout << "You will need to type " << totalWords << " random words." << endl;
    cout << "Try to type them as quickly as possible." << endl;

    startTime = clock();  // Start timing when the game begins

    // Loop to generate random words and ask the player to type them
    for (int i = 0; i < totalWords; i++) {
        wordToType = getRandomWord();  // Get a random word from the list
        cout << "Word " << (i + 1) << ": " << wordToType << endl;  // Display the current word
  cout << "Type this word: ";  // Prompt the player to type the word
        cin >> userInput;  // Get the player's input

        // Check if the player typed the word correctly
        if (userInput == wordToType) {
            correctWords++;  // Increase the correct word count if the input matches the word
        } else {
            cout << "Incorrect. The correct word was: " << wordToType << endl;  // Display the correct word if the player typed wrong
        }

   }

    endTime = clock();  // Stop timing after the game ends

    // Calculate the time taken to complete the game in seconds
    double timeTaken = double(endTime - startTime) / CLOCKS_PER_SEC;

    // Calculate typing speed in words per minute (WPM)
    double typingSpeed = (totalWords / timeTaken) * 60;

    // Display the results at the end of the game
    cout << "\nGame Over!" << endl;
    cout << "You typed " << correctWords << " out of " << totalWords << " words correctly." << endl;
    cout << "Time taken: " << timeTaken << " seconds." << endl;
    cout << "Your typing speed is: " << typingSpeed << " words per minute." << endl;

    return 0;  // End of the program
}
