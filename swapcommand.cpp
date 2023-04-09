// command for swapping values
/* this command here will be used to swap values of two variables, for this we have 
to define a third entity that will store the values while swapping*/ 

#include<iostream>
using namespace std;
int main(){
    int a = 50;
    int b = 60;
    // here we will define a temp variable that will store the values in the meantime
    int temp;
    temp= a;
    a=b;
    b= temp;
    cout<< a<< " -this is the value of the first variable after swapping"<<endl;
    cout<<b<<" -this is the value of the second variable after swapping"<<endl;
    return 0;
}