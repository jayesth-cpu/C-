/*   You need to make a countdown app.
Given a number N as input, output numbers from N to 1 on separate lines.
Also, when the current countdown number is a multiple of 5, the app should output "Beep".

Sample Input:
12

Sample Output:
12
11
10
Beep
9
8
7
6
5
Beep
4
3
2
1   */


/* Given a number N as input, output numbers from N to 1 on separate lines.
Also, when the current countdown number is a multiple of 5, the app should output "Beep".*/

#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    while(N>0){
        if(N%5==0){
            cout<<N<<endl<<"Beep"<<endl;
        }
        else{
            cout<<N<<endl;
        }
        N--;
    }
    return 0;
}

