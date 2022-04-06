#include <iostream>
#include<string>

int main()
{
    for (int i = 0; i < 10; i++)
    {
        std::cout << i << std::endl;
    }
    
    std::cout << "now backwards\n";

    for (int i = 9; i >= 0; i--)
    {
        std::cout << i << std::endl;
    }
    
    int factorial;
    std::cout << "factorial:\n";
    std::cin >> factorial;
    
    for (int i = factorial-1; i > 0; i--)
    {
        factorial = factorial * i;
        
    }
    std::cout << factorial << std::endl;
    return 0;
}