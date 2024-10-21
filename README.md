# Class Activity 14: Guess the Secret Number

This is a C++ console game where the user attempts to guess a randomly generated secret number between 1 and 100. The program provides feedback on whether the guess is too low or too high until the correct number is guessed.

## How It Works

1. The program generates a random number between 1 and 100.
2. The user is prompted to guess the number.
3. The program will respond with "Too low!" or "Too high!" based on the guess.
4. The loop continues until the user correctly guesses the secret number.
5. The program congratulates the user upon guessing correctly.

### Code Snippet

```cpp
#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()
using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));
    int secretNumber = rand() % 100 + 1;
    int guess;

    cout << "Guess the secret number between 1 and 100: ";
    cin >> guess;

    while (guess != secretNumber) {
        if (guess < secretNumber) {
            cout << "Too low! Try again: ";
        } else {
            cout << "Too high! Try again: ";
        }
        cin >> guess;
    }

    cout << "Congratulations! You guessed the secret number!" << endl;

    return 0;
}
How to Compile and Run

To compile the program, use the following command:
g++ main.cpp -o GuessNumber
To run the compiled program, use:
./GuessNumber


