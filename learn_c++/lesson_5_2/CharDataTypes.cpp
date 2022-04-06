#include <iostream>

using std::cout;
using std::endl;

int main()
{
    char a;//8 bit integer
    char b = 'A';//Used for a single character with single quotes
    cout << b << endl;
    cout << (int) b << endl;//Becuase characters aree stored as ints we can see what value they have, the only difference is they are interpreted differently.
    //Based of ascii ^
    char c = 66;
    cout << c << endl;//This interprets the number into ascii, to geet the value we inputted we have to use the int thing.
    cout << (int)c << endl;//Char are very confusing, the max value is 127 and:
    char d = 55;
    cout << d << endl;//Prints 7
    //Can use unsigned char for 255 max value.
}