/*****************************************************************************
This template was written by XXXXX for CS111
10-17-2018

This main tests getInt(), getDouble() and getYN() in input.h
*****************************************************************************/

/******************************
XXXXX - 10/29/24
CS111 - assignment5
testInput.cpp

This program will test input.h.
******************************/

#include <iostream>
#include "input.h" // include input.h
using namespace std;

int main()
{
  int age; // test getInt with age
  int score; // test getInt with score
  double gpa; // test getDouble with GPA
  char student; // test getYN with student

  cout << "Enter an age: ";
  age = getInt(0, 200, "An age must be between 0 and 200. Enter again: ");
  cout << "age = " << age << endl << endl;

  //Test getInt()
  //get a test score. It should be between 0 and 100.
  cout << "Enter a test score: ";
  score = getInt(0, 100, "A test score must be between 0 and 100. Enter again: ");
  cout << "score = " << score << endl << endl;

  //Test getDouble()
  //get a gpa. It should be between 0.00 and 4.00.
  cout << "Enter your gpa: ";
  gpa = getDouble(0.00, 4.00, "A GPA must be between 0.00 and 4.00. Enter again: ");
  cout << "gpa = " << gpa << endl << endl;

  //Test getYN()
  //Ask if the user is a college student. It should only accept Y, y, N or n.
  //getYN() returns Y or N only.
  cout << "Are you a college student? Enter Y or N: ";
  student = getYN("Your response must be Y or N. Enter again: ");
  cout << "ans = " << student << endl << endl;

  return 0;
}
