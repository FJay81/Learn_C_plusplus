#include <iostream>
#include <climits> //For _MAX and _MIN

using std::cout;
using std::endl;

int main()
{
    //int x = 9999999999999999999;   //this wont work becuase value larger than int value, have to use a different data type.
    //Integrel data types:
    short a;
    int b;//Min 16, usually 32 bit
    long c;//At least 32 bit
    long long d;//At least 64 bit
    //Works kinda like: short <= int <= long <= long long
    //Each of the above ahve unsighned counterparts eg:
    unsigned int z;//Only positive values, have double capacity of signed value equivelant
    cout << sizeof(short) << endl;//Shows size of bytes //1 byte is 8 bits
    //Not all systems will give the same value! //Trick is focus on minimum value
    cout << INT_MAX << endl; //This shows the largest number possible, will also work with _MIN for negative value 
    cout << LLONG_MIN << endl;//Can also prefix with U to get unsigned version
}