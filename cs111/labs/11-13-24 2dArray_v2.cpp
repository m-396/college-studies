/*****************************************************************
CS111 - Lab
Template prepared by XXXXX XXXXX
11-1-16
Lab on 2D arrays

XXXXX - 11/13/24
2dArray_v2.cpp: fill array manually with 
new student test score average row
*****************************************************************/ 
#include <iostream>
#include <iomanip>
using namespace std;

// Where does the prototype for showTable() go?
// declare 2 constants for the sizes of the 2 dimensional array
const int NUM_STU = 5; // 5 columns
const int NUM_TEST = 3; // 3 rows
void showTable(const int scores[][NUM_TEST]);
void fillArray(int scores[][NUM_TEST]);

int main()
{
  // declare the 2 dimensional array
  int scores[NUM_STU][NUM_TEST];

  // fill array
  fillArray(scores);
  
  // call showTable here
  showTable(scores);

  return 0;
}

void showTable(const int scores[][NUM_TEST])
{
  int total = 0;

  // show the lables for the table
  cout << setw(10) << "Test#" << setw(10) << "Stu 1" << setw(10) << "Stu 2" << setw(10) << "Stu 3" << setw(10) << "Stu 4" << setw(10) << "Stu 5" << setw(10) << "Average" << endl;

  // show the table using a nested for loop here
  for (int test = 0; test < NUM_TEST; test++) // test row
    {
      cout << setw(10) << test + 1;
      
      for (int student = 0; student < NUM_STU; student++) // student column
	{
	  cout << setw(10) << scores[student][test];
	  total += scores[student][test];
	}

      cout << fixed << setprecision(1);
      cout << setw(10) << (double)total/NUM_STU;
      total = 0;
      
      cout << endl;
    }

  // new row for student test score average
  cout << setw(10) << "Average";
  for (int student = 0; student < NUM_STU; student++) // student column
    {
      for (int test = 0; test < NUM_TEST; test++) // test row
	{
	  total += scores[student][test];
	}

      cout << fixed << setprecision(1);
      cout << setw(10) << (double)total/NUM_TEST;
      total = 0;
    }
  cout << endl << endl;
}

void fillArray(int scores[][NUM_TEST])
{
  for (int test = 0; test < NUM_TEST; test++)
    {
      cout << "Enter scores for Test #" << test + 1 << endl;
      for (int student = 0; student < NUM_STU; student++)
	{
	  cout << "\tStudent #" << student + 1 << ": ";
	  cin >> scores[student][test];
	}
      cout << endl;
    }
}
