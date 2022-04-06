#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int power(double base, int exponent)//Custom functions, better before main //Declaring and defining //The values in this are parameters so basically where it says base it could be anything
{
    double result = 1;
    for(int i = 0; i < exponent; i++)//for loop
    {
        result = result * base;//does the math
    } 
    return result;//This is to make it useful
}



int main()
{
    int base, exponent;
    cout << "base num";
    cin >> base;
    cout << "exponent num";
    cin >> exponent;
    double MyPower = power(base, exponent);//These values are arguments //Calls custom function
    cout << MyPower << endl;
}