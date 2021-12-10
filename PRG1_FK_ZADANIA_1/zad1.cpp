#include <iostream>
#include <string>

int main()
{
    std::string wynik;
    for(int i = 2;i<21;i++)
        if(i != 1 && i % 2 != 0 && i % 3 != 0)
        {
            wynik += std::to_string(i);
            wynik += " ";
        }
    std::cout << wynik << "\n";
        
    for(int i = 2;i<21;i++)
        if(i != 1 && i % 2 != 0 && i % 3 != 0)
            std::cout << i << " ";
}
