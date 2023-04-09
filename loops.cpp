/*  Unlike for and while loops, which test the loop condition at the top of the loop, the do...while loop checks its condition at the bottom of the loop.
    A do...while loop is similar to a while loop. The one difference is that the do...while loop is guaranteed to execute at least one time.
    Syntax:
    do {
    statement(s);
    } while (condition);  
    this Do-While loop always executes the first condition in Do and then 
    checks forbwhile condition if it is true then it will execute further or will terminate. */

#include <iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;
    do {
        cout << a << endl;
        a++;
    } while(a < 5);

    return 0;
}