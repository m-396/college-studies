/*************************************
XXXXX - 10/14/24
CS111: assignment4-2
guessGame.cpp

This program generates a random number
between 1 to 100 and makes the user
guess the number.
*************************************/

#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
  // declare variables? 
  srand(time(0)); // randomizes each time program is ran
  int num = rand() % 100 + 1; // num equals random number, and "% 100 + 1" ensures numbers 1 to 100
  int guess = 0; // for user's guess

  // user prompt
  cout << "Guess a number between 1 and 100. Enter your guess: ";
  cin >> guess;

  // calculations for user output
  while (guess != num) // run this loop while the user's guess is not equal to the random number
    {
      if (guess < num) // guess less than random number
	cout << "        Too low, try again." << endl;
      else // guess more than random number
	cout << "        Too high, try again." << endl;
      cout << "Enter your guess: ";
      cin >> guess;
    }
  // once while loop is exited (guess equals random number), this is ran
  cout << "Your guessed it right! " << endl; // the sample runs spelled it this way

  cout << endl;
  return 0;
}
