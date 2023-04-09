// two dimentional arrays
/* Multi-dimensional arrays may be initialized by specifying bracketed values for each row.
Following is an array with 2 rows and 3 columns:
int x[2][3] = {
  {2, 3, 4}, // 1st row
  {8, 9, 10} // 2nd row
};
CPP
You can also write the same initialization using just one row.
int x[2][3] = {{2, 3, 4}, {8, 9, 10}}; */ 
// The elements are accessed by using the row index and column index of the array.

#include <iostream>
using namespace std;

int main()
{
    int x[2][3] = {{2, 3, 4}, {8, 9, 10}};
    cout << x[0][2] << endl;

    return 0;
}
/* in place of int you can also use double, float or string(for an array of strings) to define the
 type of your array. */