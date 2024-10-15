/*
XXXXX - 9/25/24
CS111
largest4Num.cpp

This program will find the largest of four numbers.
*/
#include<iostream>
using namespace std;

int main()
{
  // declare variables for numbers and largest
  int n1, n2, n3, n4;
  int largest;

  // user prompt
  cout << "Enter your four numbers: ";
  cin >> n1 >> n2 >> n3 >> n4;

  // find largest number
  if (n1 > n2)
    largest = n1;
  else
    largest = n2;
  if (n3 > largest)
    largest = n3;
  if (n4 > largest)
    largest = n4;

  // output for user
  cout << "The largest value is " << largest << endl;
  return 0;
}
