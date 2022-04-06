#include <iostream> 
#include <string>

int main()
{
    std::cout << "What's your name? ";
    std::string name;
    getline(std::cin, name);//Gets the whole string not just first word.
    name = "Hello there, " + name + "!";
    std::cout << name << std::endl;
    std::cout << name.size() << std::endl;//Same thing as .length()
    name += " :)";//Appends directly onto it
    std::cout << name << std::endl;
    name.append("!");//Same as +=
    std::cout << name << std::endl;
    name.insert(5," SO THEN? ");//Instersts value at index point 3
    std::cout << name << std::endl;
    name.erase(5, 10);//erases 10 chars at point 5 onwards
    std::cout << name << std::endl;
    name.replace(24, 27, " ");//replaces chars from first arg to sec
    std::cout << name << std::endl;
    std::string swear = "fuck you";
    swear.replace(swear.find("fuck"),4,"****");//finds the begining of the word it looks for
    std::cout << swear << std::endl;//compare strings with double == in if statements
}