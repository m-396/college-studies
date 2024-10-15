/*
XXXXX - 9/27/24
CS111
grade.cpp

This program will ask for a grade
from A to F and display unique
messages depending on the grade.
*/

#include<iostream>
using namespace std;

int main()
{
  // declare variables
  char grade;   // declare for letter grade
  bool pass;    // if pass is true, false
  pass = false; // default for pass

  // user prompt
  cout << "Enter a letter grade from A to F. " << endl;
  cin >> grade;

  // check letter grade for output
  if (grade == 'A' || grade == 'B')
    {
      cout << "Good job" << endl;
      pass = true;
    }
  else if (grade == 'C')
    {
      cout << "OK" << endl;
      pass = true;
    }
  else if (grade == 'D' || grade == 'F')
    cout << "Work harder" << endl;
  else
    cout << "Invalid grade" << endl;

  // congratulation message if passing
  if (pass == true)
    cout << "Congratulations! You passed the class." << endl;
  
  return 0;
}
