#include <iostream>

int main()
{
    enum season {summer, spring, winter, autumn};
    season now = spring;
    int age;
    std::cout << "What is your age\n"; 
    std::cin >> age;
    
    switch(age)//Not as useful, just use if statements unless limited options eg menus
    {
        case 13://Multiple cases like if and else if
            std::cout << "your young\n";
            break;
        case 16:
            std::cout << "your legally an adult\n";
            break;
        default://Just Like else
            std::cout << "safe\n";
            break;//or return 0;
    }

    switch(now)//switches work with enums and their variables
        {
        case summer:
            std::cout << "its warm\n";
            break;
        case spring:
            std::cout << "its green\n";
            break;
        case autumn:
            std::cout << "its orange\n";
            break;
        case winter:
            std::cout << "its cold\n";
            break;
        }
}