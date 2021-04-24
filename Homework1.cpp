#include <iostream> // includes the iostream library
#include <cstdlib>// includes the library which we need for using the random generator
#include <ctime> // includes the library which we need for using time
using namespace std;//part of the iostream library

int main() // opens the main function
{
    srand(time(0)); //seed random number generator
    int num = rand() % 100 + 1; // random number between 1 and 100
    cout << "Guess My Number Game\n\n"; // "Guess My Number Game" is displayed on the screen and after that two new lines

    int guess = 0; // A new variable of integer type has been introduced.
    while (guess != num) { //a cycle opens

        cout << "Enter a guess between 1 and 100 : ";// "Enter a guess between 1 and 100 : " is displayed on the screen
        cin >> guess;//we enter a value for the variable guess

        if (guess > num) { //Checks if guess is more than num
            cout << "Too high!\n\n";//"Too high!" is displayed on the screen and after that two new lines
        }
        else if (guess < num)//checks if guess < num
            {
                cout << "Too low!\n\n";//"Too low!" is displayed on the screen and after that two new lines
            }
        else {//otherwise
            cout << "\nCorrect! You got it in ";//New line; "Correct! You got it in " is displayed on the screen
        }
    }

    return 0;//end
}
