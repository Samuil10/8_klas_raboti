#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int min;
    int max;
    cout<<"Enter the minimum value: ";
    cin>>min;
    cout<<"Enter the maximum  value: ";
    cin>>max;
    int num;
    srand(time(0));
    while (num>max || num<min){
    num = rand();
    }
    cout << "Guess My Number Game\n\n";

    int guess = 0;
    while (guess != num) {
        cout << "Enter a guess between "<<min<<" and "<<max<<" : ";
        cin >> guess;

        if (guess > num) {
            cout << "Too high!\n\n";
        }
        else if (guess < num)
            {
                cout << "Too low!\n\n";
            }
        else {
            cout << "\nCorrect! You got it in ";
        }
    }

    return 0;
}
