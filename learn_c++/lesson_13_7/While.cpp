#include <iostream>
#include<string>

int main()
{
    int i = 0;
    while (i < 10)
    {
        std::cout << i << std::endl;
        i++;//buttom not top.
        //you can work out for backwards
    }

    int fact;
    std::cout << "factorial:\n";
    std::cin >> fact; 
    int in = fact - 1;
    while (in > 1)
    {
        fact = fact * in;
        in--;
    }
    std::cout << fact << std::endl;
    return 0;
}