#include <iostream>
using namespace std;

int main()
{
    srand(time(0));
    const int MAX_GUESSES = 5;
    const int MAX_VAL_EASY = 10;
    const int MAX_VAL_MEDIUM = 50;
    const int MAX_VAL_HARD = 100;

    int difficulty;
    cout << "select difficulty\n";
    cout << "1. easy (1-10)\n" << "2. medium (1-50)\n" << "3. hard (1-100)\n";
    cin >> difficulty;

    int max_val;
    if (difficulty == 1) max_val = MAX_VAL_EASY;
    else if (difficulty == 2) max_val = MAX_VAL_MEDIUM;
    else max_val = MAX_VAL_HARD;

    int randInt = rand() % max_val + 1;

    int guesses = 0;
    bool userWin = false;
    while (!userWin and guesses++ < MAX_GUESSES)
    {
        int guessInt;
        cout << "\nGuess " << guesses << " of " << MAX_GUESSES << "\n";
        cout << "Enter your guess (1 - " << max_val << "): ";
        cin >> guessInt;
        cout << "\n";

        if (guessInt == randInt) userWin = true;
        else if (guessInt < randInt) cout << "Your guess was below the correct number!\n";
        else if (guessInt > randInt) cout << "Your guess was above the correct number!\n";
    }

    if (userWin) cout << "You won!\n";
    else cout << "You ran out of guesses! The correct number was " << randInt << ".\n";
}