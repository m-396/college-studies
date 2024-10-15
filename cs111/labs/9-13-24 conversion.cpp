/***************************************************************************
XXXXX 9/13/24
CS111
conversion.cpp

This program will convert a length in centimeters to yards, feet, and inches.
****************************************************************************/
#include <iostream>
using namespace std;

int main()
{
  // variables for converting units
  const double CM_INCH   = 2.54; // 2.54cm = 1 inches conversion
  const int    INCH_YARD = 36;   // 36inch = 1 yard conversion
  const int    INCH_FEET = 12;   // 12inch = 1 foot
  int          cm;               // centimeter declaration
  double       inch;             // inches declaration after conversion of centimeter
  int          roundInch;        // inches calculated rounded to nearest integer
  int          mYard;            // yard conversion after modulus
  int          mFeet;            // feet conversion after modulus
  int          mInch;            // inch conversion after modulus
  int          change;           // difference after each modulus conversion

  // description for user
  cout << endl;
  cout << "*****************************************************************************" << endl;
  cout << "This program will convert a length in centimeters to yards, feet, and inches." << endl;
  cout << "*****************************************************************************" << endl;
  cout << endl;

  // prompt for inputting user's centimeter length
  cout << "Please enter a length in centimeters: ";
  cin >> cm;
  cout << endl;

  // calculate conversion of centimeter to inches. simplifying inches to yard, feet, and remaining inch
  inch      = cm / CM_INCH;
  roundInch = (double)inch + 0.5;
  
  mYard     = roundInch / INCH_YARD; // from total inch to yard
  change    = roundInch % INCH_YARD; // calculate difference
  mFeet     = change / INCH_FEET;    // leftover inch to feet
  mInch     = change % INCH_FEET;    // remaining inches

  // output calculations
  cout << cm << "cm is about " << inch << " inches rounded to " << roundInch << " inches." << endl;
  cout << roundInch << " inches = " << mYard << " yards, " << mFeet << " feet, and " << mInch << " inches." << endl;
  cout << endl;
  cout << "Thank you for using the program. Goodbye." << endl;
  cout << endl;
  
  return 0;
}
