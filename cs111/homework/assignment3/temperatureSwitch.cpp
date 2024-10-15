/*
XXXXX - 10/6/24
CS111
temperatureSwitch.cpp

This program will convert a temperature between Fahrenheit and Celsius.
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  char unit; // temperature unit
  int temp; // provided temperature
  double newTemp; // converted temperature
  string longUnit; // long form of temp. unit
  string oppoUnit; // show opposite of unit
  bool unitCheck = true; // for validity of unit

  // user prompt
  cout << "Which temperature do you have? Enter F for Fahrenheit or C for Celsius?: ";
  cin >> unit;

  // conversion of units and temperature
  switch(unit)
        { 
	case 'F':
	case 'f':
	  longUnit = "Fahrenheit";
	  oppoUnit = "Celsius";
	  cout << "Enter a temperature in " << longUnit << ": ";
	  cin >> temp;
	  newTemp = (double)(5.0/9.0 * (temp - 32));
	  break;
	  
	case 'C':
	case 'c':
	  longUnit = "Celsius";
	  oppoUnit = "Fahrenheit";
	  cout << "Enter a temperature in " << longUnit << ": ";
	  cin >> temp;
	  newTemp = (double)(9.0/5.0 * temp + 32);
	  break;
	  
	default: cout << "Invalid choice" << endl;
	  unitCheck = false;
        }

  switch(unitCheck)
    {
    case true:
      cout << temp << " " << longUnit << " = " << fixed << setprecision(2) << newTemp << " " << oppoUnit << endl;
    }
  
  cout << endl;
  return 0;
}
