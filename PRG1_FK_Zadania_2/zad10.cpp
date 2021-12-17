#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

void get_two_characters_from_user()//a = 97 ascii
{
    std::vector<std::string> characters;
    std::string input;
    do{
    std::getline(std::cin, input);
    if(input != "stop")
    {
        input.erase(remove(input.begin(), input.end(), ' '), input.end());
        if(input[1] == input[0])
        {
            input = input[0];
            characters.push_back(input);
        }
        else
        {
            if(int(input[1]) < int(input[0]))
            {
                std::reverse(input.begin(), input.end());
            }
            characters.push_back(input);
        }
    }
    }while(input != "stop");
    
    //wyswietlanie
    for(int i=0;i<characters.size();i++)
    {
        if(characters[i].size() == 1)
        {
            std::cout << characters[i] << "\n";
        }
        else
        {

            for(int a = int(characters[i][0]), b = int(characters[i][1]);a<=b;a++)
            {
                std::cout << char(a);
            }
            std::cout << "\n";
        }
    }
}

int main()
{
    get_two_characters_from_user();
    return 0;
}
