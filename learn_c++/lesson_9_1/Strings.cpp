#include <iostream>
#include <string>//string class


int main()
{
    std::cout << "what is your name";
    std::string NAME;
    std::cin >> NAME;//Get string for input but if theres space, anything after space is gone.
    std::string name = "FJay";//<-- String literal, use to make string objects
    std::cout << name[2] << std::endl;//Strings are characters put together, use this to get individual characters
    std::string empty;//This strng with no value is just empty
    std::cout << empty << std::endl;//See, its value is then ""
    //With string you can concatonate them with + eg:
    std::cout << name + " is my name." << std::endl;//You can also append strings with +=
    name += " is my name!";
    std::cout << name.length() << std::endl;//Because name is object we can attach length to it becuase its a member of string class
    NAME = "Hello " + NAME;
    std::cout << NAME << std::endl;
    //method -- member function -- functions attached to objects
    //[] are arrays
    //avoid c strings stick to c++ strings

}