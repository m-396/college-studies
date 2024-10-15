/*
XXXXX - 10/7/24
CS111
sumFrom1.cpp

This program will ask for a positive number and all the numbers between together.
*/

#include<iostream>
using namespace std;

int main()
{
  int ogNum;     // original number
  int num = 1;   // calculating the sum of between
  int total = 0; // total after adding all together
  
  cout << "Enter a positive number: ";
  cin >> ogNum;
  //ogNum = num;

  if (ogNum <= 0)
    cout << ogNum << " is invalid." << endl;
  else
    {
      for(num; num <= ogNum; num++)
	total += num;
      cout << "The sum of all the numbers from 1 to " << ogNum << " is " << total << "." << endl;
    }
  cout << endl;
  return 0;
}
