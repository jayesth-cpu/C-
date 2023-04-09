/* Static & Dynamic Memory


To be successful as a C++ programmer, it's essential to have a good understanding of how dynamic memory works.
In a C++ program, memory is divided into two parts:
The stack: All of your local variables take up memory from the stack.
The heap: Unused program memory that can be used when the program runs to dynamically allocate the memory.

Many times, you are not aware in advance how much memory you will need to store particular information in a defined variable and the size of required memory can be determined at run time.
You can allocate memory at run time within the heap for the variable of a given type using the new operator, which returns the address of the space allocated.

--> new int;  
This allocates the memory size necessary for storing an integer on the heap, and returns that address.      */

#include <iostream>
using namespace std;

int main()
{
    int *p = new int; // request memory
    *p = 5; // store value

    cout << *p << endl; // use value

    delete p; // free up the memory
    // now p becomes a dangling pointer
    // we can reuse p = new int;  for a new address

    return 0;
}