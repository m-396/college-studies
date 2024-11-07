/*************************************
XXXXX - 11/5/24
CS111 - assignment5-2
mailOrder.cpp

The program reads from the keyboard the customer’s account number, the date of sale (m/d/y), the county
code (S/O/L). It also reads the prices and weights of all items the customer is buying. It then creates
an invoice containing all obtained information along with the full name of the county.
*************************************/

#include<iostream>
#include<iomanip>
#include"input.h" // int getInt(int min, int max, string msg), double getDouble(double min, double max, string msg), char getYN(string msg)
#include"/cs/slott/hw/7mailOrderA.h" // double calcDiscount(double pr, int mo), void outputInvoice1(int acc, char co, int m, int d, int y)
#include"/cs/slott/hw/62mailOrderB.h" // double calcShipping(int tw), void outputInvoice2(double total, double disc, double tax, double ship)
#include"/cs/slott/hw/mailOrderC.h" // double calculateSalesTax(double total, double disc, char co)
using namespace std;

// mailOrder prototypes
void getCustomerInfo(int& accNum, int& month, int& day, int& year, char& countyCode); 
void getItemsInfo(double& totalPrice, int& totalWeight); 

int main()
{
  // getCustomerInfo variables
  int accNum; // account number
  int month; // customer month
  int day; // customer day
  int year; // customer year
  char countyCode; // county code

  // getItemsInfo variables
  double totalPrice = 0; // total price for each time getItemsInfo is ran
  int totalWeight = 0; // total weight for each time getItemsInfo is ran

  // outputInvoice variables
  double finalDiscAmnt; // final discount amount from calcDiscount
  double finalShipCost; // final ship cost from calcShipping 
  double finalSalesTax; // final sales tax from calculateSalesTax 

  // functions from headers and below
  getCustomerInfo (accNum, month, day, year, countyCode);
  getItemsInfo (totalPrice, totalWeight);
  finalDiscAmnt = calcDiscount(totalPrice, month);
  finalShipCost = calcShipping(totalWeight);
  finalSalesTax = calculateSalesTax(totalPrice, finalDiscAmnt, countyCode);
  outputInvoice1 (accNum, countyCode, month, day, year);
  outputInvoice2 (totalPrice, finalDiscAmnt, finalSalesTax, finalShipCost);
  
  return 0;
}

/*************************************************************************
accNum - gets users account number
month - month of purchase
day - day of purchase
year - year of purchase
countyCode - county code that changes to full name

This function obtains the user's account number, the date of purchase, and county code.
Most of the information will be used to calculate the overall price.
All of it will be used for the invoice.
*************************************************************************/

void getCustomerInfo(int& accNum, int& month, int& day, int& year, char& countyCode)
{
  cout << "Enter an account number: ";
  accNum = getInt(1000, 9999, "An account number must be 1000 - 9999. Enter again: ");

  cout << "\nEnter a month: ";
  month = getInt(1, 12, "A month must be 1 - 12. Enter again: ");

  cout << "\nEnter a day: ";
  day = getInt(1, 31, "A day must be 1 - 31. Enter again: ");

  cout << "\nEnter a year: ";
  year = getInt(2000, 2100, "A year must be 2000 - 2100. Enter again: ");

  cout << "\nEnter a county code. Enter S, O or L: ";
  cin >> countyCode;
  while (countyCode != 'S' && countyCode != 'O' && countyCode != 'L') // while not uppercase S, O, or L, keep saying invalid message
    {
      cout << "Invalid county code. Enter uppercase S, O or L: ";
      cin >> countyCode;
    }
}

/****************************************************************
totalPrice - total price after obtaining all given item prices
totalWeight - total weight after obtaining all given item weight

This function obtains the total price and weight of all the items
from the user's item's prices and weights. 
****************************************************************/

void getItemsInfo(double& totalPrice, int& totalWeight)
{
  // local variables
  char yn; // user says yes or no
  double price; // item price
  int weight; // item weight
  
  cout << "\nDo you want to order an item? Enter Y or N: ";
  yn = getYN("Invalid response. Enter Y or N: ");

  while(yn == 'Y') // loop runs as long as user says yes, and ends when saying no.
    {
      cout << "\n\tEnter a price: ";
      cout << fixed << setprecision(2);
      price = getDouble(0.00, 999.99, "\tA price must be between 0.00 and 999.99. Enter again: ");
      totalPrice += price;
	
      cout << "\n\tEnter a weight: ";
      weight = getInt(0, 99, "\tA weight must be between 0 and 99. Enter again: ");
      totalWeight += weight;

      cout << "\nDo you want to order another item? Enter Y or N: ";
      yn = getYN("Invalid response. Enter Y or N: ");
    }
}
