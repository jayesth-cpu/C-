//in this program we will here take inputs from the user
#include <iostream>
using namespace std;

int main()
{
    int a,b; 
    float c; /* similar to this there is another data type called 'auto'
    ex:
    auto b= 6.87 or auto c= "string" 
    this data type is used to  automaticaly define the data type when you are giving
    input to the variable. But input will always be given at the beginning of the argument.
    ex: 
   { auto b;
     b = 2 } <---this is false, you will have to give the value in the start only  */
    cout << "Please enter the numbers number \n";
    cin >> a>>b>>c;
    cout<< "the entered numbers are: \n";
    cout << a<<endl;
    cout<<b<<endl;
    cout <<c;

    return 0;


    /* in terminal type g++ (filename.extension)[to compile your code] -o (specific file name to be executed)
    type => ./(file name) - to execute it in the terminal*/
}