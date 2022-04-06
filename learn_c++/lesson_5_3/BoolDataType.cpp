#include <iostream>

using std::cout;
using std::endl;

int main()
{
    bool pizza_is_good = true;//Any number other than 0 is true
    pizza_is_good = false;//Can be 0 to be false
    pizza_is_good = 12345;
    cout << pizza_is_good << endl;//Prints 1 becuase genrally means true
    //Can be used as flag if something happens or something
    cout << std::boolalpha << pizza_is_good << endl;//boolalpha outputs true/false instead of 1/0
}