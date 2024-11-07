/*****************************
array.cpp - 11/4/24
Array of integers and 3 funct-
ions. 
*****************************/

#include<iostream>
using namespace std;

void fillArray(int ar[], int size);
void printArray(const int ar[], int size);
void reverseArray(int ar[], int size);

int main()
{
  const int SIZE = 6;
  int ar[SIZE];
  int choice;

  do
    {
      cout << "=================" << endl;
      cout << "1: fill the array" << endl;
      cout << "2: print the array" << endl;
      cout << "3: reverse the contents of the array" << endl;
      cout << "13: quit" << endl;
      cout << "=================" << endl;
      cout << "Enter your choice: ";
      cin >> choice;
      cout << endl;

      switch(choice)
	{
	case 1: fillArray(ar, SIZE);
	  break;
	case 2:	printArray(ar, SIZE);
	  break;
	case 3: reverseArray(ar, SIZE);
	  break;
	case 13: cout << "Thank you for using our system." << endl << endl;
	  break;
	default: cout << "Invalid choice" << endl << endl;
	}
      
    }while (choice != 13);
  
  return 0;
}

void fillArray(int ar[], int size)
{
  for (int i = 0; i < size; i++)
    {
      cout << "Enter a number: ";
      cin >> ar[i];
    }
  cout << endl;
}

void printArray(const int ar[], int size)
{
  cout << "The numbers in the array are ";
  
  for (int i = 0; i < size; i++)
    cout << ar[i] << " ";
  cout << endl << endl;
}
  
void reverseArray(int ar[], int size)
{
  int tempNum;
  
  for (int L = 0, R = size - 1; L < R; L++, R--) // size/2 can work
    {
      tempNum = ar[L];
      ar[L] = ar[R];
      ar[R] = tempNum;
    }
}
