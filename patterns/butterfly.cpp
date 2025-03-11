#include <iostream>
using namespace std;

// Hollow Diamond pattern with stars output
// input 4
// output:
// *      *
// **    **
// ***  ***
// ********
// ********
// ***  ***
// **    **
// *      *

int main()
{
  int n = 4;
  /// TOP PART : LOOP N TIMES
  for (int i = 0; i < n; i++)
  {
    // step 1: print stars
    // *
    // **
    // ***
    // ****
    for (int j = 0; j < i + 1; j++)
    {
      cout << "*";
    }

    // step 2: print spaces
    // ------    i=0 spaces=6
    //  ----     i=1 spaces=4
    //   --      i=2 spaces=2
    //           i=3 spaces=0
    if (i != n - 1)
    {
      for (int j = 0; j < (n - i - 1) * 2; j++)
      {
        cout << " ";
      }
    }
    // step 3: print stars
    //    *   i=0 star=1
    //   **   i=1 star=2
    //  ***   i=2 star=3
    // ****   i=3 star=4
    for (int j = 0; j < i + 1; j++)
    {
      cout << "*";
    }
    cout << endl;
  }

  /// BOTTOM PART : LOOP N TIMES
  for (int i = 0; i < n; i++)
  {
    // step 1: print stars
    // ****
    // ***
    // **
    // *
    for (int j = n - i; j > 0; j--)
    {
      cout << "*";
    }
    // step 2: print stars
    //
    //    --
    //   ----
    //  ------
    if (i != 0)
    {
      for (int j = 0; j < i * 2; j++)
      {
        cout << " ";
      }
    }
    // step 3: print stars
    // ****
    //  ***
    //   **
    //    *
    for (int j = n - i; j > 0; j--)
    {
      cout << "*";
    }
    cout << endl;
  }
}
