/* Dynamic memory can also be allocated for arrays.
Dynamic memory allocation is useful in many situations, 
such as when your program depends on input. As an example, 
when your program needs to read an image file, it doesn't know in 
advance the size of the image file and the memory necessary to store the image. */

#include <iostream>
using namespace std;

int main()
{
    int *p = NULL; // Pointer initialized with null
    p = new int[20]; // Request memory
    delete [] p; // Delete array pointed to by p

    return 0;
}
