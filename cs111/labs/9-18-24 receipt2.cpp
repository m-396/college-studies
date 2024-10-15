/********************************************************************************
XXXXX
CS111
9/18/2024
receipt2.cpp

This program will generate a store receipt based on given inputs by salesperson.
v2 - adds description for user and adding "press enter" to continue.
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
  char   ch;               // for pressing enter after program info
  
  // program description and continuation after pressing enter
  cout << endl;
  cout << "This program will ask you for today's date, the sales person's name, item name and price. It will ";
  cout << "then show the store receipt including the sales tax and total purchase price. When you are ready, ";
  cout << "press enter to continue the program. ";
  cout << endl;
  cin.get(ch);

  // prompt to input information for receipt
  cout << "Enter today's date (mm/dd/yy): ";
  cin >> date;
  cin.ignore(1000, '\n');
  cout << "Enter sales person's name: ";
  getline(cin, firstName);
  cout << "Enter the item name: ";
  getline(cin, itemName);
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
  cout << left << setw(20) << itemName << right << setw(10) << fixed << setprecision(2) << price << endl; 
  cout << left << setw(20) << "Sales tax" << right << setw(10) << roundSalesTax << endl;
  cout << left << setw(20) << "Total" << right << setw(10) << roundTotalCost << endl;
  cout << endl;
  cout << "------------------------------" << endl;
  cout << "Thank you for shopping with us!" << endl;
  cout << endl;
  
  return 0;
}