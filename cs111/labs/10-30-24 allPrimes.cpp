/************************************
XXXXX - 10/28/24
CS111 - Labs
allPrimes.cpp

This program will show prime numbers
between 2 and 1000 in lines of 10.
************************************/

#include<iostream>
#include<iomanip>
#include"myMath.h"
using namespace std;

int main()
{
  int counter = 0;
  
  for (int i = 2; i <= 1000; i++)
    {
      if (isPrime(i))
	{
	  cout << right << setw(5) << i << " ";
	  counter++;
	  if (counter % 10 == 0)
	    cout << endl;
	}
    }
  
  cout << endl << endl;
  cout << "There are 168 prime numbers between 2 and 1000" << endl << endl;

  return 0;
}
