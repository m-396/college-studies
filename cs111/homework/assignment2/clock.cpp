/*
XXXXX
CS111
Assignment 2: clock.cpp
09/20/2024

This program will ask for a time in 2 inputs of
hours and minutes and convert it to angles of 
the hour and minute hands of the clock.
*/

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
  // declare variables
  int    hour;         // input for hour
  int    minute;       // input for minute
  double angleHour;    // container for hour hand angle
  double angleMinute;  // container for minute hand angle
  double remaining;    // for angles in the 24-hour format

  // input hour and minute
  cout << "Enter hours: ";
  cin >> hour;
  cout << "Enter minutes: ";
  cin >> minute;
  
  // calculate times to hand angle and ensuring angles are under 360 degrees
  angleHour   = (double)(hour * 30) + (minute * 0.5);  // thirty degrees per hour, half a degree per minute
  angleMinute = minute * 6;                            // six degrees per minute
  remaining   = fmod(angleHour, 360);                  // fmod for angleHour, calculates hour hand angles above twelve hours

  // output calculations for user
  cout << "The angle of the hour hand is : " << remaining << endl;
  cout << "The angle of the minute hand is : " << angleMinute << endl;
  cout << endl;
  
  return 0;
}
