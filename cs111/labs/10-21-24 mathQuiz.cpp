#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
  int num1, num2, qCount;
  int numOfCorrect = 0;
  int numOfWrong = 0;
  int answer;
  srand(time(0));

  cout << "How many questions do you want to solve?: ";
  cin >> qCount;
  cout << endl;
  
  for (int repeat = 0; repeat < qCount; repeat++)
    {
      num1 = rand() % 10;
      num2 = rand() % 10;
      cout << num1 << " + " << num2 << " = ";
      cin >> answer;
      if (answer == num1 + num2)
	{
	  cout << "        Good job" << endl;
	  numOfCorrect += 1;
	}
      else
	{
	  cout << "        Correct Answer is " << num1 + num2 << endl;
	  numOfWrong += 1;
	}
      cout << endl;
    }
  cout << "You answered " << numOfCorrect << " questions correctly and " << numOfWrong << " questions incorrectly." << endl;
  cout << endl;
  return 0;
}
