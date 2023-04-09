// array calculations
// here we've to find out the sum of the array elements
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1,10,100,1000,10000,100000};
    int sum = 0; 

    for (int x = 0; x < 5; x++) {
        sum += arr[x];
    }

    cout << sum << endl;

    return 0;
}
