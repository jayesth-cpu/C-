/* You are given a program that outputs all the numbers from 0 to 20.
Change the code to make it output only numbers that are multiples of 3. 

#include <iostream> 
using namespace std;
int main() {
    for (int i = 0; i <= 20; i++) {
        if (i % 3 == 0) {
            cout << i << endl;
        }
    }
    return 0;
}      OR (below is an alternate version ) */

#include <iostream>
using namespace std;

int main()
{
    int num = 1;
    while(num<=20){
        if(num % 3==0){
        cout<<num<<endl;
        }
        num+=1;
    }
    
    return 0;
}