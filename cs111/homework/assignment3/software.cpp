/*****************************************************
XXXXX - 10/5/24
CS111
software.cpp

This program will ask for a date, the company name,
and the quantity to buy the product the company sells.
*****************************************************/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  // variables
  string date;         // purchase date
  string compName;     // company name
  int    numOfProduct; // quantity to buy
  double beforeDisc;   // price before discount
  double discAmount;   // how much the discount is
  double afterDisc;    // price after discount is added

  // user prompt
  cout << "Enter today's date (mm/dd/yy): ";
  cin >> date;
  cin.ignore(1000, '\n');
  cout << "Enter your company name: ";
  getline(cin, compName);
  cout << "Enter the quantity you would like to purchase: ";
  cin >> numOfProduct;
  cout << endl;

  // calculations and outputs
  if (numOfProduct > 0) // checks if buyer is actually buying 
    {
      beforeDisc = numOfProduct * 99.00; // before discount calculation
      if (numOfProduct < 10) // no discount when buying less than 10
	discAmount = beforeDisc * 0.00;
      else if (numOfProduct > 9 && numOfProduct < 20) // 20% discount when buying 10 to 19
	discAmount = beforeDisc * 0.20;
      else if (numOfProduct > 19 && numOfProduct < 50) // 30% discount when buying 20 to 49
	discAmount = beforeDisc * 0.30;
      else if (numOfProduct > 49 && numOfProduct < 100) // 40% discount when buying 50 to 99
	discAmount = beforeDisc * 0.40;
      else // 50% discount for 100 and above
	discAmount = beforeDisc * 0.50;

      // architecture for receipt
      afterDisc = beforeDisc - discAmount;
      cout << fixed << setprecision(2);
      cout << "Invoice for " << compName << endl;
      cout << right << setw(41) << date << endl;
      cout << endl;
      cout << left << setw(30) << "Price before discount" << "$" << right << setw(10) << beforeDisc << endl;
      cout << left << setw(30) << "Discount" << "$" << right << setw(10) << discAmount << endl;
      cout << left << setw(30) << "Total Due" << "$" << right << setw(10) << afterDisc << endl;
    }
  else if (numOfProduct == 0) // buyers wants none
    cout << "Hope you decide to buy our software in the future." << endl;
  else // any number below 0
    cout << "Invalid quantity" << endl;  

  cout << endl;
  return 0;
}
