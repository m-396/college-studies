// testMyMath.cpp (test myMath.h)

#include<iostream>
using namespace std;
#include"myMath.h" // this line has ALL lines from "myMath.h"

int main()
{
  /*
  cout << pow(2, 3) << endl;
  cout << pow(4, 2) << endl;

  int ans = pow(5, 2);
  cout << ans << endl;
  */
  
  // power func
  int base, exponent, answer;
  cout << "\nEnter the base: ";
  cin >> base;
  cout << "Enter the exponent: ";
  cin >> exponent;
  
  answer = pow(base, exponent);
  cout << "Answer is " << answer << endl;
  
  // fabs func
  double num;
  cout << "\nEnter a negative number: ";
  cin >> num;

  cout << "Positive number is " << fabs(num) << endl;

  // round func
  cout << "\nEnter a number to round: ";
  cin >> num;

  cout << "Rounded number is " << round(num) << endl;
  cout << endl;
}
