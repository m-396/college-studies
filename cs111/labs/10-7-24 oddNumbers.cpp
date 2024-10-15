/*
XXXXX - 10/7/24
CS111 - Lab
oddNumbers.cpp

From 99 to 1, this program will display odd numbers, its square, and its triple.
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  int num = 99; // problem wants to start at 99
  int square; // double of num
  int cube; // triple of num
  
  cout << right << setw(10) << "Number" << right << setw(10) << "Double" << right << setw(10) << "Triple" << endl;

  // loop runs until num is not >= 1, starting from 99 subtracting by 2
  for (num = 99; num >= 1; num = num - 2)
    {
      // calculations
      square = num * 2;
      cube = num * 3;

      // num and double and triple
      cout << right << setw(10) << num;
      cout << right << setw(10) << square;
      cout << right << setw(10) << cube;

      cout << endl; 
    }
  
  return 0;
}
