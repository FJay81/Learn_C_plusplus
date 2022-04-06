#include <iostream>
#include <cmath> // this allows us to use pow function

using std::cout;
using std::cin;
using std::endl;

int main()
{
    cout << pow(10,2) << endl;//This is the power function, it works like the the first number eg 10 to the power of the second number eg 2
    int base, power;
    cout << "Enter a base number\n";
    cin >> base;
    cout << "enter power number";
    cin >> power;
    cout << pow(base, power) << endl;//You directly print it
    double answer = pow(base, power);//Or you can save to a variable
    cout << answer << endl;
}