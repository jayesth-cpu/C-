/* The switch statement tests a variable against a list of values, which are called 
cases, to determine whether it is equal to any of them.  */


#include <iostream>
using namespace std;

int main()
{
    int age;
    cin>>age;
    switch (age) {
        case 16:
            cout << "Too young";
            break;
        case 42:
            cout << "Adult";
            break;
        case 70:
            cout << "Senior";
            break;
    }

    return 0;
}
