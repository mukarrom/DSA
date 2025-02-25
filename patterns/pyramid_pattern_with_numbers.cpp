#include <iostream>
using namespace std;

// Pyramid pattern with numbers output
// input 4
// output:
//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1
int main()
{
  int n = 4;
  // loop to create n lines
  for (int i = 0; i < n; i++)
  {
    // loop to create starting spaces
    for (int j = 1; j < n - i; j++)
    {
      cout << "  ";
    }
    // loop to create tryangle numbers
    for (int j = 0; j < i + 1; j++)
    {
      cout << j + 1 << " ";
    }
    // loop to create second part of tryangle numbers
    for (int j = i; j > 0; j--)
    {
      cout << j << " ";
    }
    cout << endl;
  }
  return 0;
}
