#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

//funkcja z zadania 9 z PRG1_FK_Zadania_1.pdf
bool is_palindrome(std::string wyraz)
{
    wyraz.erase(std::remove(wyraz.begin(), wyraz.end(), ' '), wyraz.end());
    for(int i=0, j = int(wyraz.length()-1);i<(wyraz.length()/2);i++, j--)
        if(wyraz[i] != wyraz[j])
            return false;
    return true;
}


std::vector<std::string> filter_palindromes(std::vector<std::string> &vec)
{
    for(const auto& element: vec)
    {
        if(is_palindrome(element) == 0)
        {
            vec.erase(std::remove(vec.begin(), vec.end(),element), vec.end());
        }
    }
    return vec;
}

int main()
{
    std::vector<std::string> palindromy={"kamil slimak", "witam", "kajak"};
    for(const auto& element: filter_palindromes(palindromy))
    {
        std::cout << element << "\n";
    }
    return 0;
}
