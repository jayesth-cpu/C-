/* You are on a 5 hour sea voyage. The ship sails at a speed of 40 km per hour. 
Write a program that will output how many kilometers the ship has traveled by each hour. */
#include <iostream>

using namespace std;

int main()
{
    int distance = 0;
    for(int i=1; i<=5; i++){
        distance=i*40;
        cout<<distance<<endl;
    }
    
    
    return 0;
}
/* since here it is given 40km/hr, therefore we will take hour as 'i' here.
and total hours are 5 so i<=5 and then we will increment as i++  .
to find total distance we will multiply i*40 ,for every hour uptill 5 with 40km/hr. */