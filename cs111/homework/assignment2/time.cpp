/*
XXXXX
CS111
Assignment 2: time.cpp
9/20/2024

This program will simplify the user's input for how many seconds passed since midnight to hours, minutes, and seconds. 
*/

#include<iostream>
using namespace std;

int main()
{
  // declare variables for simplification
  int seconds;   // input for user's seconds
  int hours;     // how many hours
  int minutes;   // how many minutes
  int remaining; // remainder, and for remaining seconds

  // prompt for user input
  cout << "Enter the time in seconds: ";
  cin >> seconds;

  // simplify seconds to hours, minutes, and seconds
  hours     = seconds / 3600; // 3600 seconds in a hour
  remaining = seconds % 3600; // finds remaining seconds
  minutes   = remaining / 60; // 60 seconds in a minute
  remaining = remaining % 60; // remaining left to be used for seconds

  // output for user
  cout << endl;
  cout << hours << " hours " << minutes << " minutes " << remaining << " seconds" << endl;
  cout << endl;
  
  return 0;
}
