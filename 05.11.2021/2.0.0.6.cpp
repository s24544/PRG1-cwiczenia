#include <iostream>
#include <string>

std::string print_znak(int a, int b)
{
    if(a == b)
    {
        return std::to_string(a) + " == " + std::to_string(b);
    }
    else
    {
        if(a > b)
        {
            return std::to_string(a) + " > " + std::to_string(b);
        }
        else
        {
            return std::to_string(a) + " < " + std::to_string(b);
        }
    }
}

auto main(int argc, char* argv[]) -> int
{
    if(argc == 1)
    {
        std::cout << "Nieprawidłowa ilośc argumentów\n";
        return 1;
    }
    else
    {
        int a = atoi(argv[1]);
        for(int i = 2; i < argc; i++)
        {
            std::cout << print_znak(a, atoi(argv[i]));
            std::cout << "\n";
        }
    }


    return 0;
}