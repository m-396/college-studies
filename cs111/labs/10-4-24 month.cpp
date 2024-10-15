/*
XXXXX - 10/4/24
CS111
month.cpp

This program will ask for any month and tell how many days it has.
*/

#include<iostream>
using namespace std;

int main()
{
  int  month;    // month
  int  year;     // for february
  bool leapYear; // used for different days in february

  cout << "Enter a month: ";
  cin >> month;

  switch(month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12: cout << "There are 31 days" << endl;
      break;

    case 4:
    case 6:
    case 9:
    case 11: cout << "There are 30 days" << endl;
      break;

    case 2: cout << "Enter your year: ";
            cin >> year;
	    leapYear = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
	    // leap year is true if either the year is divisible by 400, or by 4 and dividing by 100 is not equal to 0
	    (leapYear == true) ? cout << "There are 29 days" : cout << "There are 28 days";
	    cout << endl;
	    break;
      
    default: cout << "Invalid month" << endl;
    }
  return 0;
}
