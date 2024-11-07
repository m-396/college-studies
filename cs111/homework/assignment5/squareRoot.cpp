/******************************************************
XXXXX - 01/01/70
CS111 - assignment5
squareRoot.cpp

This program will be used to calculate the square
root of a positive number. 
*****************************************************/

#include<iostream>
#include"input.h"
using namespace std;

int main()
{
  // declaration of variables
  int num; // user's positive number
  int top = 1; // highest sqrt number
  int bottom; // lowest sqrt number
  double closest; // which sqrt is closest
  double step2, step3; // calculations for precise sqrt

  // user prompt
  cout << "Enter a positive integer number that you want to find the square root for: ";
  num = getInt(1, 9000000, "Enter a positive integer number between 1 and 9000000: ");

  // calculate top and bottom
  for (top; top * top < num; top++) // find highest sqrt by multiplying top most by itself
    ;
  bottom = top - 1;

  // calculate which is closest
  if ((top * top - num) < (num - bottom * bottom)) // if true, top is closest
    closest = top;
  else // bottom is closest
    closest = bottom;

  // calculate square root and user output
  if (num % (int)closest == 0) // finds if the number is a perfect square
    cout << closest << " is the square root of " << num << endl;
  else // not a perfect square
    {
      cout << "Start at " << closest << endl;
      for (int count = 1; count <= 10; count++) // calculate the sqrt 10 times
	{
	  step2 = (double)num/closest; // step 2 asks to divide number by closest root
	  step3 = (double)(step2 + closest)/2; // step 3 then asks to average of the result and the root
	  closest = step3; // closest then gets updated
	}
      cout << "The square root of " << num << " is " << closest << endl;
      cout << "The square of the square root is " << closest*closest << endl;
    }
  
  cout << endl;
  return 0;
}
