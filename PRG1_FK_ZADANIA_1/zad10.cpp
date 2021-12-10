#include <iostream>
#include <string>

void box_print(std::string wyraz1, std::string wyraz2, std::string wyraz3, std::string wyraz4, std::string wyraz5)
{
    int najdluzszy;
    int podstawa;
    std::string wyrazy[5];
    wyrazy[0] = wyraz1;
    wyrazy[1] = wyraz2;
    wyrazy[2] = wyraz3;
    wyrazy[3] = wyraz4;
    wyrazy[4] = wyraz5;
    najdluzszy = wyrazy[0].length();
    for(int i = 1;i<5;i++)
    {
        if(wyrazy[i].length() > najdluzszy)
            najdluzszy = wyrazy[i].length();
    }
    
    podstawa = najdluzszy + 4;
    for(int i = 0;i<podstawa;i++)
        std::cout << '*';
    std::cout << "\n";
    for(int i = 0;i<5;i++)
    {
        std::cout << "* " << wyrazy[i];
        for(int j = 0;j < najdluzszy-wyrazy[i].length();j++)
            std::cout << ' ';
        std::cout << " *\n";
    }
    for(int i = 0;i<podstawa;i++)
        std::cout << '*';
}

int main()
{
    box_print("Hello", "World", "in", "a", "frame");
return 0;
}
