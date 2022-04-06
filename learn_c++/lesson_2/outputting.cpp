#include <iostream>

using std::cout;

int main()
{
    int slices = 5; //variable   
    int pizzas;//declare variable
    pizzas = 7;//assign a value to variable //literal value
    int people = pizzas * 3;//expression value
    cout << people;//no quotes to output variable value
    cout << std::endl << pizzas << std::endl; //endl is a manipulator    // \n works 
    cout << "You have " << slices << " slices of pizza!" << std::endl;// << concatonates things
    printf("%i\n", slices); //something from c  //cout is just better
    return 0;
}
