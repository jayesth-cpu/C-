/* A coffee vending machine makes 5 types of coffee:
1 - Latte
2 - Americano
3 - Espresso
4 - Cappuccino
5 - Macchiato

Write a program that will take a number from the customer as input and serve the corresponding coffee type.

Sample Input
2

Sample Output
Americano   

#include <iostream>
using namespace std;
int main() {
    int coffeeType;
    cin>>coffeeType;
    switch(coffeeType){
        case 1:
            cout<<"Latte"<<endl;
            break;
        case 2:
            cout<<"Americano"<<endl;
            break;
        case 3:
            cout<<"Espresso"<<endl;
            break;
        case 4:
            cout<<"Cappuccino"<<endl;
            break;
        case 5:
            cout<<"Macchiato"<<endl;
            break;
        default:
            cout<<"Invalid choice"<<endl;
    }
    return 0;
}
*/   
// OR

#include <iostream>
using namespace std;

int main()
{
    int choice;
    cin >> choice;
    switch(choice){
        case 1:
        cout<<"Latte"<<endl;
        break;
        case 2:
        cout<<"Americano"<<endl;
        break;
        case 3:
        cout<<"Espresso"<<endl;
        break;
        case 4:
        cout<<"Cappuccino";
        break;
        case 5:
        cout<<"Macchiato";
        break;
    }
    return 0;
}