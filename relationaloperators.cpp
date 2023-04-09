// relational operators 

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if (n == 10) {
        cout <<  "Yes"<<endl;
    }
    if (n!=10){
        cout<<"false"<<endl;
    }
    if (n>=10){
        cout<<"greater"<<endl;
    }
    if (n<=10){
        cout<<"smaller"<<endl;
    }
    else {
        cout<<"nothing"<<endl;
    }

    return 0;
}
