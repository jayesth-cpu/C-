
/* Pointer Operations

There are two operators for pointers:
Address-of operator (&): returns the memory address of its operand.
Contents-of (or dereference) operator (*): returns the value of the variable located at the address specified by its operand. 
*/

#include <iostream>
using namespace std;

int main()
{
    int var = 50;
    int  *p;
    p = &var;

    cout << var << endl;
    // Outputs 50 (the value of var)

    cout << p << endl;
    // Outputs 0x29fee8 (var's memory location)

    cout << *p << endl;
    /* Outputs 50 (the value of the variable
     stored in the pointer p) */

    return 0;
}

/* The asterisk (*) is used in declaring a pointer for the simple purpose of indicating that it is a pointer.
dereference operator(*),  is used to obtain the value located at the specified address */