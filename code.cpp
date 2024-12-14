#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std ;
int main() {
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = rand() % 100 + 1;
    int Guess;
    int attempts = 0;

    cout << "Welcome to the Guess the Number Game!"<<endl;
    cout << "I have selected a number between 1 and 100. Can you guess it?"<<endl;

    // Loop until the user guesses the correct number
    do{
        cout << "Enter your guess: ";
        cin >> Guess;
        attempts++;

        if (Guess < randomNumber) {
            cout << "Too low! Try again."<<endl;
        } else if (Guess > randomNumber) {
            std::cout << "Too high! Try again.<<endl";
        } else {
            cout << "Congratulations! You guessed the number correctly <<attempts"<<endl;
        }
    } while(Guess!=randomNumber);
    
    return 0;
}
