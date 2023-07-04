#include <iostream>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Initialize variables used throughout the game's lifecycle.
    int secretNum, playerGuess;

    // Initialize the number of guesses variable to 1, to take into account the first guess the user makes.
    int numberOfGuesses = 1;

    // Initialize random seed:
    srand(time(NULL));

    // Generate secret number:
    secretNum = rand() % 100 + 1;

    /*
     This do / while loop checks whether the user input is higher or lower than the secret number,
     and says which case it is.
     After every unsuccessful guess the numberOfGuesses integer value goes up by 1.
     When the user input matches the random number, the loop exits.
    */

    do {
        std::cout << "Guess the number (1 to 100): ";
        std::cin >> playerGuess;
        if (secretNum < playerGuess) {
            std::cout << "The secret number is lower." << std::endl;
            numberOfGuesses++;
        } else if (secretNum > playerGuess) {
            std::cout << "The secret number is higher" << std::endl;
            numberOfGuesses++;
        }
    } while (secretNum != playerGuess);

    // If the player wins, congratulate them, and display the number of guesses it took in total.
    std::cout << "Congratulations, you guessed the number correctly." << std::endl;
    std::cout << "It took you " << numberOfGuesses << " guesses." << std::endl;
}
