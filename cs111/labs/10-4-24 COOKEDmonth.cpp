/*
XXXXX - 10/4/24
CS111
COOKEDmonth.cpp

This program will ask for any month and tell how many days it has.
*/

#include<iostream>
using namespace std;

int main()
{
  int  mo;      // month
  int  year;    // for february
  bool validMo; // checks month validity
  
  cout << "Enter a month: ";
  cin >> mo;
  validMo = (mo >= 1 && mo <= 12) ? true : false;

  switch(validMo)
    {
    case(true):
      switch(mo)
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
	  {
	    cin >> year;
	    switch(year % 4)
	      {
	      case 0: cout << "There are 29 days" << endl;
		break;
	      default: cout << "There are 28 days" << endl;
		break;
		// cout << ( (year % 4) ? "There are 29 days" : "There are 28 days" ) << endl;
	      }
	  }
	}
      default: cout << "Invalid month" << endl;
    }
  return 0;
}
