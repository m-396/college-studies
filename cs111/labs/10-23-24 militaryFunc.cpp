#include<iostream>
using namespace std;

void showProgInfo();
void getInfo(string& name, char& gender, int& age);
bool verifyEligibility(char gender, int age);
void printLetter(string name, bool eligible);

int main()
{
  string name;
  char gender;
  int age;
  bool eligible;
  
  showProgInfo();
  getInfo(name, gender, age);
  eligible = verifyEligibility(gender, age);
  printLetter(name, eligible);
  
  return 0;
}

void showProgInfo()
{
  cout << "\n********************************************************************" << endl;
  cout << "This program will tell you if you are eligible to join the military." << endl;
  cout << "********************************************************************" << endl << endl;
}

void getInfo(string& name, char& gender, int& age)
{
  cout << "Enter first name: ";
  cin >> name;
  cout << "Enter gender: ";
  cin >> gender;
  cout << "Enter age: ";
  cin >> age;
  cout << endl;
}

bool verifyEligibility(char gender, int age)
{
  bool eligible = true;

  if (gender == 'F' || gender == 'f' || age < 18)
    eligible = false;
    
  return eligible;
}

void printLetter(string name, bool eligible)
{
  if(eligible)
    cout << "Dear " << name << ", please consider joining the military." << endl;
  else
    cout << "Thank you for applying." << endl;
  cout << endl;
}

