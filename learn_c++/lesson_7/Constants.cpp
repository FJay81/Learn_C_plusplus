#include <iostream>

using std::cout;
using std::endl;

#define X 234 //Another way to make constant values.    Other way better

int main()
{
    const int Y = 21;//Can't be changed, read only. //Usually capitals name.
    const double PI = 3.142;//Used for something like this  //If value not assigned, cant be assigned later 
    enum {V = 34};//Another way to make constants
    cout << X << endl << Y << endl << PI << endl << V << endl;
}