#include<iostream>
using namespace std;

int main()
{
  int ogNum;
  int total = 0;

  cout << "Enter positive number: ";
  cin >> ogNum;

  if (ogNum < 1)
    cout << ogNum << " is invalid." << endl;
  else
    {
      for (int num = 1; num <= ogNum; num++)
	total += num;
      cout << "The sum of all the numbers from 1 to " << ogNum << " is " << total << "." << endl;
    }
  cout << endl;
  return 0;
}
