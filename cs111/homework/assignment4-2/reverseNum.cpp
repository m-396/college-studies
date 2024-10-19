/**************************
XXXXX - 10/16/24
CS111 - assignment4-2
reverseNum.cpp

This program will ask for a
non-negative number and sh-
ow all the digits backward-
s.
**************************/

#include<iostream>
using namespace std;

int main()
{
  // declare variable
  int num; // user number

  // user prompt
  cout << "Enter a non-negative number: ";
  cin >> num;

  // check if number is valid
  while (num < 0) // user keeps inputting a negative number
    {
      cout << "The number is invalid. Enter a number again: ";
      cin >> num;
    }

  // calculations to reverse user's number
  if (num == 0) // special case: 0 will stay 0
    cout << "0";
  else // number other than 0
    {
      while (num > 0) // loop runs until integer value for num becomes 0 
	{
	  cout << num % 10; // outputs last digit
	  num /= 10; // updates num to remove a digit by dividing with 10
	}
    }

  cout << endl;
  cout << endl;
  return 0;
}
