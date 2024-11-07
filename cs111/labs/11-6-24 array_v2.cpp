/*************************************
array_v2.cpp - 11/6/24
Array of integers and 3 functions. 

v2
2 more funcs and options for the array,
along with random array generator
*************************************/

// Q1: Largest moves to the end (if largest, swap current array to last)
// Q2: Ascending, since repeatedly putting largest at the end 
// Q3: Smallest moves to the end. Turn lrgIndx to smallIndex. Change if-statement to if (array[i] < array[smallIndex])

#include<iostream>
#include<cstdlib>
using namespace std;

void fillArray(int ar[], int size);
void printArray(const int ar[], int size);
void reverseArray(int ar[], int size);
int sequentialSearch(const int ar[], int size, int key);
void selectionSortAscend(int array[], int N);
void selectionSortDescend(int array[], int N);

int main()
{
  srand(time(0));
  const int SIZE = 6;
  int ar[SIZE];
  int choice;
  int key;

  do
    {
      cout << "=================" << endl;
      cout << "1: fill the array" << endl;
      cout << "2: print the array" << endl;
      cout << "3: reverse the contents of the array" << endl;
      cout << "8: selection sort - ascending" << endl;
      cout << "9: selection sort - descending" << endl;
      cout << "10: sequential search" << endl;
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
	case 8: selectionSortAscend(ar, SIZE);
	  break;
	case 9: selectionSortDescend(ar, SIZE);
	  break;
	case 10: cout << "Enter the key: ";
	  cin >> key;
	  cout << endl;
	  
	  if (sequentialSearch(ar, SIZE, key) != -1)
	    cout << key << " was found at index " << sequentialSearch(ar, SIZE, key) << endl << endl;
	  else
	    cout << key << " was not found." << endl << endl;
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
      ar[i] = rand() % 50 + 1;
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

int sequentialSearch(const int ar[], int size, int key) // we're allowed to use multiple returns in functions(?)
{
  for (int i = 0; i < size; i++)
    {
      if (key == ar[i])
	return i;
    }
  return -1;
}

// XXXXX function: this function will sort the numbers in ascending order: smallest up to largest
void selectionSortAscend(int array[], int N)
{
  int lrgIndx; //the index of the largest value
  int temp; //temporary variable that holds the largest value
  
  //last is the last index in unsorted portion
  for(int last = N-1; last >= 1; last--)
    {
      lrgIndx = 0; //assume the first item is the largest
      //find the largest in unsorted portion ([0..last])
      for(int i = 1; i <= last; i++)
	{
	  if(array[i] > array[lrgIndx]) //The current item is larger
	    lrgIndx = i;
	}
      
      //swap the largest with the last item in the unsorted portion
      temp = array[lrgIndx];
      array[lrgIndx] = array[last];
      array[last] = temp;
    }
}

void selectionSortDescend(int array[], int N)
{
  int smlIndx; // the index of the smallest value
  int temp; // temporary variable that holds the smallest value

  // last is the last index in unsorted portion of array
  for(int last = N-1; last >= 1; last--)
    {
      smlIndx = 0; // assume the first item is the smallest
      // find the largest in unsorted portion ([0 to last])
      for(int i = 1; i <= last; i++)
        {
          if(array[i] < array[smlIndx]) // The current item is smaller
            smlIndx = i;
        }

      // swap the smallest with the last item in the unsorted section of array
      temp = array[smlIndx];
      array[smlIndx] = array[last];
      array[last] = temp;
    }
}
