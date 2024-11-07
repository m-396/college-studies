/**************************
XXXXX - 10/25/24
Labs
craps.cpp

This program simulates a
game of craps.
**************************/

#include<iostream>
using namespace std;

int rollDice();

int main()
{
  srand(time(0));
  int first_roll;
  int roll;
  
  first_roll = rollDice();

  if (first_roll == 7 || first_roll == 11)
    cout << "==== WIN ====" << endl;
  else if (first_roll == 2 || first_roll == 3 || first_roll == 12)
    cout << "==== LOSE ====" << endl;
  else
    {
      do
	{
	  roll = rollDice();
	} while (roll != first_roll && roll != 7);
      if (roll == first_roll)
	cout << "==== WIN ====" << endl;
      else if (roll == 7)
	cout << "==== LOSE ====" << endl;
    }
  return 0;
}

int rollDice()
{
  int roll;
  roll = (rand() % 6 + 1) + (rand() % 6 + 1);
  cout << roll << endl;
  return roll;
}
