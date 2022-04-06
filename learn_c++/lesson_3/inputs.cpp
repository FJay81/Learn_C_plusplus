#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int pi = 3.142;//hard coded only be changed by source code
    float radius;
    cout << "radius of circle in cm" << endl;
    cin >> radius ;//Arows show data flow   //takes an input    //object    //inputs from console
    float r = radius * radius;
    cout << "area of circle is " << pi * r << " cm^2" << endl;
    return 0;
}
