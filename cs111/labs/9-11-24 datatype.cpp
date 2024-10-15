/*******************************************************
XXXXX
CS111
datatype.cpp

This program will ask for Age, GPA, Gender, First name,
and Circle Radius to calculate its Area and Circumference.
 *******************************************************/

#include<iostream>
using namespace std;

int main()
{
  //declare variables for age, gpa, gender, first name, radius of circle, PI
  const double PI = 3.14;
  int    age; //whole number for user's age
  double gpa; //potential decimal for user's GPA
  char   gender; //single letter for user's gender
  string firstName; //multiple letters for user's first name
  double circleRadius; //potential decimal for user's radius of circle

  //inputting age, gpa, gender, first name, circle radius to get users info/input
  cout << "Enter your age: ";
  cin >> age;
  cout << "Enter your gpa: ";
  cin >> gpa;
  cout << "Enter your gender: ";
  cin >> gender;
  cout << "Enter your first name: ";
  cin >> firstName;
  cout << "Enter the radius of your circle: ";
  cin >> circleRadius;

  //calculate area and circumference of circle with given radius
  double circleArea = PI * circleRadius * circleRadius;
  double circleCircumference = 2 * PI * circleRadius;

  //outputs given inputs and calculations for area and circumference of circle
  cout << "Hello " << firstName << endl;
  cout << "Your age is " << age << endl;
  cout << "Your gpa is " << gpa << endl;
  cout << "Your gender is " << gender << endl;
  cout << "The area is " << circleArea << endl;
  cout << "The circumference is " << circleCircumference << endl;
  
  return 0;
}
