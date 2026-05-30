#include <iostream>
using namespace std;

class guess
{
private:
    int number;
    int guessedNumber;

public:
    guess(int num)
    {
        number = num;
    }
    void getGuess(int guessedNumber)
    {
        this->guessedNumber = guessedNumber;
    }
    void checkGuess(int attempts)
    {
        if (guessedNumber == number)
        {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts!" << endl;
        }
        else if (guessedNumber < number)
        {
            cout << guessedNumber << " Too low! Try again." << endl;
        }
        else
        {
            cout << guessedNumber << " Too high! Try again." << endl;
        }
    }
};
int main()
{
    int n = rand() % 100 + 1; // Generate a random number between 1 and 100
    guess g(n);
    int attempts = 0;
    int mode;
    cout << "Welcome to the Guessing Game! select mode: 1 for easy (15 attempts), 2 for medium(10 attempts), 5 for hard " << endl;
    cout << "Enter your choice: ";
    cin >> mode;
    if (mode == 1)
    {
        mode = 15;
    }
    else if (mode == 2)
    {
        mode = 10;
    }
    else if (mode == 5)
    {
        mode = 5;
    }
    while (attempts < mode)
    {
        cout << " Try to guess the number between 1 and 100." << endl;
        int guessedNumber;
        cin >> guessedNumber;
        g.getGuess(guessedNumber);
        g.checkGuess(attempts);
        attempts++;
        if (guessedNumber == n)
        {
            break;
        }
    }
}
