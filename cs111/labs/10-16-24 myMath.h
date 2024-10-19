/*******************************************
b is base
e is exponent
This function will calculate number to 
its exponent (b^e) and return the output.
*******************************************/

int pow(int base, int exponent)
{
  int ans = 1;

  // b^e calculation
  for (int repeat = 1; repeat <= exponent; repeat++)
    ans *= base;

  return ans;
}

double fabs(double num)
{
  // convert negative to positive
  if (num < 0)
    num *= -1;
  
  return num;
}

int round(double num)
{
  // round number using typecast and 0.5
  int roundNum = 0;
  roundNum = int(num + 0.5);

  return roundNum;
}
