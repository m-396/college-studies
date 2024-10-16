/*************************************
XXXXX - 10/15/24
CS111 - assignment4-2
fibonacci.cpp

This program will output a specific 
number of Fibonacci numbers depending
on user input.
*************************************/

#include<iostream>
using namespace std;

int main()
{
  // declare variables!!!
  int fib1 = 0;     // first fibonacci number
  int fib2 = 1;     // second fibonacci number
  int fibNext = 0;  // to add next number
  int userNum = 0;  // number of numbers the user wants
  
  // user prompt
  do
    {
      cout << "Enter the number of fibonacci numbers you want to see (N >= 3): ";
      cin >> userNum;
    } while (userNum < 3); // repeat until getting number >= 3

  // fibonacci output
  cout << endl;
  cout << fib1 << " " << fib2 << " "; // since hard coded, it can be excluded from the "counter" loop
  for (int counter = 3; counter <= userNum; counter++) // using the "counter" to reach the specified digits
    {
      fibNext = fib1 + fib2; // next fibonacci number takes last two numbers
      cout << fibNext << " ";
      fib1 = fib2; // after output, first fibo becomes the second fibo
      fib2 = fibNext; // after output, second fibo becomes the prrevious total, then loop repeats
    }

  cout << endl;
  cout << endl;
  return 0;
}
