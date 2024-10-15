/*********************************
Template written by XXXXX XXXXX
thank you prof
*********************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int num; // number
  int numCount; // number of numbers entered
  int even; // amount of evens
  int odd; // amount of odds
  int total = 0; // total amount of numbers added
  double avg; // average
  char answer; // yes or no

  // question
  do
    {
      cout << "Do you have a number to check? y or n: ";
      cin >> answer;
    } while(answer != 'Y' && answer != 'y' && answer != 'N' && answer != 'n'); // loop repeats if letters other than yes or no
  while (answer == 'Y' || answer == 'y')
    {
      //input the first number
      cout << "Enter a number: ";
      cin >> num;
      
      //To calculate the average number after the while loop, you need to do something here
      total += num;
      numCount += 1;
      
      //check if the number is even or odd
      if(num % 2 == 0)
	{
	  cout << num << " is even" << endl;
	  even += 1;
	}
      else
      {
	cout << num << " is odd" << endl;
	odd += 1;
      }
      cout << endl;
      
      //input the next number
      do
	{
	  cout << "Do you have a number to check? y or n: ";
	  cin >> answer;
	} while(answer != 'Y' && answer != 'y' && answer != 'N' && answer != 'n'); // loop repeats if letters other than yes or no
    } 
  
  //show the result
  if(numCount == 0) //The user didn't check number for even or odd. She entered a zero for the first input.
    cout << "\nNo numbers were checked" << endl; // could also do cout << endl; cout << "No number blah" << endl;
  else //The user checked at least one number for even or odd. Then go ahead show the total numbers of even and odd and average
    {
      cout << endl;
      cout << even << " even numbers" << endl;
      cout << odd << " odd numbers" << endl;
      cout << "The average is " << fixed << setprecision(2) << (double) total / numCount << endl;
    }
  cout << endl;
  return 0;
}
