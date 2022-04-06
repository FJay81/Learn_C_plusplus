#include <iostream>
#include <string>

int main()
{
    //used when at least once eg passwords
    std::string password = "Password123";
    std::string guess;
    do
    {
        std::cout << "Guess the password\n";
        std::cin >> guess;
    } while (guess != password);//these variables have to be defined outside of the loop

    std::cout << "You guessed correctly!\n";
    
}