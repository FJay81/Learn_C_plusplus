#include <iostream>
#include <float.h>//checks trust of each type

using std::cout;
using std::endl;

int main()
{
    float a = 77000;//Stores numbers but..  //least trust/accurate
    double b = 7.7E4;//Can also be stored like this (E = x10^)  //Basically means it has decimals
    long double c;//most trust/accurate
    float aa = 10.0/3;
    aa = aa * 10000000000000;
    cout << a << endl << b << endl;
    cout << std::fixed << aa << endl;//std::fixed just takes out standard form.
    cout << FLT_DIG << endl;//checks accuracy of float
    cout << DBL_DIG << endl;//checks accuracy of double
    cout << LDBL_DIG << endl;//checks accuracy of long double
    long double z = 22.0 / 7;
    cout << z << endl;
}