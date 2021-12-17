#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using std::stringstream;

std::vector<std::string> split(std::string &napis)
{
    std::vector<std::string> words={};
    std::stringstream sstream(napis);
    std::string word;
    for(int i =0;i<std::count(napis.begin(), napis.end(), ' ')+1;i++)
    {
        std::getline(sstream, word, ' ');
        word.erase(std::remove_if(word.begin(), word.end(), ispunct), word.end());
        words.emplace_back("\"");
        words.push_back(word);
        if(i<std::count(napis.begin(), napis.end(), ' '))
            words.emplace_back("\", ");
        else
            words.emplace_back("\"");
    }
    return words;
}

int main()
{
    std::string napis = "Ala ma kota";
    for(auto element: split(napis))
    {
        std::cout << element;
    }
    return 0;
}
