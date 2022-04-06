#include <iostream>

using namespace std;//using directive   //good for simple new not for more complex stuff
using std::cout;//like top but idk better, worse, idk?  // only brings cout nothing else    //depends where we use it


int main()//main function   //int is return type because we returning 0 most basic type
{
    std::cout << "hello people\n";"hello people\n";//cout is defined from iostream   //std is a namespace allows grouping code and separating it organising naming conflicts gone    //cout is the object tool for console   //each class has objects, object is the actual thing created    //the << are operators, they do stuff that operands do?
    cout << "also works\n";
    return 0;//anything before this is a statement  //will work fine without this
}

//compile in terminal with 'g++ *.cpp'
//x86_64-w64-mingw32-g++ to make it windows exec on pi
//run with ./a.out
//for any app to be multi platform use --static when you compile
//use -o to make executable with custom name
//eg   'g++ -o Test.out learn_to_print.cpp --static'