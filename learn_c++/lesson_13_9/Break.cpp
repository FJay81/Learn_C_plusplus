#include <string>
#include <iostream>

int main()
{
    std::string word = "Hello There People\nWhats Up";

    for (int i = 0; i < word.size(); i++)
    {
        
        if (word [i] == 'e')
        {
            continue;//when activated skips thing
        }

        std::cout << word[i] << std::endl;

        if (word [i] == 't')
        {
            std::cout << "Found 't'\n";
            break;//when activated breaks out of closest loop
        }
    }
    

}