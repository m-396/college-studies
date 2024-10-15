/******************************************************
XXXXX - 01/01/70
CS111
sqrt-step1-2.cpp

This program will be used to calculate the square
root of a positive number. For now, it will tell which
whole number is closest to the square root of a
given number.
*****************************************************/

#include<iostream>
using namespace std;

int main()
{
  // declaration of variables
  int num = 0; // user's positive number
  int top = 1; // highest sqrt number
  int bottom = 0; // lowest sqrt number
  int closest = 0; // which sqrt is closest?

  // user prompt
  cout << "Enter a positive number: ";
  cin >> num;

  // calculate top and bottom
  for (top; top * top < num; top++) // find highest sqrt by multiplying top most by itself. repeat if its still less than num.
    ;
  bottom = top - 1;

  // calculate which is closest
  if ((top * top - num) < (num - bottom * bottom)) // if the difference between the square of top most sqrt subtracted by the number, is less than the difference between the square of the bottom most sqrt subracted by the number, the closest sqrt is the top most sqrt.
    closest = top;
  else
    closest = bottom;

  // user output
  cout << "Top is " << top << endl;
  cout << "Bottom is " <<  bottom << endl;
  cout << "Between "  << top << " and " << bottom << ", " << closest << " is closer." << endl;
  cout << endl;
  
  return 0;
}
