#include <iostream>
using namespace std;

// Some of digits
// like given num is 1234
// output is : 10

int somOfDigits(int num)
{
  int sumDigits = 0;
  while (num > 0)
  {
    int lastNum = num % 10;
    num /= 10;
    sumDigits += lastNum;
  }
  return sumDigits;
}

int main()
{
  cout << "total sum of digits is: " << somOfDigits(4850) << endl;
  return 0;
}