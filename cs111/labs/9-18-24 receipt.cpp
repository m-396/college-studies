/********************************************************************************
XXXXX
CS111
9/18/2024
receipt.cpp

This program will generate a store receipt based on given inputs by salesperson.
********************************************************************************/
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  // declare variables for store receipt
  
  const double TAX = 7.75; // sales tax rate
  string firstName;        // for salesperson first name
  string date;             // date of transaction
  string itemName;         // name of item
  double price;            // price of item
  double salesTax;         // sales tax
  double totalCost;        // total cost (price + sales tax)
  double roundSalesTax;    // rounded to two decimal points
  double roundTotalCost;   // rounded to two decimal points
  
  // input information for receipt
  cout << "Enter sales person's name: ";
  cin >> firstName;
  cout << "Enter today's date (mm/dd/yy): ";
  cin >> date;
  cout << "Enter the item name: ";
  cin >> itemName;
  cout << "Enter the price of the item: ";
  cin >> price;

  // calculate and round tax and total
  salesTax       = (double)price * (TAX / 100);             // converts tax rate to percentage, then calculates sales tax
  totalCost      = (double)price + salesTax;                // price plus sales tax
  roundSalesTax  = ((int)(salesTax * 100 + 0.5) / 100.00);  // round sales tax for output
  roundTotalCost = ((int)(totalCost * 100 + 0.5) / 100.00); // round total cost for output

  // interface
  cout << "------------------------------" << endl;
  cout << endl;
  cout << "\"Your Friendly Neighbor Store\"" << endl;
  cout << endl;
  cout << right << setw(30) << date << endl;
  cout << right << setw(30) << firstName << endl;
  cout << endl;
  cout << left << setw(20) << itemName << right << setw(10) << fixed << setprecision(2) << price << endl; // itemName at first 10 spaces to the left, then 20 spaces to the right for item price 
  cout << left << setw(20) << "Sales tax" << right << setw(10) << roundSalesTax << endl;
  cout << left << setw(20) << "Total" << right << setw(10) << roundTotalCost << endl;
  cout << endl;
  cout << "------------------------------" << endl;
  cout << "Thank you for shopping with us!" << endl;
  cout << endl;
  
  return 0;

}
