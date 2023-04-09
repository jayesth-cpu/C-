/* Pointers
A pointer is a variable, with the address of another variable as its value.
In C++, pointers help make certain tasks easier to perform. Other tasks, such as dynamic memory allocation, cannot be performed without using pointers.

All pointers share the same data type - a long hexadecimal number that represents a memory address.

The only difference between pointers of different data types is the data type of the variable that the pointer points to.

Every variable is a memory location, which has its address defined.
That address can be accessed using the ampersand (&) operator (also called the address-of operator), 
which denotes an address in memory. */

#include <iostream>
using namespace std;

int main()
{
    int score = 5;
    cout << &score << endl;

    return 0;
}

// Output: '0x7ffc67a4304c'-- This outputs the memory address, which stores the variable score.