/* ntegers


Use the int keyword to define the integer data type.
example:   int a = 42;
           unsigned long int a;

Several of the basic types, including integers, can be modified using one or more of these type modifiers:
signed: A signed integer can hold both negative and positive numbers.
unsigned: An unsigned integer can hold only positive values.
short: Half of the default size.
long: Twice the default size.
float data type cam also hold negative decimal numbers.
*/

/* Strings


A string is an ordered sequence of characters, enclosed in double quotation marks.
It is part of the Standard Library.
You need to include the <string> library to use the string data type. Alternatively, 
you can use a library that includes the string library. */

#include <iostream> /* by default <string> is included in the iostream library so you dont need to
                    include it seperately */
using namespace std;

int main() {
    string a = "I am learning C++";
    cout<<a;
    return 0;
}


/* A char variable holds a 1-byte integer. However, instead of interpreting 
the value of the char as an integer, the value of a char variable is typically 
interpreted as an ASCII character.
A character is enclosed between single quotes (such as 'a', 'b', etc).
For example:
char test = 'S'; */ 

/* Boolean variables only have two possible values: true (1) and false (0).
To declare a boolean variable, we use the keyword bool.
bool online = false;
bool logged_in = true; 
If a Boolean value is assigned to an integer, true becomes 1 and false becomes 0.
If an integer value is assigned to a Boolean, 0 becomes false and any value that has 
a non-zero value becomes true.*/