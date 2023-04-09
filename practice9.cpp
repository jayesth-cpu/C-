/* Logical operators
Along with other physical health requirements, astronaut candidates must have perfect vision (100%) and their height must be between 62 and 75 inches. Write a program that accordingly takes the vision percentage and height (in inches) as an input and prints "passed" if given conditions are satisfied and "failed" if otherwise.

Sample Input
100
80

Sample Output
failed
 */

#include <iostream>
using namespace std;

int main() {
    
    int vision;
    cin >> vision;
    
    int height;
    cin >> height;
    if(vision==100 && height>=62 && height<=75){
        cout<<"passed"<<endl;
    }
    else{
        cout<<"failed";
    }
    
	return 0;
}