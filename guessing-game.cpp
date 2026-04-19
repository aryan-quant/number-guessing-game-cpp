#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));
    char playAgain;
    cout << "===== NUMBER GUESSING GAME =====" << endl;
    do {
        int number, guess, attempts = 0;
        number = rand() % 100 + 1;
        cout << "\nI have selected a number between 1 and 100." << endl;
        cout << "Try to guess it!" << endl;
        do {
            cout << "Enter your guess: ";
            cin >> guess;
            if (guess < 1 || guess > 100) {
                cout << "Please enter a number between 1 and 100." << endl;
                continue;
            }
            attempts++;
            if (guess > number) {
                cout << "Too high! Try again." << endl;
            }
            else if (guess < number) {
                cout << "Too low! Try again." << endl;
            }
            else {
                cout << "\n🎉 Congratulations! You guessed the number in "
                     << attempts << " attempts." << endl;
                if (attempts <= 5)
                    cout << "Excellent performance!" << endl;
                else if (attempts <= 10)
                    cout << "Good job!" << endl;
                else
                    cout << "Keep practicing!" << endl;
            }
        } while (guess != number);
        cout << "\nDo you want to play again? (y/n): ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');
    cout << "\nThanks for playing! 👋" << endl;
    return 0;
}
