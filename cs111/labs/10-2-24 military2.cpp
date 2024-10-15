/*
XXXXX - 10/2/24
CS111
military2.cpp

This program will ask the user to enter the user’s gender and age and display various messages.
*/
#include<iostream>
using namespace std;

int main()
{
  char gender; // gender
  int  age;    // age

  // user prompt
  cout << "Please enter your gender: ";
  cin >> gender;

  // calculations for unique message
  if (gender == 'M' || gender == 'm')
   {
     cout << "Please enter your age: ";
     cin >> age;

     if (0 > age || age > 130)
       cout << "Invalid age" << endl;
     else if (age <= 16)
       cout << "You need to wait " << (17 - age) << " more years." << endl;
     else if (age >= 43)
       cout << "Thank you for using the system." << endl;
     else
       cout << "The military is hiring more people like you." << endl;
   }
  else if (gender == 'F' || gender == 'f')
    cout << "Thank you for using the system, but we were only looking for men." << endl;
  else
    cout << "Invalid gender" << endl;
    
  return 0;
}
