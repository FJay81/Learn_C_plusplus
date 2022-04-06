#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int power(double base, int exponent)
{
    double result = 1;
    for(int i = 0; i < exponent; i++)
    {
        result = result * base;
    } 
    return result;
}

void print_pow(double base, int exponent)//Void function, does stuff
{

    double MyPower = power(base, exponent);//Calls a function in a function
    cout << base << " To The Power Of " << exponent << " = " << MyPower << endl;
}

int main()
{
    double base;
    int exponent;
    cout << "base num";
    cin >> base;
    cout << "exponent num";
    cin >> exponent;
    print_pow(base, exponent);//Void funtions only need to be called not assiged or anything else
}