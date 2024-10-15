/*
XXXXX - 10/5/24
CS111
electricBill.cpp

This program will ask for the user's name and calculate power consumption and the cost.
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  // variables
  string name; // first name of user
  int month; // month of usage
  int currentRead; // current meter reading
  int previousRead; // previous meter reading
  double diffRead; // difference in reading
  double over400; // subtraction of 400 for readings above 400
  double elecBill; // electric bill

  // user prompt
  cout << "Enter your first name: ";
  cin >> name;
  cout << endl;
  cin.ignore(1000, '\n');
  cout << "Welcome, " << name << "!" << endl;
  cout << "This program will ask for the month and current and previous meter readings then calculate your electric bill. Please press \"ENTER\" to continue." << endl;
  cin.get();
  cout << "Enter the month: ";
  cin >> month;

  // calculations and outputs
  if (month < 1 || month > 12) // checks if less than 1 or more than 12 for validity
    cout << month << " is an invalid month" << endl;
  else // month is valid (between 1 to 12)
    {
      // user prompts continued
      cout << "Enter the current meter reading: ";
      cin >> currentRead;
      cout << "Enter the previous meter reading: ";
      cin >> previousRead;

      // calculations
      diffRead = currentRead - previousRead;
      if (currentRead < 0 || previousRead < 0 || diffRead < 0) // checks for negative readings, causing invalidity
	cout << "The readings are invalid" << endl;
      else // readings and differential are valid
	{
	  over400 = diffRead - 400; // takes the amount over 400
	  if (diffRead >= 0 && diffRead <= 400) // flat rate for readings 0 to 400 kwh
	    elecBill = 8.50;
	  else if (month >= 5 && month <= 9) // for months may to september, this rate is used
	    elecBill = 8.50 + over400 * 0.07525;
	  else if (month <= 4 || month >= 10) // for months october to april, this rate is used
	    elecBill = 8.50 + over400 * 0.06575;

	  // output for user
	  cout << endl;
	  cout << "You consumed " << diffRead << " KWH and your amount due is $" << fixed << setprecision(2) << elecBill << endl;
	}
    }
  
  cout << endl;
  return 0;
}
