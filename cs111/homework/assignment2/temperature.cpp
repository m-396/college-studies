/*
XXXXX
CS111
Assignment 2: temperature.cpp
9/20/2024

This program will ask for a Celcius temperature and convert it to Fahrenheit, then rounding it to the nearest integer (whole number).
*/

#include<iostream>
using namespace std;

int main()
{
  // declare variables
  int    celsius;         // degrees in celsius
  int    fahrenheit;      // for after conversion of celcius
    
  // ask user for celcius
  cout << "Enter a temperature in Celsius: ";
  cin >> celsius;

  // convert celcius to fahrenheit and rounding
  fahrenheit      = (double)(9.0/5.0 * celsius + 32) + 0.5; // double ensures decimal, 0.5 to round up

  // output calculations for user  
  cout << endl;
  cout << celsius << " C = " << fahrenheit << " F" << endl;
  cout << endl;
  
  return 0;
}
