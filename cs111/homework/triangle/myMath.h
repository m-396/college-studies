/*********************************
XXXXX - 11/9/24
myMath.h v2 - triangle.cpp version
*********************************/

/*******************************************
b is base
e is exponent

This function will calculate number to 
its exponent (b^e) and return the output.
*******************************************/
int pow(int b, int e)
{
  int ans = 1;

  // b^e calculation
  for (int repeat = 1; repeat <= e; repeat++)
    ans *= b;

  return ans;
}

/**************************************************
num is the given number to convert

This function will convert a negative double value 
to positive and returns it.
**************************************************/
double fabs(double num)
{
  if (num < 0)
    num *= -1;
  
  return num;
}
/*********************************************
num is the given number to round

This function will round a double value up or
down and returns the output.
*********************************************/
int round(double num)
{
  int roundNum = 0;
  roundNum = int(num + 0.5);

  return roundNum;
}

/****************************************************
num is the given number to find if its a prime or not

This function will determine if a number is a prime
number or not and returns the boolean result.
****************************************************/
bool isPrime(int num)
{
  for (int div = 2; div < num; div++)
    {
      if (num % div == 0) 
	return false;
    }
  return true;
}

/**********************************************************************************************
num is the number to square root

This function will calculate the square root of a number and return it. Taken from assignment5.
**********************************************************************************************/
double sqrt(int num)
{
  int top = 1; 
  int bottom; 
  double closest; 
  double step2, step3; 

  for (top; top * top < num; top++) 
    ;
  bottom = top - 1;

  if ((top * top - num) < (num - bottom * bottom)) 
    closest = top;
  else 
    closest = bottom;

  if (num % (int)closest != 0) 
    {
      for (int count = 1; count <= 10; count++) 
        {
          step2 = (double)num/closest; 
          step3 = (double)(step2 + closest)/2; 
          closest = step3; 
        }
    }
  
  return closest;
}
