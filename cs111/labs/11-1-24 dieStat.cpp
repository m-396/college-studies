#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;

int main()
{
  srand(time(0));
  const int sides = 6;
  const int rollAmnt = 1000;
  int numRolled;

  // declare an array that will contain counters
  int ar[sides + 1]; // dont use slot 0. use 1 to 6
  
  // initialize the array
  for (int i = 1; i <= sides; i++)
    ar[i] = 0;
    
  // roll die rollAmnt times
  for (int i = 1; i <= rollAmnt; i++)
    {
      numRolled = (rand() % 6 + 1);
      ar[numRolled]++; 
    }
  
  // show whats in array
  for (int i = 1; i <= 6; i++)
    cout << i << ":" << setw(8) << ar[i] << setw(10) << (double (ar[i])/rollAmnt) * 100 << " %" << endl;

  return 0;
}
