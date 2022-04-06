#include <iostream>
#include <string>

int main()
{
    int answer = 11;
    std::cout << "guess the number ";
    int guess;
    std::cin >> guess;
    int points = guess == answer ? 10 : 0;//basically like an if statement if guess == answer? y:n;
    guess == answer ? std::cout << "Well done\n" : std::cout << "Not Good\n"; //doesn't need to assign to variable and can output
    std::cout << points << std::endl;
}