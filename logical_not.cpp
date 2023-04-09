// Logical Not operator

#include <iostream>
using namespace std;

int main()
{
    int age = 10;
    if ( !(age > 16) ) {
        cout << "Your age is less than 16" << endl;
    }

    return 0;
}

/*  according to the condition the 'if' statement should not be executed because the age is 
less than 16, it should have been graeter than 16 to execute 'cout'.
here the '!' operator makes the if codition false, therefore it prints opposite of the false 
condition. */
