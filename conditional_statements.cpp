// create a conditional function which tells whether the input integer is odd or even 

#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "even";
    }
    else
    {
        cout << "odd";
    }
    return 0;
}

