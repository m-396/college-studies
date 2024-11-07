/**************************
XXXXX - 10/29/24
CS111 - assignment5
crapsStat.cpp

This program simulates the
win and loss percentage of
Craps.
**************************/

#include<iostream>
#include<iomanip>
#include"input.h"
using namespace std;

bool playGame(); // prototype for the old int main() of craps.cpp
int rollDice(); // prototype for dice roll

int main()
{
  // declare variables
  srand(time(0)); // randomize rolled numbers
  int gameAmnt; // amount of games the user wants
  int win = 0; // win counter
  int lose = 0; // loss counter
  
  // user prompt
  cout << "How many games do you want to play: ";
  gameAmnt = getInt(1, 100000000, "You need to input a number between 1 and 100000000: "); // getInt() for min and max of games to run, along with error message

  // call for the game to run
  for (int runs = 1; runs <= gameAmnt; runs++) // run for loop until it reaches user's amount
    {
      if (playGame()) // if the outcome is a win, add one win to total wins
	win += 1;
      else // if a loss, add a loss
	lose += 1;
    }

  // user output
  cout << right << setw(10) << "win %" << setw(10) << " lose %" << endl;
  cout << right << fixed << setw(10) << setprecision(3) << ((double)win/gameAmnt)*100 << setw(10) << ((double)lose/gameAmnt)*100 << endl;
  
  cout << endl;
  return 0;
}

// function that runs one simulated craps game
bool playGame()
{
  int first_roll; // first total roll of the two dice
  int roll; // consequent rolls after
  bool result; // win or loss
  
  first_roll = rollDice(); // roll the first two dice

  if (first_roll == 7 || first_roll == 11) // if either number, game is a win
    result = true;
  else if (first_roll == 2 || first_roll == 3 || first_roll == 12) // if any number, game is a loss
    result = false;
  else // if none of them, roll again
    {
      do
	{
	  roll = rollDice();
	} while (roll != first_roll && roll != 7); // run while it isnt equal to the first roll or 7
      if (roll == first_roll) // equal to first roll, win!
	result = true;
      else if (roll == 7) // if a 7, loss.
	result = false;
    }
  return result;
}

// function for the two dice
int rollDice()
{
  int roll; // total of both dice
  roll = (rand() % 6 + 1) + (rand() % 6 + 1); // where the actual roll happens
  return roll; // return total number
}
