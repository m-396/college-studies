/*****************************************************************
CS111 - Lab
Template prepared by XXXXX XXXXX
11-1-16
Lab on 2D arrays

XXXXX - 11/8/24
2dArray.cpp
*****************************************************************/ 
#include <iostream>
#include <iomanip>
using namespace std;

// Where does the prototype for showTable() go?
//declare 2 constants for the sizes of the 2 dimensional array
const int NUM_STU = 5; // 5 columns
const int NUM_TEST = 3; // 3 rows
void showTable(const int scores[][NUM_TEST]);

int main()
{
  // declare the 2 dimensional array and initialize the array using the initialization list
  int scores[NUM_STU][NUM_TEST] = { {45, 67, 78}, {78, 88, 56}, {86, 96, 78}, {78, 77, 67}, {67, 57, 57} };

  // call showTable here
  showTable(scores);

  return 0;
}

void showTable(const int scores[][NUM_TEST])
{
  int total;

  // show the lables for the table
  cout << setw(10) << "Test#" << setw(10) << "Stu 1" << setw(10) << "Stu 2" << setw(10) << "Stu 3" << setw(10) << "Stu 4" << setw(10) << "Stu 5" << setw(10) << "Average" << endl;

  // show the table using a nested for loop here
  for (int i = 0; i < NUM_TEST; i++) // test row
    {
      cout << setw(10) << i + 1;
      
      for (int i2 = 0; i2 < NUM_STU; i2++) // student column
	{
	  cout << setw(10) << scores[i2][i];
	  total += scores[i2][i];
	}

      cout << fixed << setprecision(1);
      cout << setw(10) << (double)total/NUM_STU;
      total = 0;
      
      cout << endl;
    }
}
