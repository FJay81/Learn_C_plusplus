#include <iostream>

int main()
{
    int age = 0;
    std::cout << "what is your age\n";
    std::cin >> age;    
    
    if(age < 16)
    {
        std::cout << "You're a kid!\n";
    }
    else if (age > 15)
    {
        std::cout << "You're old\n";
    }
    return 0;
}