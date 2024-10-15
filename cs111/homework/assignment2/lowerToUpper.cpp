/*
XXXXX
CS111
Assignment 2: lowerToUpper.cpp
9/20/2024

This program will convert the lowercase letter the user inputs to an uppercase letter.
*/

#include<iostream>
using namespace std;

int main()
{
  char lowercase; // input lowercase letter
  char uppercase; // for uppercase letter output

  // prompt
  cout << "Enter a lowercase letter: ";
  cin >> lowercase;

  // calculations
  uppercase = lowercase - 32; // ascii pattern is -32 between lowercase and uppercase letters

  // outputs
  cout << "The uppercase is " << uppercase << "." << endl;
  cout << endl;
  
  return 0;
}
