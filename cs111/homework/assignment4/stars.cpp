/**************************
XXXXX - 10/11/24
CS111
stars.cpp

This program will show
exact rows of cascading 
stars depending on the 
users number.
**************************/

#include<iostream>
using namespace std;

int main()
{
  int numRow = 0; // number of rows
  int ogNum = 0; // original number of rows

  // user prompt
  cout << "Enter the number of rows: ";
  cin >> numRow;
  ogNum = numRow; // "ogNum" will be used to output the number of stars
  
  // calculations
  if (numRow < 1) // if user inputs any number below 1
    cout << "This program works for n >= 1 only." << endl; // invalid number
  else // "numRow" is >= 1
    {
      for (numRow; numRow >= 1; numRow--) // for "numRow", run as long as "numRow" is more than or equal to 1, and subtract one from "numRow" after each loop
	{
	  for (int space = numRow; space >= 2; space--) // "space" is equal to "numRow", so run as long as "space" is more than or equal to 2, and subtract one from "space" after each loop
	    cout << " ";
	  
	  for (int star = ogNum; star >= numRow; star--) // "star" is equal to "ogNum", and run as long as "star" is more than or equal to "numRow", and subtract one from "star" after each loop
	    cout << "*"; 

	  cout << endl;
	}
    }

  cout << endl;
  return 0;
}
