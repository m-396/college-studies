/******************************
XXXXX - 10/18/24
CS111 - Lab: Bunch-of-Functions
largestFunc.cpp
******************************/

#include<iostream>
using namespace std;

int num1, num2, num3;
int largest;

void showProgInfo();
int getNum();
int findLargest(int num1, int num2, int num3);
void printResult();

int main()
{
  showProgInfo();
  num1 = getNum();
  num2 = getNum();
  num3 = getNum();
  findLargest(num1, num2, num3);
  printResult();
  
  return 0;
}

void showProgInfo() //void because we are not returning an answer
{
  cout << "******************************************************************" << endl;
  cout << "This program will ask you to enter 3 numbers and find the largest." << endl;
  cout << "******************************************************************" << endl;
}

int getNum()
{
  int num;

  cout << "Enter a positive number: ";
  cin >> num;

  while (num < 1)
    {
      cout << num << " is invalid. Enter a positive number: ";
      cin >> num;
    }
  
  return num;
}

int findLargest (int num1, int num2, int num3)
{
  if (num1 > num2)
    largest = num1;
  else
    largest = num2;

  if (num3 > largest)
    largest = num3;
  
  return largest;
}

void printResult()
{
  cout << "The largest number among " << num1 << ", " << num2 << " and " << num3 << " is " << largest << "." << endl;
}
