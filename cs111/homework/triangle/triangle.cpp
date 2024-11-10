/****************************************************************************************
XXXXX - 11/10/24
CS111 - triangle
triangle.cpp

This program will calculate and tell if a triangle is equilateral, isosceles, or scalene.
This is also an application of the pow, fabs and sqrt functions in myMath.h.
****************************************************************************************/

#include<iostream>
#include"myMath.h" // pow, fabs, sqrt
using namespace std;

// prototypes
void programIntro();
void coordsPrompt(int& x, int& y);
double lineLength(int x1, int y1, int x2, int y2);
void triangleType(double lengthA, double lengthB, double lengthC);

int main()
{
  // main() variables
  int xCoord1, xCoord2, xCoord3; // 3 x-coordinate points for triangle
  int yCoord1, yCoord2, yCoord3; // 3 y-coordinate points for triangle
  double sideA, sideB, sideC; // store lengths of the sides

  // function for introduction of what the program does
  programIntro();

  // obtain user's triangle coordinates
  cout << "Point 1" << endl;
  coordsPrompt(xCoord1, yCoord1);
  cout << "Point 2" << endl;
  coordsPrompt(xCoord2, yCoord2);
  cout << "Point 3" << endl;
  coordsPrompt(xCoord3, yCoord3);

  // calcualte the triangle sides using given coords
  sideA = lineLength(xCoord1, yCoord1, xCoord2, yCoord2);
  sideB = lineLength(xCoord2, yCoord2, xCoord3, yCoord3);
  sideC = lineLength(xCoord3, yCoord3, xCoord1, yCoord1);

  // send calculated lengths to determine triangle type

  cout << "\nA: " << sideA << " B: " << sideB << " C: " << sideC << endl;
  
  triangleType(sideA, sideB, sideC);
  
  return 0;
}

/**********************************************************************
This program will output the program information as the program starts.
It will not continue until ENTER is pressed.
**********************************************************************/
void programIntro()
{
  // output info
  cout << endl;
  for (int i = 1; i <= 63; i++) // 63 stars as given in pdf
    cout << "*";

  cout << "\nThis program will ask you to enter 3 points of a triangle and";
  cout << "\ntell what kind of triangle it is. Please hit ENTER to continue." << endl;

  for (int i = 1; i <= 63; i++) // 63 stars to complete the intro
    cout << "*";
  cout << endl;
  
  cin.ignore(1000, '\n');
}

/****************************************************************************************
x is the x-coordinate for one point of the triangle.
y is the y-coordinate for one point of the triangle.

This program will ask the user to enter x and y-coordinates of one point in the triangle.
****************************************************************************************/
void coordsPrompt(int& x, int& y)
{
  cout << "\tEnter the x-coordinate: ";
  cin >> x;
  cout << "\tEnter the y-coordinate: ";
  cin >> y;

  cout << endl;
}

/****************************************************************************************
x1 is the first x-coordinate for one point of the triangle.
y1 is the first y-coordinate for one point of the triangle.
x2 is the second x-coordinate for another point.
y2 is the second y-coordinate for another point.

This program will calculate the length between two points, which then returns the length.
****************************************************************************************/
double lineLength(int x1, int y1, int x2, int y2)
{
  double length;
  length = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
  return length;
} 

/**********************************************************************************************************
lengthA, lengthB, and lengthC are all individual sides of a triangle calculated by the lineLength function.

This program will determine the type of triangle with the given lengths of its sides and outputs the type.
**********************************************************************************************************/
void triangleType(double lengthA, double lengthB, double lengthC)
{
  string type;
  
  if (fabs(lengthA - lengthB) < 0.00001 && fabs(lengthB - lengthC) < 0.00001) 
    type = "equilateral";
  else if (fabs(lengthA - lengthB) > 0.00001 && fabs(lengthB - lengthC) > 0.00001 && fabs(lengthC - lengthA) > 0.00001)
    type = "scalene";
  else
    type = "isosceles";

  cout << "\nThis triangle is " << type << endl << endl;
} 
