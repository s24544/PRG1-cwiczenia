#include <iostream>
#include <string>

int count_chars(std::string wyraz, char wystepujacy)
{
    int ile = 0;
    for (int i = 0;i<wyraz.length()+1;i++)
    {
        if(wyraz[i] == wystepujacy)
            ile += 1;
    }
    return ile;
}

int main()
{
    std::cout << count_chars("witam witam", 'a');
return 0;
}
