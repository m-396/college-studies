/*************************************
XXXXX - 11/1/24
CS111 - assignment5-2
mailOrder.cpp

An old "mailOrder.cpp" that tested
header files.
*************************************/

#include<iostream>
#include<iomanip>
#include"input.h" // int getInt(int min, int max, string msg), double getDouble(double min, double max, string msg), char getYN(string msg)
#include"/cs/slott/hw/63mailOrderA.h" // double calcDiscount(double pr, int mo), void outputInvoice1(int acc, char co, int m, int d, int y)
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
  
  getCustomerInfo (accNum, month, day, year, countyCode);
  getItemsInfo (totalPrice, totalWeight);
  finalDiscAmnt = calcDiscount(totalPrice, month);
  finalShipCost = calcShipping(totalWeight);
  finalSalesTax = calculateSalesTax(totalPrice, finalDiscAmnt, countyCode);
  outputInvoice1 (accNum, countyCode, month, day, year);
  outputInvoice2 (totalPrice, finalDiscAmnt, finalSalesTax, finalShipCost);
  
  return 0;
}

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
  while (countyCode != 'S' && countyCode != 'O' && countyCode != 'L')
    {
      cout << "Invalid county code. Enter uppercase S, O or L: ";
      cin >> countyCode;
    }
}

void getItemsInfo(double& totalPrice, int& totalWeight)
{
  char yn;
  double price;
  int weight;
  
  cout << "\nDo you want to order an item? Enter Y or N: ";
  yn = getYN("Invalid response. Enter Y or N: ");

  while(yn == 'Y')
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
