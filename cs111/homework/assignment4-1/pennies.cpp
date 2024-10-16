/**************************
XXXXX - 10/15/24
CS111 - ABET
pennies.cpp

This program will determine 
pay depending on days 
planned to work. 
**************************/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  int    days = 0;      // days planned to work
  double payCol = 0.01; // pay column and firstst day penny
  double total = 0;     // total after calculating all days
  
  // worker prompt
  cout << "Enter how many days you plan to work: ";
  cin >> days;
  
  // worker outputs depending on day input
  if (days < 0 || days > 31) // if outside calendar days, invalid
    cout << days << " is invalid. Thank you for using the system." << endl;
  else if (days == 0) // if working no days, no pay
    cout << "Sorry, you will not be receiving any pay for the month." << endl;
  else // valid amount of days (zero to thirty-one)
    {
      // table setup for a nicely formatted table
      cout << endl;
      cout << setw(10) << "Day" << setw(15) << "Pay" << endl;
      for (int topDashRow = 0; topDashRow <= 25; topDashRow++)
	cout << "=";
      cout << endl;
      
      // pay calculation
      for (int dayCol = 1; dayCol <= days; dayCol++) // run until the column for days reaches the input of days
	{
	  cout << setw(10) << dayCol << setw(15) << fixed << setprecision(2) << payCol << endl; // output days and pay per each row
	  total += payCol; // adds day pay to total
	  payCol = (payCol * 2); // doubles pay column for next loop
	}

      // end of table setup
      for (int bottomDashRow = 0; bottomDashRow <= 25; bottomDashRow++)
        cout << "=";
      cout << endl;

      // worker output for total pay
      if (days == 1)
	cout << "You would have earned $" << total << " after " << days << " day." << endl;
      else
	cout << "You would have earned $" << total << " after " << days << " days." << endl;
    }
    
  cout << endl;
  return 0;
}
