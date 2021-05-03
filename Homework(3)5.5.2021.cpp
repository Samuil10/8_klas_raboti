#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int br=0;
    srand(time(0)); //seed random number generator
    int lottery = rand() % 900 + 100; // random number between 10 and 99
	// Prompt the user to enter a guess

	cout << "Enter your lottery pick (three digits): ";
	int guess = 0;// enter a guess
	cin >> guess;
	// Get digits from lottery
	int lotteryDigit1 = lottery / 100;
	int lotteryDigit2 = ((lottery)%100)/10;
	int lotteryDigit3 = lottery % 10;
	if (lotteryDigit1==lotteryDigit2 || lotteryDigit1 == lotteryDigit3 || lotteryDigit2 == lotteryDigit3){
        while (lotteryDigit1==lotteryDigit2 || lotteryDigit1 == lotteryDigit3 || lotteryDigit2 == lotteryDigit3){
        lottery = rand() % 900 + 100;
        lotteryDigit1 = lottery / 100;
	    lotteryDigit2 = ((lottery)%100)/10;
	    lotteryDigit3 = lottery % 10;
        }
	}
	// Get digits from guess
	int guessDigit1 = guess / 100;
	int guessDigit2 = (guess % 100)/10;
	int guessDigit3 = guess % 10;
	cout << "The lottery number is " << lottery << endl;
	// Check the guess
	if (guess == lottery){
		cout << "Exact match: you win $10,000";
		br=1;
	}
	else{
        if ((lotteryDigit1 == guessDigit1 || lotteryDigit1 == guessDigit2 || lotteryDigit1 == guessDigit3) && (lotteryDigit2 == guessDigit1 || lotteryDigit2 == guessDigit2 || lotteryDigit2 == guessDigit3) && (lotteryDigit3 == guessDigit1 || lotteryDigit3 == guessDigit2 || lotteryDigit3 == guessDigit3)) {
            cout<<"Three digit match: you win $3,000";
            return 0;
        }
        if (((lotteryDigit1 == guessDigit1 || lotteryDigit1 == guessDigit2 || lotteryDigit1 == guessDigit3) && (lotteryDigit2 == guessDigit1 || lotteryDigit2 == guessDigit2 || lotteryDigit2 == guessDigit3)) ||((lotteryDigit2 == guessDigit1 || lotteryDigit2 == guessDigit2 || lotteryDigit2 == guessDigit3) && (lotteryDigit3 == guessDigit1 || lotteryDigit3 == guessDigit2 || lotteryDigit3 == guessDigit3)) || ((lotteryDigit1 == guessDigit1 || lotteryDigit1 == guessDigit2 || lotteryDigit1 == guessDigit3) &&(lotteryDigit3 == guessDigit1 || lotteryDigit3 == guessDigit2 || lotteryDigit3 == guessDigit3)))  {
            cout<<"Two digit match: you win $2,000";
            br=1;
            return 0;
        }

        if (lotteryDigit1 == guessDigit1 || lotteryDigit1 == guessDigit2 || lotteryDigit1 == guessDigit3 || lotteryDigit2 == guessDigit1 || lotteryDigit2 == guessDigit2 || lotteryDigit2 == guessDigit3 || lotteryDigit3 == guessDigit1 || lotteryDigit3 == guessDigit2 || lotteryDigit3 == guessDigit3) {
            cout<<"One digit match: you win $1,000";
            br=1;
        }
	}
		if (br==0){
		cout << "Sorry, no match";
	}
	return 0;
}
