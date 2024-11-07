/****************************
Your programmer number: X
XXXXX - 11/1/24
assignment5-2 - mailOrderA.h
****************************/

#include<iostream> // outputInvoice1 uses cout
#include<iomanip>  // for setw
using namespace std;

/*************************************************************
pr is the total price of all the items the customer is buying.
mo is the month when the customer is placing an order.

This function calculates a discount amount as follows and returns it.
Month ordered: Discount on total sale amount (before tax)
Jan – May: 5%
Jun – Aug: 10%
Sep – Dec: 15%
*************************************************************/

double calcDiscount(double pr, int mo) // you may not change parameters
{
  int discount; // discount percent
  double discAmnt; // discount amount

  cout << fixed << setprecision(2); // shows two decimal places

  if (mo <= 5) // january to may, 5% discount (assuming getInt() rejects months less than 1)
    discount = 5; 
  else if (mo <= 8) // if june to august, 10% discount
    discount = 10; 
  else // if september to december, 15% discount (assuming getInt() rejects months more than 12)
    discount = 15;

  discAmnt = pr * (double)discount/100;
  
  return discAmnt;
}

/********************************************************
acc is the account number
co is the county code (uppercase S, O or L)
m is month
d is day
y is year

This function will output the top half of the invoice.
********************************************************/
void outputInvoice1(int acc, char co, int m, int d, int y) // you may not change parameters  
{
  string countyName; // full county name

  if (co == 'S') // get 'S', change countyName to San Diego
    countyName = "San Diego";
  else if (co == 'O') // change to Orange County
    countyName = "Orange County";
  else // if neither, change to Los Angeles
    countyName = "Los Angeles";

  // user output
  cout << endl;
  cout << left << setw(25) << "ACCOUNT NUMBER" << "COUNTY" << endl;
  cout << left << setw(25) << acc << countyName << endl;
  cout << endl;
  cout << "DATE OF SALE " << m << "/" << d << "/" << y << endl;
}
