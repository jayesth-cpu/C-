// here we will perform different mathematical operations 

#include<iostream>
using namespace std;

int main(){
    int num1= 20;
    int num2 = 30;
    int num3 = 50;
    int sum;
    int product;
    int modulo;
    int divide;

    sum = num1+num2+num3;
    product= num1*num2*num3;
    modulo= num2%num1;
    divide=num3/num1;
    cout<< sum<<endl;
    cout<<product<<endl;
    cout<<modulo<<endl; // outputs remainder
    cout<<divide<<endl; // outputs quotient
    return 0;

}
