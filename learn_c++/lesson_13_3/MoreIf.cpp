#include <iostream>
#include <string>

int main()
{
    std::string answer = "FJay";
    int age = 16;
    int g_age;
    std::string guess;
    std::cout << "what is my name?\n";
    std::cin >> guess;
    std::cout << "what is my age\n";
    std::cin >> g_age;

    if (guess == answer && g_age == age)//== -> equals operator true if they same value.    //&& -> logic and
    {
        std::cout << "You got it right! :)\n";
    }
    else if (guess == answer || g_age == age)
    {
        std::cout << "So close!!\n";
    }
    return 0;
}

//You can nest if statements if you dont want to use logical operators.