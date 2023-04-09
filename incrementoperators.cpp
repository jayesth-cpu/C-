/*A robot can type 300 letters per minute.
The given program takes the text input time (in minutes).

Task
Complete the code to calculate and output the number of letters that will be typed in a given time.

Sample Input
20

Sample Output
6000 */

#include <iostream>
using namespace std;

int main() {
        int count = 300; // letter in a minute
        int time;
        cin >> time;
        
        count *= time; //here *= is the increment operator
        
        cout  << count << endl;
	return 0;
}

/*  ++x; - prefix, Prefix increments the value, and then proceeds with the expression.
    x++; - postfix, Postfix evaluates the expression and then performs the incrementing.
    
    
    x = 5;
    y = ++x;
    x is 6, y is 6

    x = 5;
    y = x++;
    x is 6, y is 5  
    
    
    The same is the case with the decrement operators
    --x; -prefix
    x--; -postfix    */
