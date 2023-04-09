/*  To study at a university, you must score higher than or equal to 90 out of 100 points on an exam.
The given program takes points as input.

Task
Complete the code to output "pass" if the score is higher than or equal to 90, otherwise print "fail".

Sample Input
95

Sample Output
pass  */

#include <iostream>
using namespace std;

int main() {
        double points;
        cin >> points;
        if(points>=90){
                cout<<"pass";
        }
        else{
                cout<<"fail";
        }
	return 0;
}

/* each if, else function can contain multiple cout statements at once  */