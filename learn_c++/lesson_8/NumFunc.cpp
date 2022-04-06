#include <iostream>
#include <cmath>//Math functions

using std::cout;
using std::endl;

int main()
{
    cout << sqrt(25) << endl;//Square root
    cout << sqrt(-25) << endl;//Special value
    cout << pow(9, 999) << endl;//Goes to infinity
    cout << pow(-9, 999) << endl;//Goes to -infinity
    cout << remainder(10, 3) << endl;//Gets remainder value //Can use fmod instead of remainder
    cout << 10 % 3 << endl;//same as ^ but not good for decs
    cout << std::fixed << fmax(10102344.54, 101230194.76) << endl;//Larger of the values, can use fmin for smaller
    cout << ceil(123.493) << endl;//Puts the value up, use floor or trunc to smaller, for negative use floor and ceil
    cout << round(123.456789) << endl;//Rounds number to 1 d.p.
}