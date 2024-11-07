/*****************************************************************************
This template was written by XXXXX XXXXX for CS111
10-18-19

XXXXX - 10/29/24
CS111 - assignment5
input.h

getInt asks for an integer and rejects bad inputs outside the range.
getDouble asks for a decimal number and rejects bad inputs outside the range.
getYN asks for Y or N and reject bad inputs other than Y, y, N or n.
*****************************************************************************/
#include <iostream>
using namespace std;

/******************************************************************************
min is the minimum value accepted
max is the maxmum value accepted
msg is the message shown when the user's input was outside the range

This function will read an integer number and keeps asking to enter a new number
as long as the user enters a number outside the range. It will return a number
within the range (between min and max inclusive).
*******************************************************************************/
int getInt(int min, int max, string msg)
{
  int n; //user's input
  cin >> n;

  while(n < min || n > max) // if the user's input was outside the range
    {
      cout << msg;  //show the message to the user
      cin >> n;     //read a new input
    }

  return n; //return a good value that is within the range (between min and max enclusive)
}

/******************************************************************************
min is the minimum double value accepted.
max is the maximum double value accepted.
msg is the message shown if the user's input is outside the range.

This function will take a double value and keeps asking to enter a new number if 
the user enters a number outside the range. It will return a number between 
"min" and "max".
*******************************************************************************/
double getDouble(double min, double max, string msg)
{
  double n;
  cin >> n;

  while(n < min || n > max) // if the user's input was outside the range
    {
      cout << msg;  //show the message to the user
      cin >> n;     //read a new input
    }

  return n;
}

/******************************************************************************
msg is the message shown when the user inputs a character other than Y, y, N or N.

This function will prompt the user to input a YES or NO answer with the given
invalid message.
*******************************************************************************/
char getYN(string msg)
{
  char ans;
  cin >> ans;

  // As long as the user enters characters other than Y, y, N, or n, keep asking. 
  while(ans != 'y' && ans != 'Y' && ans != 'N' && ans != 'n')
    {
      cout << msg;
      cin >> ans;
    }

  // If the user enters a lowercase y or n, convert it to the uppercase Y or N.
  if (ans == 'y')
    ans = 'Y';
  else if (ans == 'n')
    ans = 'N';
  
  // This function returns either uppercase Y or N.
  return ans;
}
