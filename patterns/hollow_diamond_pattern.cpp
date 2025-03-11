#include <iostream>
using namespace std;

// Hollow Diamond pattern with stars output
// input 4
// output:
//    *
//   * *
//  *   *
// *     *
//  *   *
//   * *
//    *

int main()
{
  int n = 4;
  // n times loop for n numbers of rows
  for (int i = 0; i < n; i++)
  {
    // step 1: spaces and one star of first step
    for (int j = n - i - 1; j > 0; j--)
    {
      cout << " ";
    }
    cout << "*";
    // step 2: print spaces and one star, skip 1 line
    if (i != 0)
    {
      for (int j = 0; j < (i * 2) - 1; j++)
      {
        cout << " ";
      }
      cout << "*";
    }
    cout << endl;
  }

  // n-1 times loop
  for (int i = n - 1; i > 0; i--)
  {
    // step 1: spaces and one star of first step
    for (int j = 0; j < n - i; j++)
    {
      cout << " ";
    }
    cout << "*";
    // step 2: print spaces and one star, skip last line
    if (i != 1)
    {
      for (int j = 0; j < (i - 1) * 2 - 1; j++)
      {
        cout << " ";
      }
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}