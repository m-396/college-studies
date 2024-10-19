/*********************************
XXXXX - 10/16/24
CS111 - assignment4-2
ages.cpp

This program will ask for ages and
provide statistics on average,
number of minors, adults, and
the youngest and oldest age.
*********************************/

#include<iostream>
using namespace std;

int main()
{
  // declare variables
  int age = 0; // input for age
  int numOfAges = 0; // count for ages entered
  int total = 0; // all ages added together
  int minors = 0; // count for minors (17 and below)
  int adults = 0; // count for adults (18 and up)
  int oldest = -999; // oldest age
  int youngest = 999; // youngest age

  do
    {
      cout << "Enter an age: ";
      cin >> age;
      if (age >= 0) // go to loop if age is valid (>= 0)
	{
	  total += age; // add age to total
	  numOfAges += 1; // add 1 to age count
	  if (age > oldest) // if age is more than oldest, set age as oldest
	    oldest = age;
	  if (age < youngest) // if age is less than youngest, set age as youngest
	    youngest = age;
	  if (age >= 18) // if >= 18, add an adult
	    adults += 1;
	  else // if not >= 18 (17 and less), add a minor
	    minors += 1;
	}
    } while (age >= 0); // loop this until a negative age is input by user

  if (numOfAges != 0) // if ages were entered
    {
      cout << endl;
      cout << (double)total/numOfAges << " (average)" << endl;
      cout << minors << " (minors)" << endl;
      cout << adults << " (adults)" << endl;
      cout << oldest << " (oldest)" << endl;
      cout << youngest << " (youngest)" << endl;
    }
  else // if no ages were entered
    cout << "\nNo ages were entered" << endl;
      
  cout << endl;
  return 0;
}

  
