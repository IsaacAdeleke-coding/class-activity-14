//
//  main.cpp
//  class activity 14
//
//  Created by Isaac Adeleke on 9/16/24.
//

#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()
using namespace std;

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    // Generate a random secret number between 1 and 100
    int secretNumber = rand() % 100 + 1;
    int guess;

    // Ask the user to guess the number
    cout << "Guess the secret number between 1 and 100: ";
    cin >> guess;

    // While loop to keep asking until the user guesses correctly
    while (guess != secretNumber) {
        if (guess < secretNumber) {
            cout << "Too low! Try again: ";
        } else {
            cout << "Too high! Try again: ";
        }
        cin >> guess;
    }

    // If the user guesses correctly, congratulate them
    cout << "Congratulations! You guessed the secret number!" << endl;

    return 0;
}
