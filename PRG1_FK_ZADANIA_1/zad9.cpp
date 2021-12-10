#include <iostream>
#include <algorithm>
#include <string>

bool is_palindrome(std::string wyraz)
{
    wyraz.erase(std::remove(wyraz.begin(), wyraz.end(), ' '), wyraz.end());
    for(int i=0, j = wyraz.length()-1;i<(wyraz.length()/2);i++, j--)
        if(wyraz[i] != wyraz[j])
            return false;
    return true;
}


int main()
{
    std::cout << is_palindrome("kajak") << "\n";
    std::cout << is_palindrome("kamil slimak") << "\n";
    std::cout << is_palindrome("to nie palindrom!") << "\n";
    std::cout << is_palindrome("toteznie");
return 0;
}
