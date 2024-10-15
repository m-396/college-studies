/**************************
XXXXX - 10/11/24
CS111
asciiTable.cpp

This program will display
the characters for ASCII
values 35 to 126.
**************************/

#include<iostream>
using namespace std;

int main()
{
  int counter = 0; // for displaying 14 characters per line
  
  for (int ascii = 35; ascii <= 126; ascii += 1) // for ascii characters 35 to 126
    {
      // output ascii character
      cout << char(ascii) << " "; // typecast char to int value "ascii" to output the character

      // counter to ensure 14 characters per line
      counter += 1;
      if (counter == 14) // once counter equals 14, new line
	{
	  cout << endl;
	  counter = 0; // reset counter
	}
    }
  
  cout << endl;
  return 0;
}
