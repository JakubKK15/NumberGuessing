# Number Guessing Game

This is a simple number guessing game implemented in C++. The program generates a random number between 1 and 100, and the player has to guess the correct number. After each guess, the program provides feedback on whether the secret number is higher or lower than the player's guess. The game continues until the player guesses the correct number.

## Prerequisites

- C++ compiler

## How to Run

1. Compile the source code using a C++ compiler.
2. Run the compiled executable.

## Gameplay Instructions

1. The program will prompt you to guess a number between 1 and 100.
2. Enter your guess and press Enter.
3. Based on your guess, the program will indicate whether the secret number is higher or lower.
4. Keep guessing until you find the correct number.
5. The program will display a congratulatory message and the total number of guesses it took to find the correct number.

## Example Usage

$ g++ main.cpp -o number_guessing_game
$ ./number_guessing_game
Guess the number (1 to 100): 50
The secret number is higher.
Guess the number (1 to 100): 75
The secret number is lower.
Guess the number (1 to 100): 65
The secret number is lower.
Guess the number (1 to 100): 60
The secret number is higher.
Guess the number (1 to 100): 62
Congratulations, you guessed the number correctly.
It took you 5 guesses.