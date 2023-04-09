/* A pointer is a variable, and like any other variable, it must be declared before you can work with it.
The asterisk sign is used to declare a pointer (the same asterisk that you use for multiplication), however, in this statement the asterisk is being used to designate a variable as a pointer.
Following are valid pointer declarations:

int *ip;  // pointer to an integer
double *dp;   // pointer to a double
float *fp;  // pointer to a float
char *ch;  // pointer to a character

The asterisk is used to designate a variable as a pointer.
Just like with variables, we give the pointers a name and define the type, to which the pointer points to.
The asterisk sign can be placed next to the data type, or the variable name, or in the middle.  */ 

#include <iostream>
using namespace std;

int main()
{
    int score = 5;
    int *scorePtr;
    scorePtr = &score;
// & is used to define which variable you want the location of.
    cout << scorePtr << endl;

    return 0;
}

