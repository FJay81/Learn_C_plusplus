#include <iostream>

int main()
{
    int num1 = 30;//Denary - base 10
    int num2 = 0x30;//Hex - base 16  //0x makes it hex
    int num3 = 030;//Octal - base 8  //0 makes it Octal
    std::cout << num1 << std::endl << num2 << std::endl << num3 << std::endl;//Outputs in base 10
    std::cout << std::hex << num1 << std::endl << num2 << std::endl << num3 << std::endl;//Outputs in base 16
    std::cout << std::oct << num1 << std::endl << num2 << std::endl << num3 << std::endl;//Outputs in base 8
}